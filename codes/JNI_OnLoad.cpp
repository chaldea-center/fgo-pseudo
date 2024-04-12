jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  jint result; // w0

  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  result = 65542;
  qword_42A8878 = (__int64)vm;
  qword_42A8898 = (__int64)sub_ABE288;
  return result;
}