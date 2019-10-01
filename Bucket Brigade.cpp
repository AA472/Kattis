#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char k[100];
    while(scanf("%s",&k) !=EOF){
    int n = atoi(k);
    double v,x,f,t;
    cin  >> v >>x >> f >> t;
    int numbucket = v/x +1 ;
    double transferbucket = v/f;
    double output=0;
    if(n==1){
        output = 2*t*numbucket-t+(v*2/f);
    }
    else if(numbucket ==1){
        output = (n+1)*(v/f) + t *n;
    }
    else{
        output= (2*numbucket+(n-2))*t + (2*numbucket+(n-1))*((v/numbucket)/f);
    }

    printf("%.7lf\n",output);
    }
    return 0;
}
