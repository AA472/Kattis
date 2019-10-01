#include <iostream>

using namespace std;

int main()
{
    int lines;
    int genome;
    int num;
    int x,y,z;
    int answer;
    cin >> lines;
    for(int i =0; i<lines; i++){
        cin >> num;
        cin >> x;
        for( z = 2; z< num + 1; z++){
            cin >> y;
            if(!(y == (x+1)))
                answer=z -1;

            x = y;

        }
        cout << answer << endl;
    }
    return 0;
}
