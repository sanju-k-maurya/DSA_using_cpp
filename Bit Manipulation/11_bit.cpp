//https://practice.geeksforgeeks.org/problems/odd-or-even3618/1
#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    string oddEven(int N){
        if((N & 1)==1)
            return "odd";
        else
            return "even";
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.oddEven(N) << endl;
    }
    return 0; 
}