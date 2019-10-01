#include <iostream>
#include <set>
using namespace std;
bool isPrime(int x);

int main()
{

    int numTests, num, m, temp, next;
    string result;
    cin >> numTests;
    std::set<int> myset;
    for(int i=0; i<numTests; i++){
        cin >> num >> m;
        temp = m;
        next =0;

        if(!isPrime(m)){
            result = "NO";
        }

        else{
            myset.emplace(m);
            while(1){
                while(temp!=0){
                    next += (temp %10) * (temp %10);
                    temp /=10;
                }
                if(next == 1){
                    result = "YES";
                    break;
                }

                if(myset.find(next)!= myset.end()){
                    result = "NO";
                    break;
                }

                temp = next;
                next =0;
                myset.emplace(temp);
                }
        }
        cout << num << " " << m << " " << result << endl;
        myset.clear();
    }

    return 0;
}

bool isPrime(int x){
    if(x == 1 || x==2)
        return false;
    else{
        for(int i=2; i<= x/4 +1; i++){
            if(x%i== 0)
                return false ;
        }
    }
    return true;
}
