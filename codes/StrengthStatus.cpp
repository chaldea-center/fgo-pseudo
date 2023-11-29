void __fastcall StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_40F7C15 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19299, method);
    sub_B16FFC(&StringLiteral_19298, v3);
    byte_40F7C15 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( (unsigned int)(strengthStatus - 1) <= 0x61 )
    return (System_String_o *)StringLiteral_19298;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_19299;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StrengthStatus__GetTreasureDeviceIconName(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8
  int v8; // w8

  if ( (byte_40F7C16 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
    sub_B16FFC(&StringLiteral_19276, v5);
    sub_B16FFC(&StringLiteral_19277, v6);
    byte_40F7C16 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( strengthStatus == 99 )
  {
    v7 = &StringLiteral_19277;
    return (System_String_o *)*v7;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = strengthStatus - treasureDeviceNum;
  if ( strengthStatus - treasureDeviceNum < 0 )
    v8 = treasureDeviceNum - strengthStatus;
  if ( v8 == 1 )
  {
    v7 = &StringLiteral_19276;
    return (System_String_o *)*v7;
  }
  if ( v8 < 2 )
    return 0LL;
  if ( v8 >= 99 )
    return 0LL;
  return (System_String_o *)StringLiteral_19277;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  int32_t v5; // w8
  int32_t result; // w0

  if ( (byte_40F7C14 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
    byte_40F7C14 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( strengthStatus - treasureDeviceNum >= 0 )
    v5 = strengthStatus - treasureDeviceNum;
  else
    v5 = treasureDeviceNum - strengthStatus;
  if ( strengthStatus == 99 && treasureDeviceNum > 2 )
    return 99;
  result = 0;
  if ( strengthStatus && strengthStatus != treasureDeviceNum && v5 != 1 )
  {
    if ( v5 <= 1 )
      return 0;
    else
      return v5;
  }
  return result;
}