#include<stdio.h>
#include<string.h>
#define T 1
#define F 0
typedef struct {
 char name[20];
 int age;
 float salary;
}man;
void main() {
man p1,p2;
printf("Enter the details of P1:");
scanf("%s%d%f",p1.name,&p1.age,&p1.salary);
printf("Enter the details of P2:");
scanf("%s%d%f",p2.name,&p2.age,&p2.salary);
//if(p1==p2) {
   // printf("Same");

int res=check(p1,p2);
if(res==T) {
    printf("same");
}
else {
    printf("Diffrent");
}
}
int check(man p1,man p2) {
 if(strcmp(p1.name,p2.name)) {
    return F;
    if(p1.age!=p2.age) {
        return F;
        if(p1.salary!=p2.salary) {
            return F;
        }
    }
 }
 return T;
}
