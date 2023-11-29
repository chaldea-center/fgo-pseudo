jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  jint result; // w0

  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  result = 65542;
  qword_40F26C8 = (__int64)vm;
  qword_40F26E8 = (__int64)sub_A83900;
  return result;
}