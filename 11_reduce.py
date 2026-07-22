from functools import reduce

a = [1, 2, 3, 4, 5]

def sum(a,b):
    return a+b

c = reduce(sum, a)
print(c)