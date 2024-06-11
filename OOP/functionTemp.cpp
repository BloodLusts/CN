#include<iostream>

using namespace std;

template<typename T>
int linearsearch(int n,T *arr,T key){
    for(int i=0;i<n;i++){
        if(arr[i] == key)
        return i+1;
    }
    return 0;
}

int main(){
    int n;
    char ckey;
    cout<<"\nEnter the number of characters in list: ";
    cin>>n;
    cout<<"\nEnter the characters: \n";
    char carr[n];
    for(int i=0;i<n;i++){
        cin>>carr[i];
    }
    cout<<"\nEnter the key to find :";
    cin>>ckey;
    int x = linearsearch(n,carr,ckey);
    if(x!=0)
    cout<<"\nKey is found at index : "<<x<<endl;
    else
    cout<<"\nKey not found! "<<endl;

    return 0;
}