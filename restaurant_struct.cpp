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