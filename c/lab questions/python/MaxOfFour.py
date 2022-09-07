a=int(input("enter the first number = "))
b=int(input("enter the second number = "))
c=int(input("enter the third number = "))
d=int(input("enter the fourth number = "))
big = a
if(a>b):
    if(a>c):
        if(a>d):
            print(a," is the largest")
        else:
            print(b," is the largest")
    else:
        if(c>d):
            print(c," is the largest")
        else:
            print(d," is the largest")
elif(b>c):
    if(b>a):
        if(b>d):
            print(b," is the largest")
        else:
            print(d," is the largest")
    else:
        if(a>d):
            print(a," is the largest")
        else:
            print(d," is the largest")
elif(c>d):
    if(c>a):
        if(c>b):
            print(c," is the largest")
        else:
            print(b," is the largest")
    else:
        if(c>d):
            print(c," is the largest")
        else:
            print(d," is the largest")
else:
    if(d>a):
        if(d>b):
            print(d," is the largest")
        else:
            print(b," is the largest")
    else:
        if(d>b):
            print(d," is the largest")
        else:
            print(b," is the largest")

