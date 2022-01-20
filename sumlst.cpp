#include "middle_list.h"

 long itc_sumlst(const vector <int> &lst)
 {
     long long sum = 0;
     for (int k = 0; k < lst.size(); k++)
        sum += lst[k];
    return sum;
 }
