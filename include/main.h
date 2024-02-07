//
// Created by Himanshu Sah on 2/6/24.
//

#ifndef BANKING_SYSTEM_MAIN_H
#define BANKING_SYSTEM_MAIN_H

#include <string>

void welcome();

struct ListNode {
    std::string value;
    ListNode* next;

    //constructor
    ListNode(const std::string& val) : value(val), next(nullptr) {};
};

#endif //BANKING_SYSTEM_MAIN_H
