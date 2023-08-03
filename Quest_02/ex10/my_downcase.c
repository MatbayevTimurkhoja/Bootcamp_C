char* my_downcase(char* param_1)
{
  int i;
  for(i = 0; param_1[i] != '\0'; i++){
    if(param_1[i] >= 65 && param_1[i] <= 90){
      param_1[i] = param_1[i] + 32;
    }
  }
  return param_1;
}
