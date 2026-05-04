#include<iostream>
using namespace std;

template <typename T >
void subtract (T a,T b) {
    if (a < 0||b < 0)throw "result is negative !";
    cout<<"result:"<<a-b<<endl;
}
int main ()
{
    try{
        subtract(10,5); // int 
        subtract(4.0,2.5); // double
        subtract(5,1);
    } catch (const char* msg) {cerr << msg <<endl;}
    return 0 ;
} 





