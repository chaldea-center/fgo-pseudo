jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  jint result; // w0

  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  result = 65542;
  qword_420CE68 = (__int64)vm;
  qword_420CE88 = (__int64)sub_A7A83C;
  return result;
}