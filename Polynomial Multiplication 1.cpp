#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long T, n1, n2;
    long n3;
    int k;
    vector<int> first;


    cin >> T;

    for(int i=0; i< T; i++){
        cin >> n1;

        for(int j=0; j<=n1; j++){
            cin >> k;
            first.push_back(k);
        }

        cin >> n2;
        vector<int> second(n1 + n2 + 1,0);
        for (int j=0; j<=n2; j++){
            cin >> k;
            for(int p=0; p<first.size(); p++){
                second[p+j] += first[p] * k;
            }
        }

        cout << (second.size() - 1) << endl;
        for (int j=0; j<second.size(); j++){
            if (j==second.size()-1)
                cout << second.at(j) << endl;
            else
                cout << second.at(j) << " ";
        }
    first.clear();
    }

    return 0;
}
