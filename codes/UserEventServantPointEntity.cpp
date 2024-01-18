void __fastcall UserEventServantPointEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4186F84 & 1) == 0 )
  {
    sub_B2C35C(&UserEventServantPointEntity_TypeInfo, v1);
    byte_4186F84 = 1;
  }
  UserEventServantPointEntity_TypeInfo->static_fields->MAX_BUDDY_POINT = 9999999LL;
}


void __fastcall UserEventServantPointEntity___ctor(UserEventServantPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186F83 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186F83 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventServantPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4186F80 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4186F80 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           svtId,
           (const MethodInfo_1732E80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventServantPointEntity__CreatePrimaryKey(
        UserEventServantPointEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int128 v4; // q1
  int64_t v5; // x0
  const MethodInfo *v6; // x3
  int32_t svtId; // w19
  int32_t eventId; // w20
  int64_t v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_4186F7F & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_B2C35C(&UserEventServantPointEntity_TypeInfo, v3);
    byte_4186F7F = 1;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v11, 0LL);
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  v9 = v5;
  if ( (BYTE3(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  }
  return UserEventServantPointEntity__CreatePK(v9, eventId, svtId, v6);
}


int32_t __fastcall UserEventServantPointEntity__GetBuddyPoint(
        UserEventServantPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserEventServantPointEntity_c *v4; // x0

  if ( (byte_4186F82 & 1) == 0 )
  {
    sub_B2C35C(&UserEventServantPointEntity_TypeInfo, method);
    byte_4186F82 = 1;
  }
  v4 = UserEventServantPointEntity_TypeInfo;
  if ( (BYTE3(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
    v4 = UserEventServantPointEntity_TypeInfo;
  }
  return UserEventServantPointEntity__GetIntValue(this, v4->static_fields->MAX_BUDDY_POINT, v2);
}


int32_t __fastcall UserEventServantPointEntity__GetIntValue(
        UserEventServantPointEntity_o *this,
        int64_t maxValue,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  int64_t value; // x20
  int64_t v7; // x19

  v3 = maxValue;
  if ( (byte_4186F81 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, maxValue);
    sub_B2C35C(&System_Math_TypeInfo, v5);
    byte_4186F81 = 1;
  }
  value = this->fields.value;
  if ( !v3 )
    v3 = 0x7FFFFFFFLL;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Min_45012816(v3, value, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32_42132084(v7, 0LL);
}