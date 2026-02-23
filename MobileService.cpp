#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double planA = 39.99;
    double planB = 59.99;
    double planC = 79.99;
    double limitA = 2.0;
    double limitB = 8.0;
    double additional = 8.00;

    string name;
    char plan;
    double usage;
    double totalDue = 0.0;
    double costA;
    double costB;
    double costC;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter plan (A,B,C): ";
    cin >> plan;
    cout << "How much gigabytes was used: ";
    cin >> usage;
    
    cout<< fixed << setprecision(2);
    cout << name << " Bill"<<endl;
    cout << "Plan: "<<plan<<endl;
    cout << "Data Used: " << usage <<endl;

    costA = (planA + (usage - limitA)) * additional;
    costB = (planB + (usage - limitB)) * additional;
    costC = planC;

    switch(plan){
        case 'A':
            totalDue = costA;
            cout << "Total Amount Due: $"<<totalDue<<endl;
            if(costB < costA){
                cout<<"You would save $" << (costA - costB) << " if you purchased Plan B."<< endl;
            }
            if (costC < costA){
                cout << "You would save $" << (costA - costC) << " if you purchased Plan C. "<< endl;
            }
            break;
        case 'B':
            totalDue = costB;
            cout << "Total Amount Due: $"<<totalDue<<endl;
            if (costC< costB){
                cout << "You would save $"<< (costB - costC)<< " if you purchased Plan C."<<endl;
            }
            break;
        case 'C':
            totalDue = costC;
            cout << "Total Amount Due: $"<<totalDue<<endl;
            break;
        
        default:
            cout << "Invalid char entered."<<endl;
        
    return 0;


    }

}