void CommonServicePluginScript___cctor(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19

  if ( (byte_4C3B521 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C37058(&CommonServicePluginScript_TypeInfo);
    sub_1C37058(&StringLiteral_21088/*"jp.delightworks.unityplugin.CommonServicePlugin"*/);
    byte_4C3B521 = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1C372A4(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_21088/*"jp.delightworks.unityplugin.CommonServicePlugin"*/, 0);
  CommonServicePluginScript_TypeInfo->static_fields->classPlugin = v1;
  sub_1C36FFC(CommonServicePluginScript_TypeInfo->static_fields, v1);
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

  if ( (byte_4C3B522 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
    sub_1C37058(&CommonServicePluginScript_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&StringLiteral_7082/*"GetFreeSize"*/);
    byte_4C3B522 = 1;
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
  v5 = sub_1C37100(object___TypeInfo, 1);
  v6 = v5;
  if ( !v5 )
    ((void (__noreturn *)(void))sub_1C372B4)();
  if ( path && !sub_1C37194(path, *(_QWORD *)(*(_QWORD *)v5 + 64LL)) )
  {
    v9 = sub_1C372D8();
    sub_1C37180(v9, 0);
  }
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C372BC();
  *(_QWORD *)(v6 + 32) = path;
  v7 = sub_1C36FFC(v6 + 32, path);
  if ( !classPlugin )
    sub_1C372B4(v7);
  return UnityEngine_AndroidJavaObject__CallStatic_long_(
           classPlugin,
           (System_String_o *)StringLiteral_7082/*"GetFreeSize"*/,
           (System_Object_array *)v6,
           (const MethodInfo_30386C4 *)Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
}