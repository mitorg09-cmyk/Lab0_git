/*
 * Данный код должен подсчитывать количество уникальных эелементов в заданном массиве целых чисел
 * посредством двух счетчиков. Один стоит на текущей позиции сравнения, второй увеличивается
 * относительно него до конца массива. Элементы, совпадающие с текущим "вычеркиваются" им
 * присваивается "несуществующее" значение (константа в рамках одних входных данных)
 */

#include <stdio.h>
#define szz 10

int main()
{
    int array[szz] = {5,5,7,3,3,2,2,1,1,10};
    int max = array[0];
    for(int i=1;i < szz;i++)
        if(array[i] > max) max = array[i];
    int unique = 1;
    int notExist = max+1;
    int countEl=0;
    for(int i=0;i < szz;i++)
    {
        int jx = i+1;
        if(array[i]!= notExist)
        {
            unique = 1;
            while(jx < szz)
            {
                if(array[jx]!= notExist)
                {
                    if(array[i] == array[jx])
                    {
                        array[jx] = notExist;

                    }
                }
                jx++;
            }
        }
         else
        unique = 0;
        if(unique)
            countEl++;
        else
            array[i] = notExist;
    }

    printf("countEl = %d \n", countEl);
}
