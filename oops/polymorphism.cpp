/*
#include <iostream>
using namespace std;

class Print {
public:
    // Function to print an integer
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    // Function to print a double
    void display(double d) {
        cout << "Double: " << d << endl;
    }

    // Function to print a string
    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.display(5);         // Calls display(int)
    p.display(5.5);       // Calls display(double)
    p.display("Hello");   // Calls display(string)
    return 0;
}

*/


//operator overloading
/*
#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the base class function
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the base class function
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal animal;  // Base class pointer
    Dog d;
    Cat c;

    animal.sound();
    c.sound();
    d.sound();
    // animal = &d;
    // animal->sound();  // Calls Dog's sound()

    // animal = &c;
    // animal->sound();  // Calls Cat's sound()
    
    return 0;
}
*/



// function overloading 


#include <iostream>
using namespace std;

class MathOperations {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations math;
    
    // Calls add(int, int)
    cout << "Sum of 2 and 3: " << math.add(2, 3) << endl;
    
    // Calls add(double, double)
    cout << "Sum of 2.5 and 3.5: " << math.add(2.5, 3.5) << endl;
    
    return 0;
}
