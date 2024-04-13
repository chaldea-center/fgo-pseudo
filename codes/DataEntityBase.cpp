void __fastcall DataEntityBase___ctor(DataEntityBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int_(int32_t arg1, const MethodInfo_1AE2FAC *method)
{
  int32_t v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = arg1;
  return System_Int32__ToString((int32_t)&v3, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int_(
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_1AE3018 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EA2C3 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, v7, v8, v9);
    byte_42EA2C3 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23938/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1AE3440 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42EA2CA & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, arg3, method);
    sub_B5D5C4(&StringLiteral_23943/*"{0}:{1}:{2}"*/, v8, v9, v10);
    byte_42EA2CA = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23943/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_1AE38D8 *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42EA2D1 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, arg3, *(_QWORD *)&arg4);
    sub_B5D5C4(&StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/, v10, v11, v12);
    byte_42EA2D1 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int32_t arg5,
        const MethodInfo_1AE3C48 *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3

  if ( (byte_42EA2D6 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, arg3, *(_QWORD *)&arg4);
    sub_B5D5C4(&StringLiteral_23946/*"{0}:{1}:{2}:{3}:{4}"*/, v12, v13, v14);
    byte_42EA2D6 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23946/*"{0}:{1}:{2}:{3}:{4}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4,
                              (unsigned int)arg5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int64_t arg5,
        const MethodInfo_1AE3D08 *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3

  if ( (byte_42EA2D7 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, arg3, *(_QWORD *)&arg4);
    sub_B5D5C4(&StringLiteral_23946/*"{0}:{1}:{2}:{3}:{4}"*/, v12, v13, v14);
    byte_42EA2D7 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23946/*"{0}:{1}:{2}:{3}:{4}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4,
                              arg5);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int64_t arg4,
        const MethodInfo_1AE3988 *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42EA2D2 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, arg3, arg4);
    sub_B5D5C4(&StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/, v10, v11, v12);
    byte_42EA2D2 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int64_t arg3,
        const MethodInfo_1AE34E8 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42EA2CB & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, arg3, method);
    sub_B5D5C4(&StringLiteral_23943/*"{0}:{1}:{2}"*/, v8, v9, v10);
    byte_42EA2CB = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23943/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__string_(
        int32_t arg1,
        int32_t arg2,
        System_String_o *arg3,
        const MethodInfo_1AE3590 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42EA2CC & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)arg3, method);
    sub_B5D5C4(&StringLiteral_23943/*"{0}:{1}:{2}"*/, v8, v9, v10);
    byte_42EA2CC = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23943/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__long_(
        int32_t arg1,
        int64_t arg2,
        const MethodInfo_1AE30B0 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EA2C4 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, v7, v8, v9);
    byte_42EA2C4 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23938/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__string__int_(
        int32_t arg1,
        System_String_o *arg2,
        int32_t arg3,
        const MethodInfo_1AE3638 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42EA2CD & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, (_DWORD)arg2, arg3, method);
    sub_B5D5C4(&StringLiteral_23943/*"{0}:{1}:{2}"*/, v8, v9, v10);
    byte_42EA2CD = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23943/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long_(int64_t arg1, const MethodInfo_1AE2FD4 *method)
{
  int64_t v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = arg1;
  return System_Int64__ToString((int64_t)&v3, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int_(
        int64_t arg1,
        int32_t arg2,
        const MethodInfo_1AE3148 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EA2C5 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, v7, v8, v9);
    byte_42EA2C5 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23938/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1AE36E0 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42EA2CE & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, arg3, method);
    sub_B5D5C4(&StringLiteral_23943/*"{0}:{1}:{2}"*/, v8, v9, v10);
    byte_42EA2CE = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23943/*"{0}:{1}:{2}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_1AE3A38 *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42EA2D3 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, arg3, *(_QWORD *)&arg4);
    sub_B5D5C4(&StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/, v10, v11, v12);
    byte_42EA2D3 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long_(
        int64_t arg1,
        int64_t arg2,
        const MethodInfo_1AE31E0 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EA2C6 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, v7, v8, v9);
    byte_42EA2C6 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23938/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        const MethodInfo_1AE3788 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42EA2CF & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)arg3, method);
    sub_B5D5C4(&StringLiteral_23943/*"{0}:{1}:{2}"*/, v8, v9, v10);
    byte_42EA2CF = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23943/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string__long_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        int64_t arg4,
        const MethodInfo_1AE3AE8 *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42EA2D4 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)arg3, arg4);
    sub_B5D5C4(&StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/, v10, v11, v12);
    byte_42EA2D4 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string__long__long__long_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        int64_t arg4,
        int64_t arg5,
        int64_t arg6,
        const MethodInfo_1AE3E88 *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3

  if ( (byte_42EA2D9 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)arg3, arg4);
    sub_B5D5C4(&StringLiteral_23947/*"{0}:{1}:{2}:{3}:{4}:{5}"*/, v14, v15, v16);
    byte_42EA2D9 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_23947/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5,
                              arg6);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object_(
        Il2CppObject *arg1,
        const MethodInfo_1AE2FFC *method)
{
  if ( !arg1 )
    sub_B5D69C(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))arg1->klass->vtable[3].method)(
                              arg1,
                              arg1->klass->vtable[4].methodPtr);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        const MethodInfo_1AE33A8 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EA2C9 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, (_DWORD)arg2, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, v7, v8, v9);
    byte_42EA2C9 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23938/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        const MethodInfo_1AE3830 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42EA2D0 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, (_DWORD)arg2, (_DWORD)arg3, method);
    sub_B5D5C4(&StringLiteral_23943/*"{0}:{1}:{2}"*/, v8, v9, v10);
    byte_42EA2D0 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23943/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        const MethodInfo_1AE3B98 *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42EA2D5 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, (_DWORD)arg2, (_DWORD)arg3, arg4);
    sub_B5D5C4(&StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/, v10, v11, v12);
    byte_42EA2D5 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23945/*"{0}:{1}:{2}:{3}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        Il2CppObject *arg5,
        const MethodInfo_1AE3DC8 *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3

  if ( (byte_42EA2D8 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, (_DWORD)arg2, (_DWORD)arg3, arg4);
    sub_B5D5C4(&StringLiteral_23946/*"{0}:{1}:{2}:{3}:{4}"*/, v12, v13, v14);
    byte_42EA2D8 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23946/*"{0}:{1}:{2}:{3}:{4}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        Il2CppObject *arg5,
        Il2CppObject *arg6,
        const MethodInfo_1AE3F50 *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3

  if ( (byte_42EA2DA & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, (_DWORD)arg2, (_DWORD)arg3, arg4);
    sub_B5D5C4(&StringLiteral_23947/*"{0}:{1}:{2}:{3}:{4}:{5}"*/, v14, v15, v16);
    byte_42EA2DA = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_23947/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5,
                              arg6);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        Il2CppObject *arg5,
        Il2CppObject *arg6,
        Il2CppObject *arg7,
        const MethodInfo_1AE4018 *method)
{
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3

  if ( (byte_42EA2DB & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, (_DWORD)arg2, (_DWORD)arg3, arg4);
    sub_B5D5C4(&StringLiteral_23948/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/, v16, v17, v18);
    byte_42EA2DB = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7_->methodPointer)(
                              StringLiteral_23948/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5,
                              arg6,
                              arg7,
                              method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7_);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object__object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        Il2CppObject *arg5,
        Il2CppObject *arg6,
        Il2CppObject *arg7,
        Il2CppObject *arg8,
        const MethodInfo_1AE4100 *method)
{
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3

  if ( (byte_42EA2DC & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, (_DWORD)arg2, (_DWORD)arg3, arg4);
    sub_B5D5C4(&StringLiteral_23949/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/, v17, v18, v19);
    byte_42EA2DC = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7__T8_->methodPointer)(
                              StringLiteral_23949/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5,
                              arg6,
                              arg7,
                              arg8,
                              method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7__T8_);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_string__int_(
        System_String_o *arg1,
        int32_t arg2,
        const MethodInfo_1AE3278 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EA2C7 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, v7, v8, v9);
    byte_42EA2C7 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23938/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_string__long_(
        System_String_o *arg1,
        int64_t arg2,
        const MethodInfo_1AE3310 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EA2C8 & 1) == 0 )
  {
    sub_B5D5C4(&Cysharp_Text_ZString_TypeInfo, arg2, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, v7, v8, v9);
    byte_42EA2C8 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23938/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}