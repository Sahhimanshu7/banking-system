//
// Created by Himanshu Sah on 2/6/24.
//

#ifndef BANKING_SYSTEM_MAIN_H
#define BANKING_SYSTEM_MAIN_H

#include <string>
#include <utility>

void welcome();

struct ListNode {
    std::string value;
    ListNode* next;

    //constructor
    explicit ListNode(std::string  val) : value(std::move(val)), next(nullptr) {};
};

#endif //BANKING_SYSTEM_MAIN_H
