#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct day {
 char *dayname;
 int date;
 char *act;
 };
struct day *creat() {
struct day *nday=(struct day*)malloc(sizeof(struct day));
nday->dayname=(char*)malloc(10*(sizeof(char)));
nday->date=(int*)malloc(sizeof(int));
nday->act=(char*)malloc(50*(sizeof(char)));
printf("Enter the day name:");
scanf("%s",(nday->dayname));
printf("Enter the date:");
scanf("%d",&(nday->date));
printf("Enter the activity:");
scanf("%s",(nday->act));
return nday;
}
void read(struct day *cal[],int size) {
    printf("Enter the details of the day:\n");
 for(int i=0;i<size;i++) {
   cal[i]=creat();
 }
}
void display(struct day *cal[],int size) {
 printf("Weeks activity list:\n");
 printf("DayName\t\tDate\t\tActivity\n");
 for(int i=0;i<size;i++) {
    printf("%s\t\t%d\t\t%s",cal[i]->dayname,cal[i]->date,cal[i]->act);
    printf("\n");
 }
}
void freem(struct day *cal[],int size) {
 for(int i=0;i<size;i++) {
    free(cal[i]->dayname);
    free(cal[i]->date);
    free(cal[i]->act);
 }
}
int main() {
int sizes=1;
struct day *week[sizes];
read(week,sizes);
display(week,sizes);
freem(week,sizes);
return 0;
}
