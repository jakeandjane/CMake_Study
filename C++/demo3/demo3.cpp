#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b,a,b;
}

int main() {
    int a[10]={1,2,3,4,5,6,7};
    cout<<"a[10]="<<a[10]<<endl; //C++数组不会边界检查，越界则输出随机值。 a[10]=-858993460
    cout<<"a[-1]="<<a[-1]<<endl; //C++数组不会边界检查，越界则输出随机值。 没有-1这种检索 a[-1]=-858993460
    cout<<"a[8]="<<a[8]<<endl; //C++数组没定义的值，默认填充0 a[8]=0
    cout << "a[6]=" << a[6] << endl;

    cout << add(1,3) << endl;
    return 0;
}

