void JNI_OnUnload(JavaVM *vm, void *reserved)
{
  __android_log_print(4, "IL2CPP", "JNI_OnUnload");
  qword_4B4A6E0 = 0LL;
}