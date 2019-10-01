#include <iostream>
#include <math.h>
using namespace std;

unsigned GetNumberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}
int main()
{
    int L,D,X,N,M,i,j;
    N =0;
    M=0;
    cin >> L >> D >> X;
    int test;
    for(i=L;i<D;i++,N=0){
        int digits= GetNumberOfDigits(i);
        for(j=0;j<digits;j++){
            N+= (i/((int)pow(10,j))) %10;
         }
         if(N==X)
            break;
    }
    N=i;
    for(i=D;i>L;i--,M=0){
        int digits= GetNumberOfDigits(i);
        for(j=0;j<40;j++){
            test =M;
            M+= (i/((int)pow(10,j))) %10;
         }
         if(M==X)
            break;
    }
    M=i;
    if (M==1000)
        M= 10000;
    cout << N << endl << M << endl;


    return 0;
}
