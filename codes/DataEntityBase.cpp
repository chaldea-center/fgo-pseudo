void __fastcall DataEntityBase___ctor(DataEntityBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int_(int32_t arg1, const MethodInfo_173289C *method)
{
  int32_t v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = arg1;
  return System_Int32__ToString((int32_t)&v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int_(
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_1732908 *method)
{
  __int64 v6; // x1

  if ( (byte_4187299 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23626/*"{0}:{1}"*/, v6);
    byte_4187299 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23626/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1732D30 *method)
{
  __int64 v8; // x1

  if ( (byte_41872A0 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23631/*"{0}:{1}:{2}"*/, v8);
    byte_41872A0 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23631/*"{0}:{1}:{2}"*/,
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
        const MethodInfo_1733078 *method)
{
  __int64 v10; // x1

  if ( (byte_41872A5 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/, v10);
    byte_41872A5 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_17333E8 *method)
{
  __int64 v12; // x1

  if ( (byte_41872AA & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23634/*"{0}:{1}:{2}:{3}:{4}"*/, v12);
    byte_41872AA = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23634/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_17334A8 *method)
{
  __int64 v12; // x1

  if ( (byte_41872AB & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23634/*"{0}:{1}:{2}:{3}:{4}"*/, v12);
    byte_41872AB = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23634/*"{0}:{1}:{2}:{3}:{4}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4,
                              arg5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int64_t arg4,
        const MethodInfo_1733128 *method)
{
  __int64 v10; // x1

  if ( (byte_41872A6 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/, v10);
    byte_41872A6 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              arg4);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int64_t arg3,
        const MethodInfo_1732DD8 *method)
{
  __int64 v8; // x1

  if ( (byte_41872A1 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23631/*"{0}:{1}:{2}"*/, v8);
    byte_41872A1 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23631/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__long_(
        int32_t arg1,
        int64_t arg2,
        const MethodInfo_17329A0 *method)
{
  __int64 v6; // x1

  if ( (byte_418729A & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23626/*"{0}:{1}"*/, v6);
    byte_418729A = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23626/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long_(int64_t arg1, const MethodInfo_17328C4 *method)
{
  int64_t v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = arg1;
  return System_Int64__ToString((int64_t)&v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int_(
        int64_t arg1,
        int32_t arg2,
        const MethodInfo_1732A38 *method)
{
  __int64 v6; // x1

  if ( (byte_418729B & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23626/*"{0}:{1}"*/, v6);
    byte_418729B = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23626/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1732E80 *method)
{
  __int64 v8; // x1

  if ( (byte_41872A2 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23631/*"{0}:{1}:{2}"*/, v8);
    byte_41872A2 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23631/*"{0}:{1}:{2}"*/,
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
        const MethodInfo_17331D8 *method)
{
  __int64 v10; // x1

  if ( (byte_41872A7 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/, v10);
    byte_41872A7 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long_(
        int64_t arg1,
        int64_t arg2,
        const MethodInfo_1732AD0 *method)
{
  __int64 v6; // x1

  if ( (byte_418729C & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23626/*"{0}:{1}"*/, v6);
    byte_418729C = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23626/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        const MethodInfo_1732F28 *method)
{
  __int64 v8; // x1

  if ( (byte_41872A3 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23631/*"{0}:{1}:{2}"*/, v8);
    byte_41872A3 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23631/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string__long_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        int64_t arg4,
        const MethodInfo_1733288 *method)
{
  __int64 v10; // x1

  if ( (byte_41872A8 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/, v10);
    byte_41872A8 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1733628 *method)
{
  __int64 v14; // x1

  if ( (byte_41872AD & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23635/*"{0}:{1}:{2}:{3}:{4}:{5}"*/, v14);
    byte_41872AD = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_23635/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5,
                              arg6);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object_(
        Il2CppObject *arg1,
        const MethodInfo_17328EC *method)
{
  if ( !arg1 )
    sub_B2C434(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))arg1->klass->vtable[3].method)(
                              arg1,
                              arg1->klass->vtable[4].methodPtr);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        const MethodInfo_1732C98 *method)
{
  __int64 v6; // x1

  if ( (byte_418729F & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23626/*"{0}:{1}"*/, v6);
    byte_418729F = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23626/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        const MethodInfo_1732FD0 *method)
{
  __int64 v8; // x1

  if ( (byte_41872A4 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23631/*"{0}:{1}:{2}"*/, v8);
    byte_41872A4 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23631/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        const MethodInfo_1733338 *method)
{
  __int64 v10; // x1

  if ( (byte_41872A9 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/, v10);
    byte_41872A9 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23633/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1733568 *method)
{
  __int64 v12; // x1

  if ( (byte_41872AC & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23634/*"{0}:{1}:{2}:{3}:{4}"*/, v12);
    byte_41872AC = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23634/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_17336F0 *method)
{
  __int64 v14; // x1

  if ( (byte_41872AE & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23635/*"{0}:{1}:{2}:{3}:{4}:{5}"*/, v14);
    byte_41872AE = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_23635/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
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
        const MethodInfo_17337B8 *method)
{
  __int64 v16; // x1

  if ( (byte_41872AF & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23636/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/, v16);
    byte_41872AF = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7_->methodPointer)(
                              StringLiteral_23636/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/,
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
        const MethodInfo_17338A0 *method)
{
  __int64 v17; // x1

  if ( (byte_41872B0 & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23637/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/, v17);
    byte_41872B0 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7__T8_->methodPointer)(
                              StringLiteral_23637/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/,
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_string__int_(
        System_String_o *arg1,
        int32_t arg2,
        const MethodInfo_1732B68 *method)
{
  __int64 v6; // x1

  if ( (byte_418729D & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_B2C35C(&StringLiteral_23626/*"{0}:{1}"*/, v6);
    byte_418729D = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23626/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_string__long_(
        System_String_o *arg1,
        int64_t arg2,
        const MethodInfo_1732C00 *method)
{
  __int64 v6; // x1

  if ( (byte_418729E & 1) == 0 )
  {
    sub_B2C35C(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_B2C35C(&StringLiteral_23626/*"{0}:{1}"*/, v6);
    byte_418729E = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23626/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}