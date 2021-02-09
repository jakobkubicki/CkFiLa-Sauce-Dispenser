/*
    This program computes the nessesary commands for the sauce dispenser
    No sources to cite.

    -author Jakob Kubicki
    -author Ahmad Moltafet
    -version v0.0.2 2/9/21
*/

#include <iostream>
#include <vector>
#include <string>
#include "sauce.h"

int main (){
    //The data collection will need to be figured out once we present to Chik-Fil-A, right now we will use hard coded data
    int orderNum = 0;
    std::string userInput = "";
    std::vector<int> userInputVect;
    int userInputInt = 0;

    std::cout << "Enter order number:";
    std::cin >> orderNum;
    std::cout << "Enter sauce numbers (0 = Chick-fil-A Sauce, 1 = Polynesian Sauce, 2 = Honey Mustard Sauce):" << std::endl;
    std::cout << "3 = Garden Herb Ranch Sauce, 4 = Zesty Buffalo Sauce, 5 = Barbeque Sauce, 6 = Sriracha Sauce, 7 = Honey Roasted BBQ sauce" << std::endl;;
    std::cin >> userInput;
    userInputInt = std::stoi(userInput.c_str());
    std::cout << userInputInt;

    return 0;
}