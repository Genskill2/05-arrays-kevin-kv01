#include <stdio.h>
/*Average*/

float average(int a[],int num){
  int total=0;
  for (int i=0;i<num;i++)
      total = total + 1;
  total=total/num;
  return total;
}

/*Maximum*/

int max(int a[],int num){
  int max= 0;
  for (int i=0;i<num;i++){
    if(max < a[i])
      max=a[i];
  }
  return max;
}

/*Minimum*/

int min(int a[],int num){
  int i=0,min=a[i];
  for(i;i<num;i++){
    if(a[i]<min)
      min=a[i];
  }
  return min;
}

/*Mode*/

int mode(int a[],int num){
  int modex,modey=0,mode;
  for(int i=0;i<num;i++){
    modex =0;
    for(int j=0;j<num;j++){
      if(a[i] ==a[j])
        modex++;
    }
    if(modey<modex)
      modey =a[i];
    modey=modex;  
    }
    return(mode);
}

/*Factors*/

int factors(int num,int a[]){
  int acc=0;
  for(int i=2;i<=num;i++){
      while(num%i==0){
        num=num/i;
        a[acc] = i;
        acc ++;
      }
  }
  return acc;
}
