def is_greater_than_9(x):
    if x>9:
        return True
    else:
        return False
    
a = [1, 2, 35, 455, 8975, 346, 5677, 8222, 922, 1023]

#new = filter(is_greater_than_9, a)
#new = list(filter(is_greater_than_9, a))
new = list(map(lambda x: x>9, a))
print(new)