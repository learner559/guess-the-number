#include <iostream>


bool validateInput(int num);

using namespace std;


int main(){
    cout << "Guess a number from 1 to 50!\n";


    srand((unsigned) time(NULL));
    int real_number = rand() % 50;


    for (int i=0; i<5; i++){
        int user_guess;
        cin >> user_guess;

        if (!validateInput(user_guess)){
            cout << "That's not an option dummy. Now you get to restart the program.\n";
            return 1;
        }

        if (user_guess > real_number){
            cout << "Too high\n";
        }
        else if (user_guess < real_number){
            cout << "Too low\n";
        }
        else{
            cout << "You got the right number!\n";
            return 0;
        }
    }
    cout << "Too bad, the number was " << real_number << endl;
    return 0;
}

bool validateInput(int num){
    if (num < 1 || num > 50){
        return false;
    }
    else{
        return true;
    }
}