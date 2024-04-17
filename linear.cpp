#include<iostream>
#define n 5
using namespace std;

	class Queue{
		int q[n];
		int front,i,rear;
		public:
		
		Queue()
		{
			front=n-1;
			rear=n-1;
			
		}
		void enqueue(int item)
		{
			if(front==(rear+1)%n)
			{
				cout<<"CircularQueue overflow"<<endl;
				
			}
			else
			{
				rear=(rear+1)%n;
				q[rear]=item;
				cout<<"enqueue successful."<<endl;
			}
		}
			void dequeue(int item)
		{
			if(front==rear)
			{
				cout<<"Circular Queue underflow"<<endl;
				
			}
			else
			{
				front=(front+1)%n;
				item = q[front];
			
				cout<<"dequeue succesaful."<<endl;
			}
		}
		void traverse()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"Queue underflow"<<endl;
				
			}
			else
			{
				for(int i=front;i<=rear;i=(i+1)%n)
				{
					cout<<q[i];
					cout<<" ";
				}
				
			  cout<<endl;
			}
		}
		
	};
	  int main()
	  {
	  	Queue obj;
	  	int choice;
	  	int i;
	  	do{
	  		cout<<"-----------------CIRCULAR QUEUE------------------"<<endl;
	  		cout<<"MENU"<<endl;
	  		cout<<"1.Enqueue"<<endl;
	  		cout<<"2.Dequeue"<<endl;
	  		cout<<"3.Traverse"<<endl;
	  		cout<<"4.Exit"<<endl;
	  		
	  		cout<<"Enter your choice"<<endl;
	  		cin>>choice;
	  		
	  		if(choice==1)
	  		{
	  			int item;
	  			cout<<"Enter item :";
	  			cin>>item;
	  			obj.enqueue(item);
	  			
			  }
	  		if(choice==2)
	  		{
	  			int item;
	  			cout<<"Enter item :";
	  			cin>>item;
	  			obj.dequeue(item);
	  			
		     }
	  		if(choice==3)
	  		{
	  			obj.traverse();
	  			
			}
	  		
	  		
		  }while(choice!=4);
		  return 0;
		  
	  }
