//
// Created by Himanshu Sah on 2/6/24.
//

#include <fstream>
#include <iostream>
#include "../../include/database.h"
#include "../../include/main.h"

const std::string fileURL = "./database/customersRegistration.txt";

bool createACustomer(ListNode *data)
{
    // check if the file already exists
    std::ifstream infile(fileURL);
    bool fileExists = infile.good();
    infile.close();

    std::ofstream outFile;

    if (fileExists) {
        outFile.open(fileURL, std::ios::app);
    } else {
        outFile.open(fileURL);
    }

    if(!outFile.is_open()) {
        return false;
    }

    if(fileExists)
    {
        outFile << "\n";
        outFile << "More data appended to the file!" << std::endl;
    }

    outFile.close();

    return true;
}