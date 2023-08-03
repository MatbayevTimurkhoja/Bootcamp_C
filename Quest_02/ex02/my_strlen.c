
int my_strlen(char* param_1)
{
  int i;
  for(i = 0; param_1[i] != '\0'; i++);
  param_1++;
  return i;
}

