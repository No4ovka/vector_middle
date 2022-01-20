#include "middle_list.h"

long itc_sum_even_lst(const vector <int> &lst)
{
    long long sum = 0;
    for (int k = 0; k < lst.size(); k+= 2)
        sum += lst[k];
    return sum;
}
