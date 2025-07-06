// This program lets the user play a game of rock, paper, scissors
// with the computer. The computer's choices are randomly generated.
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

const string name[4] = {" ", "rock", "paper", "scissors"};

int main()
{
   int computerChoice, 
       playerChoice,
       computerPoints = 0,   // Point accumulators
       playerPoints = 0;    

   // srand produces a random seed, if it doesn't have an argument then it will produce the same seed every game. 
   // In the argument we use time to return the time as our seed because time is always moving therefore the seed will change every runtime.
   // The (NULL) part is just to store it anywhere.
   srand(time(NULL));        // Give the random generator 
                             // a seed to start with 
   playerPoints = 0;
   computerPoints = 0;

   cout << "Let's play Rock-Paper-Scissors!\n";
   cout << "The first player to score 5 points wins.\n\n";

   // Do {the bodys conents} until playerPoints or computerPoints reach 5 points
   do
   {  // Generate a random number 1 to 3 to simulate computer choice
      computerChoice = 1 + rand() % 3;
      
      // Get player's choice
      cout << "Pick 1 (rock), 2 (paper), or 3 (scissors): ";
      cin  >> playerChoice;
      
      // If both choices are the same then the outcome is a tie; Nobody wins.
      // Once this is called it will itterate back to the top. 
      if (computerChoice == playerChoice)                     // Tie
      {   cout << "I chose " << name[computerChoice] 
               << " too, so we tied.\n\n";
      }
      // If any of these arguments are true then run the else if's body.
      // The computer wins the round and will gain a point.
      else if ((playerChoice == 1 && computerChoice == 2) ||  // Computer 
               (playerChoice == 2 && computerChoice == 3) ||  // wins
               (playerChoice == 3 && computerChoice == 1) )
      {   cout << "I chose " << name[computerChoice] << ", so I win! "
               << name[computerChoice] << " beats "
               << name[playerChoice] << ".\n\n";
          computerPoints++;
      }
      // If none of the conditions in the if or else if are true
      // Then run the else body; Player wins the round.
                                                              // Player
      else                                                    // wins
      {   cout << "I chose " << name[computerChoice] << ", so you win! "
               << name[playerChoice] << " beats "
               << name[computerChoice] << ".\n\n";
          playerPoints++;
      }
   // While true continue running the body above. If not then break out of the loop. 
   } while (playerPoints < 5 && computerPoints < 5); 

   cout << "Let's see how you did :\n"
        << "You won " << playerPoints << " points and I won " 
        << computerPoints << " points.\n";

   // If player has 5 points then run the if body; The player has won the game.
   if (playerPoints == 5) 
      cout << "Congratulations! You're the champ!\n";
   // If the player does not have 5 points then run the else body; The computer wins the game.
   else
      cout << "Hurray for me! I'm the champ!\n";

   return 0;
}