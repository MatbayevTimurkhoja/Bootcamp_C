int my_string_index(char* param_1, char param_2)
{
    int i;
    for(i = 0; i < param_1[i]; i++){
      if(param_1[i] == param_2){
        return i;
      }
  }
    return -1;
}
