#include <iostream>
#include <map>

using namespace std;

int main()
{

    int numWords, numDesc;
    string desc;
    string word;
    int wordValue = 0;
    long long unsigned int result = 0;
    map<string,int> words;

    cin >> numWords >> numDesc;

    for (int i =0; i < numWords; i++){
        cin >> word >> wordValue;
        words[word] = wordValue;
    }

    for(int i =0; i<numDesc; i++){
        result = 0;
        while(1){
            cin >> desc;
            if(desc == ".")
                break;
            result += words[desc];
        }
        cout << result << endl;
    }

    return 0;
}
