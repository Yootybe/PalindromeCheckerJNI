#include <string>
#include <cctype>

#include "PalindromeChecker.h"

extern "C" {
    JNIEXPORT jboolean JNICALL Java_PalindromeChecker_isPalindrome(JNIEnv* env, jobject obj, jstring str);
}

JNIEXPORT jboolean JNICALL Java_PalindromeChecker_isPalindrome(JNIEnv* env, jobject obj, jstring str) {
    const char* input = env->GetStringUTFChars(str, nullptr);
    std::string strInput(input);
    env->ReleaseStringUTFChars(str, input);

    std::string processedString;
    for (char ch : strInput) {
        if (!std::isspace(ch) && ch != ',' && ch != '!' && ch != '?' && ch != '.' && ch != '\'') {
            processedString += std::tolower(ch);
        }
    }

    int left = 0;
    int right = processedString.length() - 1;
    while (left < right) {
        if (processedString[left] != processedString[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}