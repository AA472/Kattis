#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define PI 3.14159265359

void toDouble(char coord[],double& r,double& x, double& y);

using namespace std;

int main()
{


    char coord[100];
    double r,x,y;

    for(int k = 0;k<200;k++){

        fgets(coord,100,stdin);
        if(coord[strlen(coord)-1]=='\n' && strlen(coord)!=1){

            toDouble(coord,r,x,y);
            double z = sqrt(pow(x,2) + pow(y,2));
            if(z >= r ){
                cout << "miss" << endl;
            }

            else{double angle = acos(z/r) *2;
            double area_seg = 0.5 * (angle -sin(angle)) *r *r;

            cout << PI*r*r -area_seg << flush;
            cout <<" " << area_seg << endl;;
            }
        }
        else {
            break;
        }
    }
    return 0;
}


void toDouble(char coord[],double &r,double &x, double &y){


        coord[strlen(coord)-1] = 0;

        char radius[15]= {""};
        char vert[15] = {""};
        char hori[15]= {""};

        int index =0;
        int i;

        for(i = 0; coord[i]!=' ';i++){
            radius[i] = coord[i];
            index++;
        }

        index++;
        for(int j = 0,i = index; coord[i]!=' '; j++,i++){
            vert[j] = coord[i];
            index++;
        }

        index++;
        for(i = index; coord[i]!=0; i++){
            hori[i-index] = coord[i];

        }


        r = atof(radius);
        x= atof(hori);
        y = atof (vert);



}


/*
char coord[100];
    double r[3],x[3],y[3];
    cin >> r[0]>>x[0]>>y[0];
    cin >> r[1]>>x[1]>>y[1];
    cin >> r[2]>>x[2]>>y[2];

    for(int k = 0;k<3;k++){

        double z = sqrt(pow(x[k],2) + pow(y[k],2));
        if(z >= r[k]){
            cout << "miss" << endl;
        }

        else{double angle = acos(z/r[k]) *2;
        double area_seg = 0.5 * (angle -sin(angle)) *r[k] *r[k];

        cout << PI*r[k]*r[k] -area_seg << flush;
        cout <<" " << area_seg << endl;
        }
    }*/
