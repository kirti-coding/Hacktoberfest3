#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin>>tt;
	while(tt--)
	{
	    string s;cin>>s;
	    string str ="";
	    for(int i = 0;i<s.length();i++)
	    {
	        if(s[i]=='a')
	        {
	            str+="01";
	           // cout<<1;
	        }
	        else{
	           // cout<<2;
	            str+="10";
	        }
	    }
	    int count = 0;
	    
	    for(int i = 1;i<=str.size();i++)
	    {
	       if(str[i]==str[i-1])
	       {
	           count++;
	       }
	    }
	    // cout<<pow(2,count);
	    string str1 ="";
	    for (int i = 0; i < count; ++i)
	    {
	    	str1+='1';
	    }
	    int val  = 1;
	    for(int i = 1;i<=str1.size();i++)
	    {
	    
	    	val  =  (val*2)%998244353;
	    }
	    cout<<val<<endl;
	}
	return 0;
}
