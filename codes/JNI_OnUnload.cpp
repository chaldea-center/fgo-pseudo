void JNI_OnUnload(JavaVM *vm, void *reserved)
{
  __android_log_print(4, "IL2CPP", "JNI_OnUnload");
  qword_4AC91F0 = 0LL;
}