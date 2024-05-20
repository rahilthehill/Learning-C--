#include <iostream>

int main(){
    //const makes a variable a constant, makes it read only basically.

    const double PI = 3.14159; // variables of consts are usually capitalized

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

   
    return 0;
}