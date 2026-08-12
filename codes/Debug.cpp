void Debug___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_596FE8A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE8A = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1);
  Debug_TypeInfo->static_fields->isDebugBuild = UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Assert(bool condition, System_String_o *message, System_String_o *detailMessage, const MethodInfo *method)
{
  if ( (byte_596FE87 & 1) == 0 )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE87 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, message);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, message);
}


void Debug__Assert_48222032(bool condition, System_String_o *message, const MethodInfo *method)
{
  if ( (byte_596FE88 & 1) == 0 )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE88 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, message);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, message);
}


void Debug__Assert_48222164(bool condition, const MethodInfo *method)
{
  if ( (byte_596FE89 & 1) == 0 )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE89 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
}


void Debug__Break(const MethodInfo *method)
{
  __int64 v1; // x1
  Debug_c *v2; // x0

  if ( (byte_596FE78 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE78 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v1);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v2 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v1);
    v2 = Debug_TypeInfo;
  }
  if ( v2->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1);
    UnityEngine_Debug__Break(0);
  }
}


void Debug__Break_37048536(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_5969985 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969985 = 1;
  }
  if ( Debug__IsEnable_37048624(method) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1, v2);
    UnityEngine_Debug__Break(0);
  }
}


void Debug__DrawLine(
        UnityEngine_Vector3_o vec1,
        UnityEngine_Vector3_o vec2,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  __int64 v4; // x1
  float x; // s10
  float z; // s11
  float v7; // s12
  float v8; // s13
  Debug_c *v9; // x0
  float y; // [xsp+48h] [xbp-18h]
  float v11; // [xsp+4Ch] [xbp-14h]
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s3.4,4:s4.4,8:s5.4

  x = vec2.fields.x;
  z = vec1.fields.z;
  y = vec2.fields.y;
  v11 = vec2.fields.z;
  v7 = vec1.fields.y;
  v8 = vec1.fields.x;
  if ( (byte_596FE85 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE85 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v4);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v9 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v4);
    v9 = Debug_TypeInfo;
  }
  if ( v9->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v4);
    v12.fields.x = v8;
    v12.fields.y = v7;
    v12.fields.z = z;
    v13.fields.x = x;
    v13.fields.y = y;
    v13.fields.z = v11;
    UnityEngine_Debug__DrawLine(v12, v13, col, 0);
  }
}


void Debug__DrawLine_37049952(
        UnityEngine_Vector3_o vec1,
        UnityEngine_Vector3_o vec2,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float x; // s10
  float z; // s11
  float y; // s12
  float v7; // s13
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // [xsp+8h] [xbp-58h]
  float v11; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s3.4,4:s4.4,8:s5.4

  x = vec2.fields.x;
  z = vec1.fields.z;
  y = vec1.fields.y;
  v7 = vec1.fields.x;
  v10 = vec2.fields.y;
  v11 = vec2.fields.z;
  if ( (byte_5969991 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969991 = 1;
  }
  if ( Debug__IsEnable_37048624(method) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v8, v9);
    v12.fields.x = v7;
    v12.fields.y = y;
    v12.fields.z = z;
    v13.fields.x = x;
    v13.fields.y = v10;
    v13.fields.z = v11;
    UnityEngine_Debug__DrawLine(v12, v13, col, 0);
  }
}


void Debug__DrawRay(
        UnityEngine_Vector3_o vec1,
        UnityEngine_Vector3_o vec2,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  __int64 v4; // x1
  float x; // s10
  float z; // s11
  float v7; // s12
  float v8; // s13
  Debug_c *v9; // x0
  float y; // [xsp+48h] [xbp-18h]
  float v11; // [xsp+4Ch] [xbp-14h]
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s3.4,4:s4.4,8:s5.4

  x = vec2.fields.x;
  z = vec1.fields.z;
  y = vec2.fields.y;
  v11 = vec2.fields.z;
  v7 = vec1.fields.y;
  v8 = vec1.fields.x;
  if ( (byte_596FE86 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE86 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v4);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v9 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v4);
    v9 = Debug_TypeInfo;
  }
  if ( v9->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v4);
    v12.fields.x = v8;
    v12.fields.y = v7;
    v12.fields.z = z;
    v13.fields.x = x;
    v13.fields.y = y;
    v13.fields.z = v11;
    UnityEngine_Debug__DrawRay(v12, v13, col, 0);
  }
}


void Debug__DrawRay_37050156(
        UnityEngine_Vector3_o vec1,
        UnityEngine_Vector3_o vec2,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float x; // s10
  float z; // s11
  float y; // s12
  float v7; // s13
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // [xsp+8h] [xbp-58h]
  float v11; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s3.4,4:s4.4,8:s5.4

  x = vec2.fields.x;
  z = vec1.fields.z;
  y = vec1.fields.y;
  v7 = vec1.fields.x;
  v10 = vec2.fields.y;
  v11 = vec2.fields.z;
  if ( (byte_5969992 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969992 = 1;
  }
  if ( Debug__IsEnable_37048624(method) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v8, v9);
    v12.fields.x = v7;
    v12.fields.y = y;
    v12.fields.z = z;
    v13.fields.x = x;
    v13.fields.y = v10;
    v13.fields.z = v11;
    UnityEngine_Debug__DrawRay(v12, v13, col, 0);
  }
}


