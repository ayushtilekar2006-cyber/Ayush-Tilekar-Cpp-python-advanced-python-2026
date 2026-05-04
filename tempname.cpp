#include <iostream>
using namespace std;

template <typename T>
void multiply(T a, T b) {
    if (a < 0 || b < 0) throw "Negative value error!";
    cout << "Product: " << a * b << endl;
}

int main() {
    try {
        multiply(10, 5);      // int
        multiply(2.5f, 4.0f); // float
        multiply(-1, 5);      // Exception
    } catch (const char* msg) { cerr << msg << endl; }
    return 0;
}