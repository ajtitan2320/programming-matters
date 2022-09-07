#WRITE A PROGRAM TO SUM ALL THE ITEMS IN A LIST.
a=[]
s=0
n=int(input("enter the no. of elements you want in list = "))
for i in range(0,n):
    b=int(input("enter the element = "))
    a.append(b)
for i in range(0,n):
    s=s+a[i]
print("the sum of the list is = ",s)