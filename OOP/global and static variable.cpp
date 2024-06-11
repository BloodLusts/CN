 #include <iostream>



using namespace std;



int globalVar = 0; // Global variable



class MyClass {

public:

    static int staticVar; // Static variable

    int instanceVar;



    MyClass(int val) : instanceVar(val) {}



    static void incrementStaticVar() {

        staticVar++;

    }



    void display() {

        cout << "Global Variable: " << globalVar << "\n";

        cout << "Static Variable: " << staticVar << "\n";

        cout << "Instance Variable: " << instanceVar << "\n";

    }

};



// Definition of the static variable

int MyClass::staticVar = 0;



void incrementGlobalVar() {

    globalVar++;

}



int main() {

    MyClass obj1(10);

    MyClass obj2(20);



    obj1.display();

    obj2.display();



    incrementGlobalVar();

    MyClass::incrementStaticVar();



    obj1.display();

    obj2.display();



    return 0;

}

