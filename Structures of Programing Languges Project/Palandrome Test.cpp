//Nathan Loveless
//Structures of Programming Lang
//12/12/21

#include <iostream>
#include <string> //Libraries

using namespace std; //Name space

string getstring() //Function to get string
{
    cout << "Please enter a string: \n"; //Prompts for a string
    string S;  //Creates string s
    cin >> S; //Gets value
    return S; //returns S
}

string palindrome(string S) //Function to test if a plandrome
{
    string P = S; //Copies string
    reverse(P.begin(), P.end()); //Flips
    cout << "The string entered: \n" << S << "\nThe string reversed: \n" << P << "\n";
    if (S == P)  //Tests if they are the same 
    {
        return "The entered string is a palindrome";
    }
    else 
    {
        return "The entered string is not a palindrome";
    }
}

int main() //Main Function 
{
    string S = getstring();//Populates S
    cout << palindrome(S); //Test and displays message
    return 0;
}