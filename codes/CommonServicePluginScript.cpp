void CommonServicePluginScript___cctor(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19

  if ( (byte_4C2FFD1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C32C20(&CommonServicePluginScript_TypeInfo);
    sub_1C32C20(&StringLiteral_21085/*"jp.delightworks.unityplugin.CommonServicePlugin"*/);
    byte_4C2FFD1 = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1C32E6C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_21085/*"jp.delightworks.unityplugin.CommonServicePlugin"*/, 0);
  CommonServicePluginScript_TypeInfo->static_fields->classPlugin = v1;
  sub_1C32BC4(CommonServicePluginScript_TypeInfo->static_fields, v1);
}


void CommonServicePluginScript___ctor(CommonServicePluginScript_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t CommonServicePluginScript__GetFreeSize(System_String_o *path, const MethodInfo *method)
{
  CommonServicePluginScript_c *v3; // x0
  UnityEngine_AndroidJavaObject_o *classPlugin; // x20
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v9; // x0

  if ( (byte_4C2FFD2 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
    sub_1C32C20(&CommonServicePluginScript_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_7081/*"GetFreeSize"*/);
    byte_4C2FFD2 = 1;
  }
  v3 = CommonServicePluginScript_TypeInfo;
  if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0();
    v3 = CommonServicePluginScript_TypeInfo;
  }
  classPlugin = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->classPlugin;
  if ( !classPlugin )
    return -1;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0();
    classPlugin = (UnityEngine_AndroidJavaObject_o *)CommonServicePluginScript_TypeInfo->static_fields->classPlugin;
  }
  v5 = sub_1C32CC8(object___TypeInfo, 1);
  v6 = v5;
  if ( !v5 )
    ((void (__noreturn *)(void))sub_1C32E7C)();
  if ( path && !sub_1C32D5C(path, *(_QWORD *)(*(_QWORD *)v5 + 64LL)) )
  {
    v9 = sub_1C32EA0();
    sub_1C32D48(v9, 0);
  }
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C32E84();
  *(_QWORD *)(v6 + 32) = path;
  v7 = sub_1C32BC4(v6 + 32, path);
  if ( !classPlugin )
    sub_1C32E7C(v7);
  return UnityEngine_AndroidJavaObject__CallStatic_long_(
           classPlugin,
           (System_String_o *)StringLiteral_7081/*"GetFreeSize"*/,
           (System_Object_array *)v6,
           (const MethodInfo_302DE5C *)Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
}