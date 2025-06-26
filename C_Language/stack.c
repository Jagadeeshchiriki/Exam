#include<stdio.h>
#define SIZE 100

int stack[SIZE];
int top=-1;

void push(int value){
 if(top==SIZE-1){
  printf("stack overflow\n");
}
else{
stack[++top]=value;
printf("%d pushed to stack\n",value);
}
}

void pop(){
if (top==-1){
 printf("stack underflow\n");
}
 else{
 printf("%d popped from stack\n",stack[top--]);
}
}

void peek(){
if(top==-1){
printf("stack is empty\n");
}
else{
 printf("top element is %d\n",stack[top]);
}
}

void display(){
 if(top==-1){
printf("stack is empty\n");
}
else{
 printf("stack elements:");
 for(int i=top;i>=0;i--){
 printf("%d ",stack[i]);
 }
 printf("\n");
}
}

int main(){
int value,choice;

printf("Enter the choices 1.push, 2.pop, 3.peek. 4.display,5.exit()");
while(1){
printf("enter the choice:");
scanf("%d",&choice);
switch(choice){
case 1:printf("enter the value:");
      scanf("%d",&value);
      push(value);
      break;
case 2:pop();
     break;
case 3:peek();
      break;
case 4:display();
      break;
case 5:return 0;
default:printf("enter the currect option\n");
 }
}
return 0;
}
