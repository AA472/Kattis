#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int A;
    int L;
    cin >> A >> L;
    int first = A*L;
    double anotherL=L;
    while(1) {
        double test= ((double) (first-1))/ A;
        if(test < (L-1))
            break;
        anotherL = (double)first/A;
        first--;
    }
    first++;
    cout << first;
    return 0;
}
