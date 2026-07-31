void Debug___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_5937D1D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D1D = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1);
  Debug_TypeInfo->static_fields->isDebugBuild = UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Assert(bool condition, System_String_o *message, System_String_o *detailMessage, const MethodInfo *method)
{
  if ( (byte_5937D1A & 1) == 0 )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D1A = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, message);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, message);
}


void Debug__Assert_48186428(bool condition, System_String_o *message, const MethodInfo *method)
{
  if ( (byte_5937D1B & 1) == 0 )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D1B = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, message);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, message);
}


void Debug__Assert_48186560(bool condition, const MethodInfo *method)
{
  if ( (byte_5937D1C & 1) == 0 )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D1C = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
}


void Debug__Break(const MethodInfo *method)
{
  __int64 v1; // x1
  Debug_c *v2; // x0

  if ( (byte_5937D0B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D0B = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v1);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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


void Debug__Break_36967120(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_59317E5 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317E5 = 1;
  }
  if ( Debug__IsEnable_36967208(method) )
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
  if ( (byte_5937D18 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D18 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v4);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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


void Debug__DrawLine_36968536(
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
  if ( (byte_59317F1 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317F1 = 1;
  }
  if ( Debug__IsEnable_36967208(method) )
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
  if ( (byte_5937D19 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D19 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v4);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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


void Debug__DrawRay_36968740(
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
  if ( (byte_59317F2 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317F2 = 1;
  }
  if ( Debug__IsEnable_36967208(method) )
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

  if ( (byte_5937D1E & 1) == 0 )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D1E = 1;
  }
  v2 = Debug_TypeInfo;
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, v1);
    v2 = Debug_TypeInfo;
  }
  return v2->static_fields->isDebugBuild;
}


bool Debug__IsEnable_36967208(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_59317F3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317F3 = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1, v2);
  return UnityEngine_Debug__get_isDebugBuild(0);
}


void Debug__Log(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_5937D0C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D0C = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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
  if ( (byte_5937D15 & 1) == 0 )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D15 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
}


void Debug__LogError(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_5937D0E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D0E = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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

  if ( (byte_5937D14 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D14 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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


void Debug__LogErrorFormat_36968192(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = format;
  if ( (byte_59317EE & 1) == 0 )
  {
    format = (System_String_o *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317EE = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)format) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogErrorFormat(v4, args, 0);
  }
}


void Debug__LogError_36967512(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = message;
  if ( (byte_59317E8 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317E8 = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3, v4);
    UnityEngine_Debug__LogError(v2, 0);
  }
}


void Debug__LogError_36967620(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = message;
  if ( (byte_59317E9 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317E9 = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogError_82995424(v4, context, 0);
  }
}


void Debug__LogError_48183852(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_5937D0F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D0F = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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
    UnityEngine_Debug__LogError_82995424(message, context, 0);
  }
}


void Debug__LogException(System_Exception_o *exception, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_5937D16 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D16 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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


void Debug__LogException_36968312(System_Exception_o *exception, const MethodInfo *method)
{
  System_Exception_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = exception;
  if ( (byte_59317EF & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317EF = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)exception) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3, v4);
    UnityEngine_Debug__LogException(v2, 0);
  }
}


void Debug__LogException_36968420(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  System_Exception_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = exception;
  if ( (byte_59317F0 & 1) == 0 )
  {
    exception = (System_Exception_o *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317F0 = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)exception) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogException_82952580(v4, context, 0);
  }
}


void Debug__LogException_48185484(
        System_Exception_o *exception,
        UnityEngine_Object_o *context,
        const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_5937D17 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D17 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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
    UnityEngine_Debug__LogException_82952580(exception, context, 0);
  }
}


void Debug__LogFormat(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_5937D13 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D13 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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


void Debug__LogFormat_36968076(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = format;
  if ( (byte_59317ED & 1) == 0 )
  {
    format = (System_String_o *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317ED = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)format) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogFormat(v4, args, 0);
  }
}


void Debug__LogWarning(Il2CppObject *message, const MethodInfo *method)
{
  Debug_c *v3; // x0

  if ( (byte_5937D10 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D10 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, method);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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

  if ( (byte_5937D12 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D12 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, args);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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


void Debug__LogWarningFormat_36967960(System_String_o *format, System_Object_array *args, const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = format;
  if ( (byte_59317EC & 1) == 0 )
  {
    format = (System_String_o *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317EC = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)format) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogWarningFormat(v4, args, 0);
  }
}


void Debug__LogWarning_36967736(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = message;
  if ( (byte_59317EA & 1) == 0 )
  {
    message = (Il2CppObject *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317EA = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3, v4);
    UnityEngine_Debug__LogWarning(v2, 0);
  }
}


void Debug__LogWarning_36967844(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = message;
  if ( (byte_59317EB & 1) == 0 )
  {
    message = (Il2CppObject *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317EB = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogWarning_82996268(v4, context, 0);
  }
}


void Debug__LogWarning_48184272(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_5937D11 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D11 = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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
    UnityEngine_Debug__LogWarning_82996268(message, context, 0);
  }
}


void Debug__Log_36967288(Il2CppObject *message, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = message;
  if ( (byte_59317E6 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317E6 = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3, v4);
    UnityEngine_Debug__Log(v2, 0);
  }
}


void Debug__Log_36967396(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = message;
  if ( (byte_59317E7 & 1) == 0 )
  {
    message = (Il2CppObject *)sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    byte_59317E7 = 1;
  }
  if ( Debug__IsEnable_36967208((const MethodInfo *)message) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__Log_82993812(v4, context, 0);
  }
}


void Debug__Log_48183432(Il2CppObject *message, UnityEngine_Object_o *context, const MethodInfo *method)
{
  Debug_c *v5; // x0

  if ( (byte_5937D0D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937D0D = 1;
  }
  if ( !*(&Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Debug_TypeInfo, context);
  if ( !byte_5937DDE )
  {
    sub_21FFC50(&Debug_TypeInfo);
    byte_5937DDE = 1;
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
    UnityEngine_Debug__Log_82993812(message, context, 0);
  }
}