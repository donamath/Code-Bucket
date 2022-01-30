import random                                                 #Python library that contains random functions

choice=input("Shake Die?(Y/N)")                               #Asking user whether he wants to shake the die or not

while choice in ('y','Y'):                            #If he chooses to shake the die the following 3 statements are executed
    number=random.randint(1,6)
    print("The die landed on "+str(number)+"!!!")             #Printing the number on which the die landed on
    choice=input("Shake Die?(Y/N)")                           #Asking user if he wants to shake the die one more time?

print("Die not shook!")                                       #The exit statement when the user stops shaking the die
