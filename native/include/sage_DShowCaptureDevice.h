/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_DShowCaptureDevice */

#ifndef _Included_sage_DShowCaptureDevice
#define _Included_sage_DShowCaptureDevice
#ifdef __cplusplus
extern "C" {
#endif
#undef sage_DShowCaptureDevice_SM2210_ENCODER_MASK
#define sage_DShowCaptureDevice_SM2210_ENCODER_MASK 1L
#undef sage_DShowCaptureDevice_PYTHON2_ENCODER_MASK
#define sage_DShowCaptureDevice_PYTHON2_ENCODER_MASK 2L
#undef sage_DShowCaptureDevice_VBDVCR_ENCODER_MASK
#define sage_DShowCaptureDevice_VBDVCR_ENCODER_MASK 4L
#undef sage_DShowCaptureDevice_MICRONAS_AUDIO_MASK
#define sage_DShowCaptureDevice_MICRONAS_AUDIO_MASK 8L
#undef sage_DShowCaptureDevice_HCW_CAPTURE_MASK
#define sage_DShowCaptureDevice_HCW_CAPTURE_MASK 16L
#undef sage_DShowCaptureDevice_BLACKBIRD_CAPTURE_MASK
#define sage_DShowCaptureDevice_BLACKBIRD_CAPTURE_MASK 32L
#undef sage_DShowCaptureDevice_NEC61051_ENCODER_MASK
#define sage_DShowCaptureDevice_NEC61051_ENCODER_MASK 64L
#undef sage_DShowCaptureDevice_WISGO7007_ENCODER_MASK
#define sage_DShowCaptureDevice_WISGO7007_ENCODER_MASK 128L
#undef sage_DShowCaptureDevice_VWEB2010_ENCODER_MASK
#define sage_DShowCaptureDevice_VWEB2010_ENCODER_MASK 256L
#undef sage_DShowCaptureDevice_HDPVR_ENCODER_MASK
#define sage_DShowCaptureDevice_HDPVR_ENCODER_MASK 1048576L
#undef sage_DShowCaptureDevice_SM2210_ENCODER_MASK
#define sage_DShowCaptureDevice_SM2210_ENCODER_MASK 1L
#undef sage_DShowCaptureDevice_PYTHON2_ENCODER_MASK
#define sage_DShowCaptureDevice_PYTHON2_ENCODER_MASK 2L
#undef sage_DShowCaptureDevice_VBDVCR_ENCODER_MASK
#define sage_DShowCaptureDevice_VBDVCR_ENCODER_MASK 4L
#undef sage_DShowCaptureDevice_MICRONAS_AUDIO_MASK
#define sage_DShowCaptureDevice_MICRONAS_AUDIO_MASK 8L
#undef sage_DShowCaptureDevice_HCW_CAPTURE_MASK
#define sage_DShowCaptureDevice_HCW_CAPTURE_MASK 16L
#undef sage_DShowCaptureDevice_BLACKBIRD_CAPTURE_MASK
#define sage_DShowCaptureDevice_BLACKBIRD_CAPTURE_MASK 32L
#undef sage_DShowCaptureDevice_NEC61051_ENCODER_MASK
#define sage_DShowCaptureDevice_NEC61051_ENCODER_MASK 64L
#undef sage_DShowCaptureDevice_WISGO7007_ENCODER_MASK
#define sage_DShowCaptureDevice_WISGO7007_ENCODER_MASK 128L
#undef sage_DShowCaptureDevice_VWEB2010_ENCODER_MASK
#define sage_DShowCaptureDevice_VWEB2010_ENCODER_MASK 256L
#undef sage_DShowCaptureDevice_HDPVR_ENCODER_MASK
#define sage_DShowCaptureDevice_HDPVR_ENCODER_MASK 1048576L
#undef sage_DShowCaptureDevice_RAW_AV_CAPTURE_MASK
#define sage_DShowCaptureDevice_RAW_AV_CAPTURE_MASK 256L
#undef sage_DShowCaptureDevice_MPEG_VIDEO_ONLY_CAPTURE_MASK
#define sage_DShowCaptureDevice_MPEG_VIDEO_ONLY_CAPTURE_MASK 512L
#undef sage_DShowCaptureDevice_MPEG_VIDEO_RAW_AUDIO_CAPTURE_MASK
#define sage_DShowCaptureDevice_MPEG_VIDEO_RAW_AUDIO_CAPTURE_MASK 1024L
#undef sage_DShowCaptureDevice_MPEG_AV_CAPTURE_MASK
#define sage_DShowCaptureDevice_MPEG_AV_CAPTURE_MASK 2048L
#undef sage_DShowCaptureDevice_LIVE_PREVIEW_MASK
#define sage_DShowCaptureDevice_LIVE_PREVIEW_MASK 4096L
#undef sage_DShowCaptureDevice_MPEG_PURE_CAPTURE_MASK
#define sage_DShowCaptureDevice_MPEG_PURE_CAPTURE_MASK 8192L
#undef sage_DShowCaptureDevice_RAW_VIDEO_CAPTURE_MASK
#define sage_DShowCaptureDevice_RAW_VIDEO_CAPTURE_MASK 16384L
#undef sage_DShowCaptureDevice_BDA_VIDEO_CAPTURE_MASK
#define sage_DShowCaptureDevice_BDA_VIDEO_CAPTURE_MASK 32768L
#undef sage_DShowCaptureDevice_BDA_CAPTURE_TUNER_MASK
#define sage_DShowCaptureDevice_BDA_CAPTURE_TUNER_MASK 65536L
#undef sage_DShowCaptureDevice_BDA_NETWORK_TUNER_MASK
#define sage_DShowCaptureDevice_BDA_NETWORK_TUNER_MASK 131072L
#undef sage_DShowCaptureDevice_BDA_RECEIVER_COMPONENT_MASK
#define sage_DShowCaptureDevice_BDA_RECEIVER_COMPONENT_MASK 262144L
#undef sage_DShowCaptureDevice_BDA_VIRTUAL_TUNER_MASK
#define sage_DShowCaptureDevice_BDA_VIRTUAL_TUNER_MASK 524288L
#undef sage_DShowCaptureDevice_FM_RADIO_FREQ_MAX
#define sage_DShowCaptureDevice_FM_RADIO_FREQ_MAX 108100000L
#undef sage_DShowCaptureDevice_FM_RADIO_FREQ_MIN
#define sage_DShowCaptureDevice_FM_RADIO_FREQ_MIN 88100000L
#undef sage_DShowCaptureDevice_DEVICE_EXIST
#define sage_DShowCaptureDevice_DEVICE_EXIST 1L
#undef sage_DShowCaptureDevice_DEVICE_NO_EXIST
#define sage_DShowCaptureDevice_DEVICE_NO_EXIST 0L
#undef sage_DShowCaptureDevice_DEVICE_INVALID
#define sage_DShowCaptureDevice_DEVICE_INVALID -1L
/*
 * Class:     sage_DShowCaptureDevice
 * Method:    initGraph0
 * Signature: (Ljava/lang/String;IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_sage_DShowCaptureDevice_initGraph0
  (JNIEnv *, jobject, jstring, jint, jint, jstring, jstring, jstring);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    setEncodingProperties0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_setEncodingProperties0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    setCircularFileSize0
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_setCircularFileSize0
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    setupEncodingGraph0
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_setupEncodingGraph0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    startEncoding0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_startEncoding0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    switchOutputFile0
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_switchOutputFile0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    stopEncoding0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_stopEncoding0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    teardownGraph0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_teardownGraph0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    switchToConnector0
 * Signature: (JIILjava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_switchToConnector0
  (JNIEnv *, jobject, jlong, jint, jint, jstring, jint, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    tuneToChannel0
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_tuneToChannel0
  (JNIEnv *, jobject, jlong, jstring, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    autoTuneChannel0
 * Signature: (JLjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_DShowCaptureDevice_autoTuneChannel0
  (JNIEnv *, jobject, jlong, jstring, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    scanBDAChannel0
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sage_DShowCaptureDevice_scanBDAChannel0
  (JNIEnv *, jobject, jlong, jstring, jstring, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getChannel0
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sage_DShowCaptureDevice_getChannel0
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getSignalStrength0
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_sage_DShowCaptureDevice_getSignalStrength0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    isCaptureDeviceValid0
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_sage_DShowCaptureDevice_isCaptureDeviceValid0
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getCrossbarConnections0
 * Signature: (Ljava/lang/String;I)[I
 */
JNIEXPORT jintArray JNICALL Java_sage_DShowCaptureDevice_getCrossbarConnections0
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getDeviceCaps0
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_sage_DShowCaptureDevice_getDeviceCaps0
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    updateColors0
 * Signature: (JIIIII)[I
 */
JNIEXPORT jintArray JNICALL Java_sage_DShowCaptureDevice_updateColors0
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getRecordedBytes0
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_sage_DShowCaptureDevice_getRecordedBytes0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getDevicesInCategory0
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_sage_DShowCaptureDevice_getDevicesInCategory0
  (JNIEnv *, jclass, jstring);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getDevicesInCategoryS0
 * Signature: ([Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_sage_DShowCaptureDevice_getDevicesInCategoryS0
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    setAudioCaptureSource0
 * Signature: (JLjava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_setAudioCaptureSource0
  (JNIEnv *, jobject, jlong, jstring, jint, jint);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    setAudioProcessor0
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_setAudioProcessor0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    setVideoProcessor0
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowCaptureDevice_setVideoProcessor0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getAudioInputPaths0
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_sage_DShowCaptureDevice_getAudioInputPaths0
  (JNIEnv *, jclass);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getNativeVideoPreviewConfigHandle0
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_sage_DShowCaptureDevice_getNativeVideoPreviewConfigHandle0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowCaptureDevice
 * Method:    getBroadcastStandard0
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sage_DShowCaptureDevice_getBroadcastStandard0
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
