#include <iostream>
using namespace std;

class Shape
{
public:

    virtual void input() = 0;
    virtual void area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    void input()
    {
        cout << "Enter radius of Circle: ";
        cin >> radius;
    }
    void area()
    {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};
class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    void input()
    {
        cout << "Enter length of Rectangle: ";
        cin >> length;

        cout << "Enter width of Rectangle: ";
        cin >> width;
    }
    void area()
    {
        cout << "Rectangle Area: " << length * width << endl;
    }
    void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
};

int main()
{
    Circle circle;
    Rectangle rectangle;

    Shape *shapes[2];

    shapes[0] = &circle;
    shapes[1] = &rectangle;

    for(int i = 0; i < 2; i++)
    {
        shapes[i]->input();
        shapes[i]->area();
        shapes[i]->draw();

        cout << endl;
    }

    return 0;
}