#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr, min, second,i=0;
    printf("Enter Hours: ");
    scanf("%d",&hr);
    system("cls");
    printf("Enter Minute: ");
    scanf("%d",&min);
    system("cls");
    printf("Enter Second: ");
    scanf("%d",&second);
    system("cls");

system("cls");
        printf("TIMER -> %d : %d : %d ",hr,min,--second);
        Sleep(1000);

for ( i = 100; ; i = i + 5)
           Beep(i,1000);
}
