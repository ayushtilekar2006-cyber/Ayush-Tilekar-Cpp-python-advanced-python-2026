def decorator(func):
    def wrapper():
        print("I am about to execute a function ....")
        func()
        print("I have executed the function ....")
    return wrapper


def say_hello():
    print("Hello!")

#say_hello()

f = decorator(say_hello)
f()