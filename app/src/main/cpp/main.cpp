//
//#include <jni.h>
//#include "com_eunsong_opencvcameraex1_MainActivity.h"
//#include "../../../../../../Library/Android/sdk/ndk-bundle/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include/jni.h"
//
//
//#include <opencv2/opencv.hpp>
//
//
//using namespace cv;
//
//
//
//extern "C"{
//JNIEXPORT void JNICALL Java_com_eunsong_opencvcameraex1_MainActivity_ConvertRGBtoGray(
//        JNIEnv *env,
//        jobject  instance,
//        jlong matAddrInput,
//        jlong matAddrResult){
//
//
//    Mat &matInput = *(Mat *)matAddrInput;
//    Mat &matResult = *(Mat *)matAddrResult;
//
//    cvtColor(matInput, matResult, COLOR_RGBA2GRAY);
//
//
//    }
//}