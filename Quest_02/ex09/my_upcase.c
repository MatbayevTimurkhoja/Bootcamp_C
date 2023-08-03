char* my_upcase(char* param_1)
{
  int i;
  for(i = 0; param_1[i] != '\0'; i++){
    if(param_1[i] >= 97 && param_1[i] <= 122){
      param_1[i] = param_1[i] - 32;
    }
  }
  return param_1;
}