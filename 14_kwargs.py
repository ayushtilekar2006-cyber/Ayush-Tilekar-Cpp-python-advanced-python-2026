def marks(**kwargs):
    for item in kwargs.keys():
        print(f"The marks of {item} is {kwargs[item]}")

marks(Ayush=90, Ankit=80, Anshika=70, Anu=60)