class Employee:
    def __init__(self, name, salary):
        self.__name = name
        self.__salary = salary

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, value):
        if isinstance(value, str) and value.strip():
            self.__name = value
        else:
            raise ValueError("Name must be a non-empty string.")

    @property
    def salary(self):
        return self.__salary

    @salary.setter
    def salary(self, value):
        if isinstance(value, (int, float)) and value >= 0:
            self.__salary = value
        else:
            raise ValueError("Salary must be a non-negative number.")
        
class Person:
    def __init__(self, name):
        self._name = name  # Convention: underscore (_) denotes a private attribute.

    def get_name(self):
        return self._name

    def set_name(self, new_name):
        self._name = new_name 

p = Person("Alice")
print(p.get_name())  # Alice
p.set_name("Bob")
print(p.get_name())  # Bob 