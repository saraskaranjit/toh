//Program : C program to show the solution of Tower of Hanoi problem using recursive method.
//By : Saras Karanjit
//Date : 24th July, 2016

#include<stdio.h>
#include<stdlib.h>

 void tower(int, char , char , char); 
 
 int main()
 {
 	int a;
 	printf("Enter the no. of disks : \n");
 	scanf("%d",&a);
 	tower(a,'A','C','B');
 }
 
 void tower(int a, char A, char C, char B)
 {
 	if(a>0)
 	{
	 	tower(a-1,A,B,C);
		printf("\n %s %d %s %c %s %c.","Move disk",a,"from peg",A,"to peg",C);
	 	tower(a-1,B,C,A);
 	}

}
