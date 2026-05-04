#include <iostream>
using namespace std;
class Distance {
public:
int d1, d2;

Distance() {
d1 = 10;
d2 = 20;
}
void display() {
cout << "Total Distance = " << d1 + d2 << endl;
}
virtual void show() {
cout << "Distance" << endl;
}
};
class Travel : public Distance {
public:
void show() {
cout << "Travel Distance" << endl;
}
};
template <typename T>
T divi(T a, T b) {
return a / b;
}
int main() {
Distance d;
d.display();
Travel t;
Distance *ptr = &t;
ptr->show();
cout << "Div: " << divi(20, 4) << endl;
return 0;
}