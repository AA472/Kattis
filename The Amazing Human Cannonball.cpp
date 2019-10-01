#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159265359
int main()
{
    int N;
    cin >> N;
    double v0 ,theta , x1, h1, h2;
    int i;
    const double G=9.81;
    for(i=0 ;i<N;i++){
        cin >> v0 >>theta >> x1 >> h1 >> h2;
        double height;
        theta = theta * PI / 180;
        double time = x1/(cos(theta)*v0);
        height = time * v0 *sin(theta) - ((time*time*G)/2);
        if(height > h1+1 && height < h2-1)
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;


    }
    return 0;
}
