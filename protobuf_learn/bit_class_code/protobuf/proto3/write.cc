#include <iostream>
#include <fstream>
#include "contacts.pb.h"

using namespace std;

void AddPeopleInfo(contacts2::PeopleInfo* people) {
    cout << "-------------新增联系⼈-------------" << endl;
    cout << "请输入联系人姓名：";
    string name;
    getline(cin, name);
    people->set_name(name);

    cout << "请输入联系人年龄：";
    int age;
    cin >> age;
    people->set_age(age);
    cin.ignore(256, '\n');

    for (int i = 0;; i++) {
        cout << "请输入联系人电话" << i+1 << "(只输⼊回⻋完成电话新增):";
        string number;
        getline(cin, number);
        if (number.empty()) {
            break;
        }
        contacts2::PeopleInfo_Phone* phone = people->add_phone();
        phone->set_number(number);

        cout << "请输入该电话类型(1、移动电话   2、固定电话): ";
        int type;
        cin >> type;
        cin.ignore(256, '\n');
        switch (type) {
            case 1:
                phone->set_type(contacts2::PeopleInfo_Phone_PhoneType::PeopleInfo_Phone_PhoneType_MP);
                break;
            case 2:
                phone->set_type(contacts2::PeopleInfo_Phone_PhoneType::PeopleInfo_Phone_PhoneType_TEL);
                break;
            default:
                cout << "选择有误！" << endl;
                break;
        }
    }

    contacts2::Address address;
    cout << "请输入联系人家庭地址：";
    string home_address;
    getline(cin , home_address);
    address.set_home_address(home_address);
    cout << "请输入联系人单位地址：";
    string unit_address;
    getline(cin, unit_address);
    address.set_unit_address(unit_address);
    // Address->Any
    people->mutable_data()->PackFrom(address);


    cout << "请选择要添加的其他联系方式(1、qq     2、微信号):" ;
    int other_contact;
    cin >> other_contact;
    cin.ignore(256, '\n');
    if (1 == other_contact) {
        cout << "请输入联系人qq号: ";
        string qq;
        getline(cin, qq);
        people->set_qq(qq);
    } else if (2 == other_contact) {
        cout << "请输入联系人微信号: ";
        string wechat;
        getline(cin, wechat);
        people->set_wechat(wechat);
    } else {
        cout << "选择有误，未成功设置其他联系方式！" << endl;
    }

    for (int i = 0;; i++) {
        cout << "请输入备注" << i+1 << "标题(只输入回车完成备注新增):";
        string remark_key;
        getline(cin, remark_key);
        if (remark_key.empty()) {
            break;
        }

        cout << "请输入备注" << i+1 << "内容: ";
        string remark_value;
        getline(cin, remark_value);
        people->mutable_remark()->insert({remark_key, remark_value});
    }


    cout << "-----------添加联系⼈成功-----------" << endl;
}


int main() {
    contacts2::Contacts contacts;
    // 读取本地已存在的通讯录文件
    fstream input("contacts.bin", ios::in | ios::binary);
    if (!input) {
        cout << "contacts.bin not find, create new file!" << endl;
    } else if (!contacts.ParseFromIstream(&input)) {
        cerr << "parse error!" << endl;
        input.close();
        return -1;
    }
    // 向通讯录中添加一个联系人
    AddPeopleInfo(contacts.add_contacts());

    // 将通讯录写入本地文件中
    fstream output("contacts.bin", ios::out | ios::trunc | ios::binary);
    if (!contacts.SerializeToOstream(&output)) {
        cerr << "write error!" << endl;
        input.close();
        output.close();
        return -1;
    }
    cout << "write success!" << endl;
    input.close();
    output.close();
    return 0;
}