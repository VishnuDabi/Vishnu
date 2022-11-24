#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "This is ", str2[] = "c language";
   strcat(str1, str2);

   puts(str1);
}