#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    int index =1;
    char input[60];
    cin >> input;



    for(int i =0; i< strlen(input);i++){
        if(input[i] =='A' && (index == 1 || index == 2)){
            if (index==1)
                index = 2;
            else
                index =1;
        }
        if(input[i] =='B' && (index == 2 || index == 3)){
            if (index==2)
                index = 3;
            else
                index =2;
        }
        if(input[i] =='C' && (index == 1 || index == 3)){
            if (index==1)
                index = 3;
            else
                index =1;
        }
    }
    cout << index << endl;


    return 0;
}
