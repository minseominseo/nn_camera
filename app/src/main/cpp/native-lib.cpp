#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_cms_nn_1camera_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT JNICALL
Java_com_example_cms_nn_1camera_MainActivity_ConvertRGByoGray(
JNIEnv *env,
jobject instance,
jlong matAddrInput,
jlong matAddrResult){

}