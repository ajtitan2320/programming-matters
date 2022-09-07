import random
rand = random.randint(1,10)
chance = 1
while(chance<=5):
    guess=int(input("enter your guess = "))
    if (guess==rand):
        print("correct")
        break
    else:
        chance+=1
if(chance>5):
    print("you loose, the number was = ",rand)