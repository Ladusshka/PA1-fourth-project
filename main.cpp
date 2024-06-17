#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int vstup(int m[])
{

      int counter = 0;
      for(int i =1 ; i<=250000;i++)
    {

        int res = scanf("%d", &m[counter]);
        if(res == EOF){break;}
        if(res != 1)
        {

            return -1;
        }
        counter+=1;
    }
        if (counter > 250000 || counter < 2)
        {

            return -1;
        }

    return counter;

}
int maximum(int res[250000], int counter, int vvod[250000])
{
    int max = 0;
    for (int i = 0; i < counter; i++) {
        for (int j = counter - 1; j >= i; j--)
            {
            int dlina = (j - i + 1);
            if ( dlina < max) {break;}

            if (vvod[j] >= vvod[i]) {
                if (j != i && max < dlina) {
                    max = dlina;
                }
                res[i] = j;
                break;
            }
        }
    }

    return max;
}

int out_mozn(int counter, int res[250000], int max)
{
    int  mozn = 0;
    for (int i = 0; i < counter; i++)
        {
        if (res[i] - i  == max -1) {
            mozn += 1;
            printf("%d: %d - %d\n", max, i, res[i]);
        }
    }

    return mozn;
}
int main() {
    int vvod[250000];
    printf("Hodnoty:\n");
    int counter = vstup(vvod);
    if(counter == -1){printf("Nespravny vstup.\n"); return 1;}


    int res[250000];
    int max = maximum(res, counter, vvod);

    if (max == 0) {
        printf("Nelze najit.\n");
        return 1;
    }

    int  mozn = out_mozn(counter, res, max);
    printf("Moznosti: %d\n", mozn);

    return 0;
}
