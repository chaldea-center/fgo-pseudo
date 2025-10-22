void CommonServicePluginScript___cctor(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19

  if ( (byte_4C4F2A1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C3E564(&CommonServicePluginScript_TypeInfo);
    sub_1C3E564(&StringLiteral_21106/*"jp.delightworks.unityplugin.CommonServicePlugin"*/);
    byte_4C4F2A1 = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1C3E7B0(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_21106/*"jp.delightworks.unityplugin.CommonServicePlugin"*/, 0);
  CommonServicePluginScript_TypeInfo->static_fields->classPlugin = v1;
  sub_1C3E508(CommonServicePluginScript_TypeInfo->static_fields, v1);
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
  __int64 v7; // x2
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v13; // x0

  if ( (byte_4C4F2A2 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
    sub_1C3E564(&CommonServicePluginScript_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&StringLiteral_7082/*"GetFreeSize"*/);
    byte_4C4F2A2 = 1;
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
  v5 = sub_1C3E60C(object___TypeInfo, 1);
  v8 = v5;
  if ( !v5 )
    sub_1C3E7C0(0, v6, v7);
  if ( path )
  {
    v5 = sub_1C3E6A0(path, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v13 = sub_1C3E7E4();
      sub_1C3E68C(v13, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_1C3E7C8(v5, v6, v7);
  *(_QWORD *)(v8 + 32) = path;
  v9 = sub_1C3E508(v8 + 32, path);
  if ( !classPlugin )
    sub_1C3E7C0(v9, v10, v11);
  return UnityEngine_AndroidJavaObject__CallStatic_long_(
           classPlugin,
           (System_String_o *)StringLiteral_7082/*"GetFreeSize"*/,
           (System_Object_array *)v8,
           (const MethodInfo_304A4DC *)Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
}