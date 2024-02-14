void JNI_OnUnload(JavaVM *vm, void *reserved)
{
  __android_log_print(4, "IL2CPP", "JNI_OnUnload");
  qword_420CE68 = 0LL;
}