#include <stdio.h>

int main(){
  unsigned int num = 2123456789;
  char * a = &num;

  printf("%d\n", num );
  printf("num in hex : %x\n", num );
  printf("location : %x\n", a );

  int count;
  for (count = 0; count <= 3; count++){
    printf("byte #%d : %hhx\n", count + 1, *(a + count) );
  }


  for(count = 0; count<= 3; count++){
     (*(a + count))++;

     printf("Modified hex after +1 to byte %d: %x\n", count + 1, num);
     printf("Modified decimal after +1 to byte %d: %d\n",count + 1, num);
     printf("\n");
  }


  for(count = 0; count<= 3; count++){
    (*(a + count)) += 16;
    printf("Modified hex after +16 to byte %d: %x\n", count + 1, num);
    printf("Modified decimal after +16 to byte %d: %d\n",count + 1, num);
    printf("\n");
  }


  return 0;


}
