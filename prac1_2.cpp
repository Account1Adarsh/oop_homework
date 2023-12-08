#include<iostream>
using namespace std;
class calculator{
    public:
    int a; //data members
    int b;
    public:
    void add(){//member function or methods
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
};
int main(){
    calculator calci;
    // calci.a=90;
    // calci.b=5;
    calci.add();
    calci.subtract();
    return 0;
}