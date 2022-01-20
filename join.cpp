#include "middle_list.h"

string itc_join(vector <char> lst, string sep)
{
    string str = "";
    if (lst.size() > 0)
    {
        for (int k = 0; k < lst.size() - 1; k++)
            str += lst[k] + sep;
    }
    str += lst[lst.size() - 1];
    return str;
}
