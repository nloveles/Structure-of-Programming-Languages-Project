#Nathan Loveless
#Structures of Programming Languges
#12/12/21
string = input("Please enter a string: ") #Prompts for a string
reversed = string[::-1] #Reverses the string
answer = string == reversed #Test if its the same value 
print("The string entered: \n", string, "\nThe string reversed: \n", reversed ) #Displays values
if answer: #If true
    print("The entered string is a palindrome")
else:#If false
    print("The entered string is not a palindrome")
input('Press ENTER to exit') #Closes the program 