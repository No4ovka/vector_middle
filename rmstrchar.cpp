#include "middle_list.h"

string itc_rmstrchar(string str, string les)
{
    string str1 = "";
    bool a = true;
    for (int k = 0; k < itc_len(str); k++){
        for (int i = 0; i < itc_len(les); i++)
        {
            if (str[k] == les[i])
                a = false;
        }
        if (a == true)
            str1 += str[k];
        a = true;
    }
    return str1;
}
