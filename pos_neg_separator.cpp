#include "middle_list.h"

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3)
{
    for (int k = 0; k < lst.size(); k++)
    {
        if (lst[k] < 0)
            lst1.push_back(lst[k]);
        else if (lst[k] == 0)
            lst2.push_back(lst[k]);
        else
            lst3.push_back(lst[k]);
    }
}
