#include <string.h>
#include <jni.h>

#ifndef _Included_hellojni
#define _Included_hellojni

/*
 * Class:     com_unia_android_hellojni_MainActivity
 * Method:    jstring
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_unia_android_hellojni_MainActivity_getStringFromJNINative(JNIEnv* env, jobject obj);

#endif
