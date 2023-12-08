#include<iostream>
using namespace std;

class books{
    public:
    int price,nopages;
    char name;
    public:
    int count_book(int pric){
        if(price<pric) 
        return 1;
        else return 0;
    }
    bool isBookPresent(char book){
        if(name==book) return true;
        else return false;
    }
};
int main(){
    books harrypotter;
    harrypotter.name='h';
    harrypotter.price=1000;
    harrypotter.nopages=500;
    cout<<harrypotter.count_book(2000)<<endl;
    cout<<harrypotter.isBookPresent('h');
    return 0;
}