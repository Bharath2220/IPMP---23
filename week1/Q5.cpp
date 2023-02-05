//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int> &A) {
        
        set<int> s;
        for(int i = 1; i <A.size()+2; i++){
            s.insert(i);
        }
        
        for(auto x:A){
            s.erase(x);
        }
        

        return *(s.begin());
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array) << "\n";
    }
    return 0;
}
// } Driver Code Ends