void my_putstr(char* param_1){
    int length = strlen(param_1);
    write(1, param_1, length);
}