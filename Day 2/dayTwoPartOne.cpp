//Checking which three elves has the most calories on them

//Include statements 
#include <iostream> 
#include <string> 
#include <fstream>

using namespace std;
//Function prototypes

int main()
{
    int playerOneScore, playerTwoScore;
    string line;

    ifstream inFile("rpsStrategy.txt");

    playerOneScore = 0;
    playerTwoScore = 0;

    while (getline(inFile, line))
    {
        char playerOneChoice = line[0];
        char playerTwoChoice = line[2];

        switch (playerOneChoice)
        {
        case 'A':
            playerOneScore += 1;
            break;
        case 'B':
            playerOneScore += 2;
            break;
        case 'C':
            playerOneScore += 3;
            break;
        
        default:
            break;
        }

        switch (playerTwoChoice)
        {
        case 'X':
            playerTwoScore += 0;
            break;
        case 'Y':
            playerTwoScore += 3;
            break;
        case 'Z':
            playerTwoScore += 6;
            break;
        
        default:
            break;
        }
        
        if (playerOneChoice == 'A' && playerTwoChoice == 'Z')
        {
            playerOneScore += 6;
        }
        else if (playerOneChoice == 'B' && playerTwoChoice == 'X')
        {
            playerOneScore += 6;
        }
        else if (playerOneChoice == 'C' && playerTwoChoice == 'Y')
        {
            playerOneScore += 6;
        }
        else if (playerOneChoice == 'A' && playerTwoChoice == 'Y')
        {
            playerTwoScore += 6;
        }
        else if (playerOneChoice == 'B' && playerTwoChoice == 'Z')
        {
            playerTwoScore += 6;
        }
        else if (playerOneChoice == 'C' && playerTwoChoice == 'X')
        {
            playerTwoScore += 6;
        }
        else
        {
            playerOneScore += 3;
            playerTwoScore += 3;
        }
        
        
                
        
        
        

        cout << playerOneScore << '\n';
        cout << playerTwoScore << '\n';
    }
}
