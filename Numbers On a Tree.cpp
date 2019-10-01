#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    string desc = "";
    int height, big, result, numL = 0;

    cin >> height;
     if (!cin.eof())
        cin >> desc;
    height += 1;
    big = pow(2, height);
    result = big;

    if(desc != ""){

    int cur = 1;
    for ( char c : desc )
        cur = cur*2 + (c=='R');

    result -= cur;
    
    cout << result;

    }
    else 
        cout << (big - 1) ;



    return 0;
}
