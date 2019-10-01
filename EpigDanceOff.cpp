#include <iostream>

using namespace std;

int main()
{
    int N, M,counter =0, numMoves =0;
    cin >> N >> M;
    string lines[N];
    
    getline(cin, lines[0]);
    cout << lines[0] << endl;
    for(int i=0; i<N; i++){
        getline(cin,lines[i]);
    }

    for(int i= 0; i<M; i++){
            counter =0;
        for(int j=0; j < N; j++){
            if(lines[j][i] == '_')
                counter +=1;
        }
        if (counter == N)
            numMoves += 1;
    }

    cout << numMoves + 1;
    return 0;
}
