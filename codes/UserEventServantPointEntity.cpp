void __fastcall UserEventServantPointEntity___cctor(const MethodInfo *method)
{
  if ( (byte_42AEEE1 & 1) == 0 )
  {
    sub_B52984(&UserEventServantPointEntity_TypeInfo);
    byte_42AEEE1 = 1;
  }
  UserEventServantPointEntity_TypeInfo->static_fields->MAX_BUDDY_POINT = 9999999LL;
}


void __fastcall UserEventServantPointEntity___ctor(UserEventServantPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEEE0 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEEE0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventServantPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_42AEEDD & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_42AEEDD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           svtId,
           (const MethodInfo_1A4E618 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventServantPointEntity__CreatePrimaryKey(
        UserEventServantPointEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int64_t v4; // x0
  const MethodInfo *v5; // x3
  int32_t svtId; // w19
  int32_t eventId; // w20
  int64_t v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_42AEEDC & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserEventServantPointEntity_TypeInfo);
    byte_42AEEDC = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v10, 0LL);
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  v8 = v4;
  if ( (BYTE3(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  }
  return UserEventServantPointEntity__CreatePK(v8, eventId, svtId, v5);
}


int32_t __fastcall UserEventServantPointEntity__GetBuddyPoint(
        UserEventServantPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserEventServantPointEntity_c *v4; // x0

  if ( (byte_42AEEDF & 1) == 0 )
  {
    sub_B52984(&UserEventServantPointEntity_TypeInfo);
    byte_42AEEDF = 1;
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
  int64_t value; // x20
  int64_t v6; // x19

  if ( (byte_42AEEDE & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    byte_42AEEDE = 1;
  }
  value = this->fields.value;
  if ( !maxValue )
    maxValue = 0x7FFFFFFFLL;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = System_Math__Min_45037076(maxValue, value, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32_42690080(v6, 0LL);
}