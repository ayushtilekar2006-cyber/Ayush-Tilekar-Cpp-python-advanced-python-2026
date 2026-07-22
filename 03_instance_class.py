class Employee:
    company = "Asus"

def __init__(self, salary, name, bond):
    self.salary = salary
    self.name = name
    self.bond = bond

    

def get_salary(self):
    return self.salary

def get_inf(self):
    print(f"The name of the employee is {self.name}.salary is {self.salary}")

e1 = Employee(34000, "john" , 3, "Tesla")
print(e1.company)    

print(dir(e1))