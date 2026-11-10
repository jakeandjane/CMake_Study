#include <iostream>
using namespace std; //using就是把std的作用域引入到当前作用域中，后续就可以直接使用std中的函数和类了，而不用加std::

namespace add1
{
    int add(int a, int b) {
        // std::cout << a << "+"<<b<<"="<<(a+b) << std::endl;//没用using namespace std;
        cout << "sum=" << a + b << std::endl;//用了using namespace std;
        
        return 0;
    }
} // namespace add1
namespace add2
{
    int add(int a, int b) {
        std::cout<< "sum="<<a+b<<std::endl;               
        return a+b;
    }
} // namespace add2

/*
子命名空间
*/
namespace TYY
{
    int age = 18;
    void fun()
    {
        std::cout << "age=" << age << std::endl;
    }
    namespace TYY_internal
    {
        int age = 20;
        void fun1()
        {
            std::cout << "age=" << age << std::endl;
        }
    } // namespace TYY2
}

int main() {

    add1::add(1,3);

    add2::add(1,3);
    TYY::fun();
    TYY::TYY_internal::fun1();

    return 0;
}

