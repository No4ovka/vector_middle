#include "middle_list.h"

string itc_join(vector <char> lst, string sep)
{
    string str = "";
    if (lst.size() > 0)
    {
        for (int k = 0; k < lst.size(); k++)
            str += lst[k] + sep;
    }
    return str;
}
