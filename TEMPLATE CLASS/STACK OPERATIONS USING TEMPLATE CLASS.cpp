#include<iostream>
using namespace std;

template <class T>
class Stack
{
	private:
		T *stk;
		int top;
		int size;
	public:
		Stack(int sz)
		{
			size = sz;
			top = -1;
			stk = new T[size];
		}
		void push(T x)
		{
			if(top==size-1)
				cout << "Stack is Full..!" << endl;
			else
			{
				top++;
				stk[top] = x;
			}
		}
		T pop()
		{
			int x = 0;
			if(top==-1)
			{
				cout << "Stack is Empty..!" << endl;
			}
			else
			{
				x = stk[top];
				cout << x << endl;
				top--;
			}
			return x;
		}
};

int main()
{
	Stack <int> s(10);
	s.push(100);
	s.push(23);
	
	s.pop();
	
	return 0;
}