#include <iostream>
#include <ctime>
using namespace std;
int main() {
          	int Num1, Num2, Num3;

	srand(time(0));

	int randNum1 = rand() % 9;
	int randNum2 = rand() % 9;
	int randNum3 = rand() % 9;

	int guessMatchExactOrder = 0;
	int guessMatchNoOrder = 0;

	cout << "Enter your first guess: ";
	cin >> Num1;
	cout << "Enter your Second guess: ";
	cin >> Num2;
	cout << "Enter your Third guess: ";
	cin >> Num3;
    
	cout << "\n   First Random Number: " << randNum1 << endl;
	cout << "   Second Random Number: " << randNum2 << endl;
	cout << "   Third Random Number: " << randNum3 << endl<<endl;

	if (Num1 == randNum1) 
{       guessMatchExactOrder += 1;
}

	else if (Num1 == randNum2 || Num1 == randNum3) 
	{	guessMatchNoOrder += 1;
	}

	if (Num2 == randNum2) 
{		guessMatchExactOrder += 1;
}

	else if (Num2 == randNum1 || Num2 == randNum3) 
   {		guessMatchNoOrder += 1;
   }

	if (Num3 == randNum3) 
{		guessMatchExactOrder += 1;
}

	else if (Num3 == randNum1 || Num3 == randNum2)
	{   guessMatchNoOrder += 1;
	}

	if ((guessMatchExactOrder + guessMatchNoOrder) == 0)
{		cout << "None of your guesses matched."<<endl;
}

	else if ((guessMatchExactOrder + guessMatchNoOrder) == 1) 
	{   cout << "Any one of your guess matched."<<endl;
	}
	
	else if ((guessMatchExactOrder + guessMatchNoOrder) == 2)
{       cout << "Two of your guesses matched."<<endl;
}

	else if (guessMatchExactOrder == 3)
{       cout << "Three of your guesses matched in exact order. "<<endl;
}

	else if ((guessMatchExactOrder + guessMatchNoOrder == 3))
{       cout << "Three of your guesses matched but not in order. "<<endl;
}

	return 0;
}