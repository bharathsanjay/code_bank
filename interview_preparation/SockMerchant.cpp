#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
     int freq[101]={0},count =0;
     for(int i=0;i<n;i++){
         freq[ar[i]]++;
     }
     for(int i=1;i<101;i++){
         if(freq[i]%2==0)
             count+=freq[i]/2;
         else 
             count+=(freq[i]-1)/2;    
     }
     return count;

}