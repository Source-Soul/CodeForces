#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int countA = 0, countB = 0, countC = 0, countD = 0, countQ = 0;
        countA=count(s.begin(),s.end(),'A');
        countB=count(s.begin(),s.end(),'B');
        countC=count(s.begin(),s.end(),'C');
        countD=count(s.begin(),s.end(),'D');
        countQ=count(s.begin(),s.end(),'?');

        int rA=max(0,n-countA);
        int rB=max(0,n-countB);
        int rC=max(0,n-countC);
        int rD=max(0,n-countD);
        //int rQ=max(0,n-countQ);

        int totalR= rA+rB+rC+rD;

        int maxScore= 4*n-max(0,totalR-countQ);

        cout<<maxScore<<endl;
    }
}
