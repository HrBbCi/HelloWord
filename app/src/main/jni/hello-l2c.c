#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_kien_myapplication_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {
    return (*env)->  NewStringUTF(env, "Hello from nativeLib");
}