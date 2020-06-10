/** 
 * @file quiz.h 
*/


#pragma once
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/** 
 * @struct Question
* @brief struct for the_questions
 */
typedef struct Question {
	char question[255];
	char reponse1[255];
	char reponse2[255];
	char reponse3[255];
} Question;

/** 
 * @struct Quiz
* @brief struct for_Quiz (from file)
 */
typedef struct Quiz {
	FILE *f;
	Question questions[5];
} Quiz;

void QUIZ_Init(Quiz *q,char* filename);
const char* getQuestion(Question *t,int q);
