#include <iostream>

int main(){

    //type conversion = conversion of a value from one data type to another
        //implicit: automatic
        //explicit: precede value with new data type 

        double x =(int) 3.14; // turns the double into a int

        std::cout << x;

        char x = 100; // this explicitly outputs the character d (ASCII table)

        std::cout << (char) 100; // also outputs d

        std::cout << x;



   
    return 0;
}