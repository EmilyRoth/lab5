#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

extern double delay(int loops);

int main(int argc, char *argv[])
{
  int D; 
  double z;
  struct timeval start, end;
  
  if (argc != 2) exit(1);
  gettimeofday(&start, 0); // get start real time
  D = atoi(argv[1]);
  if (D > 0) z = delay(D);
  gettimeofday(&end, 0); // get end real time
  printf("start sec %lu usec %lu\n", start.tv_sec, start.tv_usec);
  printf("end sec %lu usec %lu\n", end.tv_sec, end.tv_usec);
  exit(z); // just try to make sure z is used
}
