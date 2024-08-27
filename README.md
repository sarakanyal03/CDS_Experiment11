# Experiment 11
# AIM
To study and implement classes and objects
# Theory 
1. A class is a user-defined data type that serves as a blueprint for creating objects. It defines attributes (data members) and behaviors (member functions) that the objects created from the class will have.
2. Basic Structure of a Class
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

3. Components of a Class
Access Specifiers: Define the accessibility of class members. The common access specifiers are:
* public: Members are accessible from outside the class.
* private: Members are accessible only within the class (default access specifier).
* protected: Members are accessible within the class and by derived classes.
* Data Members: Variables that store the data or attributes of an object. For example, int dataMember1.
* Member Functions: Functions defined inside the class that operate on the data members. For example, void memberFunction().
