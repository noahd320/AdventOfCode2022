//Checking which elf has the most calories on them

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
    int checkingTotal, highestTotal, biggestThree;
    vector <int> topThree;
    string line;

    ifstream inFile;
    ifstream outFile;

    inFile.open("elfCalories.txt");

    checkingTotal = 0;
    highestTotal = 0;
    

    while (getline(inFile, line))
    {
        if (line.length() == 0)
        {
            highestTotal = max(highestTotal, checkingTotal);
            checkingTotal = 0;
        }
        else
        {
            checkingTotal += stoi(line);
        }
        highestTotal = max(highestTotal, checkingTotal); 
        topThree.push_back(highestTotal);
        
    }
    cout << highestTotal;
    
}
