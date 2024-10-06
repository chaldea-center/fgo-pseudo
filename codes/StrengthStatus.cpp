void __fastcall StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4A6EE95 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_20214/*"icon_stateup_on"*/, method);
    sub_1B90010(&StringLiteral_20213/*"icon_stateup_off"*/, v3);
    byte_4A6EE95 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( (unsigned int)(strengthStatus - 1) <= 0x61 )
    return (System_String_o *)StringLiteral_20213/*"icon_stateup_off"*/;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_20214/*"icon_stateup_on"*/;
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
  unsigned int v8; // w8

  if ( (byte_4A6EE96 & 1) == 0 )
  {
    sub_1B90010(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
    sub_1B90010(&StringLiteral_20187/*"icon_np_off"*/, v5);
    sub_1B90010(&StringLiteral_20188/*"icon_np_on"*/, v6);
    byte_4A6EE96 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( strengthStatus == 99 )
  {
    v7 = &StringLiteral_20188/*"icon_np_on"*/;
    return (System_String_o *)*v7;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( strengthStatus - treasureDeviceNum >= 0 )
    v8 = strengthStatus - treasureDeviceNum;
  else
    v8 = treasureDeviceNum - strengthStatus;
  if ( v8 == 1 )
  {
    v7 = &StringLiteral_20187/*"icon_np_off"*/;
    return (System_String_o *)*v7;
  }
  if ( strengthStatus == treasureDeviceNum )
    return 0LL;
  if ( v8 >= 0x63 )
    return 0LL;
  return (System_String_o *)StringLiteral_20188/*"icon_np_on"*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t v6; // w8

  if ( (byte_4A6EE94 & 1) == 0 )
  {
    sub_1B90010(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
    byte_4A6EE94 = 1;
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