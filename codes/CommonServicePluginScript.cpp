void CommonServicePluginScript___cctor(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19

  if ( (byte_4CAE7DC & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C6BA08(&CommonServicePluginScript_TypeInfo);
    sub_1C6BA08(&StringLiteral_21166/*"jp.delightworks.unityplugin.CommonServicePlugin"*/);
    byte_4CAE7DC = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1C6BC54(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_21166/*"jp.delightworks.unityplugin.CommonServicePlugin"*/, 0);
  CommonServicePluginScript_TypeInfo->static_fields->classPlugin = v1;
  sub_1C6B9AC(CommonServicePluginScript_TypeInfo->static_fields, v1);
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
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v11; // x0

  if ( (byte_4CAE7DD & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
    sub_1C6BA08(&CommonServicePluginScript_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&StringLiteral_7075/*"GetFreeSize"*/);
    byte_4CAE7DD = 1;
  }
  v3 = CommonServicePluginScript_TypeInfo;
  if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    v3 = CommonServicePluginScript_TypeInfo;
  }
  classPlugin = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->classPlugin;
  if ( !classPlugin )
    return -1;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    classPlugin = (UnityEngine_AndroidJavaObject_o *)CommonServicePluginScript_TypeInfo->static_fields->classPlugin;
  }
  v5 = sub_1C6BAB0(object___TypeInfo, 1);
  v7 = v5;
  if ( !v5 )
    sub_1C6BC60(0, v6);
  if ( path )
  {
    v5 = sub_1C6BB44(path, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v11 = sub_1C6BC84();
      sub_1C6BB30(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v7 + 24) )
    sub_1C6BC68(v5);
  *(_QWORD *)(v7 + 32) = path;
  v8 = sub_1C6B9AC(v7 + 32, path);
  if ( !classPlugin )
    sub_1C6BC60(v8, v9);
  return UnityEngine_AndroidJavaObject__CallStatic_long_(
           classPlugin,
           (System_String_o *)StringLiteral_7075/*"GetFreeSize"*/,
           (System_Object_array *)v7,
           (const MethodInfo_308A0E0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
}