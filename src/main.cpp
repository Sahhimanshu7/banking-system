/*
 * banking-system to manage user accounts and administrative activities of a bank 
 * Name: banking-system 
 * Start date: 11/05/2023
 * Author: Himanshu Sah
 * Contact: himanshusah41@gmail.com
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>

void printDashes();     // To print dashes
void login_or_signup(short int&); // To ask user to signup or login 

int main()
{
    std::cout << "\033[2J\033[1;1H"; 
    printDashes(); 
    std::cout << "\t\t\t\tWelcome to the banking-system\n";
    printDashes();
    std::cout << std::setw(100) << "\n\nWelcome to the banking system. If you are a new user please select option 1 to create a new account.\nPlease select option 2 to login.";

    // Get user choice for login or signup 
    short int uChoice;
    login_or_signup(uChoice);

    if(uChoice == 1) std::cout << "Creating your account";
    if(uChoice == 2) std::cout << "Login";
    return 0;
}

void printDashes()
{
    std::cout << std::setfill('-') << std::setw(100) << "-" << std::endl;
}

void login_or_signup(short int& uChoice)
{
    std::cout << "\n\n\n\n";
    std::cout << "\tMenu: \n";
    std::cout << "\t1. Create a new account.\n\t2. Login.\n\n";
    std::cout << "Your choice : ";

    bool loopFlag = true;

    while(loopFlag){
        std::cin >> uChoice;
        if (std::cin.fail()){
            std::cout << "ERROR -- You did not enter an integer";

            // get rid of failure state
            std::cin.clear(); 

            // From Eric's answer (thanks Eric)
            // discard 'bad' character(s) 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }  

        if (uChoice < 1 || uChoice > 2 ){
            std::cout << "Invalid choice. Please try again. \n";
        }else {
            loopFlag = false;
        }

    }
}
