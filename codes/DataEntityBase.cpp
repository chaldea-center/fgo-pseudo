void __fastcall DataEntityBase___ctor(DataEntityBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int_(int32_t arg1, const MethodInfo_1D17150 *method)
{
  int32_t v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = arg1;
  return System_Int32__ToString((int32_t)&v3, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int_(
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_1D171BC *method)
{
  if ( (byte_438DF74 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    byte_438DF74 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24113/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1D175E4 *method)
{
  if ( (byte_438DF7B & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24118/*"{0}:{1}:{2}"*/);
    byte_438DF7B = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24118/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_1D17A7C *method)
{
  if ( (byte_438DF82 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/);
    byte_438DF82 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1D17DEC *method)
{
  if ( (byte_438DF87 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24121/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_438DF87 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_24121/*"{0}:{1}:{2}:{3}:{4}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4,
                              (unsigned int)arg5);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int64_t arg5,
        const MethodInfo_1D17EAC *method)
{
  if ( (byte_438DF88 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24121/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_438DF88 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_24121/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_1D17B2C *method)
{
  if ( (byte_438DF83 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/);
    byte_438DF83 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int64_t arg3,
        const MethodInfo_1D1768C *method)
{
  if ( (byte_438DF7C & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24118/*"{0}:{1}:{2}"*/);
    byte_438DF7C = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24118/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__string_(
        int32_t arg1,
        int32_t arg2,
        System_String_o *arg3,
        const MethodInfo_1D17734 *method)
{
  if ( (byte_438DF7D & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24118/*"{0}:{1}:{2}"*/);
    byte_438DF7D = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24118/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__long_(
        int32_t arg1,
        int64_t arg2,
        const MethodInfo_1D17254 *method)
{
  if ( (byte_438DF75 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    byte_438DF75 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24113/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__string__int_(
        int32_t arg1,
        System_String_o *arg2,
        int32_t arg3,
        const MethodInfo_1D177DC *method)
{
  if ( (byte_438DF7E & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24118/*"{0}:{1}:{2}"*/);
    byte_438DF7E = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24118/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long_(int64_t arg1, const MethodInfo_1D17178 *method)
{
  int64_t v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = arg1;
  return System_Int64__ToString((int64_t)&v3, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int_(
        int64_t arg1,
        int32_t arg2,
        const MethodInfo_1D172EC *method)
{
  if ( (byte_438DF76 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    byte_438DF76 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24113/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1D17884 *method)
{
  if ( (byte_438DF7F & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24118/*"{0}:{1}:{2}"*/);
    byte_438DF7F = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24118/*"{0}:{1}:{2}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_1D17BDC *method)
{
  if ( (byte_438DF84 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/);
    byte_438DF84 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long_(
        int64_t arg1,
        int64_t arg2,
        const MethodInfo_1D17384 *method)
{
  if ( (byte_438DF77 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    byte_438DF77 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24113/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        const MethodInfo_1D1792C *method)
{
  if ( (byte_438DF80 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24118/*"{0}:{1}:{2}"*/);
    byte_438DF80 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24118/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string__long_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        int64_t arg4,
        const MethodInfo_1D17C8C *method)
{
  if ( (byte_438DF85 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/);
    byte_438DF85 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1D1802C *method)
{
  if ( (byte_438DF8A & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24122/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    byte_438DF8A = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_24122/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5,
                              arg6);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object_(
        Il2CppObject *arg1,
        const MethodInfo_1D171A0 *method)
{
  if ( !arg1 )
    sub_B7769C(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))arg1->klass->vtable[3].method)(
                              arg1,
                              arg1->klass->vtable[4].methodPtr);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        const MethodInfo_1D1754C *method)
{
  if ( (byte_438DF7A & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    byte_438DF7A = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24113/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        const MethodInfo_1D179D4 *method)
{
  if ( (byte_438DF81 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24118/*"{0}:{1}:{2}"*/);
    byte_438DF81 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_24118/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        const MethodInfo_1D17D3C *method)
{
  if ( (byte_438DF86 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/);
    byte_438DF86 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_24120/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1D17F6C *method)
{
  if ( (byte_438DF89 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24121/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_438DF89 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_24121/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_1D180F4 *method)
{
  if ( (byte_438DF8B & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24122/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    byte_438DF8B = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_24122/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
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
        const MethodInfo_1D181BC *method)
{
  if ( (byte_438DF8C & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24123/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/);
    byte_438DF8C = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7_->methodPointer)(
                              StringLiteral_24123/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/,
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
        const MethodInfo_1D182A4 *method)
{
  if ( (byte_438DF8D & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24124/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/);
    byte_438DF8D = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7__T8_->methodPointer)(
                              StringLiteral_24124/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/,
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
        const MethodInfo_1D1741C *method)
{
  if ( (byte_438DF78 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    byte_438DF78 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24113/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_string__long_(
        System_String_o *arg1,
        int64_t arg2,
        const MethodInfo_1D174B4 *method)
{
  if ( (byte_438DF79 & 1) == 0 )
  {
    sub_B775C4(&Cysharp_Text_ZString_TypeInfo);
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    byte_438DF79 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_24113/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}