void CommonServicePluginScript___cctor(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19

  if ( (byte_593051A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&CommonServicePluginScript_TypeInfo);
    sub_21FFC50(&StringLiteral_22105/*"jp.delightworks.unityplugin.CommonServicePlugin"*/);
    byte_593051A = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_22105/*"jp.delightworks.unityplugin.CommonServicePlugin"*/, 0);
  CommonServicePluginScript_TypeInfo->static_fields->classPlugin = v1;
  sub_21FFBF4(CommonServicePluginScript_TypeInfo->static_fields, v1);
}


void CommonServicePluginScript___ctor(CommonServicePluginScript_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t CommonServicePluginScript__GetFreeSize(System_String_o *path, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonServicePluginScript_c *v4; // x0
  UnityEngine_AndroidJavaObject_o *classPlugin; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x1
  __int64 v11; // x0

  if ( (byte_593051B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
    sub_21FFC50(&CommonServicePluginScript_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_7366/*"GetFreeSize"*/);
    byte_593051B = 1;
  }
  v4 = CommonServicePluginScript_TypeInfo;
  if ( !*(&CommonServicePluginScript_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, method, v2);
    v4 = CommonServicePluginScript_TypeInfo;
  }
  classPlugin = (UnityEngine_AndroidJavaObject_o *)v4->static_fields->classPlugin;
  if ( !classPlugin )
    return -1;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    classPlugin = (UnityEngine_AndroidJavaObject_o *)CommonServicePluginScript_TypeInfo->static_fields->classPlugin;
  }
  v6 = sub_21FFD10(object___TypeInfo, 1);
  v8 = v6;
  if ( !v6 )
    goto LABEL_14;
  if ( path )
  {
    v6 = sub_21FFDA4(path, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
    {
      v11 = sub_21FFEF0(0, v9);
      sub_21FFD90(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_21FFED4(v6);
  *(_QWORD *)(v8 + 32) = path;
  v6 = sub_21FFBF4(v8 + 32, path);
  if ( !classPlugin )
LABEL_14:
    sub_21FFECC(v6, v7);
  return UnityEngine_AndroidJavaObject__CallStatic_long_(
           classPlugin,
           (System_String_o *)StringLiteral_7366/*"GetFreeSize"*/,
           (System_Object_array *)v8,
           (const MethodInfo_36D5F30 *)Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
}