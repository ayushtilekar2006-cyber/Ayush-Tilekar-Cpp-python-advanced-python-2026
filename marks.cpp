#include<iostream>
using namespace std;
class student {
    public:
    int marks1,marks2;
    student(){
        marks1=60;
        marks2=70;
    }
    void display (){
        cout<<"totalmarks"<<marks1+marks2<<endl;

    }
    virtual void show(){
        cout<<"student"<<endl;
    }
};
class result : public student {
    public:
    void show(){
        cout<<"result"<<endl;

    }
};
template <typename T >
T sub(T a , T b ){
    return a-b ; 
}
int main (){
    student s;
    s.display();
    result r;
    student*ptr=&r;
    ptr->show();
    cout<<"sub:"<<(10,5)<<endl;
    return 0;
}