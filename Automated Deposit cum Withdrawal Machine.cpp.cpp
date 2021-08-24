#include<iostream>
using namespace std;

int main() {
	int i, select;
	int cash = 0;
	char c;
	cout<<"Welcome to Automated Deposit cum Withdrawal Machine"<<endl;
	do {
		cout<<"\nEnter : "<<endl;
		cout<<"'1' to Deposit"<<endl;
		cout<<"'2' to Withdraw"<<endl;
		cout<<"'3' to Check your balance"<<endl;
		cin>>select;
		switch (select){
			
			case 1: {
				int deposit;
				cout<<"\nEnter the amount to deposit : "<<endl;
				cin>>deposit;
				if(deposit>=100)
				{
					if(deposit<=49900)
					{
						cash = cash + deposit;
						cout<<"\nYour current balance is "<<cash<<endl;
					}
					else{
						cout<<"\nMaximum amount for deposit is 49900"<<endl;
					}
					
				}
				else {
					cout<<"\nMinimum amount for deposit is 100"<<endl;
				}
				break;
			}
			
			case 2: {
				int withdraw;
				cout<<"\nEnter the amount to withdraw : "<<endl;
				cin>>withdraw;
				
				if(withdraw>=100)
				{
					if(withdraw<=49900)
					{
						if(cash >= withdraw ){
							cash = cash - withdraw;
							cout<<"\nAmount after withdrawal of cash is : "<<cash<<endl;
						}
						else{
							cout<<"\nInsufficient balance"<<endl;
					    }
				    }
					else{
						cout<<"\nMaximum amount for withdrawal is 49900"<<endl;
					}
				}
				else {
					cout<<"\nMinimum amount for withdrawal is 100"<<endl;
				}
				break;
			}
			
			case 3: {
				cout<<"\nYour available balance is : "<<cash<<endl;
				break;
			}
			default: {
				cout<<"\nEnter a valid choice"<<endl;
			}
				break;
		}
		cout<<"\nTo continue press 'y' else 'Any Key'"<<endl;
		fflush(stdin);
		cin>>c;
		}
		 while (c == 'y' || c =='Y');
		 {
			cout<<"\nThank you for using, Please visit again!";
		 }
	
	return 0;
}
