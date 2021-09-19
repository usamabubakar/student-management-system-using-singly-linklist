#include <iostream>
#include<conio.h>
using namespace std;
class linklist
{
	private:
	struct node
	{
	 string name,id,roll_no,cgpa,classs;
		node*link;
	};
	node*head=NULL;
	public:

		int insertnode(string n,string clas, string roll,string i,string cgpa)
		{
			node*ptr=new node;
			ptr->name=n;
			ptr->classs=clas;
			ptr->roll_no=roll;
			ptr->id=i;
			ptr->cgpa=cgpa;
			ptr->link=NULL;
		
		if(head==NULL)
		{
			head=ptr;
		}
		else
		 {
			node*temp= head;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=ptr;
		}}
		int display()
		{int i=0;
			if(head==NULL)
			{
				cout<<"\n\t\t_______||| Linklist is empty |||_______\n\n\n";
			}
			else{
			cout<<"\t\t \t************************************* \t\t\t"<<endl;
			cout<<"\t\t\t*****All Data of Student****\t\t\t"<<endl;
			 cout<<"\t\t\t************************************* \t\t\t"<<endl<<endl;
			node*temp=head;
			while(temp!=NULL)
			{
				
			 cout<<"Record of Student : "<<i+1<<endl<<endl;
				cout<<"Name of Student"<<"     :\t"<<temp->name<<endl;
					cout<<"Class of student"<<"    :\t"<<temp->classs<<endl;
						cout<<"Roll no of student"<<"  :   "<<temp->roll_no<<endl;
							cout<<"Id of student\t"<<"    :\t"<<temp->id<<endl;
								cout<<"Cgpa of student"<<"     :\t"<<temp->cgpa<<endl;
				temp=temp->link;
				i++;
			}
		}}
		int deletee()
		{
			string a;
			int count=0;
			if(head==NULL)
			{
				cout<<endl<<"\t\t_______||| Linklist is empty |||_______\n\n"<<endl;
			}
			else
			{
				cout<<"\t\t \t************************************* \t\t\t"<<endl;
			cout<<"\t\t\t*****Delete any record of student***\t\t\t"<<endl;
			 cout<<"\t\t\t************************************* \t\t\t"<<endl<<endl;
				cout<<endl<<"Enter the Roll No of Student : ";
				cin>>a;
				if(a==head->roll_no)
				{
					node*ptr=head;
					head=ptr->link;
					delete ptr;
					count++;
				}
				else
				{
					node*prev=head;
					node*ptr=head->link;
					while(ptr!=NULL)
					{
						if(a==ptr->roll_no)
						{
							prev->link=ptr->link;
							cout<<endl<<"\n\n\t\t\tData OF student "<<ptr->name<<" Is Deleted"<<endl;
							count++;
							delete ptr;
							break;
						}
						prev=ptr;
						ptr=ptr->link;
					}
				
				}
					if(count==0)
					{
						cout<<endl<<"\t\t\t______!!! Student record not found !!!________"<<endl;
					}
				
			}
		}
		int search()
		{
			string a;
			int count=0;
			int found=1;
			if(head==NULL)
			{
				cout<<endl<<"\t\t_______||| Linklist is empty |||_______\n\n"<<endl;
			}
			else 
			{
					cout<<"\t\t \t************************************* \t\t\t"<<endl;
			cout<<"\t\t\t*****Search record of Student****\t\t\t"<<endl;
			 cout<<"\t\t\t************************************* \t\t\t"<<endl<<endl;
				cout<<"  Enter Roll No For searching Data Of Student: ";
				cin>>a;
				node*ptr=head;
				while(ptr!=NULL)
				{
					if(a==ptr->roll_no)
					{
							cout<<"Name of Student"<<"     :\t"<<ptr->name<<endl;
					cout<<"Class of student"<<"    :\t"<<ptr->classs<<endl;
						cout<<"Roll no of student"<<"  :   "<<ptr->roll_no<<endl;
							cout<<"Id of student\t"<<"    :\t"<<ptr->id<<endl;
								cout<<"Cgpa of student"<<"     :\t"<<ptr->cgpa<<endl;
						count++;
					}
					ptr=ptr->link;
					found++;//ya found hm srf node ki position btany k li ha;
				}
					if(count==0)
					{
						cout<<endl<<"\t\t\t______!!! Student record not found !!!________"<<endl;
					}
			}
		}
			int update()
		{
			string a;
			string nam,i,roll,cgpa,clas;
			int count=0;
			int found=1;
			if(head==NULL)
			{
				cout<<endl<<"\t\t_______||| Linklist is empty |||_______\n\n"<<endl;
			}
			else 
			{
					cout<<"\t\t \t************************************* \t\t\t"<<endl;
			cout<<"\t\t\t*****Update record of Student****\t\t\t"<<endl;
			 cout<<"\t\t\t************************************* \t\t\t"<<endl<<endl;
				cout<<"enter value of node for update : ";
				cin>>a;
				node*ptr=head;
				while(ptr!=NULL)
				{
					if(a==ptr->roll_no)
					{
							cout<<endl<<"value for update is found : "<<a<<" at node "<<found<<endl;
						cout<<"\nEnter the name of student : ";
			cin>>nam;
			cout<<endl<<endl<<"Enter the class : ";
			cin>>clas;
			cout<<endl<<endl<<"Enter the Roll no : ";
			cin>>roll;
			cout<<endl<<endl<<"Enter the cgpa : ";
			cin>>cgpa;
			cout<<endl<<endl<<"Enter the ID : ";
			cin>>i;
						ptr->name=nam;
						ptr->roll_no=roll;
						ptr->classs=clas;
						ptr->cgpa=cgpa;
						ptr->id=i;
						cout<<endl<<"_______||| Record is updated|||_______ : "<<endl<<endl;
						count++;
					}
					ptr=ptr->link;
					found++;//ya found hm srf node ki position btany k li ha;
				}
					if(count==0)
					{
						cout<<endl<<"\t\t\t______!!! Student record not found !!!________"<<endl;
					}
			}
		}
		int sum()
		{
			int a;
			int sum=0;
			if(head==NULL)
			{
				cout<<endl<<"\t\t_______||| Linklist is empty |||_______"<<endl;
			}
			else 
			{
				node*ptr=head;
				while(ptr!=NULL)
				{
					sum=sum+1;
					ptr=ptr->link;
				}
					cout<<"\t\t \t************************************* \t\t\t"<<endl;
			cout<<"\t\t\t*****Total Data of Student****\t\t\t"<<endl;
			 cout<<"\t\t\t************************************* \t\t\t"<<endl<<endl;
				cout<<endl<<"\t\t _____||| Total no.of nodes in linklist are : "<<sum<<" |||_____"<<endl;
			}
		}
};
int main()
{
	linklist l;
    string name,clas,roll,cgpa,i;
    int choice,key;
    cout<<"\t\t \t********************************* \t\t\t"<<endl;
 cout<<"\t\t\t****STUDENT MANAGEMENT SYSTEM**** \t\t\t"<<endl;
 cout<<"\t\t\t********************************* \t\t\t"<<endl<<endl<<endl;
 cout<<"\t\t   _______||| Project is Submitted By |||______"<<endl<<endl;
 cout<<"\t\t\t\tUsama abubakar 068\n\t\t\t\tMuhammad Amir 053\n\t\t\t\tMuhammad Bilal 089"<<endl;
 cout<<"\n\tPress any key to continue...!!!"<<endl;
 cin>>key;
 system("cls");
  loop:
  cout<<"\n\n\n\t\t\t--->Press '1' To add Record:"<<endl;
  cout<<"\t\t\t--->Press '2' To Display Record:"<<endl;
  cout<<"\t\t\t--->Press '3' To Search Record:"<<endl;
  cout<<"\t\t\t--->Press '4' To Modify Record:"<<endl;
  cout<<"\t\t\t--->Press '5' To Delete Record:"<<endl;
  cout<<"\t\t\t--->Press '6' To count all Record:"<<endl;
	cin>>choice;
	system("cls");
	switch(choice)
	{
		case 1:
			cout<<"\t\t \t************************************* \t\t\t"<<endl;
			cout<<"\t\t\t*****Insert the record of student****\t\t\t"<<endl;
			 cout<<"\t\t\t************************************* \t\t\t"<<endl<<endl;
			cout<<"Enter the name of student : ";
			cin>>name;
			cout<<endl<<"Enter the class : ";
			cin>>clas;
			cout<<endl<<"Enter the Roll no : ";
			cin>>roll;
			cout<<endl<<"Enter the cgpa of Student : ";
			cin>>cgpa;
			cout<<endl<<"Enter the ID : ";
			cin>>i;
			l.insertnode(name,clas,roll,cgpa,i);goto loop;
			break;
			case 2:
					
				l.display(); goto loop;
				break;
				case 3:
					l.search();goto loop;
				break;	
			case 4:
				l.update();goto loop;
					l.deletee();goto loop;
					break;
				case 5:
					l.deletee();goto loop;
					break;
					case 6:
						l.sum();goto loop;
						break;
						default:
							cout<<"\n\nYou enter wrong key...!!!!"<<endl;goto loop;
							
	}
}
