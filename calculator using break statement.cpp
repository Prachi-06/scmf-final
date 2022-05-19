#include<iostream>

using namespace std;
int main(){
	int n1,n2;
	cout<<"input 2 number:";
	cin>>n1>>n2;
	char op;
	cout<<"input an operation:";
	cin>>op;
	
	switch(op)
	{
		case'+':
			cout<<n1+n2<<endl;
			break;
	    case'-':
		cout<<n1-n2<<endl;
		break;
		case '*':
			cout<<n1*n2<<endl;
			break;
			case'/':
				cout<< n1/n2<< endl;
				break;
			default:
				cout<<"input another operation:";
				break;
		}
		return 0;
	
}
