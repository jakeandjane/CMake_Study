#include <iostream>
using namespace std;
int main() {
    int a = 10;
    float b = 3.14f;
    double c = 2.71828;
    char d = 'A';
    bool e = true;
    bool f = 1.23;// 这么不对，但 输出还是为真（值变成1），非零为假（值变成0）
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Double: " << c << endl;
    cout << "Character: " << d << endl;
    cout << "Boolean e: " << e << endl;//输出为1
    cout << "Boolean f: " << f << endl;//输出为1

    // 不同类型的数相加
    int sum = a + b; // int + float = float
    cout<<"a+b="<<a+b<<endl; // 输出为 13.14
    cout<<"sum="<<sum<<endl; // 输出为 13
    
/******** 
*常量
********/
    const float pi=3.14; // 声明的时候需要赋值
    cout<<pi;



    return 0;
}

