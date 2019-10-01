#include <iostream>

using namespace std;

int main()
{
    int w, l,n,x,y;
    int actualX=0, actualY=0;
    int thinksX=0, thinksY=0;
    char direction;
    int distance;
    while(1){
        cin >> w >> l;
        actualX=0, actualY=0, thinksX=0, thinksY=0;
        if(w == 0 && l ==0)
            break;

        cin >> n;
        for(int i =0; i<n; i++){
            cin >> direction >> distance;
            if(direction == 'u'){
                thinksY += distance;
                if(actualY + distance >= (l - 1))
                    actualY = l-1;
                else
                    actualY += distance;

            }
            if(direction == 'd'){
                thinksY -= distance;
                if(actualY - distance <= 0)
                    actualY = 0;
                else
                    actualY -= distance;

            }
            if(direction == 'l'){
                thinksX -= distance;
                if(actualX - distance <= 0)
                    actualX = 0;
                else
                    actualX -= distance;

            }
            if(direction == 'r'){
                thinksX += distance;
                if(actualX + distance >= (w - 1))
                    actualX = w-1;
                else
                    actualX += distance;

            }

        }

            cout << "Robot thinks " << thinksX <<" " << thinksY << endl;;
            cout << "Actually at " << actualX <<" " << actualY << endl << endl;
    }

    return 0;
}
