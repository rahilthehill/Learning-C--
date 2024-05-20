//typedef and type aliases
    // a typedef is a reserved keyword used to create an additional name, alias, for another data type. a new identifer for a existing type
    // which can help with readability and reducing typos

// howevee typedef is kinda taken over by the using keyword  

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;

/** 
 * using ( it works better with templates (future note))
*/ 
 // this works exactly the same as typedef above 

using text_t = std::string;
using text_t = int;


int main(){

    std::string firstName = "Rahil"; // text_t acts just like std::string
    number_t age = 21;

    std::cout << firstName << std::endl;
    std::cout << age << std::endl;

    return 0;
}

