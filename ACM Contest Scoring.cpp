#include <iostream>
#include <map>

using namespace std;

int main(){

int time, numSolved = 0, totalTime =0;
char problem;
string result;
map<char, int> showedUp;

while(1){
    cin >> time;
    if(time == -1)
        break;
    cin >> problem >> result;

    map<char,int>::iterator it = showedUp.find(problem);
    if(showedUp.find(problem)==showedUp.end())
    {
        showedUp[problem] = 0;
    }
    else{
        if(showedUp[problem] == 1000)
        continue;
    }

    if(result == "right"){
        numSolved+=1;
        totalTime+= showedUp[problem] * 20;
        totalTime += time;
        showedUp[problem] = 1000;
    }
    else
    {
        showedUp[problem]+= 1;
    }

}
cout <<numSolved << " " << totalTime;
return 0;
}
