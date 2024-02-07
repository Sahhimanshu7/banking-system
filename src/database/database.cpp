//
// Created by Himanshu Sah on 2/6/24.
//

#include <fstream>
#include <iostream>
#include "../../include/database.h"
#include "../../include/main.h"

const std::string folderURL = "./databaseFiles/";

bool createACustomer(ListNode *data)
{
    // check if the file already exists
    std::ifstream infile(folderURL + "customersRegister.txt");
    bool fileExists = infile.good();
    infile.close();

    std::cout << fileExists;

    std::ofstream outFile;

    std::cout << "\n";

    if (fileExists) {
        outFile.open(folderURL + "customersRegister.txt", std::ios::app);
    } else {
        outFile.open(folderURL + "customersRegister.txt");
    }

    if(!outFile.is_open()) {
        std::cerr << "Couldn't open file";
        return false;
    }

    ListNode* curr = data;

    if(fileExists)
    {
        while (curr != nullptr)
        {
            outFile << curr -> value << ",";
            curr = curr -> next;
        }

        outFile << std::endl;
    }

    outFile.close();

    delete curr;

    return true;
}