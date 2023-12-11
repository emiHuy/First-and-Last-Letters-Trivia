/*
 * Program Name: First & Last Trivia
 * Author:       Emily Huynh
 * Date Created: 05/14/2022
 * Last Updated: 05/14/2022
 * Description:  This program runs a trivia game that  gives users the first and last letters of the answer.
 */

#include <iostream>
using namespace std; 
int main() 
{
  int l, maxGuess=0, score=0;
  char Play, letter;
  while (true)
  {
    cout << "Hi and welcome to FIRST AND LAST TRIVIA! In this movie trivia game, you are given a trivia question and you have to guess the letters in the word (in capitals).\n\n";

    PlayGame:
    cout << "Would you like to play (y/n)? ";
    cin >> Play; 
    if (Play == 'y')
    {
      cout << "OK, let's play FIRST AND LAST TRIVIA!\n";
    }
    else if (Play == 'n')
    {
      break;
    }
    else 
    {
      cout << "Invalid. You must enter 'y' or 'n'.\n";
      goto PlayGame;      
    }

    char arr [6] = {'M',' ',' ', ' ',' ','Y'};
    char answer [6]= {'M', 'A', 'L', 'F', 'O', 'Y'};
    cout << "\n\nWhat is Draco's last name in Harry Potter?\n(You get 8 guesses)\n";
    while (true)
    {
      for (int l=0; l<6; l++)
      {
        cout << arr[l];
      }
      cout << "\nGuess a letter: ";
      cin >> letter;
      maxGuess++;
      for (l=0; l<6 ; l++)
      {
        if (letter == answer [l] and letter != 'M' and letter != 'Y')
        {
          arr [l] = answer [l];
          cout << "YES, YOU ARE CORRECT!\n";
          goto repeat;
        }
      }
      cout << "SORRY, THAT IS INCORRECT.\n";
      repeat:
      if (arr[0] == answer[0] and arr[1] == answer[1] and arr[2] == answer[2] and arr[3] == answer[3] and arr[4] == answer[4] and arr[5] == answer[5])
      {
        for (int l=0; l<6; l++)
        {
          cout << arr[l];
        }
        score++;
        cout << "\nYOU WIN THIS ROUND!\n";
        break;
      }
      if (maxGuess== 8) 
      {
        for (int l=0; l<5; l++)
        {
          cout << arr[l];
        }
        cout << "\nYOU LOSE THIS ROUND\n";
        break;
      }
    }

    maxGuess = 0;
    arr [0] = 'W', arr [1] = ' ', arr [2] = ' ', arr [3] = ' ', arr [4] = 'E', arr [5] = ' ';
    answer [0] = 'W', answer [1] = 'I', answer [2] = 'L', answer [3] = 'D', answer [4] = 'E', answer [5] = ' ';
    cout << "\n\nWhat is the last name of the fox in Zootopia?\n(You get 6 guesses)\n";
    while (true)
    {
      for (int l=0; l<5; l++)
      {
        cout << arr[l];
      }
      cout << "\nGuess a letter: ";
      cin >> letter;
      maxGuess++;
      for (l=0; l<5 ; l++)
      {
        if (letter == answer [l] and letter != 'W' and letter != 'E' and letter != ' ')
        {
          arr [l] = answer [l];
          cout << "YES, YOU ARE CORRECT!\n";
          goto repeat1;
        }
      }
      cout << "SORRY, THAT IS INCORRECT.\n";
      repeat1:
      if (arr[0] == answer[0] and arr[1] == answer[1] and arr[2] == answer[2] and arr[3] == answer[3] and arr[4] == answer[4] and arr[5] == answer[5])
      {
        for (int l=0; l<5; l++)
        {
          cout << arr[l];
        }
        score++;
        cout << "\nYOU WIN THIS ROUND!\n";
        break;
      }
      if (maxGuess== 6) 
      {
        for (int l=0; l<5; l++)
        {
          cout << arr[l];
        }
        cout << "\nYOU LOSE THIS ROUND\n";
        break;
      }
    }

    maxGuess = 0;
    arr [0] = 'S', arr [1] = ' ', arr [2] = ' ', arr [3] = 'W', arr [4] = ' ', arr [5] = ' ';
    answer [0] = 'S', answer [1] = 'N', answer [2] = 'O', answer [3] = 'W', answer [4] = ' ', answer [5] = ' ';
    cout << "\n\nWhat is the last name of the president of Panem in the Hunger Games?\n(You get 3 guesses)\n";
    while (true)
    {
      for (int l=0; l<4; l++)
      {
        cout << arr[l];
      }
      cout << "\nGuess a letter: ";
      cin >> letter;
      maxGuess++;
      for (l=0; l<4 ; l++)
      {
        if (letter == answer [l] and letter != 'S' and letter != 'W' and letter != ' ')
        {
          arr [l] = answer [l];
          cout << "YES, YOU ARE CORRECT!\n";
          goto repeat2;
        }
      }
      cout << "SORRY, THAT IS INCORRECT.\n";
      repeat2:
      if (arr[0] == answer[0] and arr[1] == answer[1] and arr[2] == answer[2] and arr[3] == answer[3] and arr[4] == answer[4] and arr[5] == answer[5])
      {
        for (int l=0; l<4; l++)
        {
          cout << arr[l];
        }
        score++;
        cout << "\nYOU WIN THIS ROUND!\n";
        break;
      }
      if (maxGuess== 3) 
      {
        for (int l=0; l<5; l++)
        {
          cout << arr[l];
        }
        cout << "\nYOU LOSE THIS ROUND\n";
        break;
      }
    }

     maxGuess = 0;
    arr [0] = 'T', arr [1] = ' ', arr [2] = ' ', arr [3] = 'Y', arr [4] = ' ', arr [5] = ' ';
    answer [0] = 'T', answer [1] = 'O', answer [2] = 'N', answer [3] = 'Y', answer [4] = ' ', answer [5] = ' ';
    cout << "\n\nWhat is Iron Man's first name? (You get 3 guesses) \n";
    while (true)
    {
      for (int l=0; l<4; l++)
      {
        cout << arr[l];
      }
      cout << "\nGuess a letter: ";
      cin >> letter;
      maxGuess++;

      for (l=0; l<4 ; l++)
      {
        if (letter == answer [l] and letter != 'T' and letter != 'Y' and letter != ' ')
        {
          arr [l] = answer [l];
          cout << "YES, YOU ARE CORRECT!\n";
          goto repeat3;
        }
      }
      cout << "SORRY, THAT IS INCORRECT.\n";
      repeat3:

      if (arr[0] == answer[0] and arr[1] == answer[1] and arr[2] == answer[2] and arr[3] == answer[3] and arr[4] == answer[4] and arr[5] == answer[5])
      {
        for (int l=0; l<4; l++)
        {
          cout << arr[l];
        }
        score++;
        cout << "\nYOU WIN THIS ROUND!\n";
        break;
      }
      if (maxGuess== 3) 
      {
        for (int l=0; l<4; l++)
        {
          cout << arr[l];
        }
        cout << "\nYOU LOSE THIS ROUND\n";
        break;
      }
    }
    cout << "Score: " << score << "\n";
    break;
  }
  cout << "Good bye!";
  return 0;
}