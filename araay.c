
//stack opertaion

#include<stdio.h>
#define N 5 
int top=-1 ,stack[N];
   void push();
 	void pop();
    void peek();
    void main()
	{
	int ch;
while(1){

	printf("********MENU*********");
 	printf("\n 1. Push  \n 2. Pop \n 3. peek \n");
 	printf("\n enter your choice=");
   
 	scanf("%d",&ch);
 	switch(ch){
 		case 1:
 		     push();
 			break;
 		case 2:
 			pop();
 			break;
 		case 3:
 			peek();
 			break;
 		default :
 		  printf("\n invalid choice....!");
 	
	 }
}
}
void push(){
	int item;
		printf("\n enter your element=");
 	    scanf("%d",&item);
 	    if(top==N-1)
 	      {
 	      		printf("\n Stack is full you can't insert elements.");
 
		   }
		   else{
		   	top++; 
		   stack[N]=item;
		   	
		   }
}
void pop(){
	if(top==-1)
	{
		printf("stack is underflow");
		
	}
	else{
		top=top-1;
	}
}
void peek(){
	int i;
   if(top==-1){
	printf("stack is empty...!");
    }
    else{
    	printf("Elements are..");
    	for(i=top;i>0;i--)
    	{
    		printf("%d",stack[i]);
		}
	}
}
