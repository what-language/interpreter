#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

	

void main( int argc, char **argv) {
if (strcmp(argv[1], "--update") == 0) {
 
	
     system("powershell Invoke-WebRequest https://raw.githubusercontent.com/what-language/interpreter/main/version.txt -OutFile C:/Windows/Temp/wlversion.txt");
  FILE *f2 = fopen("C:/Windows/Temp/wlversion.txt","r");

  char line[BUFSIZ];
  while (fgets(line, sizeof line, f2)) {
  if (strstr(line, "2.1.1")) {
printf("You are in correct version !\n");

  }
else{
printf("Outdated ! Go to https://github.com/what-language/interpreter/releases");
system("start https://github.com/what-language/interpreter/releases");

}
  }
}







 

 FILE *fp = fopen(argv[1],"r");
 char line[BUFSIZ];
  while (fgets(line, sizeof line, fp)) {
  if (strstr(line, "tell:")) {
      fgets(line, sizeof line, fp);
     fputs(line, stdout);
  }
   if (strstr(line, "shell:")) {
            fgets(line, sizeof(line), fp);
         
system(line);
}
   if (strstr(line, "inter.gen.console.wait-")) {
        fgets(line, sizeof(line), fp);
system("pause");
}

   if (strstr(line, "inter.gen.console.apr-")) {
        fgets(line, sizeof(line), fp);
system(line);
}

if (strstr(line, "inter.gen.console.tbrc-")) {
        fgets(line, sizeof(line), fp);
system(line);
}




   

  
  }

 
}





