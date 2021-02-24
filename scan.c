/*#include <stdio.h>
#include <time.h>
#include <string.h>*/
typedef struct tm tm;
struct Student
{
    char Name[50];
    char Surname[30];
    char Nickname[15];
    char Gender[10];
    char Nationality[20];
    char State[40];
    char collegeName[50];
    char currentLocation[50];
    char Grade;
    char Department[40];
    char D_O_B[12];
    char marital_status[10];
    int Age;
    double Cgpa;
    char Email[27];
    char check[28];
};
/*void scan();
int main(){
    scan();
    return 0;
}*/
struct Student info;
void scan()
{
    time_t currentTime;
    time(&currentTime);
    //printf("%s", info.check);
    tm *myTime = localtime(&currentTime);
    //strcpy(info.check, ctime(&currentTime));
    //printf("Enter your Name: \n");
    //scanf("%s", info.Name);
    //strcpy(info.Email, "agunbiadebasit17@yahoo.com");
    //printf("%s", info.check);
    //printf("Enter your Surname: \n");
    //scanf("%s", info.Surname);
    printf("Enter your Gender: \n");
    scanf("%s", info.Gender);
    //printf("Enter y our D_O_B: \n");
    //scanf("%s", info.D_O_B);
    //printf("Enter your age: \n");
    //scanf("%d", &info.Age);
    //printf("Enter your Nickname: \n");
    //scanf("%s", info.Nickname);
    /*printf("Enter your current-location: \n");
    scanf("%s", info.currentLocation);
    printf("Enter your Nationality: \n");
    scanf("%s", info.Nationality);
    printf("Enter your State: \n");
    scanf("%s", info.State);*/
    printf("Enter your Marital-Status: \n");
    scanf("%s", info.marital_status);
    /*printf("Enter your college-name: \n");
    scanf("%s", info.collegeName);
    printf("Enter your Department: \n");
    scanf("%s", info.Department);*/
    printf("Enter your Cgpa: \n");
    scanf("%lf", &info.Cgpa);
    printf("Enter your grade: \n");
    scanf(" %c", &info.Grade);
}