void __fastcall StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  if ( (byte_42AEDE6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19519/*"icon_stateup_on"*/);
    sub_B52984(&StringLiteral_19518/*"icon_stateup_off"*/);
    byte_42AEDE6 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( (unsigned int)(strengthStatus - 1) <= 0x61 )
    return (System_String_o *)StringLiteral_19518/*"icon_stateup_off"*/;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_19519/*"icon_stateup_on"*/;
  return 0LL;
}


System_String_o *__fastcall StrengthStatus__GetTreasureDeviceIconName(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  __int64 *v5; // x8
  int v6; // w8

  if ( (byte_42AEDE7 & 1) == 0 )
  {
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&StringLiteral_19496/*"icon_np_off"*/);
    sub_B52984(&StringLiteral_19497/*"icon_np_on"*/);
    byte_42AEDE7 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( strengthStatus == 99 )
  {
    v5 = &StringLiteral_19497/*"icon_np_on"*/;
    return (System_String_o *)*v5;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = strengthStatus - treasureDeviceNum;
  if ( strengthStatus - treasureDeviceNum < 0 )
    v6 = treasureDeviceNum - strengthStatus;
  if ( v6 == 1 )
  {
    v5 = &StringLiteral_19496/*"icon_np_off"*/;
    return (System_String_o *)*v5;
  }
  if ( v6 < 2 )
    return 0LL;
  if ( v6 >= 99 )
    return 0LL;
  return (System_String_o *)StringLiteral_19497/*"icon_np_on"*/;
}


int32_t __fastcall StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  int32_t v5; // w8
  int32_t result; // w0

  if ( (byte_42AEDE5 & 1) == 0 )
  {
    sub_B52984(&System_Math_TypeInfo);
    byte_42AEDE5 = 1;
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