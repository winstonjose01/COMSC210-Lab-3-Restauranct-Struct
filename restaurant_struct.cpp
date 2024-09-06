# include <iostream>
# include <limits>
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
     while (true) {
        cin >> temp.review;
        cin.ignore();

        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Invalid input, Please the correct info";
        }
        else{
            break;
            }
     }


}

void outputRestaurant (const Restaurant &rest){
    cout << "\t Name: " << rest.name;
    cout << "\t Type of Dining: " << rest.dining_type;
    cout << "\t Type of Cuisine: " << rest.dining_type;
    cout << "\t Type of Pricing/Value :" << rest.pricing_type;
    cout << "\t Review rating :" << rest.review;
    cout << '\n';

}