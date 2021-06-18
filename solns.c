#include <stdio.h>

//average
float average(int [], int length){

float avg,total = 0;

for(int i = 0; i<length; i++){

total = total + num[i];
avg = total/length;
}
return avg;
}
 //factors
 int factors(int num,int nos[]){
  int i,fact=0;
  for(i=2;i<=num;i++){
      while(num%i==0){
        num=num/i;
        nos[fact] = i;
        fact = fact + 1;
      }
  }
  return fact;
}
//max
  int max(int num[], int length){

int a = num[0];

for(int i = 0; i<length; i++){
if(num[i] > a){
a = num[i];
}
}
return a;
}
//min
int min(int num[], int length){
int a;
a = num[0];

for(int i = 0; i<length; i++){
if(num[i] < a){

a = num[i];
}
}
return a;
}
// mode
int mode(int num[], int length){	
int x=0, value=0;

for(int i=0;i<length;i++)
{
int counts=0;

  for(int j=0;j<length;j++){
  {
     if(num[j]==num[i])
     counts = counts + 1;
  }
  if(counts>x)
   {
      x=counts;
      value=num[i];
   }
return value;
}
}
}
