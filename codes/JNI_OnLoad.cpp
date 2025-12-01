jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  qword_4CD83A0 = (__int64)vm;
  il2cpp_set_find_plugin_callback_0_0(sub_1C60E4C);
  return 65542;
}