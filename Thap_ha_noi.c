#include<stdio.h>
#include<conio.h>
int n,d;
void move(int n,int c1,int c2,int c3)
{
    if(n==1)
    {
        d++;
        printf("\n Lan thu %3d : ",d);
        printf("chuyen dia tu coc %d sang coc %d",c1,c2);
        if(d%25==0) getch();
    }
    else
    {
        move(n-1,c1,c3,c2);
        move(1,c1,c2,c3);
        move(n-1,c3,c2,c1);
    }
}
int main()
{
    printf("\n Nhap vao so dia n= ");
    scanf("%d",&n);
    move(n,1,2,3);
    printf("\n Xong");
    getch();
}
