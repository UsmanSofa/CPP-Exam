#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
private:
    char name[50];
    char sound[50];

public:
    void setDetails(const char n[], const char s[])
    {
        strcpy(this->name, n);
        strcpy(this->sound, s);
    }
    char *getName()
    {
        return name;
    }
    char *getSound()
    {
        return sound;
    }
    virtual void displayDetails()
    {
        cout << "Animal Details" << endl;
    }
};

class Dog : public Animal
{
public:
    void displayDetails()
    {
        cout << "Dog Name: " << getName() << endl;
        cout << "Dog Sound: " << getSound() << endl;
    }
};

class Cat : public Animal
{
public:
    void displayDetails()
    {
        cout << "Cat Name: " << getName() << endl;
        cout << "Cat Sound: " << getSound() << endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;

    dog.setDetails("Gullu", "Woof Woof");
    cat.setDetails("Tom", "Meow Meow");

    Animal *animals[2];

    animals[0] = &dog;
    animals[1] = &cat;

    for (int i = 0; i < 2; i++)
    {
        animals[i]->displayDetails();
        cout << endl;
    }

    return 0;
}