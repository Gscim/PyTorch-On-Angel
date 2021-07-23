/*
 * Tencent is pleased to support the open source community by making Angel
 * available.
 *
 * Copyright (C) 2017-2018 THL A29 Limited, a Tencent company. All rights
 * reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * https://opensource.org/licenses/Apache-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 *
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tencent_angel_pytorch_Torch */

#ifndef _Included_com_tencent_angel_pytorch_Torch
#define _Included_com_tencent_angel_pytorch_Torch
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tencent_angel_pytorch_Torch_name(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    train
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_train(JNIEnv *,
                                                                  jclass,
                                                                  jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    eval
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_eval(JNIEnv *,
                                                                 jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    initPtr
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tencent_angel_pytorch_Torch_initPtr(JNIEnv *,
                                                                     jclass,
                                                                     jstring);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    destroyPtr
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_destroyPtr(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getType
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tencent_angel_pytorch_Torch_getType(JNIEnv *,
                                                                       jclass,
                                                                       jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getMatsSize
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL
Java_com_tencent_angel_pytorch_Torch_getMatsSize(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getDenseColNums
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL
Java_com_tencent_angel_pytorch_Torch_getDenseColNums(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getSparseColNums
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL
Java_com_tencent_angel_pytorch_Torch_getSparseColNums(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getInputDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_tencent_angel_pytorch_Torch_getInputDim(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getUserInputDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_tencent_angel_pytorch_Torch_getUserInputDim(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getItemInputDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_tencent_angel_pytorch_Torch_getItemInputDim(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getInputSizes
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL
Java_com_tencent_angel_pytorch_Torch_getInputSizes(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getNumFields
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_tencent_angel_pytorch_Torch_getNumFields(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getUserNumFields
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_tencent_angel_pytorch_Torch_getUserNumFields(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getItemNumFields
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_tencent_angel_pytorch_Torch_getItemNumFields(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getEmbeddingDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_tencent_angel_pytorch_Torch_getEmbeddingDim(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getUserEmbeddingDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_angel_pytorch_Torch_getUserEmbeddingDim(
    JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getItemEmbeddingDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_angel_pytorch_Torch_getItemEmbeddingDim(
    JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getEmbeddingsSize
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL
Java_com_tencent_angel_pytorch_Torch_getEmbeddingsSize(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getParametersTotalSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_tencent_angel_pytorch_Torch_getParametersTotalSize(JNIEnv *, jclass,
                                                            jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    forward
 * Signature: (JLjava/util/Map;Z)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_tencent_angel_pytorch_Torch_forward(
    JNIEnv *, jclass, jlong, jobject, jboolean);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    importance
 * Signature: (JLjava/util/Map;Z)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_tencent_angel_pytorch_Torch_importance(
    JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    backward
 * Signature: (JLjava/util/Map;)F
 */
JNIEXPORT jfloat JNICALL Java_com_tencent_angel_pytorch_Torch_backward(JNIEnv *,
                                                                       jclass,
                                                                       jlong,
                                                                       jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    save
 * Signature: (JLjava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_save(JNIEnv *,
                                                                 jclass, jlong,
                                                                 jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    word2vecBackward
 * Signature: (JLjava/util/Map;)F
 */
JNIEXPORT jfloat JNICALL Java_com_tencent_angel_pytorch_Torch_word2vecBackward(
    JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    gcnBackward
 * Signature: (JLjava/util/Map;)F
 */
JNIEXPORT jfloat JNICALL Java_com_tencent_angel_pytorch_Torch_gcnBackward(
    JNIEnv *, jclass, jlong, jobject, jboolean);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    gcnExecMethod
 * Signature: (JLjava/lang/String;Ljava/util/Map;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_tencent_angel_pytorch_Torch_gcnExecMethod(
    JNIEnv *, jclass, jlong, jstring, jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getParameters
 * Signature: (J)[F
 */
JNIEXPORT jfloatArray JNICALL
Java_com_tencent_angel_pytorch_Torch_getParameters(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getMatsParameters
 * Signature: (J)[F
 */
JNIEXPORT jfloatArray JNICALL
Java_com_tencent_angel_pytorch_Torch_getMatsParameters(JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    setParameters
 * Signature: (J[F)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_setParameters(
    JNIEnv *, jclass, jlong, jfloatArray);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    gcnSave
 * Signature: (JLjava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_gcnSave(JNIEnv *,
                                                                    jclass,
                                                                    jlong,
                                                                    jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    dssmForward
 * Signature: (JLjava/util/Map;)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_tencent_angel_pytorch_Torch_dssmForward(
    JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    dssmBackward
 * Signature: (JLjava/util/Map;)F
 */
JNIEXPORT jfloat JNICALL Java_com_tencent_angel_pytorch_Torch_dssmBackward(
    JNIEnv *, jclass, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif