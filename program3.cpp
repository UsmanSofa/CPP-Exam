#include <iostream>
#include<cstring>
using namespace std;

class Animal
{
private:
    char name[50];
    char sound[50];

public:
    void setDetails(const char n[], const char s[])
    {
        strcpy(this->name,n);
        strcpy(this->sound,s);
    }
    void display()
    {
        cout << "Animal Name: " << name << endl;
        cout << "Animal Sound: " << sound << endl;
    }
};

class Dog : public Animal
{
public:

    void makeSound()
    {
        cout << "Dog says: Woof Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Cat says: Meow Meow!" << endl;
    }
};
int main()
{
    Dog dog;
    Cat cat;

    dog.setDetails("Gullu", "Woof Woof");
    cat.setDetails("Tom", "Meow Meow");

    cout << "Dog Details:" << endl;
    dog.display();
    dog.makeSound();

    cout << "Cat Details:" << endl;
    cat.display();
    cat.makeSound();

    return 0;
}