char* my_strchr(char* param_1, char param_2){
  const char* param_3 = 0;
  for(int i = 0; *param_1 != '\0'; param_1++){
    if(*param_1 == param_2){
      param_3 = param_1;
    }
  }
  if (param_2 == '\0') {
    return (char*)param_1;
  }

    return (char*)param_3;
}