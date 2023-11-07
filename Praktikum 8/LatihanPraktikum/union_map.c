#include <stdio.h>
#include "union_map.h"

Map UnionMap(Map m1, Map m2, boolean key_based)
{
    Map m3;
    CreateEmpty(&m3);

    for (int i = 0; i < m1.Count; i++)
    {
        Insert(&m3, m1.Elements[i].Key, m1.Elements[i].Value);
    }
    for (int i = 0; i < m2.Count; i++)
    {
        Insert(&m3, m2.Elements[i].Key, m2.Elements[i].Value);
    }

    if (key_based)
    {
        int i = 1, j;
        infotype temp;
        for (i; i < m3.Count; i++)
        {
            temp = m3.Elements[i];
            j = i - 1;
            while (j >= 0 && m3.Elements[j].Key > temp.Key)
            {
                m3.Elements[j + 1] = m3.Elements[j];
                j = j - 1;
            }
            m3.Elements[j + 1] = temp;
        }
    }
    else
    {
        int i = 1, j;
        infotype temp;
        for (i; i < m3.Count; i++)
        {
            temp = m3.Elements[i];
            j = i - 1;
            while (j >= 0 && m3.Elements[j].Value > temp.Value)
            {
                m3.Elements[j + 1] = m3.Elements[j];
                j = j - 1;
            }
            m3.Elements[j + 1] = temp;
        }
    }
    return m3;
}