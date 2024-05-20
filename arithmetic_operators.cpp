#include <iostream>

int main()
{
 // basically + - * /

 int students = 20;
 students = students + 1;

 // you can also shorten it 
 students +=1;

// or increment by one if needed
 students++;

//same with substraction
students -=1;

//decrement by one
students--;

//multiplication 
students *=2;

//division
students /=2;

//if we want the reminader, with a double data type

int remainder = students % 3;


 std::cout << students;

    return 0;
}