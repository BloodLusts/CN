#include <iostream>
const int max_size = 5;

using namespace std;

struct staticlist {
    int elements[max_size];
    int count;
};

void initializelist(staticlist& list) {
    list.count = 0;
}

bool isempty(const staticlist& list) {
    return list.count == 0;
}

bool isfull(const staticlist& list) {
    return list.count == max_size;
}

void addelement(staticlist& list, int value) {
    if (isfull(list)) {
        std::cout << "list is full. cannot add element." << std::endl;
        return;
    }
    
    list.elements[list.count] = value;
    list.count++;
}

void displaylist(const staticlist& list) {
    if (isempty(list)) {
        std::cout << "list is empty." << std::endl;
        return;
    }
    
    std::cout << "list elements: ";
    for (int i = 0; i < list.count; i++) {
        std::cout << list.elements[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    staticlist mylist;
    initializelist(mylist);

    int choice,n;
    do
    {
        cout<<"\nEnter the operation to perform: \n1]Add element.\n2]Display list.\n3]Exit.\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"\nEnter the element to add: ";
            cin>>n;
            addelement(mylist,n);
            displaylist(mylist);
            break;
        case 2: 
            displaylist(mylist);
            break;
        case 3:
            cout<<"\nExiting program!";
            break;
        
        default:
            cout<<"\nInvalid selection!";
            break;
        }
    } while (choice != 3);
    
    
    // addelement(mylist, 10);
    // addelement(mylist, 20);
    // addelement(mylist, 30);
    
    displaylist(mylist);
    
    return 0;
}
