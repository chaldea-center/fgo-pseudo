void __fastcall DataEntityBase___ctor(DataEntityBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int_(int32_t arg1, const MethodInfo_1CA2300 *method)
{
  int32_t v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = arg1;
  return System_Int32__ToString((int32_t)&v3, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int_(
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_1CA236C *method)
{
  if ( (byte_43546B5 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24010/*"{0}:{1}"*/);
    byte_43546B5 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24010/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1CA2794 *method)
{
  if ( (byte_43546BC & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24015/*"{0}:{1}:{2}"*/);
    byte_43546BC = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24015/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_1CA2C2C *method)
{
  if ( (byte_43546C3 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/);
    byte_43546C3 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int32_t arg5,
        const MethodInfo_1CA2F9C *method)
{
  long double v6; // q0

  if ( (byte_43546C8 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24018/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_43546C8 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_24018/*"{0}:{1}:{2}:{3}:{4}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4,
                              (unsigned int)arg5,
                              v6);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int64_t arg5,
        const MethodInfo_1CA305C *method)
{
  if ( (byte_43546C9 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24018/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_43546C9 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_24018/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_1CA2CDC *method)
{
  if ( (byte_43546C4 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/);
    byte_43546C4 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int64_t arg3,
        const MethodInfo_1CA283C *method)
{
  if ( (byte_43546BD & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24015/*"{0}:{1}:{2}"*/);
    byte_43546BD = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24015/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__string_(
        int32_t arg1,
        int32_t arg2,
        System_String_o *arg3,
        const MethodInfo_1CA28E4 *method)
{
  if ( (byte_43546BE & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24015/*"{0}:{1}:{2}"*/);
    byte_43546BE = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24015/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__long_(
        int32_t arg1,
        int64_t arg2,
        const MethodInfo_1CA2404 *method)
{
  if ( (byte_43546B6 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24010/*"{0}:{1}"*/);
    byte_43546B6 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24010/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__string__int_(
        int32_t arg1,
        System_String_o *arg2,
        int32_t arg3,
        const MethodInfo_1CA298C *method)
{
  if ( (byte_43546BF & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24015/*"{0}:{1}:{2}"*/);
    byte_43546BF = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24015/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long_(int64_t arg1, const MethodInfo_1CA2328 *method)
{
  int64_t v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = arg1;
  return System_Int64__ToString((int64_t)&v3, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int_(
        int64_t arg1,
        int32_t arg2,
        const MethodInfo_1CA249C *method)
{
  if ( (byte_43546B7 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24010/*"{0}:{1}"*/);
    byte_43546B7 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24010/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1CA2A34 *method)
{
  if ( (byte_43546C0 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24015/*"{0}:{1}:{2}"*/);
    byte_43546C0 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24015/*"{0}:{1}:{2}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_1CA2D8C *method)
{
  if ( (byte_43546C5 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/);
    byte_43546C5 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long_(
        int64_t arg1,
        int64_t arg2,
        const MethodInfo_1CA2534 *method)
{
  if ( (byte_43546B8 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24010/*"{0}:{1}"*/);
    byte_43546B8 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24010/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        const MethodInfo_1CA2ADC *method)
{
  if ( (byte_43546C1 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24015/*"{0}:{1}:{2}"*/);
    byte_43546C1 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24015/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string__long_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        int64_t arg4,
        const MethodInfo_1CA2E3C *method)
{
  if ( (byte_43546C6 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/);
    byte_43546C6 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1CA31DC *method)
{
  if ( (byte_43546CB & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24019/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    byte_43546CB = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_24019/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5,
                              arg6);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object_(
        Il2CppObject *arg1,
        const MethodInfo_1CA2350 *method)
{
  if ( !arg1 )
    sub_B7076C(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))arg1->klass->vtable[3].method)(
                              arg1,
                              arg1->klass->vtable[4].methodPtr);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        const MethodInfo_1CA26FC *method)
{
  if ( (byte_43546BB & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24010/*"{0}:{1}"*/);
    byte_43546BB = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24010/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        const MethodInfo_1CA2B84 *method)
{
  if ( (byte_43546C2 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24015/*"{0}:{1}:{2}"*/);
    byte_43546C2 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24015/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        const MethodInfo_1CA2EEC *method)
{
  if ( (byte_43546C7 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/);
    byte_43546C7 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24017/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1CA311C *method)
{
  if ( (byte_43546CA & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24018/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_43546CA = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_24018/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_1CA32A4 *method)
{
  if ( (byte_43546CC & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24019/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    byte_43546CC = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_24019/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
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
        const MethodInfo_1CA336C *method)
{
  if ( (byte_43546CD & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24020/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/);
    byte_43546CD = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7_->methodPointer)(
                              StringLiteral_24020/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/,
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
        const MethodInfo_1CA3454 *method)
{
  if ( (byte_43546CE & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24021/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/);
    byte_43546CE = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7__T8_->methodPointer)(
                              StringLiteral_24021/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/,
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
        const MethodInfo_1CA25CC *method)
{
  if ( (byte_43546B9 & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24010/*"{0}:{1}"*/);
    byte_43546B9 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24010/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_string__long_(
        System_String_o *arg1,
        int64_t arg2,
        const MethodInfo_1CA2664 *method)
{
  if ( (byte_43546BA & 1) == 0 )
  {
    sub_B70694(&Cysharp_Text_ZString_TypeInfo);
    sub_B70694(&StringLiteral_24010/*"{0}:{1}"*/);
    byte_43546BA = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24010/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}