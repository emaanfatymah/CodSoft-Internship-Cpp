#include <iostream> 
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "			************************************" << endl;
    cout << "     			  Welcome to Number Guessing Game" << endl;
    cout << "			************************************" << endl << endl;
    
    cout << "I'm thinking of a number between 1 and 20. Can you guess what it is?" << endl<<endl<<endl;

	srand(time(0)); //change random number
	int random_no=rand()%20+1;
	int guess=0,moves=0;
	
	do{
		moves++;
		cout<<"Guess a number: ";
		cin>>guess;
		if(guess==random_no){
			cout<<"Congrats! You've guessed the right number after "<<moves<<" moves."<<endl;
		}
		else if(guess<random_no){
			cout<<"Oops Sorry! You entered a lower number."<<endl;
		}
		else if(guess>random_no){
			cout<<"Oops Sorry! You entered a higher number."<<endl;
		}
		
	}while(guess!=random_no);
	
}
