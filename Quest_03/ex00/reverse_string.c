char* reverse_string(char* param_1)
{
    int right = strlen(param_1) - 1;

    for(int left = 0; left < right; left++){
        char temp = param_1[left];
        param_1[left] = param_1[right];
        param_1[right] = temp;
        right--;
    }
    return param_1;
}