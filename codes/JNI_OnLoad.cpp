jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
  __android_log_print(4, "IL2CPP", "JNI_OnLoad");
  qword_4C39650 = (__int64)vm;
  il2cpp_set_find_plugin_callback_0_0(sub_1C82AA0);
  return 65542;
}