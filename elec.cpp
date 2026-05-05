#include<iostream>
using namespace std;
class electricity {
    public :
    int units,rate;
    electricity (){
        units=100;
        rate=5;

    }
    void display (){
        cout<<"totalbill = "<<units*rate << endl;

    }
    virtual void show (){
        cout<<"electricity"<<endl;
    }
};
class domestic : public electricity {
    public:
    void show (){
        cout<<"domestic"<<endl;
    }
};
template<typename T>
T add (T a , T b){
    return a + b ;

}
int main (){
    electricity e;
    e.display();
    domestic d ;
    electricity*ptr = &d;
    ptr->show();
    cout<<"add:"<<add(5,3)<<endl;
    return 0;
}
