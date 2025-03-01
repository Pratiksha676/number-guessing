#include<iostream> 
#include<cstdlib>
#include<ctime>
using namespace std;
 
int main(){
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess , attempts=0;

    cout <<"Welcome to the Guess th Number Game!" <<endl;
     
    do {
        cout<<"Enter your guess numberfrom(1-100): ";
        cin>>guess;
        attempts++;
        if (guess < secretNumber) {
            cout <<"Too low. Try again!"<< endl;
        } else if (guess > secretNumber) {
            cout << "Too high . Try again!"<< endl;
        } else{
            cout <<"Congratulations! You have guessed the number in  " << attempts<<" attempts!"<<endl;
        }

    }while (guess != secretNumber);
    return 0;
}
