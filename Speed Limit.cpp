#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    int speed =0;
    int time = 0;
    int total_distance =0;
    int times[15];
    while(n!=-1){
        total_distance =0;
        for(i=0;i<n;i++){
            cin >> speed;
            cin >> times[i];
            if(i==0){
                time = times[i];
            }
            else{
                time = times[i] - times[i-1];
            }
            total_distance+= speed*time;
        }
        cin >> n;
        cout << total_distance << " miles" <<endl;
    }

    return 0;
}
