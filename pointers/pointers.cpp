

#include <iostream>


void func1()
{
    bool b = true;
    int i = 5;
}
void func2()
{
    bool b = false;
    float f = 10;
}

void func3()
{
    int i[100000];

}


class Animal
{
public:
    Animal(std::string name);

    std::string name;
    
private:
    std::string name;

};



int main()
{
    int i = 5;
    float f = 4.5f;

    /*func1();
    func2();
    func3();*/

    new int(5);
    int* pointer = new int(5);

    std::cout << *pointer << std::endl;

    delete pointer;

    Animal* dog = new Animal("Dog");

    std::cout <<(*dog).getName() << std::endl;
    delete dog;
    dog = nullptr;
    std::cout <<(*dog).getName() << std::endl;

    if (dog) {
    
std::cout << dog <<->
    }






    Animal cat("cat");
    std::cout << cat.getName() << std::endl;

    int* block = (int*)malloc(sizeof(int) * 1000);
    block[0] = 3;
    block[1] = 4;
    block[2] = 5;
    block[3] = 6;

    block++;

    std::cout << *(block + 2) << std::endl;
    free(--block);




}


