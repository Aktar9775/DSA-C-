#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    cout<<"Enter the string:\n";
	cin>>s;
	int hash[26]={0};
	for(int i=0;i<s.size();i++){
		hash[s[i]-'a']++;  // a=97 ascii code	
	}
    cout<<"How many char you find:\n";
	int q;
	cin>>q;
	while(q--){
		char c;
        cout<<"\nEnter the char:";
		cin>>c;
        cout<<"\nResult:";
		cout<<hash[c-'a'];
	}	
}