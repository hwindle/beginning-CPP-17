// Combining logical operators for loan approval
#include <iostream>

int main()
{
    int age {};
    int income {};
    int balance {};
    std::cout << "Please enter your age in years: ";
    std::cin >> age;
    std::cout << "Please enter your annual income in dollars: ";
    std::cin >> income;
    std::cout << "What is your current account balance in dollars: ";
    std::cin >> balance;
    if (age >= 18 && (income >= 20'000 || balance > 80'000)) {
        // OK for a loan in the UK, but how much?
        int loan {};
        // loan amount is either 2 * income or balance / 2, whichever
        // is lesser.
        if (2 * income < balance / 2) {
            loan = 2 * income;
        } else {
            loan = balance / 2;
        }
        std::cout << "\nYou can borrow up to: £" << loan << std::endl;
    } else {
        std::cout << "\nUnfortunately you do not quality for a loan." << std::endl;
    } // end if
}
