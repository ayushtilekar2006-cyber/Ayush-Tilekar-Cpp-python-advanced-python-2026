#include <iostream>
using namespace std;

class Recharge {
public:
    long long number; // Use long long for 10-digit numbers
    int amount;

    // Constructor
    Recharge() {
        number = 9270410426; 
        amount = 199;
    }

    void display() {
        cout << "Mobile number = " << number << endl;
        cout << "Recharge Amount = " << amount << endl;
    }

    
    virtual void show() {
        cout << "General Recharge" << endl;
    }
};

class SpecialRecharge : public Recharge {
public:
    void show() override {
        cout << "Special Recharge" << endl;
    }
};


template <typename T>
T divide(T a, T b) {
    return a / b;
}

int main() {
    
    Recharge r;
    r.display();
    cout << "-------------------" << endl;

    
    SpecialRecharge s;
    Recharge *ptr = &s; 
    ptr->show(); 


    cout << "Division Result: " << divide(10, 2) << endl;

    return 0;
}