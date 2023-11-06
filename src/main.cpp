/*
 * banking-system to manage user accounts and administrative activities of a bank 
 * Name: banking-system 
 * Start date: 11/05/2023
 * Author: Himanshu Sah
 * Contact: himanshusah41@gmail.com
*/

#include <iostream>
#include <iomanip>

void printDashes();     // To print dashes
void login_or_signup(); // To ask user to signup or login 

int main()
{
    std::cout << "\033[2J\033[1;1H";
    printDashes(); 
    std::cout << "\t\t\t\tWelcome to the banking-system\n";
    printDashes();
    std::cout << std::setw(100) << "\n\nWelcome to the banking system. If you are a new user please select option 1 to create a new account.\nPlease select option 2 to login.";
    return 0;
}

void printDashes()
{
    std::cout << std::setfill('-') << std::setw(100) << "-" << std::endl;
}

void login_or_signup()
{

}
