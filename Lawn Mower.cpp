#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{


    int numx, numy;
    double xi, yi, w;

    while(1){
    cin >> numx >> numy >> w;
    if(numx==0 && numy==0 && w==0)
        break;
    vector <double> Xpoints;
    vector <double> Ypoints;
    for(int i=0; i< numx; i++){
        cin >> xi;
        Xpoints.push_back(xi);
    }
    for(int i=0; i< numy; i++){
        cin >> yi;
        Ypoints.push_back(yi);
    }
    sort(Xpoints.begin(),Xpoints.end());
    sort(Ypoints.begin(),Ypoints.end());

    bool works = true;
    double coveredUpTo=0;

    for(int i=0; i<Xpoints.size();i++){
        if((Xpoints[i]-(w/2))>coveredUpTo){
            works=false;
            break;
        }
        else
            coveredUpTo = Xpoints[i] +w/2;
    }

    if(coveredUpTo>=75)
        works=true;
    else
        works = false;


    coveredUpTo =0;
    if(works){
        for(int i=0; i<Ypoints.size();i++){
            if((Ypoints[i]-(w/2))>coveredUpTo){
                works=false;
                break;
            }
            else
                coveredUpTo = Ypoints[i] +w/2;
        }
      }

    if(coveredUpTo>=100)
        works=true;
    else
        works = false;

    if(works)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    }
    return 0;
}
