int* my_range(int param_1, int param_2) {
    if (param_1 >= param_2) {
        return 0;
    }
    
    int size = param_2 - param_1;
    int* arr = malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; i++) {
        arr[i] = param_1 + i;
    }
    
    return arr;
}