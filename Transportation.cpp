#include <iostream>
using namespace std;

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
