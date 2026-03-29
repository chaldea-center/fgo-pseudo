void Debug___cctor(const MethodInfo *method)
{
  if ( (byte_4D300BA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300BA = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  Debug_TypeInfo->static_fields->isDebugBuild = UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Assert(bool condition, System_String_o *message, System_String_o *detailMessage, const MethodInfo *method)
{
  if ( (byte_4D300B7 & 1) == 0 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B7 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Assert_41975560(bool condition, System_String_o *message, const MethodInfo *method)
{
  if ( (byte_4D300B8 & 1) == 0 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B8 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Assert_41975692(bool condition, const MethodInfo *method)
{
  if ( (byte_4D300B9 & 1) == 0 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B9 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__Break(const MethodInfo *method)
{
  Debug_c *v1; // x0

  if ( (byte_4D300A8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300A8 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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


void Debug__Break_31251572(const MethodInfo *method)
{
  if ( (byte_4D29FDD & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FDD = 1;
  }
  if ( Debug__IsEnable_31251660(method) )
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
  if ( (byte_4D300B5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B5 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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


void Debug__DrawLine_31252988(
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
  if ( (byte_4D29FE9 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE9 = 1;
  }
  if ( Debug__IsEnable_31251660(method) )
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
  if ( (byte_4D300B6 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B6 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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


void Debug__DrawRay_31253192(
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
  if ( (byte_4D29FEA & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FEA = 1;
  }
  if ( Debug__IsEnable_31251660(method) )
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

  if ( (byte_4D300BB & 1) == 0 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300BB = 1;
  }
  v1 = Debug_TypeInfo;
  if ( !Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
    v1 = Debug_TypeInfo;
  }
  return v1->static_fields->isDebugBuild;
}


bool Debug__IsEnable_31251660(const MethodInfo *method)
{
  if ( (byte_4D29FEB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FEB = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  return UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Log(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4D300A9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300A9 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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
  if ( (byte_4D300B2 & 1) == 0 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B2 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
}


void Debug__LogError(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4D300AB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300AB = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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

  if ( (byte_4D300B1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B1 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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


void Debug__LogErrorFormat_31252644(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4D29FE6 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE6 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogErrorFormat(v4, args, 0);
  }
}


void Debug__LogError_31251964(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4D29FE0 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE0 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v2, 0);
  }
}


void Debug__LogError_31252072(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4D29FE1 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE1 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError_71931600(v4, context, 0);
  }
}


void Debug__LogError_41972984(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4D300AC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300AC = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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
    UnityEngine_Debug__LogError_71931600(message, context, 0);
  }
}


void Debug__LogException(System_Exception_o *exception, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4D300B3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B3 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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


void Debug__LogException_31252764(System_Exception_o *exception, const MethodInfo *method)
{
  System_Exception_o *v2; // x19

  v2 = exception;
  if ( (byte_4D29FE7 & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE7 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)exception) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogException(v2, 0);
  }
}


void Debug__LogException_31252872(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  System_Exception_o *v4; // x20

  v4 = exception;
  if ( (byte_4D29FE8 & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE8 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)exception) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogException_71932444(v4, context, 0);
  }
}


void Debug__LogException_41974616(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4D300B4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B4 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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
    UnityEngine_Debug__LogException_71932444(exception, context, 0);
  }
}


void Debug__LogFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4D300B0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300B0 = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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


void Debug__LogFormat_31252528(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4D29FE5 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE5 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogFormat(v4, args, 0);
  }
}


void Debug__LogWarning(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_4D300AD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300AD = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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

  if ( (byte_4D300AF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300AF = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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


void Debug__LogWarningFormat_31252412(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20

  v4 = format;
  if ( (byte_4D29FE4 & 1) == 0 )
  {
    format = (System_String_o *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE4 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)format) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarningFormat(v4, args, 0);
  }
}


void Debug__LogWarning_31252188(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4D29FE2 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE2 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning(v2, 0);
  }
}


void Debug__LogWarning_31252296(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4D29FE3 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FE3 = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning_71932984(v4, context, 0);
  }
}


void Debug__LogWarning_41973404(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4D300AE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300AE = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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
    UnityEngine_Debug__LogWarning_71932984(message, context, 0);
  }
}


void Debug__Log_31251740(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  v2 = message;
  if ( (byte_4D29FDE & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FDE = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log(v2, 0);
  }
}


void Debug__Log_31251848(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20

  v4 = message;
  if ( (byte_4D29FDF & 1) == 0 )
  {
    message = (Il2CppObject *)sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    byte_4D29FDF = 1;
  }
  if ( Debug__IsEnable_31251660((const MethodInfo *)message) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log_71930048(v4, context, 0);
  }
}


void Debug__Log_41972564(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_4D300AA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D300AA = 1;
  }
  if ( !Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo);
  if ( !byte_4D30173 )
  {
    sub_1C93AD4(&Debug_TypeInfo);
    byte_4D30173 = 1;
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
    UnityEngine_Debug__Log_71930048(message, context, 0);
  }
}