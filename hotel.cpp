#include<iostream>
using namespace std ; 
class hotelbill {
    public:
    int initializedays , rentperdays ;
    hotelbill (){
        initializedays = 2;
        rentperdays = 1000;
    }
    void display (){
        cout<<"total bill = " << initializedays * rentperdays<<endl;

    }
    virtual void show (){
        cout<<"hotelbill" << endl;

    }

};
class luxuryroom : public hotelbill {
    public:
    void show(){
        cout<<"luxuryroom"<<endl;

    }
};
template < typename T >
T MaxVal(T a , T b ) {
    return (a>b) ? a:b;
}
int main (){
    hotelbill h;
    h.display() ;
     luxuryroom l;
     hotelbill *ptr = &l;
     ptr->show();
     cout<<"Max : " <<MaxVal(10,20)<<endl;
     return 0;
     
}
