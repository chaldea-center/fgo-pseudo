void __fastcall StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C20F38 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20588/*"java.lang.Long"*/, method);
    sub_1C3B764(&StringLiteral_20587/*"java.lang.Integer"*/, v3);
    byte_4C20F38 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( (unsigned int)(strengthStatus - 1) <= 0x61 )
    return (System_String_o *)StringLiteral_20587/*"java.lang.Integer"*/;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_20588/*"java.lang.Long"*/;
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

  if ( (byte_4C20F39 & 1) == 0 )
  {
    sub_1C3B764(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
    sub_1C3B764(&StringLiteral_20560/*"item_mini_49"*/, v5);
    sub_1C3B764(&StringLiteral_20561/*"item_recover"*/, v6);
    byte_4C20F39 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( strengthStatus == 99 )
  {
    v7 = &StringLiteral_20561/*"item_recover"*/;
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
    v7 = &StringLiteral_20560/*"item_mini_49"*/;
    return (System_String_o *)*v7;
  }
  if ( strengthStatus == treasureDeviceNum )
    return 0LL;
  if ( v8 >= 0x63 )
    return 0LL;
  return (System_String_o *)StringLiteral_20561/*"item_recover"*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t v6; // w8

  if ( (byte_4C20F37 & 1) == 0 )
  {
    sub_1C3B764(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
    byte_4C20F37 = 1;
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