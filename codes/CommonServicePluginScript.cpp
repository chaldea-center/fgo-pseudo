void CommonServicePluginScript___cctor(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19

  if ( (byte_59686BA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_2213A60(&CommonServicePluginScript_TypeInfo);
    sub_2213A60(&StringLiteral_22148/*"jp.delightworks.unityplugin.CommonServicePlugin"*/);
    byte_59686BA = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_2213CCC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_22148/*"jp.delightworks.unityplugin.CommonServicePlugin"*/, 0);
  CommonServicePluginScript_TypeInfo->static_fields->classPlugin = v1;
  sub_2213A04(CommonServicePluginScript_TypeInfo->static_fields, v1);
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

  if ( (byte_59686BB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
    sub_2213A60(&CommonServicePluginScript_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_7378/*"GetFreeSize"*/);
    byte_59686BB = 1;
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
  v6 = sub_2213B20(object___TypeInfo, 1);
  v8 = v6;
  if ( !v6 )
    goto LABEL_14;
  if ( path )
  {
    v6 = sub_2213BB4(path, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
    {
      v11 = sub_2213D00(0, v9);
      sub_2213BA0(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_2213CE4(v6);
  *(_QWORD *)(v8 + 32) = path;
  v6 = sub_2213A04(v8 + 32, path);
  if ( !classPlugin )
LABEL_14:
    sub_2213CDC(v6, v7);
  return UnityEngine_AndroidJavaObject__CallStatic_long_(
           classPlugin,
           (System_String_o *)StringLiteral_7378/*"GetFreeSize"*/,
           (System_Object_array *)v8,
           (const MethodInfo_3707EA0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_long___);
}