#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define KIYOSHI_SIZE 5

int main(void)
{
    int i = 0;
    int random = 0;
    int kiyoshi[KIYOSHI_SIZE] = { 0, 0, 0, 0, 1};

    while(i != KIYOSHI_SIZE)
    {
        random = rand() % 2;                /* 0か1 */
        
        if (random == 0)
        {
            printf("ズン\n");              /* 0：ズン */
        } else {
            printf("ドコ\n");              /* 1：ドコ */
        }

        if (kiyoshi[i] == random)
        {
            i++;
        } else {
            i = 0;
        }

        sleep(1);                           /* 1秒待機でわくわく感を付与 */
    }

    printf("キ・ヨ・シ！\n");


    return 0;
}
