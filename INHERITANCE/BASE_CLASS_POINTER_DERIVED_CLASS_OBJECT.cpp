#include<iostream>
using namespace std;

class Base
{
    public:
        void fun1(){cout << "Funtion 1\n";};
        void fun2(){cout << "Funtion 2\n";};
        void fun3(){cout << "Funtion 3\n";};
};

class Derived:public Base
{
    public:
        void fun4(){cout << "Funtion 4";};
        void fun5(){cout << "Funtion 5";};
};

int main()
{
    Derived d;
    Base *p=&d;

    p->fun1();
    p->fun2();
	p->fun3();   
    

    return 0;
}



