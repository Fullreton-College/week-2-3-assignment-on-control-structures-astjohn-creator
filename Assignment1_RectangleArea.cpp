#include <iostream>

using namespace std;

int main()
{
	double length1;
    cout<<"Enter length 1: ";
    cin >> length1;
    double width1;
    cout<<"Enter width 1: ";
    cin >> width1;

    double area1;
    area1 = length1 * width1;
    
    double length2;
    cout<<"Enter length 2: ";
    cin >> length2;
    double width2;
    cout<<"Enter width 2: ";
    cin >> width2;

    double area2;
    area2 = length2 * width2;

    if( area1 > area2 )
    {
        cout<<"The 1st rectangle has the greater area"<<endl;

    }
    else if(area1 < area2)
    {
        cout<<"The 2nd recangle has the greater area"<<endl;
    }
    else
    {
        cout<<"The areas are the same"<<endl;
    }


    return 0;
}

