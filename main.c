/*
 * Данный код должен подсчитывать количество уникальных эелементов в заданном массиве целых чисел
 * посредством двух счетчиков. Один стоит на текущей позиции сравнения, второй увеличивается
 * относительно него до конца массива. Элементы, совпадающие с текущим "вычеркиваются" им
 * присваивается "несуществующее" значение (константа в рамках одних входных данных)
 */

#include <stdio.h>
#define szz 10
#define array array5

int main()
{
    int array0[szz] = {5,5,7,3,3,2,2,1,1,10}; // 6
    int array1[szz] = {5,4,7,4,3,4,2,4,1,4}; // 6
    int array2[szz] = {1,1,1,1,1,1,1,1,1,1}; // 1
    int array3[szz] = {0,1,2,3,4,5,6,7,8,9}; // 10
    int array4[szz] = {1,2,2,2,2,2,2,9,50,2}; // 4
    int array5[szz] = {-5,5,-7,3,-3,2,-2,1,-1,10}; // 10

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
