#include<iostream>
using namespace std;
class shopping {
    public:
    int price,quantity;
    shopping (){
        price=100;
        quantity=3;

    }
    void display(){
        cout<<"total cost ="<< price*quantity << endl;

    }
    virtual void show(){
        cout<<"shopping" << endl;
    }
};
class onlineshopping : public shopping {
    public:
    void show(){
        cout<<"Online shopping"<< endl;
    }
};
template<typename T>
T mul(T a,T b){
    return a*b;
}
int main (){
    shopping s;
    s.display();
    onlineshopping o;
    shopping *ptr = &o;
    ptr->show();
    cout<<"mul"<<mul(4,5) << endl;
    return 0;
};