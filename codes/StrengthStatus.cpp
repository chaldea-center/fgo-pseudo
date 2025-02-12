void __fastcall StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4BB36C9 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20513/*"icon_sealact_disable"*/, method);
    sub_1C13D24(&StringLiteral_20512/*"icon_reward_step{0}"*/, v3);
    byte_4BB36C9 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( (unsigned int)(strengthStatus - 1) <= 0x61 )
    return (System_String_o *)StringLiteral_20512/*"icon_reward_step{0}"*/;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_20513/*"icon_sealact_disable"*/;
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

  if ( (byte_4BB36CA & 1) == 0 )
  {
    sub_1C13D24(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
    sub_1C13D24(&StringLiteral_20485/*"icon_event_1_{0}"*/, v5);
    sub_1C13D24(&StringLiteral_20486/*"icon_event_2"*/, v6);
    byte_4BB36CA = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( strengthStatus == 99 )
  {
    v7 = &StringLiteral_20486/*"icon_event_2"*/;
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
    v7 = &StringLiteral_20485/*"icon_event_1_{0}"*/;
    return (System_String_o *)*v7;
  }
  if ( strengthStatus == treasureDeviceNum )
    return 0LL;
  if ( v8 >= 0x63 )
    return 0LL;
  return (System_String_o *)StringLiteral_20486/*"icon_event_2"*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t v6; // w8

  if ( (byte_4BB36C8 & 1) == 0 )
  {
    sub_1C13D24(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
    byte_4BB36C8 = 1;
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