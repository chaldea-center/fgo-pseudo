void __fastcall StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B151F6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20401/*"icon_stateup_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_20400/*"icon_stateup_off"*/, v4, v5);
    byte_4B151F6 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( (unsigned int)(strengthStatus - 1) <= 0x61 )
    return (System_String_o *)StringLiteral_20400/*"icon_stateup_off"*/;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_20401/*"icon_stateup_on"*/;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StrengthStatus__GetTreasureDeviceIconName(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 *v9; // x8
  unsigned int v10; // w8

  if ( (byte_4B151F7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum, method);
    sub_1BCA7E0(&StringLiteral_20373/*"icon_np_off"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_20374/*"icon_np_on"*/, v7, v8);
    byte_4B151F7 = 1;
  }
  if ( !strengthStatus )
    return 0LL;
  if ( strengthStatus == 99 )
  {
    v9 = &StringLiteral_20374/*"icon_np_on"*/;
    return (System_String_o *)*v9;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
  if ( strengthStatus - treasureDeviceNum >= 0 )
    v10 = strengthStatus - treasureDeviceNum;
  else
    v10 = treasureDeviceNum - strengthStatus;
  if ( v10 == 1 )
  {
    v9 = &StringLiteral_20373/*"icon_np_off"*/;
    return (System_String_o *)*v9;
  }
  if ( strengthStatus == treasureDeviceNum )
    return 0LL;
  if ( v10 >= 0x63 )
    return 0LL;
  return (System_String_o *)StringLiteral_20374/*"icon_np_on"*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t v6; // w8

  if ( (byte_4B151F5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum, method);
    byte_4B151F5 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum);
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