2020-A CSE 306 - Compiler Design
Semester V : CSE - A
Week 1 Lab ExerciseWeek 1 Lab Exercise
Week 1 Lab Exercise
Jaya Lakshmi Tangirala
•
Aug 11
Hello all,
CD_Lab_Week1.pdf has the instructions of lab work you need to do this week.
Code of Program1 is available in Language_Recognizer.c
Explanation is in the YouTube video.


Complete the Program given in the Lab assignment. Create a repository named Week1 in your GitHub account and push your work into that, by 18th Aug 2022.

Compiler Design Lab-Language Recognizer
YouTube video   ‪20 minutes‬

CD_Lab_Week1.pdf
PDF

Language_Recognizer.c
C
Class comments

#include<stdio.h>
void main()
{
    int state=0,i=0;
    char token,input[20];
    printf("Enter input string \t :");
    scanf("%s",input);
    //printf("Given string is : %s");

    while((token=input[i++])!='\0')
    {
       // printf("current token : %c \n",token);
        switch(state)
        {
            case 0: if(token=='a')
                        state=1;
                    else if(token=='b')
                        state=2;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 1: if(token=='a')
                        state=0;
                    else if(token=='b')
                        state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }

                    break;
            case 2: if(token=='a')
                        state=3;
                    else if(token=='b')
                        state=0;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 3: if(token=='a')
                        state=2;
                    else if(token=='b')
                        state=1;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
        }
       // printf("state = %d  ",state);
    }
    if(state==0)
        printf("\n\nString accepted\n\n");
    else
        printf("\n\nString not accepted\n\n");
}
Language_Recognizer.c
Displaying Language_Recognizer.c.