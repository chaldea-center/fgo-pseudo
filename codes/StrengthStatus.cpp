void __fastcall StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  if ( (byte_4BDB52B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20542/*"icon_stateup_on"*/);
    sub_1C21E38(&StringLiteral_20541/*"icon_stateup_off"*/);
    byte_4BDB52B = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( (unsigned int)(strengthStatus - 1) <= 0x61 )
    return (System_String_o *)StringLiteral_20541/*"icon_stateup_off"*/;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_20542/*"icon_stateup_on"*/;
  return 0LL;
}


System_String_o *__fastcall StrengthStatus__GetTreasureDeviceIconName(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  __int64 *v5; // x8
  unsigned int v6; // w8

  if ( (byte_4BDB52C & 1) == 0 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&StringLiteral_20514/*"icon_np_off"*/);
    sub_1C21E38(&StringLiteral_20515/*"icon_np_on"*/);
    byte_4BDB52C = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( strengthStatus == 99 )
  {
    v5 = &StringLiteral_20515/*"icon_np_on"*/;
    return (System_String_o *)*v5;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( strengthStatus - treasureDeviceNum >= 0 )
    v6 = strengthStatus - treasureDeviceNum;
  else
    v6 = treasureDeviceNum - strengthStatus;
  if ( v6 == 1 )
  {
    v5 = &StringLiteral_20514/*"icon_np_off"*/;
    return (System_String_o *)*v5;
  }
  if ( strengthStatus == treasureDeviceNum )
    return 0LL;
  if ( v6 >= 0x63 )
    return 0LL;
  return (System_String_o *)StringLiteral_20515/*"icon_np_on"*/;
}


int32_t __fastcall StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t v6; // w8

  if ( (byte_4BDB52A & 1) == 0 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BDB52A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( strengthStatus - treasureDeviceNum >= 0 )
    result = strengthStatus - treasureDeviceNum;
  else
    result = treasureDeviceNum - strengthStatus;
  if ( strengthStatus == 99 && treasureDeviceNum > 2 )
    return 99;
  v6 = 0;
  if ( !strengthStatus || strengthStatus == treasureDeviceNum || result == 1 )
    return v6;
  return result;
}