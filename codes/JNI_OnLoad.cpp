jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  qword_594B660 = (__int64)vm;
  il2cpp_set_find_plugin_callback_0_0(sub_2229898);
  return 65542;
}