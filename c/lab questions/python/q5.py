'''WRITE A PROGRAM TO PERFORM FOLLOWING FUNCTIONS
A.) CREATE A DICTIONARY
B.) ADD A KEY TO A DICTIONARY
C.) ADD AN ELEMENT IN IT
D.) REMOVE ELEMENT FROM IT'''
a={}
def function1 ():
    a={}
def function2 ():
    key=int(input("enter the key = "))
    a[key]=0

print("the functions")
print('''1.) CREATE A DICTIONARY
2.) ADD A KEY TO A DICTIONARY
3.) ADD AN ELEMENT IN IT
4.) REMOVE ELEMENT FROM IT''')
n=int(input("enter the choice = "))
if(n==1):
    function1()
elif(n==2):
    function2()
print(a)
