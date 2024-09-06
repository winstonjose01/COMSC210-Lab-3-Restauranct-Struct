# include <iostream>
# include <limits>
# include <iomanip>
using namespace std;

struct Restaurant {
    string name;
    string dining_type; //Fast-food, Casual, Coffee-Shop, 
    string cuisine_type; // Mexican, Chinese, etc.
    string pricing_type; // Budget, Mid-range, Fine-dining
    int review;

};

Restaurant populateRestaurant();
void outputRestaurant(const Restaurant &);
void printHeader();

int main() {
    //Create 4 Restaurant object and populate
    Restaurant myRestaurant1 = populateRestaurant();
    //Restaurant myRestaurant2 = populateRestaurant();
    //Restaurant myRestaurant3 = populateRestaurant();
    //Restaurant myRestaurant4 = populateRestaurant();
    printHeader();
    outputRestaurant(myRestaurant1);
    //outputRestaurant(myRestaurant2);
    //outputRestaurant(myRestaurant3);
    //outputRestaurant(myRestaurant4);

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
     cout << "Enter the pricing value for this restaurant: ";
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
    return temp;
}

void printHeader (){
    cout << left 
        << setw(20) << "Name" 
        << setw(22) << "Dining Type" 
        << setw(20) << "Cuisine" 
        << setw(20) << "Price/Value" 
        << setw(20) <<"Rating" 
        << endl;
    cout << left 
        << setw(20) << "----" 
        << setw(22) << "-----------" 
        << setw(20) << "--------" 
        << setw(20) << "----------" 
        << setw(20) << "------" 
        << endl;
}


void outputRestaurant (const Restaurant &rest){
    cout << left 
        << setw(20) << rest.name 
        << setw(22) << rest.dining_type 
        << setw(20) << rest.cuisine_type 
        << setw(20) << rest.pricing_type 
        << setw(20)<< rest.review 
        << endl;

}