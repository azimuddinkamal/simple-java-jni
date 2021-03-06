#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h> 

JNIEXPORT jintArray JNICALL Java_Q2_arraySize(JNIEnv *env, jobject obj, jint arrsize){

jintArray arr = (*env)->NewIntArray(env, arrsize);
if(arr == NULL){
	return NULL;
}

int c = 0;
 
jint fill[arrsize];

// Use current time as seed for random generator
srand(time(0));

printf("The Random Number is: \n");

for (int i = 0; i < arrsize; i++){ 
	fill[i]=(rand()%100) + 1;
	printf( "%li\n", fill[i]) ;
}

for (int j = 0; j < arrsize; j++){
	if (fill[j] < 50){
		c++;
	}
}

printf("The Total Number Below 50 is: %d\n", c);


(*env)->SetIntArrayRegion(env, arr, 0, arrsize, fill);

return arr;

}

JNIEXPORT jint JNICALL Java_Q2_calculation(JNIEnv *env, jobject obj, jintArray arr){
    
   
    jsize size = (*env)->GetArrayLength(env, arr);
    
    jint *body = (*env)->GetIntArrayElements(env, arr, 0);

    jint max = body[0];
    jint min = body[0];

    /*
     * Find maximum and minimum in all array elements.
     */
    for(int i=1; i<size; i++)
    {
        /* If current element is greater than max */
        if(body[i] > max)
        {
            max = body[i];
        }

        /* If current element is smaller than min */
        if(body[i] < min)
        {
            min = body[i];
        }
    }
	(*env)->ReleaseIntArrayElements(env,arr,body,0);
	printf( "The Maximum Number is %li\n", max) ;
	printf( "The Minimum Number is %li\n", min) ;
	
	jint total = max - min;
	return total;


}