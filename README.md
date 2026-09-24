# C++ OOP Practical Questions

This project contains solutions for five C++ Object-Oriented Programming
practical questions. The questions cover classes, objects, constructors,
encapsulation, inheritance, virtual functions, polymorphism, abstract
classes, and pure virtual functions.

## Question 1 --- Book Class

Create a `Book` class with attributes such as `title`, `author`, and
`publishedYear`. Create an array of `Book` objects and access the
attributes of each object.

**Concepts covered:** - Classes and objects - Array of objects -
Accessing object attributes

### Screenshot

Add the screenshot of the Q1 program/output below:

![Question 1 Screenshot](screenshots/program-1.png)

------------------------------------------------------------------------

## Question 2 --- Person Class

Create a `Person` class with private attributes `name`, `age`, and
`address`. Use a parameterized constructor to initialize the attributes.
Create `N` person objects and display their details.

**Concepts covered:** - Encapsulation - Private data members -
Parameterized constructor - Multiple objects - Dynamic object creation

### Screenshot

Add the screenshot of the Q2 program/output below:

![Question 2 Screenshot](screenshots/program-2.png)

------------------------------------------------------------------------

## Question 3 --- Animal Inheritance

Create a base class `Animal` containing animal information. Derive two
classes, `Dog` and `Cat`, from `Animal`. Implement methods for producing
the specific sound of each animal.

**Concepts covered:** - Inheritance - Base class and derived classes -
Method implementation - Code reuse

### Screenshot

Add the screenshot of the Q3 program/output below:

![Question 3 Screenshot](screenshots/program-3.png)

------------------------------------------------------------------------

## Question 4 --- Animal Polymorphism

Extend the `Animal` hierarchy by adding a virtual `displayDetails()`
function. Override this function in the `Dog` and `Cat` classes.

Create an array of `Animal` pointers containing objects of different
derived classes and call `displayDetails()` for each object.

**Concepts covered:** - Virtual functions - Function overriding -
Base-class pointers - Runtime polymorphism

### Screenshot

Add the screenshot of the Q4 program/output below:

![Question 4 Screenshot](screenshots/program-4.png)

------------------------------------------------------------------------

## Question 5 --- Shape Abstraction

Create an abstract `Shape` class with pure virtual functions `area()`
and `draw()`. Implement `Circle` and `Rectangle` classes that inherit
from `Shape`. Create an array of `Shape` pointers and use it to call the
`area()` and `draw()` methods for both shapes.

**Concepts covered:** - Abstract classes - Pure virtual functions -
Inheritance - Runtime polymorphism - Base-class pointer array

### Screenshot

Add the screenshot of the Q5 program/output below:

![Question 5 Screenshot](screenshots/program-5.png)

------------------------------------------------------------------------

## Conclusion

These five practical programs demonstrate the fundamental concepts of
Object-Oriented Programming in C++. The exercises progress from basic
classes and objects to inheritance, virtual functions, runtime
polymorphism, abstract classes, and pure virtual functions.
