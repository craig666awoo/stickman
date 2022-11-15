#include<iostream>
#include<string>
using namespace std;

int main(){
//area of triangle
    cout<<"AREA OF A TRIANGLE \n\n";

    int base, height, hypotenuse;
    float area, perimeter;
    cout<<"Enter your base: ";
    cin>>base;
    cout<<"Enter your height: ";
    cin>>height;
    cout<<"Enter your hypotenuse: ";
    cin>>hypotenuse;
    area = 0.5*base*height;
    perimeter = base+height+hypotenuse;

    cout<<"The area of the triangle is "<<area<<"\n";
    cout<<"The perimeter of the triangle is "<<perimeter<<"\n\n";
//profit
    cout<<"PROFIT OF A MOTOR VEHICLE \n\n";

    float bp, sp, profit;
    cout<<"Enter the buying price: ";
    cin>>bp;
    cout<<"Enter the selling price: ";
    cin>>sp;
    profit = sp-bp;
    cout<<"The profit made is "<<profit<<"\n\n";
//profile
    cout<<"MY PROFILE \n\n";

    string firstName;
    cout<<"Enter your First name ";
    getline(cin, firstName);

    string lastName;
    cout<<"Enter your Last name ";
    getline(cin, lastName);

    string fullName;
    cout<<"Enter your Full name ";
    getline(cin, fullName);

    string favMeal;
    cout<<"Enter your Favourite meal ";
    getline(cin, favMeal);

    string favMovie;
    cout<<"Enter your Favourite movie ";
    getline(cin, favMovie);

    cout<<"Your First name: "<<firstName<<"\n";
    cout<<"Your Last name: "<<lastName<<"\n";
    cout<<"Your Full name: "<<fullName<<"\n";
    cout<<"Your Favourite meal: "<<favMeal<<"\n";
    cout<<"Your Favourite movie: "<<favMovie<<"\n";


}