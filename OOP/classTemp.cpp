#include<iostream>
using namespace std;

template<typename T>
class Stack{
    private:
        int top;
        int size;
        T* a;
    
    public:
        Stack(){
            top =-1;
        }
        Stack(int x){
            top = -1;
            size = x;
            a = new T[size];
        }
        void push(T x){
            if(isFull())
            cout<<"\nStack is full.";
            else
            {
                top++;
                a[top] = x;
            }

        }
        T pop(){
            if(isEmpty()){
            cout<<"\nCannot pop!";
            return T();
            }
            else{  
            return a[top--];
            }
        }

        void display(){
            if(isEmpty())
            cout<<"\nStack is empty.";
            else
            {
                cout<<"\nUpdated stack is: ";
                for(int i=0;i<=top;i++){
                    cout<<"["<<a[i]<<"]";
                }

            }cout<<endl;
        }
        T peak(){
            if(isEmpty()){
            cout<<"\nStack is empty.";
            return T();
            }
            else
            return a[top];
        }
        bool isEmpty(){
            return top<0;
        }
        bool isFull(){
            return top==size-1;
        }
};

template<typename T>
void Stackoop(Stack<T>& s)
{
    int choice = 0;
    while (choice != 5) 
    {
        cout << "\n1. PUSH\n2. POP\n3. DISPLAY\n4. PEEK\n5. EXIT\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: 
                cout<<"\nEnter the element to push: ";
                T x;
                cin>>x;
                s.push(x);
                break;
            case 2: 
                T popped;
                popped = s.pop();
                cout<<"\nPopped element is "<<popped;
                break;
            case 4:
                cout<<"\nTop element is : "<<s.peak();
                break;
            case 3: 
                s.display();
                break;
            case 5:
                cout<<"\nExiting program!";
                break;
            default:
                cout << "Invalid choice!\n";
                break;
        }
    }
}

int main() {
    int n;
    cout << "\nEnter the size of stack: ";
    cin >> n;

    int stackType;
    cout << "\nSelect stack type:\n1. Int\n2. Float\n3. Char\n";
    cout << "Enter your choice: ";
    cin >> stackType;

    switch (stackType) {
        case 1: {
           Stack<int> Istack(n);
           Stackoop(Istack);
           break;
        }
        case 2: {
            Stack<float> Fstack(n);
            Stackoop(Fstack);
            break;
        }
        case 3: {
           Stack<char> Sstack(n);
           Stackoop(Sstack);
           break;
        }
        default:
            cout << "Invalid stack type!\n";
    }

    return 0;
}