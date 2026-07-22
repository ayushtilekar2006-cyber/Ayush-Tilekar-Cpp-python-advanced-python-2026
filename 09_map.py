num = [1, 2, 3, 4, 5]

def square(x):
    return x * x


new = map(square, num)
new = list(map(square, num))
print(new) 
