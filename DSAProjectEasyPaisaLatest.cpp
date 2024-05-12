#include<iostream>
using namespace std;
class q1{
	public:
	int rear;
	int front;
	int cap;
	int *ptr;
	int total;
	int l;  //----->            for storing local varaible
	int m;   //--->             for easypaisa amount to get
	public:
   q1(int size){
		 rear=-1;
	     front=-1;
	     m=0;
	     l=0;
		cap=size;
		ptr=new int[cap];
		total=0;
	}
		public:
	~q1(){
		delete[]ptr;
	}
	bool isfull(){
		if((rear+1)%cap==front){
			return true;
		}else{
			return false;
		}
	}
	bool isempty(){
		if(front==-1&&rear==-1){
			return true;
		}
		else{
			return false;
		}
	}
	void enqueue(int value){
		if(isfull()){
			cout<<"your Current Balance is Zero"<<endl;
		}else if(isempty()){
			front=rear=0;
			ptr[rear]=value;
			total+=value;
			cout<<"Amount of RS."<<value<<" deposited successfully"<<endl;
			cout<<"Balance in your account after deposition is RS."<<getTotal();
		}else{
			rear=(rear+1)%cap;
			ptr[rear]=value;
			total+=value;
			cout<<"Amount of RS."<<value<<" deposited successfully"<<endl;
			cout<<"Balance in your account after deposition is RS."<<getTotal();
		}
	}
	int dequeue(){
		int p;
		if(isempty()){
			cout<<"your Current Balance is Zero"<<endl;
		}
		else if(front==rear){
			front=rear=-1;
			cout<<"Amount Withdrawn Successful"<<endl;
		}
		else{
				p=ptr[front];
			front=(front+1)%cap;
		}
		return p;
		}
		int peek(){
			if(isempty()){
				cout<<"your Current Balance is Zero"<<endl;
			}
			else{
				return ptr[front];
			}
		}
			void display(){
			if (front == -1) 
    {
        cout<<"\nyour Current Balance is Zero"<<endl; 
        return; 
    }
    cout<<"your deposit Balance in your account is :"<<endl;
    if (rear >= front) 
    { 
        for (int i = front; i <= rear; i++) 
            cout<<ptr[i]<<endl;
    } 
    else
    { 
        for (int i = front; i < cap; i++) 
            cout<<ptr[i]<<endl;
  
        for (int i = 0; i <= rear; i++) 
            cout<<ptr[i]<<endl;
    } 
		
		}
	void deposite_and_withdraw (){
		int choice;
		int amount;
		  do {
        cout << "\n\n\t\t1. Deposit";
        cout << "\t\t2. Withdraw";
        cout << "\t\t3. Back" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Amount for deposit: ";
                cin >> amount;
                system("cls");
                enqueue(amount);
                break;

            case 2:
            	int b;
                cout << "\nEnter Amount for withdraw: ";
                cin >> b;
                system("cls");
                withdraw(b);
                break;

            case 3:
            	cout<<endl;
                break;
               
            default:
                cout << "Invalid choice! Please try again..." << endl;
                system("cls");
                break;
        }

        cout << endl;

    } while (choice != 3);
}
int checkBalance(){
	string ch;
	if(isempty()){
	cout<<"Your current Account Balance is Zero\n";
	}
	else{
	
	l=getTotal();
	l-=m;
	
	cout<<"\nTotal Balance : "<<"="<<" "<<l<<endl;
}
	
}
void withdraw(int amount){
	if(amount<=total){
			total-=amount;
			getTotal();
			cout<<"Withdrawal of RS."<<amount<<" successful"<<endl;
			cout<<"Remaining Balance in your account after Withdrawel is RS."<<getTotal();
	}
	else{
		cout<<"Insufficient funds! Withdrawal failed"<<endl;
	}
}
 int getTotal() {
        return total;
    }
    void Bank(){
    	string name;
    	int cinic1=14151617;
    	int cinic2=1410186;
    	int cinic3=141018;
    	int cinic4=1410188;
    	int cinic5=1410189;
    	int cnic;
    	int blance;
    	string ch;
    	cout<<"\n\nNAME : ";
    	cin>>name;
    	cout<<"CNIC : ";
    	cin>>cnic;
    	system("cls");
    	if(cnic==cinic1){
    		cout<<cinic1<<" CNIC Verified and Exists...";
    		cout<<"\nEnter Transaction Amount : ";
    		cin>>blance;
    		if(blance<=total){
    		total-=blance;
    		cout<<"\n\t\t\tTRANSACTION SUCCESSFUL TO "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tRECEIPT";
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tNAME : "<<" "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tCNIC : "<<" "<<cinic1;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tAMOUNT : "<<" "<<blance;
			}
			else{
				cout<<"Insufficient Balance Please Recharge Your Account\n";
			}
		}
		else if(cnic==cinic2){
    		cout<<cinic2<<" CNIC Verified and Exists...";
    		cout<<"\nEnter Transaction Amount : ";
    		cin>>blance;
    		if(blance<=total){
    		total-=blance;
    		cout<<"\n\t\t\tTRANSACTION SUCCESSFUL TO "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tRECEIPT";
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tNAME : "<<" "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tCNIC : "<<" "<<cinic2;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tAMOUNT : "<<" "<<blance;
			}	
			else{
				cout<<"Insufficient Balance Please Recharge Your Account\n";
			}
		}
		else if(cnic==cinic3){
    		cout<<cinic3<<" CNIC Verified and Exists...";
    		cout<<"\nEnter Transaction Amount : ";
    		cin>>blance;
    		if(blance<=total){
    		total-=blance;
    		cout<<"\n\t\t\tTRANSACTION SUCCESSFUL TO "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tRECEIPT";
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tNAME : "<<" "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tCNIC : "<<" "<<cinic3;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tAMOUNT : "<<" "<<blance;	
			}
    		else{
				cout<<"Insufficient Balance Please Recharge Your Account\n";
			}
		}
		else if(cnic==cinic4){
    		cout<<cinic4<<" CNIC Verified and Exists...";
    		cout<<"\nEnter Transaction Amount : ";
    		cin>>blance;
    		if(blance<=total){
    		total-=blance;
    		cout<<"\n\t\t\tTRANSACTION SUCCESSFUL TO "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tRECEIPT";
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tNAME : "<<" "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tCNIC : "<<" "<<cinic4;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tAMOUNT : "<<" "<<blance;	
			}
    		else{
				cout<<"Insufficient Balance Please Recharge Your Account\n";
			}
		}
		else if(cnic==cinic5){
    		cout<<cinic5<<" CNIC Verified and Exists...";
    		cout<<"\nEnter Transaction Amount : ";
    		cin>>blance;
    		if(blance<=total){
    		total-=blance;
    		cout<<"\n\t\t\tTRANSACTION SUCCESSFUL TO "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tRECEIPT";
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tNAME : "<<" "<<name;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tCNIC : "<<" "<<cinic5;
    		cout<<"\n\t\t\t\t\t\t\t\t\t\tAMOUNT : "<<" "<<blance;
			}
    		else{
				cout<<"Insufficient Balance Please Recharge Your Account\n";
			}
		}
		else{
			cout<<"Invalid CNIC Number please try again..."<<endl;
		}
	}
	void easypaisa(){
		int balance=getTotal();
		double number=33289;
		double number1=301955;
		double number2=310955;
		double number3=33219;
		double number4=33299;
		string name4="\tAtal";
		string name3="\tSaif";
		string name2="\tKhan";
		string name="\tAsmat ullah";
		string name1="Saif Ullah";
		double num;
		string nam;
		string ch;
		int bala;
		if(isempty()){
			cout<<"You have Zero Balance please recharge your account and try again";
		}
		else{
		cout<<"\n\nEnter Number For Transaction : ";
		cin>>num;
		system("cls");
		if(num==number){
			cout<<"\nFOR VERIFICATION PURPOSE\nNumber: "<<number<<endl;
			cout<<"Name: "<<name;
			cout<<"\nIS THIS YOUR ACCOUNT (yes) (no)";
			cin>>ch;
			if(ch=="yes"||ch=="YES"||ch=="Yes"){
				cout<<"\n\nEnter Transaction Amount : ";
				cin>>bala;
				m=bala;
				if(m<=balance){
					cout<<"\n\t\t\t\tTransaction Sucessful to "<<name;
					balance-=m;
					cout<<"\nREMAINING BALANCE :"<<" "<<balance;
				}
				else{
					cout<<"Insufficient funds"<<endl;
				}
		
			}
			else{
				cout<<"\nPlease enter the correct number  and try again";
			}
		}
		else if(num==number1){
			cout<<"\nFOR VERIFICATION PURPOSE\nNumber: "<<number1<<endl;
			cout<<"Name: "<<name1;
			cout<<"\nIS THIS YOUR ACCOUNT (yes) (no)";
			cin>>ch;
			if(ch=="yes"||ch=="YES"||ch=="Yes"){
				cout<<"\n\nEnter Transaction Amount : ";
				cin>>bala;
				m=bala;
				if(m<=balance){
					cout<<"\n\t\t\t\tTransaction Sucessful to "<<name1;
					balance-=m;
					cout<<"\nREMAINING BALANCE :"<<" "<<balance;
				}
				else{
					cout<<"Insufficient funds"<<endl;
				}
		
			}
			else{
				cout<<"\nPlease enter the correct number  and try again";
			}
		}
		else if(num==number2){
			cout<<"\nFOR VERIFICATION PURPOSE\nNumber: "<<number2<<endl;
			cout<<"Name: "<<name2;
			cout<<"\nIS THIS YOUR ACCOUNT (yes) (no)";
			cin>>ch;
			if(ch=="yes"||ch=="YES"||ch=="Yes"){
				cout<<"\n\nEnter Transaction Amount : ";
				cin>>bala;
				m=bala;
				if(m<=balance){
					cout<<"\n\t\t\t\tTransaction Sucessful to "<<name2;
					balance-=m;
					cout<<"\nREMAINING BALANCE :"<<" "<<balance;
				}
				else{
					cout<<"Insufficient funds"<<endl;
				}
		
			}
			else{
				cout<<"\nPlease enter the correct number  and try again";
			}
		}
		else if(num==number3){
			cout<<"\nFOR VERIFICATION PURPOSE\nNumber: "<<number3<<endl;
			cout<<"Name: "<<name3;
			cout<<"\nIS THIS YOUR ACCOUNT (yes) (no)";
			cin>>ch;
			if(ch=="yes"||ch=="YES"||ch=="Yes"){
				cout<<"\n\nEnter Transaction Amount : ";
				cin>>bala;
				m=bala;
				if(m<=balance){
					cout<<"\n\t\t\t\tTransaction Sucessful to "<<name3;
					balance-=m;
					cout<<"\nREMAINING BALANCE :"<<" "<<balance;
				}
				else{
					cout<<"Insufficient funds"<<endl;
				}
		
			}
			else{
				cout<<"\nPlease enter the correct number  and try again";
			}
		}
		else if(num==number4){
			cout<<"\nFOR VERIFICATION PURPOSE\nNumber: "<<number4<<endl;
			cout<<"Name: "<<name4;
			cout<<"\nIS THIS YOUR ACCOUNT (yes) (no)";
			cin>>ch;
			if(ch=="yes"||ch=="YES"||ch=="Yes"){
				cout<<"\n\nEnter Transaction Amount : ";
				cin>>bala;
				m=bala;
				if(m<=balance){
					cout<<"\n\t\t\t\tTransaction Sucessful to "<<name4;
					balance-=m;
					cout<<"\nREMAINING BALANCE :"<<" "<<balance;
				}
				else{
					cout<<"Insufficient funds"<<endl;
				}
		
			}
			else{
				cout<<"\nPlease enter the correct number  and try again";
			}
		}
		else{
			cout<<"Please check your Number and try again"<<endl;
		}
			}
		}
		void fundtransfer(){
			int ch;
			 do {
        cout << "\n\n\t\t1: BANK" ;
        cout << "\t\t2: EASYPAISA" ;
        cout << "\t\t3: BACK\n";
        cin >>ch;
        switch(ch){
        	case 1:
        		Bank();
        		break;
        	case 2:
        	 	easypaisa();
			 	break;
			case 3:
				break;	
			default:
                cout << "Invalid choice! Please try again..." << endl;
                break;
        			
		}
		 cout << endl;
		}
		while (ch != 3);
	}
	void alldata(){
		int ch;
		do {
        cout << "1. Deposite and Withdraw" << endl;
        cout << "2. Fund Transfer" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Back" << endl;
        cin >> ch;
        system("cls");
        switch(ch){
        	case 1:
        	deposite_and_withdraw ();
        	break;
        	cout<<endl;
        	case 2:
           	fundtransfer();
           	break;
           	cout<<endl;
           	case 3:
           	checkBalance();
           	break;
           	case 4:
           	break;
           	default:
                cout << "Invalid Choice! Please try again..." << endl;
                break;
            }
            cout<<endl;
        }
        while(ch!=4);

	}
		
};
class circularQueue{
	int rear;
	int front;
	int cap;
	string *ptr;
	public:
	circularQueue(int size){
		 rear=-1;
	     front=-1;
		cap=size;
		ptr=new string[cap];
	}
	public:
	~circularQueue(){
		delete[]ptr;
	}
	bool isfull(){
		if((rear+1)%cap==front){
			return true;
		}else{
			return false;
		}
	}
	bool isempty(){
		if(front==-1&&rear==-1){
			return true;
		}
		else{
			return false;
		}
	}
	void enqueue(string value){
		if(isfull()){
			cout<<"Queue is full"<<endl;
		}else if(isempty()){
			front=rear=0;
			ptr[rear]=value;
		}else{
			rear=(rear+1)%cap;
			ptr[rear]=value;
		}
	}
	string dequeue(){
		string p;
		if(isempty()){
			cout<<"Please Register first"<<endl;
		}
		else if(front==rear){
			front=rear=-1;
			system("cls");
			cout<<"Log out sucessful"<<endl;
		}
		else{
				p=ptr[front];
			front=(front+1)%cap;
		}
		return p;
		}
		string peek(){
			if(isempty()){
				cout<<"Please Register first"<<endl;
			}
			else{
				return ptr[front];
			}
		}
		bool search(string item,string pass) {
        if (isempty()) {
            cout << "Please Register first" << endl;
            return false;
        } else {
            int i = front;
            while (true) {
                if (ptr[i] == item||ptr[i]==pass)
                    return true;
                if (i == rear)
                    break;
                i = (i + 1) % cap;
            }
            return false;
        }
    }
		 
