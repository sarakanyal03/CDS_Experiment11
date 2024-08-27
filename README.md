# Experiment 11
# AIM
To study and implement classes and objects
# THEORY 
CLASS: A class is a user-defined data type that serves as a blueprint for creating objects. It defines attributes (data members) and behaviors (member functions) that the objects created from the class will have.
1. Basic Structure of a Class
Here's a basic structure of a class in C++:

```
#include <iostream>
using namespace std;

class ClassName {
    // Access Specifier
public: // or private or protected
    // Data Members (attributes)
    int dataMember1;
    float dataMember2;

    // Member Functions (methods)
    void memberFunction() {
        // Function implementation
        cout << "This is a member function." << endl;
    }
}
```

2. Components of a Class
Access Specifiers: Define the accessibility of class members. The common access specifiers are:
* public: Members are accessible from outside the class.
* private: Members are accessible only within the class (default access specifier).
* protected: Members are accessible within the class and by derived classes.
* Data Members: Variables that store the data or attributes of an object. For example, int dataMember1.
* Member Functions: Functions defined inside the class that operate on the data members. For example, void memberFunction().

OBJECTS : An object is a variable of a class type. It represents an entity with specific attributes (data) and behaviors (functions). Each object has its own copy of the class's data members.
1. Creating an Object
To create an object, you use the class name followed by the object name. Here's how you can do it:
```
ClassName objectName;
```
2. Accessing Members of an Object
You can access the data members and member functions of an object using the dot operator (.).
3. Memory Allocation
When you create an object, memory is allocated for the data members of the class. Each object has its own separate memory space for its data members.
