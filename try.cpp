#include <iostream>
using namespace std;
int main() {

    int month;
    cout<<"Enter month: ";
    cin>>month;

    switch(month) {
        case 1:cout<<"January"<<endl;
            break;
            case 2:cout<<"February"<<endl;
            break;
            case 3:cout<<"March"<<endl;
            break;
            case 4:cout<<"April"<<endl;
            break;
            case 5:cout<<"May"<<endl;
            break;
        default:
            cout<<"Please enter the right values."<<endl;
    }








    return 0;
}