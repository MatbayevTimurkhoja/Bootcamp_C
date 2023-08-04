char * my_strstr(const char *param_1, char *param_2)
{
    int param_3 = strlen(param_2);
    while(*param_1)
        if(!memcmp(param_1++, param_2, param_3))
            return (char *) (param_1 - 1);
    return 0;
}