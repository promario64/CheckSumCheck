#include "Checker.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

CheckSumChecker::CheckSumChecker() // Constructor
{
}

CheckSumChecker::~CheckSumChecker() // Destructor
{
}

string CheckSumChecker::GetUserInput(string UserInput) // Get User Input
{
    cout << "Enter Your CheckSum Data: ";
    cin >> UserInput;

    if (UserInput.length() == NULL)
    {
        cout << "You have not entered any data!\n";
        cout << "Please enter your data and try again!\n";
        cin >> UserInput;
    }

    return UserInput;
}

string CheckSumChecker::GetUserInputCheckSum(string UserInputCheckSum) // Get User Input CheckSum
{
    cout << "Enter Your CheckSum: ";
    cin >> UserInputCheckSum;
    return UserInputCheckSum;
}

bool CheckSumChecker::CheckSum(string UserInput, string UserInputCheckSum) // CheckSum data flag
{
    for (int i = 0; i < UserInput.length(); i++)
    {
        if (UserInput[i] == UserInputCheckSum[i])
        {
            CheckSumChecker::OutPutDataifTrue();
            return true;
        }
        else
        {
            CheckSumChecker::OutPutDataifFalse();
            return false;
        }
    }
}

void CheckSumChecker::OutPutDataifFalse()
{
    cout << "Checksum Data is not correct!\nAdvise: Check your data and checksum and try again!\n";
}

void CheckSumChecker::OutPutDataifTrue()
{
    cout << "Checksum Data is correct!\nAdvise: Your data is safe!\n";
}
