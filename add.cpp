#include <iostream>
using namespace std;

template <typename T>
void add(T a, T b) {
    if ((a + b) > 100) throw "Sum exceeds 100!";
    cout << "Sum: " << a + b << endl;
}

int main() {
    try {
        add(40, 20);     // int
        add(10.5f, 5.5f); // float
        add(90, 20);     // Exception
    } catch (const char* msg) { cerr << msg << endl; }
    return 0;
}