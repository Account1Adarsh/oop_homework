#include<iostream>
using namespace std;
class Date{
    int day,mon,year;
    int d,m,y;
    int num;
    public:
    Date(int x,int y,int z){
        day=x;
        mon=y;
        year=z;
    }
    void accept(){
        cout<<"Enter number of days: ";
        cin>>num;
    }
    void cal_date(){
        d=day;
        m=mon;
        y=year;
        for(int i=0;i<num;i++){
            if(m==1||m==3||m==5||m==7||m==8||m==12||m==10){
                if(d==31){
                    if(m==12){
                        m=1;
                        d=1;
                        y++;
                    }
                    else {
                        m++;
                        d=1;
                    }
                }
                else d++;
            }
            else if(m==2){
                if(y%4==0){
                    if(d==29){
                        m++;
                        d=1;
                    }
                    else d++;
                }
                else{
                    if(d==28){
                        m++;
                        d=1;
                    }
                    else d++;
                }
            }
            else if(m==4||m==6||m==9||m==11){
                if(d==30){
                    m++;
                    d=1;
                }
                else d++;
            }
        }
    }
    void display(){
        day=d;
        mon=m;
        year=y;
        cout<<"\n"<<"day= "<<day<<endl<<"month= "<<mon<<endl<<"year= "<<year<<endl;
    }

};
int main(){
    Date da(29,8,2023);
    da.accept();
    da.cal_date();
    //da.display();
    Date stored=da;//copy constructor
    stored.display();
    return 0;
}