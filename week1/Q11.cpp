//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  int l = 0;
  int r = str.size()-1;
  
  while(l<=r){
      char t = str[r];
      str[r] = str[l];
      str[l] = t;
      l++;
      r--;
  }
  
  return str;
}

