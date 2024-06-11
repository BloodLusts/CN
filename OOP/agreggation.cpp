#include <iostream>
#include <string>
#include <vector>

using namespace std;

class shop;
class shoppingmall;

class shop 
{
private:
    string name;
public:
    shop( string shopname) {
        name = shopname;
    }

    string getname()  
    {
        return name;
    }
};

class shoppingmall {
private:
    string name;
    vector<shop*> shops;

public:
    shoppingmall( string mallname) {
        name = mallname;
    }

    void addshop( string shopname) 
    {
        // Dynamically allocate memory for shop object
        shop* newShop = new shop(shopname);
        shops.push_back(newShop);
    }

    void displayshops() 
    {
        cout << "shops in " << name << ":\n";
        for (size_t i = 0; i < shops.size(); ++i)
        {
            cout << "- " << shops[i]->getname() << "\n";
        }
    }

    // Destructor to clean up dynamically allocated memory
//     ~shoppingmall() {
//         for (size_t i = 0; i < shops.size(); ++i) {
//             delete shops[i];
//         }
//         shops.clear();
//     }
};

int main()
{
    string shopName;

    // Create shopping mall
    shoppingmall mall("supermall");

    // Input shop names from user
    cout << "Enter shop names (enter 'done' to finish):\n";
    while (true) {
        cout << "Shop name: ";
        getline(cin, shopName);

        if (shopName == "done")
            break;

        mall.addshop(shopName);
    }

    // Display shops
    mall.displayshops();

    return 0;
}
