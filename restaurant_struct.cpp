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
    cout << "Enter information for the first restaurant\n";
    Restaurant myRestaurant1 = populateRestaurant();
    cout << "\nEnter information for the second restaurant\n";
    //Restaurant myRestaurant2 = populateRestaurant();
    cout << "\nEnter information for the third restaurant\n";
    //Restaurant myRestaurant3 = populateRestaurant();
    cout << "\nEnter information for the fourth restaurant\n";
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
    int choice_type;
    int choice_value;
    
    cout << "Enter the name of the restaurant: ";
    getline(cin,temp.name);
    cout << "\nEnter the type of dining establishment: ";
    cout << "\n1: Fine-Dining\n" << "2: Casual-Dining\n" << "3: Fast-food\n" << "4: Buffet\n" << "5: Cafe\n" << ">> ";
    cin >> choice_type;
    switch(choice_type){
        case 1: temp.dining_type = "Fine-Dining"; 
        break;
        case 2: temp.dining_type = "Casual-Dining";
        break;
        case 3: temp.dining_type = "Fast-food";
        break;
        case 4: temp.dining_type = "Buffet";
        break;
        case 5: temp.dining_type = "Cafe";
        break;
        default: temp.dining_type = "No input";
        break;
    }
    cin.ignore();
    cout << "\nEnter the type of cuisine: ";
    getline(cin, temp.cuisine_type);
    cout << "\nEnter the pricing value for this restaurant: ";
    case ()
    getline(cin, temp.pricing_type);
    cout << "\nEnter the review rating (1 - 5) for this restaurant: ";
    while (true) {
        cin >> temp.review;
        cin.ignore();
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout << "Invalid input, Please the correct input";
        }
        else if (temp.review < 0 || temp.review > 5) {
            cout << "Invalid input, Please enter a number between 1 - 5: ";
            }
        else{break;}
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