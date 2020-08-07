#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int day;
    int month;
    int year;
} date;
date setdate()
{
    date d;
    scanf("%d%d%d",&d.day,&d.month,&d.year);
    return d;
}
void displaydate(date d)
{
    printf("%d/%d/%d",d.day,d.month,d.year);
}
int isleapyear(int year)
{
    date d;
    if(d.year%400==0|| (d.year%100!=0 && d.year%4==0))
    {
        return 1;
    }
    return 0;
}
int isvaliddate(date d)
{
    if(d.month<1||d.month>12||d.day<1||d.year<1)
    {
        return 0;
    }
    else
    {
        switch(d.month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            if(d.day>31)
                return 0;
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        {
            if(d.day>30)
                return 0;
            break;
        }
        case 2:
        {
            if(isleapyear(d.year)==1)

                if(d.day>29)
                {
                    return 0;
                }

                else
                {
                    if(d.day>28)
                        return 0;
                }

        }
        }
    }
    return 1;
}
    int main()
    {
        date d;
        printf("nhap ngay:\n");
        d= setdate();
        printf("in ra ngay:\n");
        displaydate(d);
        if(isvaliddate(d)==1)
            printf("\nngay hop le.");
        else
            printf("\nngay ko hop le.");

    }