		void display(){
			if (front == -1) 
    { 
        cout<<"\nPlease Register first"<<endl; 
        return; 
    } 
    cout<<"Your Name and Password is  :"<<endl;
    if (rear >= front) 
    { 
        for (int i = front; i <= rear; i++) 
            cout<<ptr[i]<<endl;
    } 
    else
    { 
        for (int i = front; i < cap; i++) 
            cout<<ptr[i]<<endl;
  
        for (int i = 0; i <= rear; i++) 
            cout<<ptr[i]<<endl;
    } 
		
		}
	
};

void menu(circularQueue object,q1 obj2)
{
	int ch;
	cout<<"1: Registration";
	cout<<"\t\t2:  Login";
	cout<<"\t\t3:  Logout";
	cout<<"\t\t4:  Show Password";
	cout<<"\t\t0:  Exit Program"<<endl;
	cin>>ch;
	string username;
	string password;
	string usernamee;
	string passwordd;
	switch(ch)
	{
		case 1:	
		{
	cout<<"\n\nNAME : ";
	cin>>username;
	object.enqueue(username);
	cout<<"PASSWORD : ";
	cin>>password;
	system("cls");
	cout<<username<<" is Registered successfully"<<endl;
	object.enqueue(password);
	     	cout<<endl;
			menu(object,obj2);
				break;
		}	
		case 2:
			{
			cout<<"\n\nNAME : ";
			cin>>usernamee;
			cout<<"PASSWORD : ";
			cin>>passwordd;
			system("cls");
			//string login=usernamee+password;
			if(object.search(usernamee,passwordd ))
			{
				cout<<"\n\n\t\t\t\t\t"<<usernamee<<" Login Sucessfully!"<<endl;
				cout<<endl;
			      obj2.alldata();
	
			}
			
			cout<<endl;
	    	cout<<endl;
         	menu(object,obj2);
         	break;
         }
		case 4:
		{
		system("cls");
		object.display();
		cout<<endl;
		menu(object,obj2);
		break;
		
			case 3:{
			string b=" ";	
			while(!object.isempty()){
		   	b=b+(object.dequeue());
				}
			}
			cout<<endl;
			menu(object,obj2);
				break;
		default :
		    cout<<"\n**Program Ended**\n\n!Good Bye!\n";	
		}
	}};


int main(){
	cout<<"\n\n\n\t\t\t\t\t******* WELCOME TO EASYPAISA APP ********"<<endl;
	cout<<"\n\n\n\t\t\t\t\t\t******* Designed By ********"<<endl;
	cout<<"\n\t\t\t\t\t\t\tSaif\n\t\t\t\t\t\t\tAsmat\n\t\t\t\t\t\t\tHamza\n\t\t\t\t\t\t\tFatima\n";
	cout<<endl;
	circularQueue myObj(100);
	q1 obj2(100);
	cout<<endl;
    menu(myObj,obj2);

}
