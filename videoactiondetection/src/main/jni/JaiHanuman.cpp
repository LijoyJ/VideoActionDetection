//
// Jai Hanuman
// Created by Anshuman on 7/19/2021.
//

#include <jni.h>
#include <string>
#include <Hilog/log.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_jaihanumanapplication_slice_MainAbilitySlice_stringFromJNI(JNIEnv* env, jobject obj) {
    printf("VideoActionDetection!!!\n");
    HiLogPrint(LOG_APP, LOG_INFO, 0xD000F00, "VideoActionDetection Log", "VideoActionDetection\n");
    std::string JH = "VideoActionDetection!!!";
    int len = JH.size();
    jchar res[len];
    for (int i = 0; i < len; i++) {
        res[i] = (jchar)JH[i];
    }
    return env->NewString(res, len);
}

