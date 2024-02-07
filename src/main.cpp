//
// Created by Himanshu Sah on 2/6/24.
//

#include <iostream>
#include "../include/main.h"

class Customer
{
private:
    int addToCustomerDatabase()
    {
        return 0;
    }

    int checkCustomerDatabase()
    {
        return 0;
    }
public:
    static char askForLoginOrRegister()
    {
        char answer;
        std::cout << R"(Do you want to register or login? : (Press "r" to register and "l" to login.) )";
        std::cin >> answer;
        std::cout <<"\n";
        return answer;
    }


};

int main()
{
    welcome ();

    char registerOrLogin;
    Customer customer;
    registerOrLogin = Customer::askForLoginOrRegister();
    if (registerOrLogin == 'r' || registerOrLogin == 'R')
    {
        Customer::registerCustomer();
    }
    else if (registerOrLogin == 'l' || registerOrLogin == 'L')
    {
        Customer::loginCustomer();
    }

    return 0;
}

void
welcome(){
    std::cout << "Welcome to the banking system \n";
    std::cout << "--------------------------------\n";
}