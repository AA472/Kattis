#include <iostream>
#include <math.h>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,p;
    double answer =0;
    double x,y;
    while(1){
        cin >> x1;
        if(x1 == 0)
            break;
        cin >> y1 >> x2 >> y2 >> p;

        x = pow(abs(x1-x2),p);
        y = pow(abs(y1-y2),p);
        answer = pow((x+y),(1/p));
        printf("%.7lf\n",answer);
    }
    return 0;
}
