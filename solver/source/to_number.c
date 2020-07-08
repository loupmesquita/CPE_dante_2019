/*
** EPITECH PROJECT, 2019
** to_number
** File description:
** to_number
*/

int to_number(char const *str)
{
    int    n = 0;
    int    o = 1;
    int    number = 0;

    while (str[n] != '\0' && (str[n] == 43 || str[n] == 45))
    {
        if (str[n] == 45)
        {
            o = ((o)*(-1));
        }
        n++;
    }
    while (str[n] >= 48 && str[n] <= 57)
    {
        number = ((number)*(10)) + str[n] - '0';
        n++;
    }
    if (number < -2147483647 || number > 2147483647)
        return (0);
    return ((number)*(o));
}
