#include "contacts.pb.h"
#include <fstream>
#include <iostream>

using namespace std;

void PrintContacts(contacts2::Contacts &contacts) {
  for (int i = 0; i < contacts.contacts_size(); i++) {
    cout << "--------------联系人" << i + 1 << "--------------" << endl;
    const contacts2::PeopleInfo &people = contacts.contacts(i);
    cout << "联系人姓名：" << people.name() << endl;
    cout << "联系人年龄：" << people.age() << endl;
    for (int j = 0; j < people.phone_size(); j++) {
      // v2.0
      const ::contacts2::PeopleInfo_Phone &phone = people.phone(j);
      cout << "联系人电话" << j + 1 << "：" << phone.number();
      // v2.1
      cout << "（" << phone.PhoneType_Name(phone.type()) << "）"
           << endl; // PhoneType_Name返回某种type值的类型
    }
    if (people.has_data() && people.data().Is<contacts2::Address>()) {
      contacts2::Address address;
      people.data().UnpackTo(&address);
      if (!address.home_address().empty()) {
        cout << "联系人家庭地址：" << address.home_address() << endl;
      }
      if (!address.work_address().empty()) {
        cout << "联系人工作地址：" << address.work_address() << endl;
      }
    }

    // 下面的写法不太好
    // if (people.has_data()) {
    //} else if (people.has_wechat()) {
    //}

    switch (people.other_contact_case()) { //返回到底设置了什么枚举类型
    case contacts2::PeopleInfo::OtherContactCase::kQq:
      cout << "qq: " << people.qq() << endl;
      break;
    case contacts2::PeopleInfo::OtherContactCase::kWechat:
      cout << "wechat: " << people.wechat() << endl;
      break;
    default:
      break;
    }

    if (people.remark_size()) {
      cout << "备注信息" << endl;
    }
    for (auto it = people.remark().cbegin(); it != people.remark().cend();
         it++) {
      cout << "   " << it->first << ": " << it->second << endl;
    }
  }
}

int main() {
  contacts2::Contacts contacts;
  // 读取本地已存在的通讯录文件并反序列化
  fstream input("contacts.bin", ios::in | ios::binary);
  if (!contacts.ParseFromIstream(&input)) {
    cerr << "parse error!" << endl;
    input.close();
    return -1;
  }
  // 打印通讯录列表
  PrintContacts(contacts);
  return 0;
}
