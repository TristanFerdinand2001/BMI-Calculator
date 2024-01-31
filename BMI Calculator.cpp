#include <iostream>
using namespace std;

int main()
{
    int weight, height; //Allows program to perfrom input and output
    
    //prompt the user for their weight and height
    cout << "Enter your weight (lbs): ";
    cin >> weight;
    cout << "Enter your height (in): ";
    cin >> height;
    
    //calculate bmi rounds down due to int division
    int bmi = (weight * 703) / (height * height);
    
    //output users bmi
    cout << "\n Your BMI is: " << bmi << "\n\n"; 
    
    //display BMI inforamation in table 
    cout << "BMI Values\n";
    cout << "Underweight: less than 18.5\n";
    cout << "Normal between 18.5 and 24.9\n";
    cout << "Overweight: between 25 and 19.9\n";
    cout << "Obese: 30 or greater\n";
    
    return 0;
}
