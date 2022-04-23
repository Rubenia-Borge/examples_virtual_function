#include<iostream>
using namespace std;
 
class Addition
{
public:
    virtual void print ()
    {
      int x = 100, y = 140;
      cout<< "print() function from the base class: " << x + y <<endl;
    }
 
    void display ()
    { cout<< "display() function in the base class." <<endl; }
};
 
class Subtraction: public Addition
{
public:
    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
    {
      int x = 20,y = 10;      
      cout<< "print() function from the derived class: " << x - y <<endl; }
 
    void display ()
    { cout<< "display() function from the derived class." <<endl; }
};
 

int main()
{
    Addition *aptr;
    Subtraction s;
    aptr = &s;
     
    // This is how to call the function print from the base class
    // From both an object from the base class and an object from the derived class
    cout << "Calling the print() function from the base class." << endl;
    cout << "Base class object accessing print function in the base class." << endl;
    aptr->Addition::print();    
   
    cout << "Derived class object accessing print function in the base class." << endl;
    s.Addition::print();

    cout << endl;

    cout << "A virtual function allows a Derived class to call its own version of a function." << endl;

    // Calling virtual function, binded at runtime (Run Time polymorphism)
    cout << "Here, the virtual function is overriden by the version in the derived class." << endl;
    aptr->print();
     
    // Caling a non-virtual function, binded at compile time (Compile Time polymorphism)
    cout << "\nNow we call display() a function that is not a virtual function.\n";
    aptr->display();

    cout << endl;
 
    return 0;
}