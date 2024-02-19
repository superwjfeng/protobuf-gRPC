#include "contacts.pb.h"
#include <fstream>
#include <iostream>

using namespace std;

// v2.0
void AddPeopleInfo(contacts2::PeopleInfo *people) {
  cout << "-------------新增联系人-------------" << endl;
  cout << "请输入联系人姓名：";
  string name;
  getline(cin, name);
  people->set_name(name);
  cout << "请输入联系人年龄：";
  int age;
  cin >> age;
  people->set_age(age);
  cin.ignore(256, '\n'); //清除缓冲区的换行符

  for (int i = 0;; i++) {
    cout << "请输入联系人电话" << i + 1 << "(只输入回车完成电话新增)";
    string number;
    getline(cin, number);
    if (number.empty()) {
      break;
    }
    contacts2::PeopleInfo_Phone *phone = people->add_phone();
    phone->set_number(number);

    // v2.1 增加电话类型输入
    cout << "请输入改电话类型（1、MB 2、TEL）：";
    int type;
    cin >> type;
    cin.ignore(256, '\n');
    switch (type) {
    case 1:
      phone->set_type(
          contacts2::PeopleInfo_Phone_PhoneType::PeopleInfo_Phone_PhoneType_MP);
      break;
    case 2:
      phone->set_type(contacts2::PeopleInfo_Phone_PhoneType::
                          PeopleInfo_Phone_PhoneType_TEL);
      break;
    default:
      cout << "选择有误！" << endl;
      break;
    }
  }
  cout << "-------------新增联系人成功---------" << endl;
}

int main() {
  contacts2::Contacts contacts;
  // 读取本地已存在的通讯录文件，反序列化
  fstream input("contacts.bin", ios::in | ios::binary); //以二进制方式读
  if (!input) {
    cout << "contacts.bin not find, create new file!" << endl;
  } else if (contacts.ParseFromIstream(&input)) {
    cerr << "parse error" << endl;
    input.close();
    return -1;
  }
  // 向通讯录中添加一个联系人
  AddPeopleInfo(contacts.add_contacts());
  // 将通讯录写入本地文件中
  fstream output("contact.bin", ios::out | ios::trunc | ios::binary); //二进制写
  if (!contacts.SerializeToOstream(&output)) {
    cerr << "write error!" << endl;
    input.close();
    output.close();
    return -1;
  } //序列化

  cout << "write success!" << endl;
  input.close();
  output.close();
  return 0;
}
