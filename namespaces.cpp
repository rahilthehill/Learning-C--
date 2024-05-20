#include <iostream>

// namespace = provides a solution to prevent name conflicts, it allows the same name for two entities as long as the namespace is different

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){

    using namespace first; // putting this in makes the whole main use the first mainspace


    int x = 0; //this doesnt work, creating a namespace will resolve this

    std::cout << first::x; //the first:: is the namespace that tells the program which version of x/namespace to use
    
    //** a way to save time and not put std:: all the time everywhere is by setting a using namespace std, but it can create problems
    //alternatives to that are "using std::cout" or using std::string;


    return 0;
}