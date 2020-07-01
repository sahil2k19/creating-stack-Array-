#include <iostream>
#define max_size 101
using namespace std;

class stack{
  private:
    int top;
    int a[max_size];

  public:
    stack(){
      top = -1; //outside the array ,,, for empty array
    }

//push operation......................
    void push(int x){
      if(top==max_size -1){
        cout<<"stack overflow"<<endl;
        return;
      }
      a[++top] = x;
    }
//pop operation........................
    void pop(){
      if(top ==-1){
        cout<<"no element to pop"<<endl;
        return;
      }
      top--;
    }

//top operation .......print top value.....
    void Top(){
      cout<< a[top]<<endl;
    }

    int Is_empty(){
      if(top == -1){
        return 1;
      }
      return 0;
    }

// ONLY FOR TESTING - NOT A VALID OPERATION WITH STACK 
	// This function is just to test the implementation of stack. 
	// This will print all the elements in the stack at any stage. 
    void print() {
      
      cout<<("Stack: ");
      for(int i = 0; i<=top; i++)
        cout<<a[i]<<" ";
      cout<<endl;
      
    }

};


int main() {
  // Code to test the implementation. 
    // calling Print() after each push or pop to see the state of stack. 
	stack S;
	S.push(2); S.print();
	S.push(5); S.print();
	S.push(10); S.print();
	S.pop(); S.print();
	S.push(12); S.print();
  S.Top(); S.print();
}