// CQ1.c

#include <jni.h>
#include <stdio.h>
#include <stdbool.h> 

JNIEXPORT void JNICALL Java_Q1_diploma(JNIEnv *env, jobject obj){
	
	float cgpa;
	bool cont = true;
	while (cont){
	printf ("\nEnter your cgpa :");
	scanf ("%f", &cgpa);
	if (cgpa <= 4){
	if(cgpa >= 2){
		if (cgpa>= 3){
			if (cgpa>= 3.5){
				printf ("Distinction");
				cont = false;
			}else{
				printf ("Credit");
				cont = false;
				}
		}else{
			printf ("Pass");
			cont = false;
		}
	}else{
		printf ("Fail");
		cont = false;
	}
	}else {
		printf ("Please enter again!");
	}
	}
}

JNIEXPORT void JNICALL Java_Q1_degree(JNIEnv *env, jobject obj){


	float cgpa;
	bool cont = true;
	while (cont){
	printf ("\nEnter your cgpa :");
	scanf ("%f", &cgpa);
	if (cgpa <= 4){ 
	if(cgpa >= 2){
		if (cgpa >= 2.67){
			if (cgpa>= 3.33){
				if (cgpa >= 3.67){
					printf ("First");
					cont = false;
				}else{
					printf ("Second Upper");
					cont = false;
				}
			}else{
				printf ("Second Lower");
				cont = false;
				}
		}else{
			printf ("Third");
			cont = false;
		}
	}else{
		printf ("Fail");
		cont = false;
	}
	}else{
		printf ("Please enter again!");
	}
	}
    
}

