/* //basic operation in File Handling in C

#include <stdio.h>

int main(void) {
  
  FILE *fp;



  //renaming files
  rename("file.text","rename.text");
  rename("rename.text","file.text");

  //removing files
  //create an dummy file and the  try to remove it.
  remove("delete.text");

  //ferror() -> checks file read & write errors
  //0 -> no error
  //1 -> presence of error

  fp=fopen("file.text","r"); //reading the file

  
  //writing the file
  char myname[20]="File Writing";
  int myage=21;

  fprintf(fp,"\n %s \n %d" , myname,myage);

  //if two different operation(read & write) occurs at same time, then the error arises
  //ferror
  int status1 = ferror(fp);
  printf("%d",status1);

  // clearing error
  
  clearerr(fp);
  
  int status2 = ferror(fp);
  printf("\n\n %d",status2);
  

  //rewind() -> restarts the pointer file again
  while(!feof(fp))
    {
      putchar(fgetc(fp));
    }

  rewind(fp);

  while(!feof(fp))
    {
      putchar(fgetc(fp));
    }

  


  //Dealing with binary files

  FILE *temp;

  temp = tmpfile();
  printf(temp);
  //you can store values in temp file only for temporarly
  //soon after the program stops running the temp file gets deleted


  //file closing
  fclose(fp);
  return 0;
}
*/