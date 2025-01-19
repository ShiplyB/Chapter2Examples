/*  Program File Name:Checkpoint.2.14
    Programmer: Miguel Seelye
    Date:February 2025
    Requirements:
    Write a program that has the following variables:
    first, middle, and last. Store your initials in these variables
    then display them on the screen.
*/

#include <iostream>

int main()
{
    char firstInitial;
    char middleInitial;
    char lastInitial;
    std::cout << "Please enter the initial of your first name:";
    std::cin >> firstInitial;
    std::cout << "Please enter the initial of your middle name:";
    std::cin >> middleInitial;
    std::cout << "Please enter the initial of your last name:";
    std::cin >> lastInitial;
    std::cout << "Your initials are:" << firstInitial << middleInitial << lastInitial;

}
