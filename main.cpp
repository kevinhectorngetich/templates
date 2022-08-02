#include <iostream>

using namespace std;
/*
template <class T> T func(T a, T b) {
    return a>b ? a : b;
}

int main()
{
    int a =func(15,8);
    double b = func(16.5,56.8);
    string c = func("eat","buy");
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    return 0;
}
*/

template <class T> class Number{

    T num;
public:
    Number (T n) {num = n;};
    T getNumber(){
    return num;
    };
};

int main(){
Number <int> numInt(5);
Number<double> numDouble(6.3);
Number<string> stringY("Macro");
cout<<"integer: "<<numInt.getNumber()<<endl;
cout<<"integer: "<<numDouble.getNumber()<<endl;
cout<<"string: "<<stringY.getNumber()<<endl;
return 0;
}
