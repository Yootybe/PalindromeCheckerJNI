#include <string>
#include <algorithm>

#include "PalindromeChecker.h"

extern "C" {
    JNIEXPORT jboolean JNICALL Java_PalindromeChecker_isPalindrome(JNIEnv* env, jobject obj, jstring str);
}

JNIEXPORT jboolean JNICALL Java_PalindromeChecker_isPalindrome(JNIEnv* env, jobject obj, jstring str) {
    const char* input = env->GetStringUTFChars(str, nullptr);
    std::string strInput(input);
    env->ReleaseStringUTFChars(str, input);

    std::string strCopy = strInput;
    std::reverse(strCopy.begin(), strCopy.end());

    return strInput == strCopy;
}