#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define N 2 //Ari8mos erwthsewn

int main()
{
	//i -> gia tis erwthseis pou 8a ginoun
	int i,a,e;//i = 1 or 2 or 3 epilogh gia to menu,
    //e epilogh gia thn kathgoria
    char c;//c = yes or no
    //srand(time(NULL));
    //---Ekkinhsh menu----//
	printf("\nWELCOME:\n");
	printf("\n1.Start\n");
	printf("\n2.Continue\n");
	printf("\n3.END\n");
	//---Telos menu----//
	//---Ekkinhsh Diabasmatos epiloghs---//
	scanf("%d",&i);
	//printf("You choose %d\n",i);
    //---Telos Diabasmatos epiloghs---//
	//---Epilogh Menu---//
	if(i == 1)
	{
	//---1.Start game---//
	    printf("Categories:\n");
	    printf("\n1.ANIMALS!\n");
	    printf("2.MOVIES!\n");
	    printf("CHOOSE:\n");
	    scanf("%d",&e);
	    if(e == 1)
        {
            //a = rand() % 2;
            printf("\nWhich animal is the wildest?\n");
            printf("1.DOG\n");
            printf("2.CHEETAH\n");
            printf("\nGive your answer!\n");
            scanf("%d",&a);
            if(a == 1)
            {
                printf("WRONG!\n");
            }
            if(a == 2)
            {
                printf("\nTRUE!\n");
                printf("CONTINUE?(Y/N)\n");
                c = getche();
                if(c == 'Y')
                {
                    printf("\nCATEGORIES:\n");
                    printf("1.ANIMALS!\n");
                    printf("\n2.MOVIES!\n");
                }
            }

        }
         scanf("%d",&e);
         if(e == 2)
        {
            //a = rand() % 2;
            printf("\nWhich movie is the best?\n");
            printf("\n1.STAR WARS!\n");
            printf("\n2.AVENGERS!\n");
            printf("\nGive your answer!\n");
            scanf("%d",&a);
             if(a == 1)
            {
                printf("WRONG!\n");
            }
            if(a == 2)
            {
                printf("\nTRUE!");
                printf("\nWIN!\n");
            }
        }
	}
	system("pause");
	return 0;
}
