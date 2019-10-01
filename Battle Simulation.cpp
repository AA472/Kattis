#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    char input[1000001];
    scanf("%s",&input);
    string outp ="";
    int a = strlen(input);
    int i;
    for(i =0; i<a; i++){
         if(a-i>=3)
        {
            if(input[i]!=input[i+1]&&input[i+2]!=input[i+1]&&input[i]!=input[i+2])
            {
                outp+="C";
                i+=2;

                continue;
                }
                }
        if(input[i]== 'R'){
            outp+="S";
            }
        else if(input[i]== 'B'){
            outp+="K";
            }
        else if(input[i]== 'L'){
            outp+="H";
        }
        }
        cout << outp;

    return 0;
}
