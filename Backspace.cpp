#include <iostream>
#include<vector>
using namespace std;

int main()
{
    string result = "";
    char first;
    vector<char> temp;
    while(cin>>first){
        if(first == '<')
            temp.pop_back();
        else
            temp.push_back(first);
    }

    for(int i=0; i<temp.size(); i++)
        result+= temp[i];

    cout << result;
    return 0;
}
