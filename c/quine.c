#include <stdio.h>
int main() {
    char *p = "\n    printf(\"#include <stdio.h>\\nint main() {\\n    char *p = \\\"\");\n    for (int i =0;p[i];i++){\n      if(p[i]=='\\\\'){\n        printf(\"%s\", \"\\\\\\\\\");\n      }\n      else if (p[i]=='\\\"') { \n        printf(\"%s\", \"\\\\\\\"\");\n      }\n      else if (p[i]=='\\n') {\n        printf(\"%s\", \"\\\\n\");\n      }\n      else{\n        printf(\"%c\", p[i]);\n      }\n    }\n      printf(\"\\\";\");\n      printf(\"%s\", p);\n};";
    printf("#include <stdio.h>\nint main() { \n    char *p = \"");
    for (int i = 0; p[i]; i++){
      if(p[i]=='\\') {
        printf("%s", "\\\\");
      }
      else if (p[i]=='\"') {
        printf("%s", "\\\"");
      }
      else if (p[i]=='\n') {
        printf("%s", "\\n");
      }
      else{
        printf("%c", p[i]);
      }
    }
    printf("\";");
    printf("%s", p);
}
