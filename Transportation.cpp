#include <iostream>
using namespace std;


//A bus can transport 50 passengers at once.
//Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.



int main() {
    int passengers;
    cout<<"Please input the number of passengers waiting at the bus station: ";
    cin>>passengers;

    while(passengers >= 50){
        passengers -= 50;
    }
    cout<<"There will be "<<50-passengers<<" remaining at the final bus station...";    
    return 0;
}
