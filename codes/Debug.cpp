void Debug___cctor(const MethodInfo *method)
{
  if ( (byte_4CB597E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB597E = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  Debug_TypeInfo->static_fields->isDebugBuild = UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Assert(bool condition, System_String_o *message, System_String_o *detailMessage, const MethodInfo *method)
{
  if ( (byte_4CB597B & 1) == 0 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB597B = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Assert_41483848(bool condition, System_String_o *message, const MethodInfo *method)
{
  if ( (byte_4CB597C & 1) == 0 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB597C = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Assert_41483980(bool condition, const MethodInfo *method)
{
  if ( (byte_4CB597D & 1) == 0 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB597D = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Break(const MethodInfo *method)
{
  Debug_c *v1; // x0

  if ( (byte_4CB596C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB596C = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v1 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v1 = Debug_TypeInfo;
  }
  if ( v1->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Break(0);
  }
}


void Debug__Break_31087536(const MethodInfo *method)
{
  if ( (byte_4CAFAAD & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAAD = 1;
  }
  if ( Debug__IsEnable_31087624(method) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Break(0);
  }
}


void Debug__DrawLine(
        UnityEngine_Vector3_o vec1,
        UnityEngine_Vector3_o vec2,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float x; // s10
  float v5; // s11
  float v6; // s12
  float v7; // s13
  Debug_c *v8; // x0
  float y; // [xsp+48h] [xbp-18h]
  float z; // [xsp+4Ch] [xbp-14h]
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s3.4,4:s4.4,8:s5.4

  y = vec2.fields.y;
  z = vec2.fields.z;
  x = vec2.fields.x;
  v5 = vec1.fields.z;
  v6 = vec1.fields.y;
  v7 = vec1.fields.x;
  if ( (byte_4CB5979 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5979 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v8 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v8 = Debug_TypeInfo;
  }
  if ( v8->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    v11.fields.x = v7;
    v11.fields.y = v6;
    v11.fields.z = v5;
    v12.fields.x = x;
    v12.fields.y = y;
    v12.fields.z = z;
    UnityEngine_Debug__DrawLine(v11, v12, col, 0);
  }
}


void Debug__DrawLine_31088952(
        UnityEngine_Vector3_o vec1,
        UnityEngine_Vector3_o vec2,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float x; // s10
  float z; // s11
  float y; // s12
  float v7; // s13
  float v8; // [xsp+8h] [xbp-58h]
  float v9; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s3.4,4:s4.4,8:s5.4

  x = vec2.fields.x;
  z = vec1.fields.z;
  y = vec1.fields.y;
  v7 = vec1.fields.x;
  v8 = vec2.fields.y;
  v9 = vec2.fields.z;
  if ( (byte_4CAFAB9 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB9 = 1;
  }
  if ( Debug__IsEnable_31087624(method) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    v10.fields.x = v7;
    v10.fields.y = y;
    v10.fields.z = z;
    v11.fields.x = x;
    v11.fields.y = v8;
    v11.fields.z = v9;
    UnityEngine_Debug__DrawLine(v10, v11, col, 0);
  }
}


void Debug__DrawRay(
        UnityEngine_Vector3_o vec1,
        UnityEngine_Vector3_o vec2,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float x; // s10
  float v5; // s11
  float v6; // s12
  float v7; // s13
  Debug_c *v8; // x0
  float y; // [xsp+48h] [xbp-18h]
  float z; // [xsp+4Ch] [xbp-14h]
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s3.4,4:s4.4,8:s5.4

  y = vec2.fields.y;
  z = vec2.fields.z;
  x = vec2.fields.x;
  v5 = vec1.fields.z;
  v6 = vec1.fields.y;
  v7 = vec1.fields.x;
  if ( (byte_4CB597A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB597A = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v8 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v8 = Debug_TypeInfo;
  }
  if ( v8->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    v11.fields.x = v7;
    v11.fields.y = v6;
    v11.fields.z = v5;
    v12.fields.x = x;
    v12.fields.y = y;
    v12.fields.z = z;
    UnityEngine_Debug__DrawRay(v11, v12, col, 0);
  }
}


void Debug__DrawRay_31089156(
        UnityEngine_Vector3_o vec1,
        UnityEngine_Vector3_o vec2,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float x; // s10
  float z; // s11
  float y; // s12
  float v7; // s13
  float v8; // [xsp+8h] [xbp-58h]
  float v9; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s3.4,4:s4.4,8:s5.4

  x = vec2.fields.x;
  z = vec1.fields.z;
  y = vec1.fields.y;
  v7 = vec1.fields.x;
  v8 = vec2.fields.y;
  v9 = vec2.fields.z;
  if ( (byte_4CAFABA & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFABA = 1;
  }
  if ( Debug__IsEnable_31087624(method) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    v10.fields.x = v7;
    v10.fields.y = y;
    v10.fields.z = z;
    v11.fields.x = x;
    v11.fields.y = v8;
    v11.fields.z = v9;
    UnityEngine_Debug__DrawRay(v10, v11, col, 0);
  }
}


bool Debug__IsEnable(const MethodInfo *method)
{
  Debug_c *v1; // x0

  if ( (byte_4CB597F & 1) == 0 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB597F = 1;
  }
  v1 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v1 = Debug_TypeInfo;
  }
  return v1->static_fields->isDebugBuild;
}


bool Debug__IsEnable_31087624(const MethodInfo *method)
{
  if ( (byte_4CAFABB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFABB = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  return UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Log(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4CB596D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB596D = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v3 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v3 = Debug_TypeInfo;
  }
  if ( v3->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log(message, 0);
  }
}


void Debug__LogAssertionFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  if ( (byte_4CB5976 & 1) == 0 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5976 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__LogError(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4CB596F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB596F = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v3 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v3 = Debug_TypeInfo;
  }
  if ( v3->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(message, 0);
  }
}


void Debug__LogErrorFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CB5975 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5975 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogErrorFormat(format, args, 0);
  }
}


void Debug__LogErrorFormat_31088608(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4CAFAB6 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB6 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogErrorFormat(v4, args, 0);
  }
}


void Debug__LogError_31087928(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4CAFAB0 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB0 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v2, 0);
  }
}


void Debug__LogError_31088036(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4CAFAB1 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB1 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError_71471368(v4, context, 0);
  }
}


void Debug__LogError_41481272(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CB5970 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5970 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError_71471368(message, context, 0);
  }
}


void Debug__LogException(System_Exception_o *exception, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4CB5977 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5977 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v3 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v3 = Debug_TypeInfo;
  }
  if ( v3->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogException(exception, 0);
  }
}


void Debug__LogException_31088728(System_Exception_o *exception, const MethodInfo *method)
{
  System_Exception_o *v2; // x19

  v2 = exception;
  if ( (byte_4CAFAB7 & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB7 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)exception) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogException(v2, 0);
  }
}


void Debug__LogException_31088836(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  System_Exception_o *v4; // x20

  v4 = exception;
  if ( (byte_4CAFAB8 & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB8 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)exception) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogException_71472212(v4, context, 0);
  }
}


void Debug__LogException_41482904(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CB5978 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5978 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogException_71472212(exception, context, 0);
  }
}


void Debug__LogFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CB5974 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5974 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogFormat(format, args, 0);
  }
}


void Debug__LogFormat_31088492(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4CAFAB5 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB5 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogFormat(v4, args, 0);
  }
}


void Debug__LogWarning(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4CB5971 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5971 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v3 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v3 = Debug_TypeInfo;
  }
  if ( v3->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning(message, 0);
  }
}


void Debug__LogWarningFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CB5973 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5973 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarningFormat(format, args, 0);
  }
}


void Debug__LogWarningFormat_31088376(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4CAFAB4 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB4 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarningFormat(v4, args, 0);
  }
}


void Debug__LogWarning_31088152(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4CAFAB2 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB2 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning(v2, 0);
  }
}


void Debug__LogWarning_31088260(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4CAFAB3 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAB3 = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning_71472752(v4, context, 0);
  }
}


void Debug__LogWarning_41481692(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CB5972 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5972 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning_71472752(message, context, 0);
  }
}


void Debug__Log_31087704(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4CAFAAE & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAAE = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log(v2, 0);
  }
}


void Debug__Log_31087812(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4CAFAAF & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    byte_4CAFAAF = 1;
  }
  if ( Debug__IsEnable_31087624((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log_71469816(v4, context, 0);
  }
}


void Debug__Log_41480852(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CB596E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB596E = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CB5A37 )
  {
    sub_1C6BA08(&Debug_TypeInfo);
    byte_4CB5A37 = 1;
  }
  v5 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v5 = Debug_TypeInfo;
  }
  if ( v5->static_fields->isDebugBuild )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log_71469816(message, context, 0);
  }
}