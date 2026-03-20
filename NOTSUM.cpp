// https://www.codechef.com/problems/NOTSUM
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long>arr;
	    for(int i=0;i<n;i++){
	        long long x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    vector<long long>ans;
	    if(count(arr.begin(),arr.end(),0)==n){
	        cout<<-1<<endl;
	    }
	    else{
	        int p=2;
	        ans.push_back(1);
	        ans.push_back(2);
	        while(p<n){
	            if(arr[0]==0 && arr[1]==0){
	            if(arr[p]!=0){
	                ans.push_back(p+1);
	                break;
	            }
	            p++;
	            }
	            else{
	                ans.push_back(3);
	                break;
	            }
	        }
	        if(arr[ans[0]-1]+arr[ans[1]-1]==arr[ans[2]-1]){
	            if(arr[ans[1]-1]!=arr[ans[2]-1]){
	            long long k=ans[1];
	            ans[1]=ans[2];
	            ans[2]=k;
	            }
	            else{
	            long long k=ans[0];
	            ans[0]=ans[2];
	            ans[2]=k;
	            }
	        }
	        for(int i=0;i<ans.size();i++){
	            cout<<ans[i]<<" ";
	        }
	        cout<<endl;
	    }
	}
}
