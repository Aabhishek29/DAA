#include<iostream>
#include<algorithm>
#include<string>


using namespace std;


int main(){
	int t=0;    
	string str;
	// string num="";
	// string num1="";
	string ans = "";
	getline(cin,str);
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	int n =str.length();
	string c;
	getline(cin,c);
	transform(c.begin(), c.end(), c.begin(), ::tolower);
	// string num2="";
	int m = c.length();

	for(int i=0; i<n; i++){
	    for(int j=i+1;j<n;j++){
	        if(str[i]==str[j]){
	            t=1;
	        }
	    }
	}

	string w="";
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        if(str[i]==c[j]){
	            w+=str[i];
	
	        }
	    }
	}
	int g =w.length();    

	for (int i = 0; i < g; i++) {  
	        if (w[i] - '0' >= 0 && w[i] - '0' <= 9) {
	            ans += w[i];
	        }
	}
	for(int i = 0; i< g; i++){
	        if(isdigit(w[i])){
	            w.erase(i, 1);
	            i--;
	        }
	    }
	if(t==0){    
	cout<<w<<" "<<ans;
	}
	else{
	    cout<<"New Language Error";
	}
	return 0;

}