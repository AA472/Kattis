#include <iostream>
#include<math.h>
#include <stdio.h>


using namespace std;

int main()
{
    int numbers;
    int i,j;
    double sum =0;

    cin >> i;

    for(j=0; j<i; j++){
        cin >> numbers;
        int f=  numbers/10;
        int k=  numbers%10;
        sum+=  pow(f,k);

    }
    int okay = sum;
    printf("%d",okay);
    return 0;
}
