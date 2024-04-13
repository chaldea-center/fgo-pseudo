void __fastcall StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E7B0D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19617/*"icon_stateup_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19616/*"icon_stateup_off"*/, v5, v6, v7);
    byte_42E7B0D = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( (unsigned int)(strengthStatus - 1) <= 0x61 )
    return (System_String_o *)StringLiteral_19616/*"icon_stateup_off"*/;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_19617/*"icon_stateup_on"*/;
  return 0LL;
}


System_String_o *__fastcall StrengthStatus__GetTreasureDeviceIconName(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 *v12; // x8
  int v13; // w8

  if ( (byte_42E7B0E & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, treasureDeviceNum, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19594/*"icon_np_off"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_19595/*"icon_np_on"*/, v9, v10, v11);
    byte_42E7B0E = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( strengthStatus == 99 )
  {
    v12 = &StringLiteral_19595/*"icon_np_on"*/;
    return (System_String_o *)*v12;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = strengthStatus - treasureDeviceNum;
  if ( strengthStatus - treasureDeviceNum < 0 )
    v13 = treasureDeviceNum - strengthStatus;
  if ( v13 == 1 )
  {
    v12 = &StringLiteral_19594/*"icon_np_off"*/;
    return (System_String_o *)*v12;
  }
  if ( v13 < 2 )
    return 0LL;
  if ( v13 >= 99 )
    return 0LL;
  return (System_String_o *)StringLiteral_19595/*"icon_np_on"*/;
}


int32_t __fastcall StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v6; // w8
  int32_t result; // w0

  if ( (byte_42E7B0C & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, treasureDeviceNum, (_DWORD)method, v3);
    byte_42E7B0C = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( strengthStatus - treasureDeviceNum >= 0 )
    v6 = strengthStatus - treasureDeviceNum;
  else
    v6 = treasureDeviceNum - strengthStatus;
  if ( strengthStatus == 99 && treasureDeviceNum > 2 )
    return 99;
  result = 0;
  if ( strengthStatus && strengthStatus != treasureDeviceNum && v6 != 1 )
  {
    if ( v6 <= 1 )
      return 0;
    else
      return v6;
  }
  return result;
}