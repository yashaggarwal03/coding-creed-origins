/* Author : Qazi Fahim Farhan (@fahimfarhan) */
/* May the CodeForces be with you! */

#include <iostream>
// #include <sstream>
// #include <cstdio>
// #include <cmath>
// #include <cstring>
// #include <cctype>
// #include <string>
#include <vector>
// #include <list>
#include <set>
// #include <map>
// #include <queue>
// #include <stack>
// #include <algorithm>
// #include <functional>
#include <iomanip>      // std::setprecision


using namespace std;

#define PI 2*acos(0)

//typedef long long int ll;
 #define ll long long int
// other popular ones=> int64_t, uint64_t => use for 10^18
ll MOD = 1e9+7;

// int n,m;
vector<int> *g;
bool *isvisited;

int main(int argc, char const *argv[])
{
    /* code */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    /*
    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    cout << num1 << endl;
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll q, n;
    set<int> v;
    cin>>q;
    while(q--){
        cin>>n;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                v.insert(i);
                n = n/i;
                break;
            }
        }

        for(int i=2; i*i<=n; i++){
            if(n%i==0 && !v.count(i)){
                v.insert(i);
                n = n/i;
                break;
            }
        }
        if(v.size() < 2 || n==1 || v.count(n) ){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            v.insert(n);
            for(auto i: v){
                cout<<i<<" ";
            }cout<<"\n";
        }

        v.clear();
    }


    return 0;
}

