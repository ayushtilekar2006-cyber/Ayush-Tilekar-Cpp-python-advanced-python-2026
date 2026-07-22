age = int(input("Enter your age: "))
if (age>18):
    print("You can drive")
    print("You can vote")
    print("Thank you")
elif (age==18):
    print("let's check your documents")
    print("Thank you")
elif (age==0):    
    print("You are just born yet")
    print("Thank you")
else:
    print("You cannot drive or vote")
    print("Thank you")