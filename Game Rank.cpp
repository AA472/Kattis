#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char games[10005];
    fgets(games,10005,stdin);
    int ranking =25;
    int tot_stars =0;
    int i,j;
    int strlength = strlen(games);

    for(j =0; j<strlength-1; j++){
        if (tolower(games[j]) == 'w'){
            tot_stars ++;

            if(tolower(games[j-1])== 'w' && tolower(games [j-2]) =='w' && ranking >5)
                tot_stars++;

        }
        if(tot_stars >=3 && ranking ==25){
        tot_stars-=3;
        ranking-=1;
    }
        for(i=0;ranking > 20 && ranking <25 && tot_stars >= 2;i++){
            tot_stars  -=2;
            ranking --;
        }
        for(i=0;ranking <= 20 && ranking >15 && tot_stars >= 3;i++){
            tot_stars  -=3;
            ranking --;
        }


        for(i=0;ranking <= 15 && ranking >10 && tot_stars >= 4;i++){
            tot_stars  -=4;
            ranking --;
        }


        for(i=0;ranking <= 10&& ranking >1 && tot_stars >= 5;i++){
            tot_stars  -=5;
            ranking --;
        }
        if(ranking ==1 && tot_stars ==5){
            ranking =1000;
            break;
        }
        bool rank20;
        if(ranking ==20 && tot_stars == -1)
            rank20 =false;
        else
            rank20 =true;
        if (tolower(games[j]) == 'l' && ranking <21 &&rank20){
            tot_stars--;
            if (ranking < 20 && ranking >=15 && tot_stars == -2)
                {tot_stars = 1; ranking++;}
            if (ranking < 15 && ranking >=10 && tot_stars == -2)
               { tot_stars = 2; ranking++;}
            if (ranking < 10&& ranking >=1 && tot_stars == -2)
                {tot_stars = 3; ranking++;}

        }
    }

    if (ranking==1000)
        cout << "Legend" << endl;
    else
        cout << ranking << flush;


    return 0;
}
