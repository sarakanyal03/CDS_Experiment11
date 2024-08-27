# Experiment 11
# AIM
To study and implement classes and objects
# THEORY 
CLASS : A class is a user-defined data type that serves as a blueprint for creating objects. It defines attributes (data members) and behaviors (member functions) that the objects created from the class will have.
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
# CODES & OUTPUT
* CODE 11A:
```
   # include<iostream>
  using namespace std;
  class cuboid
  {
    public:
    double h = 2.0;
    double b = 3.0;
    double l = 4.0;
  };
  int main()
  {
  cuboid c1;
  double vol = c1.h * c1.b * c1.l;
  cout<<"Volume "<<vol<<endl;
  }
```  
 

 OUTPUT 11A:
 ![EXP11A](https://github.com/sarakanyal03/CDS_Experiment11/blob/main/11A.png )
* CODE 11B:
```
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 2.0,b = 3.0,l = 4.0;
    double volume()
    {
        double vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}
```
  OUTPUT 11B:
  ![EXP11B](https://github.com/sarakanyal03/CDS_Experiment11/blob/main/11B.png)
* CODE 11C:
```
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 10.0,b = 20.0,l = 3.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}
```
  OUTPUT 11C:
  ![EXP11C](https://github.com/sarakanyal03/CDS_Experiment11/blob/main/11C.png )
* CODE 11D:
```
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 10.0,b = 20.0,l = 3.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    double v = c1.volume();
    c1.disp(v);
  
}
```
  OUTPUT 11D:
  ![EXP11D](https://github.com/sarakanyal03/CDS_Experiment11/blob/main/11D.png )
* CODE 11E:
```
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h,b,l;
    void input()
    {
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>>b;
        cout<<"Enter the height: ";
        cin>>h;
    }
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    c1.input();
    double v = c1.volume();
    c1.disp(v);
  
}
```
  OUTPUT 11E:
  ![EXP11E](https://github.com/sarakanyal03/CDS_Experiment11/blob/main/11E.png)
# CONCLUSION 
In conclusion, you may create programs that are modular, reusable, and easy to maintain by learning classes and objects in C++. Improved code structure and abstraction are encouraged by enclosing data and functions inside classes, which results in software that is more scalable and durable. In addition to improving your programming abilities, learning how to build classes and objects in C++ provides a solid basis for understanding more complex OOP ideas like inheritance, polymorphism, and encapsulation. The concepts of classes and objects will become increasingly important as you develop and improve your C++ projects since they are essential to producing software that is both effective and efficient.
