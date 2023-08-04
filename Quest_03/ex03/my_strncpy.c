char* my_strncpy(char* param_1, char* param_2, int param_3){
  char* param_4 = param_1;

  while(*param_2 && param_3--){
    *param_1 = * param_2;
     param_1++;
     param_2++;
  }
  *param_1 = '\0';
  return param_4;
}