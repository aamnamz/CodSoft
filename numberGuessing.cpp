#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int number=0;
	int answer=0;
	int guesses=0;
	srand(time(0));
	number=rand()%100+1; 
	cout<<"\n\n\t\t\t\t\t\t\t\t---- Guess The Number Game ----\n\n";
	do
	{
		cout<<"Guess the number (from 1 to 100) : ";
		cin>>answer;
		guesses++;
		if (answer>number)
			cout<<"Too high!\n";
		else if (answer<number)
			cout<<"Too low!\n";
		else
			cout<<"\nYAYYYYY! You got it in "<<guesses<<" guesses!\n";
	}while(answer!=number);
}
