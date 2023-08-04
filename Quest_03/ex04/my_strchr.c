char* my_strchr(char* param_1, char param_2){
  for(int i = 0; *param_1 != '\0'; param_1++){
    if(*param_1 == param_2){
      return (char*)param_1;
    }
  }
  if (param_2 == '\0') {
    return (char*)param_1;
  }

    return 0;
}