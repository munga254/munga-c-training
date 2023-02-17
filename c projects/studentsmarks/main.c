#include <stdio.h>
#include <stdlib.h>
typedef struct students{
    int adm;
    char name;
    int maths;
    int english;
    int kiswahili;
    int history;
    int physics;
    int chemistry;
}student;
student *new_student(int adm,int maths,int english,int kiswahili,int history,int physics,int chemistry)
{
    struct students *student;
    student = malloc(sizeof(struct students));
    if (student == NULL)
        return NULL;
    student->adm = adm;
    student->maths = maths;
    student->english = english;
    student->kiswahili = kiswahili;
    student->history = history;
    student->physics = physics;
    student->chemistry = chemistry;
    return student;


}
int main()
{
    struct std *student;
    int adm, math, english, kiswahili, history, physics, chemistry, total;
    float average;
    printf("enter admission number");
    scanf("%d", &adm) ;
    printf("Enter five subjects\n");
    scanf("%d%d%d%d%d%d", &math, &english, &kiswahili, &history, &physics, &chemistry);
    student = new_student(adm, math, english, kiswahili, history, physics, chemistry);
    if (student == NULL)
        return 1;
    printf("admission:%d\n maths:%d\n english:%d\n kiswahili %d\n history %d\n physics %d\n chemistry\n",adm,math,english,kiswahili,history,physics,chemistry);
    total = math + english + kiswahili + history + physics + chemistry;
    average = total / 6;
    printf("Average: %f\n total: %d\n",average, total);
    free(student);
    return(0);
}
