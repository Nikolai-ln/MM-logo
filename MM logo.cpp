//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int input();
void logo(int N);
#pragma argsused
int main()
{
	int N;
	N = input();
	printf("N = %d\n", N);
	logo(N);
	system("pause");
	return 0;
}
int input()
{
	int a;
    do
	{
		printf("Input an odd number between 2 and 10 000: ");
		scanf("%d", &a);
	}
	while(a%2 != 1 || a<2 || a>10000);
	return a;
}
void logo(int N)
{
	int i, j, k, c=0, d=N, e=0, f=N, g=0, h=N, l=0, m=N, p=0, s, t=N-1, v;//some variables for our algorythm
    for(i=1; i<=N/2+1; i++)//first half of rows
	{
		for(j=1; j<=N-c; j++)//"-" left
			printf("-");
		c++;//increment to make the slope
		for(k=0; k<d; k++)//first trapeze of "*" (1)
			printf("*");
		d=d+2;//increment to make down row of trapeze
		for(j=1; j<=N-e; j++)//"-" between two tops of M
			printf("-");
		e=e+2;//increment to decrease "-" between tops
		for(k=0; k<f; k++)//second trapeze of "*" (1)
			printf("*");
		f=f+2;//increment to make down row of trapeze
		for(j=1; j<=(N-g)*2; j++)//"-" between two letters
			printf("-");
		g++;//increment to decrease "-" between letters
		for(k=0; k<h; k++)//first trapeze of "*" (2)
			printf("*");
		h=h+2;//increment to make down row of trapeze
		for(j=1; j<=N-l; j++)//"-" between two tops of M
			printf("-");
		l=l+2;//increment to decrease "-" between tops
		for(k=0; k<m; k++)//second trapeze of "*" (2)
			printf("*");
		m=m+2;//increment to make down row of trapeze
		for(j=1; j<=N-p; j++)//"-" right
			printf("-");
		p++;//increment to make the slope
		printf("\n");
	}
	//change or save values on some variables
	s=d;
	f=N-1;
	h=N-1;
	m=N-1;
	v=p;
	for(i=1; i<=N/2+1; i++)//second half of rows
	{
		for(j=1; j<=N-c; j++)//"-" left
			printf("-");
		c++;//increment to make the slope
		for(k=0; k<N; k++)//slope to right on first letter
			printf("*");
		for(j=1; j<=(N-f)*2-1; j++)//first triangle of "-"
			printf("-");
		f--;//decrement to make the triangle
		for(k=0; k<d-2; k++)//down trapeze on first letter
			printf("*");
		d=d-2;//decrement to make down row of trapeze
		for(j=1; j<=(N-h)*2-1; j++)//second triangle of "-"
			printf("-");
		h--;//decrement to make the triangle
		for(k=0; k<N; k++)//slope to left on first letter
			printf("*");
		for(j=1; j<=(N-p)*2; j++)//"-" between two letters
			printf("-");
		p++;//increment to decrease "-" between letters
		for(k=0; k<N; k++)//slope to right on second letter
			printf("*");
		for(j=1; j<=(N-m)*2-1; j++)//first triangle of "-"
			printf("-");
		m--;//decrement to make the triangle
		for(k=0; k<s-2; k++)//down trapeze on second letter
			printf("*");
		s=s-2;//decrement to make down row of trapeze
		for(j=1; j<=(N-t)*2-1; j++)//second triangle of "-"
			printf("-");
		t--;//decrement to make the triangle
		for(k=0; k<N; k++)//slope to left on second letter
			printf("*");
		for(j=1; j<=N-v; j++)//"-" right
			printf("-");
		v++;//increment to make the slope
		printf("\n");
	}
}
//---------------------------------------------------------------------------
