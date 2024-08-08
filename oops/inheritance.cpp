/*
#include<bits/stdc++.h>
using namespace std;

class Dog{
    public:
    void bark(){
        cout<<"barking "<<endl;
    }
};
class Cat: public Dog {
    public:
    void mio(){
        cout<<"mio mio "<<endl;
    }

};

int main(){
    Cat a;
    a.mio();
    a.bark();

}
*/
/*
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat(); // Inherited method
    myDog.bark(); // Derived class method
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine starts." << endl;
    }
};

class Wheels {
public:
    void roll() {
        cout << "Wheels roll." << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car drives." << endl;
    }
};

int main() {
    Car myCar;
    myCar.start(); // Inherited from Engine
    myCar.roll(); // Inherited from Wheels
    myCar.drive(); // Derived class method
    return 0;
}
*/


/*
#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine starts." << endl;
    }
};

class Wheels {
public:
    void roll() {
        cout << "Wheels roll." << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car drives." << endl;
    }
};

int main() {
    Car myCar;
    myCar.start(); // Inherited from Engine
    myCar.roll(); // Inherited from Wheels
    myCar.drive(); // Derived class method
    return 0;
}
*/


/*
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "This mammal breathes air." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat(); // Inherited from Animal
    myDog.breathe(); // Inherited from Mammal
    myDog.bark(); // Derived class method
    return 0;
}

*/

/*
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    myDog.eat(); // Inherited method
    myDog.bark(); // Derived class method

    myCat.eat(); // Inherited method
    myCat.meow(); // Derived class method

    return 0;
}

*/




/*
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "This mammal breathes air." << endl;
    }
};

class Bird {
public:
    void fly() {
        cout << "This bird can fly." << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void echoLocate() {
        cout << "The bat uses echolocation." << endl;
    }
};

int main() {
    Bat myBat;
    myBat.eat(); // Inherited from Animal through Mammal
    myBat.breathe(); // Inherited from Mammal
    myBat.fly(); // Inherited from Bird
    myBat.echoLocate(); // Derived class method

    return 0;
}
 */