jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  jint result; // w0

  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  result = 65542;
  qword_42E10E8 = (__int64)vm;
  qword_42E1108 = (__int64)sub_AC7EC8;
  return result;
}