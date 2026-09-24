#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char name[50];
    int age;
    char address[50];

public:
    Person(char n[], int a, char add[])
    {
        strcpy(this->name, n);
        age = a;
        strcpy(this->address, add);
    }

    void display()
    {
        cout << "Person Name: " << name << endl;
        cout << "Person Age: " << age << endl;
        cout << "Person Address: " << address << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of persons: ";
    cin >> n;

    Person **persons = new Person *[n];

    for (int i = 0; i < n; i++)
    {
        char name[50];
        int age;
        char address[50];

        cout << "Enter details of Person " << endl;

        cout << "Enter Person Name: ";
        cin >> name;

        cout << "Enter Person Age: ";
        cin >> age;

        cout << "Enter Person Address: ";
        cin >> address;

        persons[i] = new Person(name, age, address);
    }

    cout << "Person Details:-" << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        persons[i]->display();
    }

    for (int i = 0; i < n; i++)
    {
        delete persons[i];
    }

    delete[] persons;

    return 0;
}