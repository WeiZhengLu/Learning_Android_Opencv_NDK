//
// Created by 910736 on 2018/4/19.
//

#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_a910736_opencv_1test_MainActivity_getTestString(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "這是測試訊息";
    return env->NewStringUTF(hello.c_str());
}
