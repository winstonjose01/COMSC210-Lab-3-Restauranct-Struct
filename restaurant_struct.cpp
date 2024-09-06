// COMSC-210 | Lab 3 | Winston Jose
// https://github.com/winstonjose01/COMSC210-Lab-3-Restauranct-Struct

# include <iostream>
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
    //Create 4 Restaurant object and populate with user input
    cout << "Enter information for the first restaurant\n";
    //Pu
    Restaurant myRestaurant1 = populateRestaurant();
    cout << "\n------------------------------------------------";
    cout << "\nEnter information for the second restaurant\n";
    Restaurant myRestaurant2 = populateRestaurant();
    cout << "\n------------------------------------------------";
    cout << "\nEnter information for the third restaurant\n";
    Restaurant myRestaurant3 = populateRestaurant();
    cout << "\n------------------------------------------------";
    cout << "\nEnter information for the fourth restaurant\n";
    Restaurant myRestaurant4 = populateRestaurant();
    printHeader();
    outputRestaurant(myRestaurant1);
    outputRestaurant(myRestaurant2);
    outputRestaurant(myRestaurant3);
    outputRestaurant(myRestaurant4);

return 0;
}

// populateRestaurant() prompts the user for input to populate the structs data
// arguments: no arguments
// returns: returns a struct
Restaurant populateRestaurant() {
    Restaurant temp;
    int choice_type;
    int choice_value;
    // Prompts and assigns the name of the restaurant
    cout << "Enter the name of the restaurant: ";
    getline(cin,temp.name);

    // Display options and assigns the type of establishment
    // Contains validation the input is a number between 1-5
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
        default: temp.dining_type = "(No input)";
            break;
    }
    cin.ignore();
    
    //Prompts and assigns the type of cuisines
    cout << "\nEnter the type of cuisine: ";
    getline(cin, temp.cuisine_type);

    // Display options and assigns the pricing values
    // Contains validation the input is a number between 1-3
    cout << "\nEnter the pricing value for this restaurant: ";
    cout << "\n1: Fine-Dining ($$$)\n" << "2: Mid-Range($$)\n" << "3: Budget($)\n" << ">> ";
    while(true){
        cin >> choice_value;
        cin.ignore();
        switch(choice_value){
            case 1: temp.pricing_type = "$$$";
                break;
            case 2: temp.pricing_type = "$$";
                break;
            case 3: temp.pricing_type = "$";
                break;
            default: temp.pricing_type = "(No_input)";
            break;
        }
        if (cin.fail()){
            cin.clear();
            cin.ignore();
            cout << "Invalid input, Please the enter a number: ";
        }
        else if (choice_value < 0 || choice_value > 3) {
            cout << "Invalid input, Please enter a number between 1 - 3: ";
            }
        else{break;}
    };

    // Prompts and assigns the rating values
    // Contains validation the input is a number between 1-5
    cout << "\nEnter the review rating (1 - 5) for this restaurant: ";
    while (true) {
        cin >> temp.review;
        cin.ignore();
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout << "Invalid input, Please enter a number";
        }
        else if (temp.review < 0 || temp.review > 5) {
            cout << "Invalid input, Please enter a number between 1 - 5: ";
            }
        else{break;}
        }
    return temp;
}

// printHeader() prints the header titles for the output display table
// arguments: no arguments
// returns: no return parameters
void printHeader() {
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

// outputRestaurant() prints the struct's data in a table format
// arguments: struct argument 'rest' of type Restaurant
// returns: no returns
void outputRestaurant (const Restaurant &rest){
    cout << left 
        << setw(20) << rest.name 
        << setw(22) << rest.dining_type 
        << setw(20) << rest.cuisine_type 
        << setw(20) << rest.pricing_type 
        << setw(20)<< rest.review 
        << endl;

}