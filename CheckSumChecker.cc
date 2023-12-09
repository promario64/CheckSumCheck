#include <iostream>
#include <string>
#include <vector>
#include "Checker.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    CheckSumChecker CheckSumChecker;
    string UserInput = "";
    string UserInputCheckSum = "";

    UserInput = CheckSumChecker.GetUserInput(UserInput);
    UserInputCheckSum = CheckSumChecker.GetUserInputCheckSum(UserInputCheckSum);


    cout << "Your CheckSum Data is: " << UserInput << "\n";
    cout << "Your CheckSum is: " << UserInputCheckSum << "\n";

    CheckSumChecker.CheckSum(UserInput, UserInputCheckSum);

    CheckSumChecker.~CheckSumChecker();

    return 0;
}