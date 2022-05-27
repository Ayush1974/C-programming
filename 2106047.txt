// Made by Ayush Mishra 2106047
#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{
    int x = 0, y = 0;
    for (int m = 1; m <= 1000 ; m++,x++)
    {

        for (int i = 1; i <= 5; i++)
        {
            gotoxy(x,y);

            for (int j = 1; j <= 4; j++)
            {
                if (i == 1 || j == 1 || i == 3 || j == 4)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf(" ");
            for (int j = 1; j <= 4; j++)
            {
                if (i == 1 || j == 1 || i == 3 || j == 4 || i == 5)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf(" ");
            for (int j = 1; j <= 4; j++)
            {
                if (i == 1 || j == 1 || i == 5)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            y++;
        }
        y=0;
        system("cls");
        
        if(x>160)
        x=0;
        
    }
}