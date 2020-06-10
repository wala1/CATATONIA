/** 
 * @file quiz.c 
*/
#include"quiz.h"

/** 
 * @brief  To initialize the quiz 
 * @param q the Quiz  
 * @param filename  the url of the file  
 * @return Nothing  
*/
void QUIZ_Init(Quiz *q, char* filename) {
	q->f = fopen(filename,"r");
	for(int i = 0; i<5; i++){
		char buf[255];
		fgets(buf, sizeof(buf),q->f);
		strcpy(q->questions[i].question,buf);
		fgets(buf, sizeof(buf),q->f);
		strcpy(q->questions[i].reponse1,buf);
		fgets(buf, sizeof(buf),q->f);
		strcpy(q->questions[i].reponse2,buf);
		fgets(buf, sizeof(buf),q->f);
		strcpy(q->questions[i].reponse3,buf);
	}

	fclose(q->f);
}
/** 
 * @brief  giving the choices related to the question 
 * @param q the integer 
 * @param t the question 
 * @return the answer 
*/

const char* getQuestion(Question *t,int q)
{
	if(q==0)
		return t->reponse1;
	if(q==1)
		return t->reponse2;
	return t->reponse3;
}
