/* This program answers the question: 
Write a program to determine whether a student has passed or failed. 
To pass, a student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/
#include <stdio.h>
int main(){
    int marks1,marks2,marks3;
    printf("enter your marks for subject 1: ");
    scanf("%d",&marks1);
    printf("enter your marks for subject 2: ");
    scanf("%d",&marks2);
    printf("enter your marks for subject 3: ");
    scanf("%d",&marks3);
    float percentage=(marks1+marks2+marks3)/3;
    printf("You've achieved total percentage of: %.2f\n", percentage);
    if (marks1>=33 && marks2>=33 && marks3>=33 && percentage>=40 ){
      printf("Congratulations! you've passed the exams.");
    }
    else if(marks1<33){
     printf("sorry, you've failed the exams :(");
    }
    else if(marks2<33){
     printf("sorry, you've failed the exams :(");
    }
    else if(marks3<33){
      printf("sorry, you've failed the exams :(");
    }
    else if(percentage<40){
        printf("sorry, you've failed the exam :(");
    }
    return 0;
}