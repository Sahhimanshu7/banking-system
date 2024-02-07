//
// Created by Himanshu Sah on 2/7/24.
//

#include <string>
#include <cctype>
#include "../../include/errorMessage.h"
#include "../../include/registrationValidator.h"

bool isStrongPassword(const std::string& password){
    // define criteria
    const int minLength = 8;
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;
    std::string specialChars = "!@#$%^&*()-_+=<>?";

    // check length
    if (password.length() < minLength){
        displayError("Password is less than 8 characters!");
        return false;
    }

    // check other criteria
    for (char c : password){
        if (std::isupper(c)) {
            hasUpperCase = true;
        } else if (std::islower(c)) {
            hasLowerCase = true;
        } else if (std::isdigit(c)){
            hasDigit = true;
        } else if(specialChars.find(c) != std::string::npos){
            hasSpecialChar = true;
        }
    }

    // return true if everything is true
    return hasUpperCase && hasLowerCase && hasSpecialChar && hasDigit;
}