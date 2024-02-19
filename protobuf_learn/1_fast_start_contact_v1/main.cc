#include <iostream>

#include "contacts.pb.h"

int main() {
  std::string people_str;
  {
    // 对一个联系人的信息使用 PB 进行序列化，并将结果打印出来
    contacts::PeopleInfo people;  // 命名空间的名字和包名相同
    people.set_name("Zhangsan");
    people.set_age(20);
    if (!people.SerializeToString(&people_str)) {
      std::cerr << "序列化联系人失败！" << std::endl;
      return -1;
    }
    std::cout << "序列化成功，结果为：" << people_str << std::endl;
  }
  {
    // 对序列化后的内容使用 PB 进行反序列，解析出联系人信息并打印出来
    contacts::PeopleInfo people;
    if (!people.ParseFromString(people_str)) {
      std::cerr << "序列化联系人失败！" << std::endl;
      return -1;
    }
    std::cout << "反序列化成功，结果为：" << std::endl
              << "姓名：" << people.name() << std::endl
              << "年龄：" << people.age() << std::endl;
  }
  return 0;
}
