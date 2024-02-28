#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int value[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int upperCase(char c[]);
int calculate(char c[]);  
int check(char c[]);

int main(void)
{

    int i;
    char a1[50];
    char a2[50];
    printf("Player 1: ");
    scanf("%s", a1);
    printf("Player 2: ");
    scanf("%s", a2);

    // int n = strlen(a1); 

    // for( i = 0; i < n ; i++)
    // {
    //     a1[i] = toupper(a1[i]);
    // }

    upperCase(a1);
    int n1 = strlen(a1);
    upperCase(a2);
    int n2 = strlen(a2);
    // printf("%s\n%i\n%s\n%i", a1, n1, a2, n2);

    int p = calculate(a1);
    int q = calculate(a2);

    if(check(a1) == 1 && check(a2) != 1)
    {
        printf("INVALID ENTRY BY PLAYER 2!!!\n");
        printf("PLAYER 1 WINS!!!\n");
    }
    else
    if(check(a1) != 1 && check(a2) == 1)
    {
        printf("INVALID ENTRY BY PLAYER 1!!!\n");
        printf("PLAYER 2 WINS!!!\n");
    }
    else
    if(check(a1) != 1 && check(a2) != 1)
    {
        printf("INVALID ENTRIES!!!\n");
        printf("DISQUALIFIED!!!\n");
    }
    else
    {
        if(p > q)
        {
            printf("PLAYER 1 WINS!!!");
        }
        else
        if(p < q)
        {
            printf("PLAYER 2 WINS!!!");
        }
        else
        {
            printf("TIE!!!");
        }
    }

    
    //Testing logics and checking if the values are allocated to the desired characters.

    // //for(int i = 0; a1[i] != '\0'; i++)
    // //{
    //     for(int j = 0; a[j] != '\0'; j++)
    //     {
    //         // if(a1[i] == a[j])
    //         // {
    //         //     f = f + value[j];
    //         // }
    //         printf("%c = %i\n", a[j], value[j]);
    //     }
    // //}

    // // printf("%i", f);
}

int calculate(char c[])
{
    int i, j;
    int s = 0;
    for(i = 0; c[i] != '\0'; i++)
    {
        for(j = 0; a[j] != '\0'; j++)
        {
            if(c[i] == a[j])
            {
                s = s + value[j];
            }
        }
    }

    return s;
}

int check(char c[])
{
    int i = 0;
    int s = 0;

    for(i = 0; c[i] != '\0'; i++)
    {
        if(isalpha(c[i]) != 0)
        {
            s = s + 0;
        }
        else
        {
            s++;
        }
    }

    if(s == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int upperCase(char c[])
{
    int i;
    int n = strlen(c);

    for(i = 0; i < n; i++)
    {
       c[i] = toupper(c[i]);
    }
    return 0;
}