#include <iostream>
#include <math.h>
#include <string>



int main() {
    int number1;
    int number2;
    std::string want;
    std::string validCh1 = "mult";
    std::string validCh2 = "add";
    std::string validCh3 = "sub";
    std::string validCh4 = "div";
    unsigned result3_1;
    unsigned result3 = number1 / number2 ;
//    float result_3_2= result3_1 + result3;



    std::cout << "._______________________________________." << std::endl;
    std::cout << "|                                       |" << std::endl;
    std::cout << "|                                       |" << std::endl;
    std::cout << "|    Welcome to Selam calculator!       |" << std::endl;
    std::cout << "|                                       |" << std::endl;
    std::cout << "|                                       |" << std::endl;
    std::cout << "._______________________________________." << std::endl;
    std::cout << "_____________________________________________________________________________________" << std::endl;

    std::cout << "Please enter your first number.                                                     " << std::endl;
    std::cin >> number1;
    std::cout << "First number: " << number1 << std::endl;
    std::cout << "____________________________________________________________________________________ " << std::endl;
    std::cout << "Please enter your second number. " << std::endl;


    std::cin >> number2;
    std::cout << "Second number: " << number2 << std::endl;
    std::cout << "____________________________________________________________________________________" << std::endl;

    std::cout << "To be continune please select what you want to do: " << std::endl;
    std::cout << "On this calculator you can add, subtract, multiply and devid numbers." << std::endl;
    std::cout << "for addition type -> ad, for subtraction type -> sub, for division type -> div," << std::endl;
    std::cout << "for multiplication type -> mult." << std::endl;

    std::cout << "====================================================================================" << std::endl;


    std::cin >> want;




        if (want == validCh1) {
            int result1 = number1 * number2;
            std::cout << number1 << " multiply by " << number2 << " is " << result1 << "." << std::endl;
        } else if (want == validCh2) {
            int result2 = number1 + number2;
            std::cout << number1 << " plus " << number2 << " is " << result2 << "." << std::endl;
        } else if (want == validCh4) {
            result3_1 = number1 % number2;
            std::cout << number1 << " divided by " << number2 << " is " << result3<<"."<< result3_1 <<std::endl;
        } else if (want == validCh3) {
            int result4 = number1 - number2;

            std::cout << number1 << " subtract " << number2 << " is " << result4 << "." << std::endl;
        }

        return 0;
    }
