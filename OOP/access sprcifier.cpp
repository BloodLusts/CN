#include<iostream>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Base() {
        privateVar=1;
        protectedVar=2;
        publicVar=3;
    }

    void showPrivate() {
        cout<<"Private variable: "<<privateVar<<endl;
    }

    void showProtected() {
        cout<<"Protected variable: "<<protectedVar<<endl;
    }

    void showPublic() {
        cout<<"Public variable: "<<publicVar<<endl;
    }
};

class Derived:public Base {
public:
    void showInherited() {
        cout<<"Protected variable (inherited): "<<protectedVar<<endl;
        cout<<"Public variable (inherited): "<<publicVar<<endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout<<"Accessing members through base object:"<<endl;
    baseObj.showPrivate();
    baseObj.showProtected();
    baseObj.showPublic();

    cout<<"\nAccessing members through derived object:"<<endl;
    derivedObj.showInherited();

    cout<<"\nDirect access to public member of base object: "<<baseObj.publicVar<<endl;

    return 0;
}
