/**
 This is a simple guessing game that uses the  bisector method to find the value.
 @author Ricardo Colin on 06/21/18
 @version 1.0
 Copyright © 2017 Ricardo Colin. All rights reserved.
 */
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //sets the variables
    int lower, upper, mid;
    char response;
    int count = 0;
    
    cout << "WELCOME TO THE GUESSING GAME! \n\n\n" << endl;
    
    //ask for lower value
    cout << "Enter the lower value(an interger): ";
    cin >> lower;
    
    
    
    do { 
         cout << "Enter the upper value: ";
         cin >> upper;
    if (upper <= lower) {
              cout << "\n" << upper << " has to be bigger than " << lower << ".\n" << endl;
              }
    }while (upper <= lower);
    //while the upper value is smaller or equal to lower value it will keep on asking for a higher value.
    
    //while the upper value is larger or equal to lower value it will keep on looping
    while (upper >= lower){
          ++count;
          mid = (lower+upper)/2;
          cout << "\nMy guess is " << mid << endl;
          cout << "If " << mid << " is correct, enter 'C'" << endl;
          cout << "If " << mid << " is too high, enter 'H'" << endl;
          cout << "If " << mid << " is too low, enter 'L'" << endl;
        cout << "Your guess is: ";
        //gets the response back
          cin >> response;
        //gets only the first character
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        //capitalize the first character
          response = (char) toupper(response);
        
        //if response if correct
          if (response == 'C') {
             if (count !=1) {
             cout << "\nI got it! It only took me " << count << " tries." << endl;
             }
             else {
                  cout << "\n\nI got it! It only took me " << count << " try." << endl;
             }
                  break;
             }
        //if response is too high
             else if (response == 'H'){
                  upper = mid-1;
             }
        //if response is to low
             else if (response == 'L'){
                  lower = mid+1;
                  }
        //else show hint message to the user
            else {
                cout << "\nPlease enter one of the following options\n" << endl;
               
                }
    }
    //if at the end the upper value is smaller than lower value they are cheating.
             
             if (upper < lower) {
                       cout << "Don't try to cheat. I'll catch you again." << endl;
             }
             
             char c;
    //exits the program.
             cout << "\nInput any key and press ENTER to exit. " << endl;
             cin >> c;
             return 0;
             
}

