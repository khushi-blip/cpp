#include<stdio.h>
union device{
  int deviceid;
  char devicename[45];//ouput will be 45
  float devicenumber;
  
};
int main(){
  union device d1;
  printf(" size of %d\n",sizeof(d1));

  printf(" size of device id %d\n",sizeof(d1.deviceid));
  printf(" size of device name %d\n",sizeof(d1.devicename));
  printf(" size of device number %d\n",sizeof(d1.devicenumber));
}