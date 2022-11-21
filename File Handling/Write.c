 #include <stdio.h>

int main(void) {
  
  FILE *fp;
  char a[20];
  

  //File Creating or writing
  
  fp=fopen("file.text","w");
  fputc('c',fp); // storing an character
  fputs("File writing \n",fp); // storing an String
    // Writing the user inputs
  gets(a);
  fputs(a,fp);

    //fprintf(file pointer,types,variables)
  char myname[20]="File Writing";
  int myage=21;

  fprintf(fp,"\n %s \n %d" , myname,myage);

  // File Closing
  fclose(fp);
  return 0;
}
