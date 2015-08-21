#include "hellojni.h"

JNIEXPORT jstring JNICALL Java_com_unia_android_hellojni_MainActivity_getStringFromJNINative(JNIEnv* env, jobject obj){
    return (*env)->NewStringUTF(env, "Hello from NDK!");
}
