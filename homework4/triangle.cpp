//
//  main.cpp
//  homework4
//
//  Created by Sean Belingheri on 9/22/22.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c;
    
    cout<<"Enter three side lenghts: ";
    cin>>a>>b>>c;
    
    a > (b+c) || b > (a+c) || c > (a+b) ?
        cout<<"A triangle is not possible."<<endl :
        cout<<"A triangle is possible."<<endl;
    return 0;
}
