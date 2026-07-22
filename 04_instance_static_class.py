class Employee:
    company = "HP"
    def __init__(self, name, salary):
        self.__name = name
        self.__salary = salary

    def print_info(self):
        print(f"Name: {self.__name}, Salary: {self.__salary}")

e1 = Employee("Alice", 50000)
e2 = Employee("Bob", 60000)
print(Employee.company)  # HP

e1.print_info()
e2.print_info()

print(e2.sum)()

