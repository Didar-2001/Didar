
#include <iostream>
using namespace std;
int main(){
	int a,b,c,max;
	cin>>a>>b>>c;
	if(a>b && a>c){
		max=a;
	}
	if(b>a && b>c){
		max=b;
	}
	if(c>a && c>b){
		max=c;
	}
	cout<<max;
}
