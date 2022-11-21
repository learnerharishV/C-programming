 #include <stdio.h>

int main(void) {
  
  FILE *fp; // -> file pointer
  

  //feof() -> End of the file
  
  fp=fopen("file.text","r");

  while(!feof(fp))
    {
      char ch = fgetc(fp);

      printf("%c",ch);
    } 

  //fscanf(file pointer,"types",variable names)
  char data1[100]; // stores 1st word
  int data2; // stores 2nd value
  char data3[100]; // stores 3rd word
  char data4[100]; // stores 4th word
  fscanf(fp,"%s %d %s %s",data1 , &data2 , data3 , data4);

  // the reason for " & " symbol is that in char/strings no need of specifying address
  // But in integer we need to pass is as address
  // since it "fscanf" takes only of addresses
  printf("%s %d %s %s",data1 , data2 , data3 , data4);
  

  //fgets(variable_to_write,length,file pointer)

     while(!feof(fp))
    {
      char x[100];
      fgets(x,100,fp);

      printf("%s",x);
    } 
  
  // File Closing
  fclose(fp);
  return 0;
}
