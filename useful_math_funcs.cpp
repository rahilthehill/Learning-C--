#include <iostream>
#include <cmath> // includes other additional math functions

int main() {
    double x = 3;
    double y = 4; 
    double z;

    z = std::max(x,y); //finding maximum
    z = std::min(x,y); // finding minimum

    z = pow(2,4); // raises 2 to the power of 4
    z = sqrt(9); // takes squareroot of 9
    
    z = abs(-3); //absolute value
    
    z= round(x); //rounding
    z = ceil(x); //round up
    z = floor(x); //round down

    //You can go to www.cplusplus.com/reference/cmath/ for all the cmath functions




    return 0;
}