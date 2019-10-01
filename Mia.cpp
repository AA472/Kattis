#include <iostream>

using namespace std;

int totalpoints(int d1, int d2);
int main()
{
    int s0,s1,r0,r1;
    int player1,player2;
    while(1){
        cin >> s0 >> s1 >> r0 >> r1;
        if(s0==0)
            break;
        player1 = totalpoints(s0,s1);
        player2 = totalpoints(r0,r1);

        if(player1>player2)
            cout << "Player 1 wins." << endl;
        else if(player2 > player1)
            cout << "Player 2 wins." << endl;
        else
            cout << "Tie." << endl;
    }
    return 0;
}
int totalpoints(int d1, int d2){
    if((d1==1 && d2 == 2)|| (d1==2&&d2==1))
        return 1000;
    if(d1==d2){
        if(d1==1)
            return 100;
        else if(d1==2)
            return 200;
        else if(d1==3)
            return 300;
        else if(d1==4)
            return 400;
        else if(d1==5)
            return 500;
        else if(d1==6)
            return 600;
    }
    else{
        if(d1>d2)
            return (10*d1+d2);
        else if(d2>d1)
            return (10*d2+d1);
    }
}
