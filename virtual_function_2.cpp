#include <iostream>  
using namespace std;  
class BaseClassA  
{  
   int baseData = 100;  
   public:  
     virtual void display()  
     {  
        cout << "Data in base class: " << baseData << endl;  
     }  
};  

class DerivedClassB: public BaseClassA  
{  
    int derivedData = 200;  
    public:  
    void display()  
    {  
        cout << "Data in derived class: " << derivedData << endl;  
    }  
};  
int main()  
{  
    BaseClassA *baseClassObject;  // A pointer to BaseClassA
    DerivedClassB derivedClassObject;  // An object of type DerivedClassB

        
    baseClassObject = &derivedClassObject;  //base class object pointer gets the address of the derived class object
    baseClassObject->display(); // Function overriding happens and baseClassObject uses the display() function in the derived class and not the one in the base class.
    return 0;  
}  
