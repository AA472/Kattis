#include <iostream>

using namespace std;

int main()
{
    int contestants[5]={};
    int i;
    int score;
    int highest =0;
    int B =0;
    for(i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin >> score;
            contestants[i] += score;
        }
    if(contestants[i]>highest){
        highest = contestants[i];
        B = i+1;
        }
    }
    cout << B << " " << highest << endl;


    return 0;
}
