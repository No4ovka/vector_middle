#include "middle_list.h"

string itc_rmstrspc(string str)
{
    string st = "";
    if (itc_len(str) > 0)
    {
        for (int k = 0; k < itc_len(str); k++)
            if (str[k] != ' ')
                st += str[k];
    }
    return st;
}
