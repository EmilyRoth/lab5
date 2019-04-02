#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

extern double delay(int loops);

int main(int argc, char *argv[])
{
  // so we want the timing to be similar to ex1 but it's wrong anyways?
  // Do you want D to be in seconds or in that random format like in ex1?
  // Is D supposed to be microseconds..?
  // Is there even supposed to be an input
  // are we trying to determine D
  // Get a better value of D than ex2 for D in ex 1

  // Ok we want to compute D to find the correct time to be a second
  // we use their delay method I guess

  int D; 
  double z;
  int precise_Time;
  struct timeval start, end;
  clock_t startTime;
  // question on when to start timing. After input is read or what?
  
  D = 250;
  gettimeofday(&start, 0); // get start real time
  // fill in here
  startTime = clock();
  while(startTime + CLOCKS_PER_SEC > clock()){
    delay(250);
    D += 250;
  }
  // we want a D second dlay
  gettimeofday(&end, 0); // get end real time
  printf("The delay we get is %d\n", D);
  printf("start sec %lu usec %lu\n", start.tv_sec, start.tv_usec);
  printf("end sec %lu usec %lu\n", end.tv_sec, end.tv_usec);
  exit(z); // just try to make sure z is used
}
