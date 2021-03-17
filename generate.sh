cmake -G Ninja \
-DCMAKE_TOOLCHAIN_FILE=${ANDROID_NDK}/build/cmake/android.toolchain.cmake \
-DCMAKE_ANDROID_ARCH_ABI=armeabi-v7a \
-DCMAKE_BUILD_TYPE=Release ..
