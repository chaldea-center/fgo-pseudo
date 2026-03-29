void JNI_OnUnload(JavaVM *vm, void *reserved)
{
  __android_log_print(4, "IL2CPP", "JNI_OnUnload");
  qword_4D419C0 = 0;
}