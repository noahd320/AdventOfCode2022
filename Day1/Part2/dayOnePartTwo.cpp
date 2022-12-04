//Checking which three elves has the most calories on them

//Include statements 
#include <iostream> 
#include <string> 
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;
//Function prototypes 
int main()
{
    int checkingTotal, checkForThree, firstMost, secondMost, thirdMost;
    vector <int> mostCals;
    string line;

    ifstream inFile;
    ifstream outFile;

    inFile.open("elfCalories.txt");

    checkingTotal = 0;
    firstMost = 0;
    secondMost = 0;
    thirdMost = 0;
    

    while (getline(inFile, line))
    {
        if (line.length() == 0)
        {
            mostCals.push_back(checkingTotal);
            checkingTotal = 0;
        }
        else if (line.length() >= 1)
        {
            checkingTotal += stoi(line);
        }
    }
        mostCals.push_back(checkingTotal);


    for (int checkForThree : mostCals) 
    {

    if (checkForThree > firstMost)
    {
        thirdMost = secondMost;
        secondMost = firstMost;
        firstMost = checkForThree;
    }
    else if (checkForThree > secondMost)
    {
        thirdMost = secondMost;
        secondMost = checkForThree;
    }
    else if (checkForThree > thirdMost)
    {
        thirdMost = checkForThree;
    }
    
    }
    
    cout << firstMost + secondMost + thirdMost << '\n';

    
    
    
}