bool Debug__IsEnable(const MethodInfo *method)
{
  __int64 v1; // x1
  Debug_c *v2; // x0

  if ( (byte_596FE8B & 1) == 0 )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE8B = 1;
  }
  v2 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v1);
    v2 = Debug_TypeInfo;
  }
  return v2->static_fields->isDebugBuild;
}


bool Debug__IsEnable_37048624(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_5969993 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969993 = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1, v2);
  return UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Log(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_596FE79 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE79 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v3 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
    v3 = Debug_TypeInfo;
  }
  if ( v3->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
    UnityEngine_Debug__Log(message, 0);
  }
}


void Debug__LogAssertionFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  if ( (byte_596FE82 & 1) == 0 )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE82 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
}


void Debug__LogError(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_596FE7B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE7B = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v3 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
    v3 = Debug_TypeInfo;
  }
  if ( v3->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
    UnityEngine_Debug__LogError(message, 0);
  }
}


void Debug__LogErrorFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_596FE81 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE81 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, args);
    UnityEngine_Debug__LogErrorFormat(format, args, 0);
  }
}


void Debug__LogErrorFormat_37049608(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = format;
  if ( (byte_596998E & 1) == 0 )
  {
    format = (System_String_o *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_596998E = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)format) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogErrorFormat(v4, args, 0);
  }
}


void Debug__LogError_37048928(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = message;
  if ( (byte_5969988 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969988 = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3, v4);
    UnityEngine_Debug__LogError(v2, 0);
  }
}


void Debug__LogError_37049036(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = message;
  if ( (byte_5969989 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969989 = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogError_83208728(v4, context, 0);
  }
}


void Debug__LogError_48219456(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_596FE7C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE7C = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, context);
    UnityEngine_Debug__LogError_83208728(message, context, 0);
  }
}


void Debug__LogException(System_Exception_o *exception, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_596FE83 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE83 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v3 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
    v3 = Debug_TypeInfo;
  }
  if ( v3->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
    UnityEngine_Debug__LogException(exception, 0);
  }
}


void Debug__LogException_37049728(System_Exception_o *exception, const MethodInfo *method)
{
  System_Exception_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = exception;
  if ( (byte_596998F & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_596998F = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)exception) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3, v4);
    UnityEngine_Debug__LogException(v2, 0);
  }
}


void Debug__LogException_37049836(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  System_Exception_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = exception;
  if ( (byte_5969990 & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969990 = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)exception) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogException_83165884(v4, context, 0);
  }
}


void Debug__LogException_48221088(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_596FE84 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE84 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, context);
    UnityEngine_Debug__LogException_83165884(exception, context, 0);
  }
}


void Debug__LogFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_596FE80 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE80 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, args);
    UnityEngine_Debug__LogFormat(format, args, 0);
  }
}


void Debug__LogFormat_37049492(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = format;
  if ( (byte_596998D & 1) == 0 )
  {
    format = (System_String_o *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_596998D = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)format) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogFormat(v4, args, 0);
  }
}


void Debug__LogWarning(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_596FE7D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE7D = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v3 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
    v3 = Debug_TypeInfo;
  }
  if ( v3->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
    UnityEngine_Debug__LogWarning(message, 0);
  }
}


void Debug__LogWarningFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_596FE7F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE7F = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, args);
    UnityEngine_Debug__LogWarningFormat(format, args, 0);
  }
}


void Debug__LogWarningFormat_37049376(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = format;
  if ( (byte_596998C & 1) == 0 )
  {
    format = (System_String_o *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_596998C = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)format) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogWarningFormat(v4, args, 0);
  }
}


void Debug__LogWarning_37049152(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = message;
  if ( (byte_596998A & 1) == 0 )
  {
    message = (Il2CppObject *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_596998A = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3, v4);
    UnityEngine_Debug__LogWarning(v2, 0);
  }
}


void Debug__LogWarning_37049260(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = message;
  if ( (byte_596998B & 1) == 0 )
  {
    message = (Il2CppObject *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_596998B = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogWarning_83209572(v4, context, 0);
  }
}


void Debug__LogWarning_48219876(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_596FE7E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE7E = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, context);
    UnityEngine_Debug__LogWarning_83209572(message, context, 0);
  }
}


void Debug__Log_37048704(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = message;
  if ( (byte_5969986 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969986 = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3, v4);
    UnityEngine_Debug__Log(v2, 0);
  }
}


void Debug__Log_37048812(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = message;
  if ( (byte_5969987 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_5969987 = 1;
  }
  if ( Debug__IsEnable_37048624((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__Log_83207116(v4, context, 0);
  }
}


void Debug__Log_48219036(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_596FE7A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Debug_TypeInfo);
    byte_596FE7A = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
  if ( !byte_596FF4C )
  {
    sub_2213A60(&Debug_TypeInfo);
    byte_596FF4C = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, context);
    UnityEngine_Debug__Log_83207116(message, context, 0);
  }
}