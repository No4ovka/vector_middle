#include "middle_list.h"

vector <char> itc_strtlist(string str)
{
    vector <char> vec (itc_len(str));
    for (int k = 0; k < itc_len(str); k++)
        vec[k] = str[k];

    return vec;
}
