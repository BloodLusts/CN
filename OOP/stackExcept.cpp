#include<iostream>
#include<vector>
#include<stdexcept>

using namespace std;

class Stack{
    private:
        vector<int> name;
        int size;
    public:
        Stack(int size):size(size){}

        void push(int value){
            if(isFull()){
                throw overflow_error(" : Stack overflow!");
            }
            name.push_back(value);
        }

        void display(){
            cout<<"\nUpdated stack is:";
            if(isEmpty()){
                throw underflow_error(" : Stack is empty!");
            }
            for(int i=0;i<name.size();i++){
                cout<<"["<<name[i]<<"]";
            }
            cout<<endl;
        }

        int pop(){
            if(isEmpty()){
                throw underflow_error(" : Stack underflow!");
            }
            int poped = name.back();
            name.pop_back();
            return poped;
        }

        bool isEmpty(){
            return name.empty();
        }

        bool isFull(){
            return name.size() >= size;
        }      

};

int main(){

    int n;
    cout<<"\nEnter the size: ";
    cin>>n;
    int choice;

    Stack S1(n);
    do{
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;


    try{
        switch (choice) 
        {
                case 1: 
                {
                    int value;
                    cout << "Enter value to push: ";
                    cin >> value;
                    S1.push(value);
                    cout << "Pushed " << value << " onto the stack.\n";
                    S1.display();
                    break;
                }
                case 2: 
                {
                    int value = S1.pop();
                    cout << "Popped " << value << " from the stack.\n";
                    S1.display();
                    break;
                }
                case 3:
                    S1.display();
                    break;

                case 4:
                    cout << "Exiting program.\n";
                    break;
                default:
                    cout << "Invalid choice! Please try again.\n";
                    break;
        }

    }   catch(const exception& ex){
        cerr<<"Exception"<<ex.what()<<endl;
    }
    }while(choice != 4);






    return 0;
}