/*Author: James Nikolic
* Date: 1/14/2022
* Purpose: The fibonacci Sequence. Given an index returns the corresponding value, I wrote this for fun after an interview question

*/#include <iostream>
//For the sleep function, not necessary, but I used the windows libraries.
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endifint 

main (){
//Make a user interface
std:: cout << "Fibonacci Sequence index calculator! " << std::endl;
sleep(3);
//Promts user for index
std::cout << "Enter an integer index (-1 to quit, overflow at 48): " << std::endl;
int value;
std::cin >> value;

while (std::cin.fail()) {
std::cout << "Not an integer value, retry: " << std::endl;
std::cin.clear();
std::cin.ignore(256, '\n');
std::cin >> value;
}

while (value != -1) {
int a = 0, b = 1, c = 0;
if ((value >= 30) && (value <=47)){
//Pause for dramatic effect
std::cout << "Large return value, grinding..." << std::endl;
sleep (2);
}

//Overflow calculated manually then entered
if (value > 47) {
std::cout << "This value will cause overflow, choose another interger: " << std::endl;
std::cin >> value;
continue;
}

if (std::cin.fail()) {
std::cout << "I said an integer value retry... "<< std::endl;
std::cin.clear();
std::cin.ignore(256,'\n');
std::cin >> value;
continue;
}

else
//The math similar to a numberline
//Goto here
for (int i = 1; i <= value; i++){
c = a + b;
a = b;
b = c;
}

// Prints the value at the given index
std::cout <<"Result: " << c <<std::endl;
std::cout << "enter an integer index (-1 to quit, overflow at 48): " <<std::endl;
std::cin >> value;
}                                                                                                                                                                                                                                       return 0;                                                                                                               }        
