jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  jint result; // w0

  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  result = 65542;
  qword_43839C8 = (__int64)vm;
  qword_43839E8 = (__int64)sub_AE1EC8;
  return result;
}