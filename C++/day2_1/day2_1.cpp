#include <iostream>
using namespace std;

class Student {
private:
    // 私有成员变量，外部无法直接访问
    int age;
    int id;

public:
    char name[20];
    
    void setAge(int a) {
        age = a;
    }
    int getAge() {
        return age;
    }

    void setId(int i) {
        id = i;
    }
    int getId() {
        return id;
    }

    void speak() {
        cout << "My name is " << name << ", I am " << age << " years old, and my ID is " << id << "." << endl;
    }
    void playBall() {
        speak();
        cout <<  "I can play basketball." << endl;
    }
};

int main() {
    Student stu1;
    stu1.setAge(18); // 通过公有方法设置私有成员变量
    stu1.setId(1001); // 通过公有方法设置私有成员变量
    int age = stu1.getAge(); // 通过公有方法访问私有成员变量
    int id = stu1.getId();   // 通过公有方法访问私有成员变量
    /*
    类学习
    */
    // stu1.age = 20;
    // stu1.id = 1001;
    // // stu1.name = "Alice";// 这行代码会报错，因为数组名是常量指针，不能直接赋值
    // strcpy(stu1.name, "Alice"); // 使用strcpy函数来复制字符串到数组中
    // stu1.speak();
    // stu1.playBall();





    return 0;
}

