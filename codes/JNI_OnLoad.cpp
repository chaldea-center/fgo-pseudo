jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  qword_48F5C90 = (__int64)vm;
  il2cpp_set_find_plugin_callback_0_0(sub_1B57AC0);
  return 65542;
}