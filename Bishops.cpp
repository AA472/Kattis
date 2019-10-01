#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctime>
#pragma comment(lib,"winmm.lib");

using namespace std;

int main()
{

    int i;
    int answer;
    char sizeBoard[10];
    int intsize =0;
        while(scanf("%s",&sizeBoard)!=EOF){
            intsize=  atoi(sizeBoard);
            if(intsize==1)
                answer =1;
            else if(intsize==0)
                answer =0;
            else
            answer = (intsize-1)*2;
            cout << answer << endl;
            }

    return 0;
}
