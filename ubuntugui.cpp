#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cout<<"Launch GUI or just CLI?[G/c]"<<flush;
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++) if(s[i]>='a'&&s[i]<='z')
		s[i]-='a',s[i]+='A';
	if(s[0]!='C'){
		cout<<"Use GUI..."<<endl;
		system("config.xlaunch");
		Sleep(2000);
		system("ubuntu run \"sh /usr/bin/starter.sh\"");
	}
	else{
		cout<<"Use CLI..."<<endl;
		system("wt new-tab -p Ubuntu");//If you use Windows Terminal
    //or system("start Ubuntu") if you don't
	}
	return 0;
}
