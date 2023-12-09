#ifndef CHECKER_H
#define CHECKER_H

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

class CheckSumChecker
{

private:
    vector<string> UserInput;
    vector<string> UserInputCheckSum;

public:
    CheckSumChecker();  // Constructor
    ~CheckSumChecker(); // Destructor

    string GetUserInput(string UserInput);                     // Get User Input
    string GetUserInputCheckSum(string UserInputCheckSum);     // Get User Input CheckSum
    bool CheckSum(string UserInput, string UserInputCheckSum); // CheckSum data flag
    void OutPutDataifFalse();
    void OutPutDataifTrue();
};

#endif // !CHECKER_H