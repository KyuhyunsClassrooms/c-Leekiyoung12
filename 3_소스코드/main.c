#include<stdio.h>
#include<string.h>

struct Student {
    char name[20];
    int score;
    int grade;
    
};
int main(){
int n;
int count = 0;
char target[20];
scanf("%d",&n);
struct Student students[n];  	

for(int i=0;i<n;i++){
    scanf("%s",&students[i].name);
    scanf("%d",&students[i].score);
    students[i].grade =1;
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(students[i].score <students[j].score){
            students[i].grade++;
        }
    }
    count+=students[i].score; 

}
scanf("%s",target);
for(int i=0;i<n;i++){
if(strcmp(students[i].name, target) == 0){
    printf("%d %d / %d ",count/n,students[i].grade ,n);	
}
}

}
