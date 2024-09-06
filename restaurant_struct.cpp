# include <iostream>
using namespace std;

struct Restaurant {
    string name;
    string dining_type;
    string cuisine_type; // Mexican, Chinese, etc.
    string pricing_type; // Budget, Mid-range, Fine-dining
    int review;

};

Restaurant populateRestaurant();
void outputRestaurant(const Restaurant &);

int main() {
    //Create a single Restaurant object and populate
    Restaurant myRestaurant = populateRestaurant();

return 0;
}

Restaurant populateRestaurant() {
    Restaurant temp;
     cout << "Enter the name of the restaurant: ";
     getline(cin,temp.name);
     cin.ignore();
     cout << "Enter the type of dining establishment: ";
     getline(cin, temp.dining_type);
     cout << "Enter the type of cuisine: ";
     getline(cin, temp.cuisine_type);
     cout << "Enter the pricing value for this restaurant ";
     getline(cin, temp.pricing_type);
     cout << "Enter the review rating (1 - 5) for this restaurant: ";
     cin >> temp.review;
     cin.ignore();

}

void outputRestaurant (const Restaurant &rest){
    
}