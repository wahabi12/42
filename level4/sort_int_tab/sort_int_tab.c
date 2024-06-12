void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int tem;

    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            tem = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tem;
            i = 0;
        }
        else
            i++;
    }
}