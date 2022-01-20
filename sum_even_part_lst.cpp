#include "middle_list.h"

long itc_sum_even_part_lst(const vector <int> &lst)
{
    long long sum = 0;
    for (int k = 0; k < lst.size(); k++)
        if (lst[k] % 2 == 0)
            sum += lst[k];
    return sum;

}
