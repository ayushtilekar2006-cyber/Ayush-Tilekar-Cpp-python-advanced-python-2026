class Employee:
    copmpany = "HP"
    def __init__(self, name , salary):
        self.name = name 
        self.salary = salary

    def __str__(self):
        return f"The name is {self.name} and the salary is {self.salary}"
    def __repr__(self):
        return f"<{self.__class__.__name__} object at {hex(id(self))}>"
    def __len__(self):
        return len(self.name) + len(str(self.name))

e = Employee("Harry", 50000)

#print(e.name, e.salary)
#print(str(e))  # The name is Harry and the salary is 50000
#print(repr(e))  # <__main__.Employee object at 0x...>
print(len(e.name))  # 10