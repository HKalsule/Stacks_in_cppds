#include<iostream>
using namespace std;
class stack
{
	private:
		int arr[5];
		int top;
	public:
	stack()
	{
		top = -1;
	}
	void push(int ele)
	{
		if(top==4)
		
		{
			cout<<"Stack is full"<<endl;
		}
		else{
	    top++;
		arr[top] = ele;
        }
	}
	int pop(int ele1)
	{
		if(top==-1)
		{
			cout<<"Stack is empty"<<endl;
		}
		else{
		int ele2;
		ele2 = arr[top];
		top--;
		return ele2;
		}	
	}
	void display()
	{
		for(int x=top;x>=0;x--)
		{
			cout<<arr[x];
		}
	}
};
int main()
 {
 	int a,b;
 	stack s1;
 	cout<<"Enter element in array : "<<endl;
 	for(a=0;a<5;a++)
 	{
 		cin>>b;
 		s1.push(b);
	 }
	cout << "Stack  is :" << endl;
	s1.display();
 	return 0;
 }
 
