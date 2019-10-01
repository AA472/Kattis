#include <iostream>

using namespace std;

int main()
{
    string word, guess;
    cin >> word >> guess;
    int numWrong =0;
    string result = "LOSE";
    int foundAt;
    bool found;
    for(int i= 0; i< guess.size(); i++){
        found = false;
        while(1){
            foundAt = word.find(guess.at(i));
            if(foundAt != std::string::npos){
                found = true;
                word.erase(foundAt,1);
            }
            else
                break;
        }

        if(word == ""){
            result = "WIN";
            break;
        }

        if(found != true)
            numWrong +=1;

        if(numWrong >= 10)
            break;
    }

    cout << result;
    return 0;
}
