#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double C;
    int numLawns;
    cin >> C >> numLawns;
    double W[numLawns];
    double L[numLawns];
    int i;
    double totalsize=0;
    for(i=0;i<numLawns;i++){
        cin>> W[i];
        cin>> L[i];
        totalsize+= W[i]*L[i];
    }
    double output= totalsize*C;
    printf("%.6lf",output);

    return 0;
}
