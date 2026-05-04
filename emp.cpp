#include <iostream>
using namespace std;
class EmployeeBonus {
public:
int salary, bonus;
EmployeeBonus() {
salary = 20000;
bonus = 3000;
}

void display() {
cout << "Total Salary = " << salary + bonus << endl;
}
virtual void show() {
cout << "Employee Bonus" << endl;
}
};
class ManagerBonus : public EmployeeBonus {
public:
void show() {
cout << "Manager Bonus" << endl;
}
};
template <typename T>
T minVal(T a, T b) {
return (a < b) ? a : b;
}
int main() {
EmployeeBonus e;
e.display();
ManagerBonus m;
EmployeeBonus *ptr = &m;
ptr->show();
cout << "Min: " << minVal(10, 5) << endl;
return 0;
}
