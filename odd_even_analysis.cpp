#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int> &lst)
{
    int chet = 0, nechet = 0, maxchet = 0, minchet = 9, sumchet = 0, maxnech = 0, minnech = 10, sumnech = 0;
    for (int k = 0; k < lst.size(); k++)
    {
        if (lst[k] % 2 == 0)
        {
            chet ++;
            sumchet += lst[k];
            if (lst[k] > maxchet)
                maxchet = lst[k];
            if (lst[k] < minchet)
                minchet = lst[k];
        }
        else
        {
            nechet++;
            sumnech += lst[k];
            if (lst[k] > maxnech)
                maxnech = lst[k];
            if (lst[k] < minnech)
                minnech = lst[k];
        }
    }
    itc_print(chet, nechet, maxchet, minchet, sumchet, maxnech, minnech, sumnech);
}

void itc_print(int chet, int nechet, int maxchet, int minchet, int sumchet, int maxnech, int minnech, int sumnech)
{
    setlocale(LC_ALL, "rus");
    cout<<"Количество четных чисел:"<<chet<<"               Количество нечетных чисел:"<<nechet<<endl;
    cout<<"Максимальная четная цифра:"<<maxchet<<"		Максимальная нечетная цифра:"<<maxnech<<endl;
    cout<<"Минимальная четная цифра:"<<minchet<<"		Минимальная нечетная цифра:"<<minnech<<endl;
    cout<<"Сумма четных чисел:"<<sumchet<<"			Сумма нечетных чисел: "<<sumnech<<endl;
}
