/* 
#include <iostream>
using namespace std;

class Base {
    virtual void method() {std::cout << "from Base" << std::endl;}
public:
    virtual ~Base() {method();}
    void baseMethod() {method();}
};

class A : public Base {
    void method() {std::cout << "from A" << std::endl;}
public:
    ~A() {method();}
};


int main() {
    Base* base = new A;
    base->baseMethod();
    delete base;
} */

/* #include<iostream>
using namespace std;

int returnValue()
{
    static int i = 0;
    i++;
    return i;
}

int main()
{
    cout<<"\ni = "<<returnValue();
    cout<<"\ni = "<<returnValue();
    cout<<"\ni = "<<returnValue();
    return 0;
} */

#include<iostream>
using namespace std;

void swapValues(int *x, int *y){

    cout << "x = " << *x << endl;
    cout << "y = " << *y << endl;
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int x = 3;
    int y = 4;
    swapValues(&x, &y);
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
