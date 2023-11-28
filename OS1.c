#include<stdio.h>
void fwt(int proces[],int n,int bt[],int wt[])
{
for(int i=1;i<n;i++) {
    wt[i]=bt[i-1]+wt[i-1];
}
    }
void ftat(int proces[],int n,int bt[],int wt[],int tat[])
{

    for(int i=0;i<n;i++) {
        tat[i]=bt[i]+wt[i];
    }
}
void favg(int proces[],int n,int bt[]) {
 int wt[n],tat[n],t_wt=0,t_tat=0;
 fwt(proces,n,bt,wt);
 ftat(proces,n,bt,wt,tat);
 printf("Process\tbust time\twait time\tTAT\n");
 for(int i=0;i<n;i++) {
    printf("%d",(i+1));
    printf("%d",bt[i]);
    printf("%d",wt[i]);
    printf("%d",tat[i]);
    printf("\n");
 }
 float s=(float)t_wt/(float)n;
  float t=(float)t_tat/(float)n;
  printf("Average wait Time:%f",s);
  printf("\n");
  printf("Average Turn around time:%f\n",t);
 }
 int main() {
  int proces[]={1,2,3};
  int n=sizeof(proces)/sizeof(proces[0]);
  int brust_time[]={10,5,8};
  favg(proces,n,brust_time);
 }
