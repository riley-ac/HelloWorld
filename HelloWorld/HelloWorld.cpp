// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Student.h"
#include "iostream"
#include "xstring"


class Person
{
public:
    std::string name;
    int age;
    float weight;

    void f() {}
};




int main()
{

    using namespace std;
    Student student;
    student.SetName("bob");
    f();
    
   
    
    Person person; 

    person.age = 19;

    unsigned int i = 82;
  //  printf("%d\n", i);
    std::cout << i << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(Person) << std::endl;

    i++;
    i + i + 5;


    char c = 'A';
    cout << &i << endl;




    f();








    std::cout << "Hello World\n";

    return 0;
}

