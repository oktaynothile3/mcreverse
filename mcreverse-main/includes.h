/* ~~ c inclusions ~~ */
#include <windows.h>
#include <stdio.h>
#include <cstdint>
#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <random>
#include <psapi.h>
#include <atomic>
#include <chrono>
#include <thread>
#include <assert.h>
#include <string>

// JNI - Minecraft 1.8.8 için manuel tanımlamalar
#ifndef _JNI_H_
#define _JNI_H_
typedef void* JNIEnv;
typedef void* jobject;
typedef void* jclass;
typedef void* jmethodID;
typedef void* jfieldID;
typedef void* jstring;
typedef float jfloat;
typedef unsigned char jboolean;
typedef int jint;
typedef double jdouble;
typedef long long jlong;
typedef void* jarray;
typedef void* jobjectArray;
typedef void* jthrowable;
typedef void* JavaVM;
#endif

// OpenGL
#include <GL/gl.h>
#include <GL/glu.h>

/* ~~ utility inclusions ~~ */
#include "MinHook.h"
#include "xor.h"      // XOR_OP.h değil, xor.h
#include "singleton.h"

/* ~~ utility functions ~~ */
