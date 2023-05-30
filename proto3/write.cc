#include <iostream>
#include <fstream>
#include "contacts.pb.h"

using namespace std;

int main() {
    contacts2::Contacts contacts;
    // 读取本地已存在的通讯录文件，反序列化
    fstream input("contacts.bin", ios::in | ios::binary); //以二进制方式读
    if (!input) {
        cout << "contacts.bin not find, create new file!" << endl;
    }
    else if (contacts.ParseFromIstream(&input)) {
        cerr << "parse error" << endl;
        input.close();
        return -1;
    }
    // 向通讯录中添加一个联系人
    AddPeopleInfo();
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