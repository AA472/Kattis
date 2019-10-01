#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int A[2], B[2], C[2],AB[2],AC[2],BC[2],midpt[2];
    cin >> A[0] >> A[1] >> B[0] >> B[1] >> C[0] >> C[1];

    AB[0] = B[0] - A[0];
    AB[1] = B[1] - A[1];

    AC[0]= C[0] - A[0];
    AC[1]= C[1] - A[1];

    BC[0] = C[0] - B[0];
    BC[1] = C[1] - B[1];

    int distAB = pow(AB[0],2)+pow(AB[1],2);
    int distAC = pow(AC[0],2)+pow(AC[1],2);


    if(distAB>distAC){
        midpt[0] = C[0] -AC[0] - BC[0];
        midpt[1] = C[1] -AC[1] - BC[1];
        cout << midpt[0] << " " << midpt[1];
    }
    else if(distAC>distAB){
        midpt[0] = B[0] -AB[0] + BC[0];
        midpt[1] = B[1] -AB[1] + BC[1];
        cout << midpt[0] << " " << midpt[1];
    }
    else{
        midpt[0] = A[0] +AC[0] + AB[0];
        midpt[1] = A[1] +AC[1] + AB[1];
        cout << midpt[0] << " " << midpt[1];
    }




    return 0;
}
