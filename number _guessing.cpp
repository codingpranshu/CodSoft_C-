#include<iostream>
using namespace std;
#include<ctime>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num=(rand()%100)+1;

    cout<<"*************NUMBER GUESSING**********";



    do {
        cout<<"Enter the numer to be guessed between(1-100) ";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"too high! \n";

        }
        else if(guess<num){
            cout<<"too low! \n";}
        else{cout<<"CORRECT!  #number of tries"<<tries<<'\n';
          }    
    }while(guess !=num);

    cout<<"******************************";
    return 0;

}

