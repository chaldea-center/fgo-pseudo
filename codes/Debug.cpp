void Debug___cctor(const MethodInfo *method)
{
  if ( (byte_4CEDD61 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD61 = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  Debug_TypeInfo->static_fields->isDebugBuild = UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Assert(bool condition, System_String_o *message, System_String_o *detailMessage, const MethodInfo *method)
{
  if ( (byte_4CEDD5E & 1) == 0 )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD5E = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Assert_41821988(bool condition, System_String_o *message, const MethodInfo *method)
{
  if ( (byte_4CEDD5F & 1) == 0 )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD5F = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Assert_41822120(bool condition, const MethodInfo *method)
{
  if ( (byte_4CEDD60 & 1) == 0 )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD60 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Break(const MethodInfo *method)
{
  Debug_c *v1; // x0

  if ( (byte_4CEDD4F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD4F = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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


void Debug__Break_31153288(const MethodInfo *method)
{
  if ( (byte_4CE7CFD & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7CFD = 1;
  }
  if ( Debug__IsEnable_31153376(method) )
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
  if ( (byte_4CEDD5C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD5C = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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


void Debug__DrawLine_31154704(
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
  if ( (byte_4CE7D09 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D09 = 1;
  }
  if ( Debug__IsEnable_31153376(method) )
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
  if ( (byte_4CEDD5D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD5D = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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


void Debug__DrawRay_31154908(
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
  if ( (byte_4CE7D0A & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D0A = 1;
  }
  if ( Debug__IsEnable_31153376(method) )
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

  if ( (byte_4CEDD62 & 1) == 0 )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD62 = 1;
  }
  v1 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v1 = Debug_TypeInfo;
  }
  return v1->static_fields->isDebugBuild;
}


bool Debug__IsEnable_31153376(const MethodInfo *method)
{
  if ( (byte_4CE7D0B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D0B = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  return UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Log(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4CEDD50 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD50 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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
  if ( (byte_4CEDD59 & 1) == 0 )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD59 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__LogError(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4CEDD52 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD52 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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

  if ( (byte_4CEDD58 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD58 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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


void Debug__LogErrorFormat_31154360(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4CE7D06 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D06 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogErrorFormat(v4, args, 0);
  }
}


void Debug__LogError_31153680(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4CE7D00 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D00 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v2, 0);
  }
}


void Debug__LogError_31153788(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4CE7D01 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D01 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError_71681840(v4, context, 0);
  }
}


void Debug__LogError_41819412(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CEDD53 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD53 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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
    UnityEngine_Debug__LogError_71681840(message, context, 0);
  }
}


void Debug__LogException(System_Exception_o *exception, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4CEDD5A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD5A = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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


void Debug__LogException_31154480(System_Exception_o *exception, const MethodInfo *method)
{
  System_Exception_o *v2; // x19

  v2 = exception;
  if ( (byte_4CE7D07 & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D07 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)exception) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogException(v2, 0);
  }
}


void Debug__LogException_31154588(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  System_Exception_o *v4; // x20

  v4 = exception;
  if ( (byte_4CE7D08 & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D08 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)exception) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogException_71682684(v4, context, 0);
  }
}


void Debug__LogException_41821044(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CEDD5B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD5B = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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
    UnityEngine_Debug__LogException_71682684(exception, context, 0);
  }
}


void Debug__LogFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CEDD57 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD57 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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


void Debug__LogFormat_31154244(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4CE7D05 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D05 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogFormat(v4, args, 0);
  }
}


void Debug__LogWarning(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4CEDD54 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD54 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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

  if ( (byte_4CEDD56 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD56 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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


void Debug__LogWarningFormat_31154128(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4CE7D04 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D04 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarningFormat(v4, args, 0);
  }
}


void Debug__LogWarning_31153904(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4CE7D02 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D02 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning(v2, 0);
  }
}


void Debug__LogWarning_31154012(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4CE7D03 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7D03 = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning_71683224(v4, context, 0);
  }
}


void Debug__LogWarning_41819832(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CEDD55 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD55 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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
    UnityEngine_Debug__LogWarning_71683224(message, context, 0);
  }
}


void Debug__Log_31153456(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4CE7CFE & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7CFE = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log(v2, 0);
  }
}


void Debug__Log_31153564(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4CE7CFF & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CE7CFF = 1;
  }
  if ( Debug__IsEnable_31153376((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log_71680288(v4, context, 0);
  }
}


void Debug__Log_41818992(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4CEDD51 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDD51 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4CEDE1A )
  {
    sub_1C7BAE8(&Debug_TypeInfo);
    byte_4CEDE1A = 1;
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
    UnityEngine_Debug__Log_71680288(message, context, 0);
  }
}