#include "middle_list.h"

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2)
{
    for (int k = 0; k < lst.size(); k++)
    {
        if (lst[k] % 2 == 0)
            lst1.push_back(lst[k]);
        else
            lst2.push_back(lst[k]);
    }
}
