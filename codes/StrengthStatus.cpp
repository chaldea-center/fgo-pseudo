void StrengthStatus___ctor(StrengthStatus_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *StrengthStatus__GetIconName(int32_t strengthStatus, const MethodInfo *method)
{
  if ( (byte_5937569 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21175/*"icon_stateup_on"*/);
    sub_21FFC50(&StringLiteral_21174/*"icon_stateup_off"*/);
    byte_5937569 = 1;
  }
  if ( !strengthStatus )
    return 0;
  if ( (unsigned int)(strengthStatus - 99) >= 0xFFFFFF9E )
    return (System_String_o *)StringLiteral_21174/*"icon_stateup_off"*/;
  if ( strengthStatus == 99 )
    return (System_String_o *)StringLiteral_21175/*"icon_stateup_on"*/;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *StrengthStatus__GetTreasureDeviceIconName(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  __int64 *v5; // x8
  int v6; // w8

  if ( (byte_593756A & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&StringLiteral_21146/*"icon_np_off"*/);
    sub_21FFC50(&StringLiteral_21147/*"icon_np_on"*/);
    byte_593756A = 1;
  }
  if ( !strengthStatus )
    return 0;
  if ( strengthStatus == 99 )
  {
    v5 = &StringLiteral_21147/*"icon_np_on"*/;
    return (System_String_o *)*v5;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum, method);
  v6 = strengthStatus - treasureDeviceNum;
  if ( strengthStatus - treasureDeviceNum < 0 )
    v6 = treasureDeviceNum - strengthStatus;
  if ( v6 == 1 )
  {
    v5 = &StringLiteral_21146/*"icon_np_off"*/;
    return (System_String_o *)*v5;
  }
  if ( v6 < 2 )
    return 0;
  if ( (unsigned int)v6 >= 0x63 )
    return 0;
  return (System_String_o *)StringLiteral_21147/*"icon_np_on"*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t StrengthStatus__GetTreasureDeviceStrengthAdjustData(
        int32_t strengthStatus,
        int32_t treasureDeviceNum,
        const MethodInfo *method)
{
  int32_t v5; // w8
  int32_t result; // w0

  if ( (byte_5937568 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5937568 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&treasureDeviceNum, method);
  v5 = strengthStatus - treasureDeviceNum;
  if ( strengthStatus - treasureDeviceNum < 0 )
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