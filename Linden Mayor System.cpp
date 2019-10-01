#include <iostream>
#include <map>
using namespace std;

int main()
{

    int n,m;
    cin >> n >> m;
    char letter, trash;
    string replacement;
    string starting, next;
    map<char,string>rules;

    for(int i=0; i<n; i++){
        cin >> letter;
        cin >> trash >> trash;
        cin >> replacement;
        rules.insert(pair<char,string>(letter,replacement));
        //cout << rules [letter] << endl;
    }
    cin >> starting;

    for(int i=0; i<m; i++){
        next = "";
        for(int j=0; j<starting.length(); j++){
           if(rules.count(starting[j]))
                next += rules[starting[j]];
            else
                next+= starting[j];

        }
        starting = next;
    }

   // cout << "TEST" << endl;
    cout << starting << endl;
    return 0;
}
