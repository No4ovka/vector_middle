#include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int> &lst)
{
    double pos = 0, neg = 0, maxpos = 0, minpos = 9, sumpos = 0, maxneg = -10, minneg = 10, sumneg = 0, null = 0;
    double srpos = 0, srneg = 0;
    for (int k = 0; k < lst.size(); k++)
    {
        if (lst[k] > 0)
        {
            pos ++;
            sumpos += lst[k];
            if (lst[k] > maxpos)
                maxpos = lst[k];
            if (lst[k] < minpos)
                minpos = lst[k];
        }
        else if (lst[k] < 0)
        {
            neg++;
            sumneg += lst[k];
            if (lst[k] > maxneg)
                maxneg = lst[k];
            if (lst[k] < minneg)
                minneg = lst[k];
        }
        else
            null++;
    }
    srpos =  sumpos / pos;
    srneg = srneg / neg;
    itc_print1(pos, neg, maxpos, minpos, sumpos, maxneg, minneg, sumneg, srpos, srneg, null);
}

void itc_print1(double pos, double neg, double maxpos, double minpos, double sumpos, double maxneg, double minneg, double sumneg, double srpos, double srneg, double null)
{
    setlocale(LC_ALL, "rus");
    cout<<"Положительные:			Отрицательные:"<<endl;
    cout<<"Количество чисел: "<<pos<<"             Количество чисел:"<<neg<<endl;
    cout<<"Максимальная цифра:"<<maxpos<<"		Максимальная цифра:"<<maxneg<<endl;
    cout<<"Минимальная цифра:"<<minpos<<"		Минимальная цифра:"<<minneg<<endl;
    cout<<"Сумма чисел:"<<sumpos<<"			Сумма чисел: "<<sumneg<<endl;
    cout<<"Среднее значение:"<<srpos<<" 		Среднее значение:"<<sumneg / neg<<endl;
    cout<<"Количество нулей:"<<null<<endl;
}
