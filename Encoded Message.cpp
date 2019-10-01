#include <iostream>
#include <string.h>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    int i,j,k,c;
    char Input[10010];
    char n[10010];
    char output[10010];
    int num;
    cin >> num;
    for(int x =0; x < num; x++){
    cin >> Input;
    n[0]=',';
    n[1]='\0';
    output[0]=',';
    output[1]='\0';
    strcat(n,Input);

    k=0;
    c=sqrt(strlen(Input));
    for(j=0;k<strlen(Input);j++){
        for(i=1;i<= c ;i++){
            output[k+i-1] = n[i*c-j];
        }
        k+=c;
    }
    output[strlen(Input)] = '\0';
    cout << output << endl;
    }
    return 0;
}
