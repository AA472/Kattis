#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int level =0, x=0, y=0;
    level = input.size();
    int currLevel = level;
    for(int i=0; i<input.size(); i++){

        if(input[i] == '0'){
            //do nothing
        }
        if(input[i] == '1'){
            x += pow(2,currLevel)/2;
        }
        if(input[i] == '2'){
            y += pow(2,currLevel)/2;

        }
        if(input[i] == '3'){
            y += pow(2,currLevel)/2;
            x += pow(2,currLevel)/2;
       }

        currLevel -=1;
    }


    cout << level << " " << x << " " << y;

    return 0;
}
