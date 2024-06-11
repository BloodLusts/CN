#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int choice;
    cout<<"Choose data type:\n1. int\n2. float\n3. char\nEnter your choice:";
    cin>>choice;

    switch (choice) {
        case 1: {
            int int1, int2;
            cout<<"Enter two integers:";
            cin>>int1>>int2;
            cout<<"Max of "<<int1<<" and "<<int2<<" is: "<<findMax(int1, int2)<<endl;
            break;
        }
        case 2: {
            float float1, float2;
            cout<<"Enter two floats:";
            cin>>float1>>float2;
            cout<<"Max of "<<float1<<" and "<<float2<<" is: "<<findMax(float1, float2)<<endl;
            break;
        }
        case 3: {
            char char1, char2;
            cout<<"Enter two characters:";
            cin>>char1>>char2;
            cout<<"Max of "<<char1<<" and "<<char2<<" is: "<<findMax(char1, char2)<<endl;
            break;
        }
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }

    return 0;
}
