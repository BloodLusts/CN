#include <iostream>
using namespace std;

class person {
private:
    string name;
    string address;
    string phone;
    string DOB;

public:
    void setname(string n){
        name = n;
    }

    string getname(){
        return name;
    }

    void setadd(string a){
        address = a;
    }

    string getadd(){
        return address;
    }

    void setphone(string p){
        phone = p;
    }

    string getphone(){
        return phone;
    }

    void setdob(string d){
        DOB = d;
    }

    string getdob(){
        return DOB;
    }
};

class student {
private:
    string classs;
    string PRN;
    float avg_marks;

public:
    void setclass(string c){
        classs = c;
    }

    string getclass(){
        return classs;
    }

    void setprn(string x){
        PRN = x;
    }

    string getprn(){
        return PRN;
    }

    void setavg(float x){
        avg_marks = x;
    }

    float getavg(){
        return avg_marks;
    }  
};

int main() {
    string n, a, p, d;
    person p1;

    cout << "Enter the details of person:";

    cout << "\nNAME: ";
    getline(cin, n);
    p1.setname(n);

    cout << "ADDRESS: ";
    getline(cin, a);
    p1.setadd(a);

    cout << "PHONE: ";
    getline(cin, p);
    p1.setphone(p);

    cout << "DOB: ";
    getline(cin, d);
    p1.setdob(d);

    cout << "\nDetails of the person:" << endl;
    cout << "Name: " << p1.getname() << endl;
    cout << "Address: " << p1.getadd() << endl;
    cout << "Phone: " << p1.getphone() << endl;
    cout << "DOB: " << p1.getdob() << endl;

    student s1;

    cout << "\nEnter details for student:";

    string m1, m2;
    float y;

    cout << "\nCLASS: ";
    getline(cin, m1);
    s1.setclass(m1);

    cout << "PRN: ";
    getline(cin, m2);
    s1.setprn(m2);

    cout << "Average marks: ";
    cin >> y;
    s1.setavg(y);

    cout << "\nSTUDENT DETAILS:" << endl;
    cout << "CLASS: " << s1.getclass() << endl;
    cout << "PRN: " << s1.getprn() << endl;
    cout << "AVERAGE MARKS: " << s1.getavg() << endl;

    return 0;
}
