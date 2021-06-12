#include <iostream>
using namespace std;

// You are working on a ticketing system. A ticket costs $10.
// The office is running a discount campaign: each group of 5 people is getting a discount, which is a discount of the youngest age from the price of 5 tickets ($50 - youngest%).
// You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.



int main() {
    int ages[5];
    cout<<"Please input the ages of all of the people in your group of 5: ";
    
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    
    int lowest = ages[0];

    for(int i=0; i<5 ; i++){
        if(i != 4){
            if(ages[i+1] < lowest){
                lowest = ages[i+1];
                continue;
            }
        }
    }
    
    double decrease = 0.01 * (100-lowest);
    double discount = 50 * decrease;


    cout<<"The price of the tickets is"<<discount<<endl;








    return 0;
}
