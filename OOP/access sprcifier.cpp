 #include <iostream>



using namespace std;



class Base {

private:

    int privateVar;



protected:

    int protectedVar;



public:

    int publicVar;



    // Constructor

    Base() {

        privateVar = 1;

        protectedVar = 2;

        publicVar = 3;

    }



    // Public method to access private variable

    void showPrivate() {

        cout << "Private variable: " << privateVar << endl;

    }



    // Public method to access protected variable

    void showProtected() {

        cout << "Protected variable: " << protectedVar << endl;

    }



    // Public method to access public variable

    void showPublic() {

        cout << "Public variable: " << publicVar << endl;

    }

};



class Derived : public Base {

public:

    void showInherited() {

        // Can access protectedVar directly because it's protected

        cout << "Protected variable (inherited): " << protectedVar << endl;



        // Can access publicVar directly because it's public

        cout << "Public variable (inherited): " << publicVar << endl;

    }

};



int main() {

    Base baseObj;

    Derived derivedObj;



    cout << "Accessing members through base object:" << endl;

    baseObj.showPrivate();    // Accessing private member through public method

    baseObj.showProtected();  // Accessing protected member through public method

    baseObj.showPublic();     // Accessing public member through public method



    cout << "\nAccessing members through derived object:" << endl;

    derivedObj.showInherited();  // Accessing inherited protected and public members



    // Direct access

    cout << "\nDirect access to public member of base object: " << baseObj.publicVar << endl;



    // The following lines will cause compilation errors because privateVar is private and protectedVar is protected:

    // cout << baseObj.privateVar << endl;

    // cout << baseObj.protectedVar << endl;



    return 0;

}

