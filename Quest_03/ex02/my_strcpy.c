char* my_strcpy(char* param_1, char* param_2) {
    char* param_3 = param_1;
    while (*param_2) {
        *param_1 = *param_2;
         param_1++;
         param_2++;
    }
    *param_1 = '\0';

    return param_3;
}