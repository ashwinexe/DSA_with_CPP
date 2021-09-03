//https://www.codechef.com/SEPT21C/problems/AIRLINE
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;
        int sum = A+B+C;
        if(sum - A < D && A < E)
            cout << "YES\n";
        else if(sum - B < D && B < E)
            cout << "YES\n";
        else if(sum - C < D && C < E)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}