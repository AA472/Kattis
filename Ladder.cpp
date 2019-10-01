#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.14159265359
using namespace std;

int main()
{

    int h;
    double ladder;
    double v;

    cin >> h;
    cin >> v;
    v = v/180 * PI;

   ladder = h/sin(v);

   cout << (int) ladder + 1 <<flush;







    return 0;
}
