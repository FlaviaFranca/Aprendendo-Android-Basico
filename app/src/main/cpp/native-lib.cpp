#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cursoandroid_flviapimenta_meu_1primeiro_1programa_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
