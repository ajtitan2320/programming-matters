#WRITE A PROGRAM IN PYTHON TO INSERT NAMES OF CITIES USING TUPLES
a=[]
n=int(input("enter how many cities you want = "))
for i in range(0,n):
    b=input("enter the city name = ")
    a.append(b)
a=tuple(a)
for i in range(0,n):
    print(a[i]," ")