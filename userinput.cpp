#include <iostream>

int main(){

    // cout << insertion
    // cin >> extraction

    std::string name;
    int age;

    std::cout << "whats ur name?: ";
    std::cin >> name;

    std::cout << "whats ur age?: ";
    std::cin >> age; 

    //however this does not read between spaces so....
    std::getline(std::cin >> std::ws, name); // this takes in everything + the space etc... 
    // when doing this after the get age, it takes the hidden new line thats still in the buffer so by using std:ws, you can ignore those
    // and take the actual input meant to be taken in


    std::cout << "hello "<< name << std::endl;
     std::cout << "you are: "<< age << " years old" << std::endl;


   
    return 0;
}