#include <iostream>

using namespace std;

int main()
{
    int Xs[3];
    int Ys[3];
    int x,y;
    int i;
    for(i=0;i<3;i++){
        cin >> Xs[i] >> Ys[i];
    }
    if(Xs[0] ==Xs[1])
        x = Xs[2];
    else if(Xs[0]==Xs[2])
        x = Xs[1];
    else
        x = Xs[0];


    if(Ys[0] ==Ys[1])
        y = Ys[2];
    else if(Ys[0]==Ys[2])
        y = Ys[1];
    else
        y = Ys[0];

    cout << x << " " << y << endl;
    return 0;
}
