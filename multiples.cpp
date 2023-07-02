//
//  multiples.cpp
//  homework4
//
//  Created by Sean Belingheri on 9/22/22.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, d, e, f, div1, div2;
    
    int a1, a2, b1, b2, c1, c2, d1, d2, e1, e2, f1, f2;
    
    int count1 = 0, count2 = 0, count3 = 0;
    
    cout<<"Enter in six integers: ";
    cin>>a>>b>>c>>d>>e>>f;
    cout<<"Enter in two divisors: ";
    cin>>div1>>div2;
    
    a1 = a % div1;
    a2 = a % div2;
    if (a1 == 0)
        count1 += 1;
    if (a2 == 0)
        count2 += 1;
    if (a1 == 0 && a2 == 0)
        count3 += 1;
    
    b1 = b % div1;
    b2 = b % div2;
    if (b1 == 0)
        count1 += 1;
    if (b2 == 0)
        count2 += 1;
    if (b1 == 0 && b2 == 0)
        count3 += 1;
    
    c1 = c % div1;
    c2 = c % div2;
    if (c1 == 0)
        count1 += 1;
    if (c2 == 0)
        count2 += 1;
    if (c1 == 0 && c2 == 0)
        count3 += 1;
    
    d1 = d % div1;
    d2 = d % div2;
    if (d1 == 0)
        count1 += 1;
    if (d2 == 0)
        count2 += 1;
    if (d1 == 0 && d2 == 0)
        count3 += 1;
    
    e1 = e % div1;
    e2 = e % div2;
    if (e1 == 0)
        count1 += 1;
    if (e2 == 0)
        count2 += 1;
    if (e1 == 0 && e2 == 0)
        count3 += 1;
    
    f1 = f % div1;
    f2 = f % div2;
    if (f1 == 0)
        count1 += 1;
    if (f2 == 0)
        count2 += 1;
    if (f1 == 0 && f2 == 0)
        count3 += 1;
    
    if (count1 == 1)
        cout<<count1<<" number is divisible by "<<div1<<endl;
    else
        cout<<count1<<" numbers are divisible by "<<div1<<endl;
    
    if (count2 == 1)
        cout<<count2<<" number is divisible by "<<div2<<endl;
    else
        cout<<count2<<" numbers are divisible by "<<div2<<endl;
    
    if (count3 == 1)
        cout<<count3<<" number is divisible by both"<<endl;
    else
        cout<<count3<<" number are divisible by both"<<endl;
    
    return 0;
    
}
