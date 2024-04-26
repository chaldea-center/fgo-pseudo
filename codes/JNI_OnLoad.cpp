jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  jint result; // w0

  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  result = 65542;
  qword_434A400 = (__int64)vm;
  qword_434A420 = (__int64)sub_ADBF98;
  return result;
}