// Student.h
#include <iostream>
#include <string>

using namespace std;

class Student {
private:  
    string name;
    int age;
    string hobby;

public:
    Student(string name, int age, string hobby)
    {
        this->name = name;
        this->age = age;
        this->hobby = hobby;
    }

    void getStudentinfo()
    {
        string name;
        string hobby;
        int age;
        
        cout  << "Name  : ";
        cin  >> name;
        cout << endl;
           
        cout  << "Age  : ";
        cin  >> age;
        cout << endl;
        
        cout  << "Hobby  : ";
        cin  >> hobby;
        cout << endl;
    
        this->name = name;
        this->age = age;
        this->hobby = hobby;
            
        
    }
            
    void introduce()
    {
           cout << "Hi I'm " << this -> name << ","  << this -> age << "years old" << "!" << endl;
           cout << "I love " <<  this-> hobby << endl;
    }
    
     

    // Add destructor or close the class definition appropriately
    ~Student() {
        // Destructor code if needed
    }
};