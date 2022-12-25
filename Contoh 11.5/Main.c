#include<stdio.h>
#include<conio.h>
#include<stdio.h>
//deklarasi fungsi
void tukar(int *a, int *b);

//deklarasi variabel
int x = 5, y = 10; 
int main()
{    
    system("cls");
    printf("Sebelum ditukar a=%d b=%d\n",x,y);
    tukar(&x,&y);
    printf("Setelah ditukar a=%d b=%d",x,y);

    getch();
    return 0;
}

//definisi fungsi
void tukar(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Didalam fungsi a=%d b=%d\n",*a,*b);
}