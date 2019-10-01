#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct category{
    vector<string> words;
    int found =0;
    string name = "test";

};
int main()
{
    int num, numWords;
    string name,aWord;
    string input;
    cin >> num;
    category categories[num];
    for(int i=0; i<num; i++){
       cin >> name >> numWords;
       categories[i].name = name;
       for(int j =0; j<numWords; j++){
            cin >> aWord;
            categories[i].words.push_back(aWord);
       }
    }

    while(cin>>input){
       

        for(int i =0; i<num; i++)
            if(count(categories[i].words.begin(),categories[i].words.end(),input))
                categories[i].found += 1;


    }

    int biggest =0;
    for(int i=0; i<num; i++){
        if(categories[i].found > biggest)
            biggest = categories[i].found ;

    }

    vector <string> results;

    for(int i=0; i<num; i++){
        if(categories[i].found == biggest)
            results.push_back(categories[i].name);
    }

    sort(results.begin(),results.end());

    for(int i=0; i< results.size(); i++)
        cout << results[i] << endl;
    return 0;
}
