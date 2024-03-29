//
// Created by Himanshu Sah on 2/6/24.
//

#include <iostream>
#include <limits>

#include "../include/main.h"
#include "../include/errorMessage.h"
#include "../include/registrationValidator.h"
#include "../include/database.h"

class Customer
{
private:
    static bool addToCustomerDatabase(ListNode* data)
    {
        ListNode* current = data;
        if (createACustomer(current))
        {
            delete current;
            return true;
        }
        delete current;
        return false;
    }

    int checkFromCustomerDatabase()
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

    static bool registerCustomer()
    {
        std::cout << "Enter your first name. : ";
        std::string firstName;
        std::cin >> firstName;

        auto* name1 = new ListNode(firstName);

        std::cout << "Enter your last name. : ";
        std::string lastName;
        std::cin >> lastName;

        auto* name2 = new ListNode(lastName);

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Enter your address. : (street address, city, state) ";
        std::string address;
        std::getline(std::cin, address);

        auto* add = new ListNode(address);

        std::cout << "Enter your phone number. : (XXX-XXX-XXXX) ";
        std::string phoneNumber;
        std::cin >> phoneNumber;

        auto* phone = new ListNode(phoneNumber);

        std::cout << "Enter your username. : (just one word please) ";
        std::string username;
        std::cin >> username;

        auto* user = new ListNode(username);

        bool strongPassword = false;
        std::string password;
        while(!strongPassword){
            std::cout << "Enter your password. : (8 characters minimum, at least one digit, one special character, one uppercase, and a lowercase character) \n";
            std::cin >> password;
            strongPassword = isStrongPassword(password);
            if (!strongPassword){
                displayError("\nPlease Try Again! \nPassword is not strong. \n");
            }
        }
        auto* pass = new ListNode(password);

        ListNode* data = name1;
        name1 -> next = name2;
        name2 -> next = add;
        add -> next = phone;
        phone -> next = user;
        user -> next = pass;

        bool result = addToCustomerDatabase(data);

        delete name1;
        delete name2;
        delete add;
        delete phone;
        delete user;
        delete pass;

        return result;

    }

    static bool loginCustomer()
    {
        return true;
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
        if(Customer::registerCustomer())
        {
            displayError("Thank you for registration!");
        }
        else
        {
            displayError("An error occurred!");
        }
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