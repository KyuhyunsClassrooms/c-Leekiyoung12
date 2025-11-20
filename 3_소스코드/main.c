#include<stdio.h>

struct Student {
    char name[20];
    int score;
    int grade=1;
    
};
int main(){
int n;
int count = 0;
int target;
scanf("%d,&n);
struct Student students[n];  

for(int i=0;i<n;i++){
    scanf("%s",&students[i].name);
    scanf("%d",&students[i].score);
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(students[i].score <students[j].score){
            students[i].grade++;
        }
    }
    count+=students[i].score; 

}
scanf("%d",&target);
printf("%d %d / %d",count/n,students[target-1 ].grade,n );
}
