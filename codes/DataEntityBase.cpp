void __fastcall DataEntityBase___ctor(DataEntityBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int_(int32_t arg1, const MethodInfo_1A4DEE4 *method)
{
  int32_t v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = arg1;
  return System_Int32__ToString((int32_t)&v3, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int_(
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_1A4DF50 *method)
{
  if ( (byte_42B1609 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23820/*"{0}:{1}"*/);
    byte_42B1609 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23820/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1A4E378 *method)
{
  if ( (byte_42B1610 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23825/*"{0}:{1}:{2}"*/);
    byte_42B1610 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23825/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_1A4E810 *method)
{
  if ( (byte_42B1617 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/);
    byte_42B1617 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1A4EB80 *method)
{
  if ( (byte_42B161C & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23828/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_42B161C = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23828/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_1A4EC40 *method)
{
  if ( (byte_42B161D & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23828/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_42B161D = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23828/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_1A4E8C0 *method)
{
  if ( (byte_42B1618 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/);
    byte_42B1618 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int64_t arg3,
        const MethodInfo_1A4E420 *method)
{
  if ( (byte_42B1611 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23825/*"{0}:{1}:{2}"*/);
    byte_42B1611 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23825/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__string_(
        int32_t arg1,
        int32_t arg2,
        System_String_o *arg3,
        const MethodInfo_1A4E4C8 *method)
{
  if ( (byte_42B1612 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23825/*"{0}:{1}:{2}"*/);
    byte_42B1612 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23825/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              (unsigned int)arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__long_(
        int32_t arg1,
        int64_t arg2,
        const MethodInfo_1A4DFE8 *method)
{
  if ( (byte_42B160A & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23820/*"{0}:{1}"*/);
    byte_42B160A = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23820/*"{0}:{1}"*/,
                              (unsigned int)arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__string__int_(
        int32_t arg1,
        System_String_o *arg2,
        int32_t arg3,
        const MethodInfo_1A4E570 *method)
{
  if ( (byte_42B1613 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23825/*"{0}:{1}:{2}"*/);
    byte_42B1613 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, _QWORD, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23825/*"{0}:{1}:{2}"*/,
                              (unsigned int)arg1,
                              arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long_(int64_t arg1, const MethodInfo_1A4DF0C *method)
{
  int64_t v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = arg1;
  return System_Int64__ToString((int64_t)&v3, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int_(
        int64_t arg1,
        int32_t arg2,
        const MethodInfo_1A4E080 *method)
{
  if ( (byte_42B160B & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23820/*"{0}:{1}"*/);
    byte_42B160B = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23820/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_1A4E618 *method)
{
  if ( (byte_42B1614 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23825/*"{0}:{1}:{2}"*/);
    byte_42B1614 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23825/*"{0}:{1}:{2}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_1A4E970 *method)
{
  if ( (byte_42B1619 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/);
    byte_42B1619 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, _QWORD, _QWORD, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/,
                              arg1,
                              (unsigned int)arg2,
                              (unsigned int)arg3,
                              (unsigned int)arg4);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long_(
        int64_t arg1,
        int64_t arg2,
        const MethodInfo_1A4E118 *method)
{
  if ( (byte_42B160C & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23820/*"{0}:{1}"*/);
    byte_42B160C = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23820/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        const MethodInfo_1A4E6C0 *method)
{
  if ( (byte_42B1615 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23825/*"{0}:{1}:{2}"*/);
    byte_42B1615 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23825/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__string__long_(
        int64_t arg1,
        int64_t arg2,
        System_String_o *arg3,
        int64_t arg4,
        const MethodInfo_1A4EA20 *method)
{
  if ( (byte_42B161A & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/);
    byte_42B161A = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1A4EDC0 *method)
{
  if ( (byte_42B161F & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23829/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    byte_42B161F = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, int64_t, int64_t, System_String_o *, int64_t, int64_t, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_23829/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
                              arg1,
                              arg2,
                              arg3,
                              arg4,
                              arg5,
                              arg6);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object_(
        Il2CppObject *arg1,
        const MethodInfo_1A4DF34 *method)
{
  if ( !arg1 )
    sub_B52A5C(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))arg1->klass->vtable[3].method)(
                              arg1,
                              arg1->klass->vtable[4].methodPtr);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        const MethodInfo_1A4E2E0 *method)
{
  if ( (byte_42B160F & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23820/*"{0}:{1}"*/);
    byte_42B160F = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23820/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        const MethodInfo_1A4E768 *method)
{
  if ( (byte_42B1616 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23825/*"{0}:{1}:{2}"*/);
    byte_42B1616 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3_->methodPointer)(
                              StringLiteral_23825/*"{0}:{1}:{2}"*/,
                              arg1,
                              arg2,
                              arg3);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__object__object__object_(
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        const MethodInfo_1A4EAD0 *method)
{
  if ( (byte_42B161B & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/);
    byte_42B161B = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4_->methodPointer)(
                              StringLiteral_23827/*"{0}:{1}:{2}:{3}"*/,
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
        const MethodInfo_1A4ED00 *method)
{
  if ( (byte_42B161E & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23828/*"{0}:{1}:{2}:{3}:{4}"*/);
    byte_42B161E = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5_->methodPointer)(
                              StringLiteral_23828/*"{0}:{1}:{2}:{3}:{4}"*/,
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
        const MethodInfo_1A4EE88 *method)
{
  if ( (byte_42B1620 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23829/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    byte_42B1620 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6_->methodPointer)(
                              StringLiteral_23829/*"{0}:{1}:{2}:{3}:{4}:{5}"*/,
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
        const MethodInfo_1A4EF50 *method)
{
  if ( (byte_42B1621 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23830/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/);
    byte_42B1621 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7_->methodPointer)(
                              StringLiteral_23830/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/,
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
        const MethodInfo_1A4F038 *method)
{
  if ( (byte_42B1622 & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23831/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/);
    byte_42B1622 = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, MethodInfo *))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2__T3__T4__T5__T6__T7__T8_->methodPointer)(
                              StringLiteral_23831/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/,
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
        const MethodInfo_1A4E1B0 *method)
{
  if ( (byte_42B160D & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23820/*"{0}:{1}"*/);
    byte_42B160D = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, _QWORD))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23820/*"{0}:{1}"*/,
                              arg1,
                              (unsigned int)arg2);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_string__long_(
        System_String_o *arg1,
        int64_t arg2,
        const MethodInfo_1A4E248 *method)
{
  if ( (byte_42B160E & 1) == 0 )
  {
    sub_B52984(&Cysharp_Text_ZString_TypeInfo);
    sub_B52984(&StringLiteral_23820/*"{0}:{1}"*/);
    byte_42B160E = 1;
  }
  if ( (BYTE3(Cysharp_Text_ZString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  }
  return (System_String_o *)((__int64 (__fastcall *)(__int64, System_String_o *, int64_t))method->rgctx_data->_0_Cysharp_Text_ZString_Format_T1__T2_->methodPointer)(
                              StringLiteral_23820/*"{0}:{1}"*/,
                              arg1,
                              arg2);
}