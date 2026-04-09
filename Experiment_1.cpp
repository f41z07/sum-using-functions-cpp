#include <iostream>

int userInput(){
    std::cout << "Enter a number: ";
    int num{};
    std::cin >> num;

    return num;
}

void printSum(int x, int y){
    std::cout << "The sum of " << x << " and " << y << " is = " << x + y << "\n"; 
}

int main(){
    std::cout << "This is me attempting to add 2 numbers based on what I've learnt so far" << ".\n";

    int num1{userInput()};
    int num2{userInput()};

    printSum(num1, num2);

    return 0;
}
