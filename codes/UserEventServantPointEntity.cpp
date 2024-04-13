void __fastcall UserEventServantPointEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70D9 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventServantPointEntity_TypeInfo, v1, v2, v3);
    byte_42E70D9 = 1;
  }
  UserEventServantPointEntity_TypeInfo->static_fields->MAX_BUDDY_POINT = 9999999LL;
}


void __fastcall UserEventServantPointEntity___ctor(UserEventServantPointEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E70D8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventServantPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_42E70D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, eventId, svtId, method);
    byte_42E70D5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           svtId,
           (const MethodInfo_1AE36E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventServantPointEntity__CreatePrimaryKey(
        UserEventServantPointEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int128 v8; // q1
  int64_t v9; // x0
  const MethodInfo *v10; // x3
  int32_t svtId; // w19
  int32_t eventId; // w20
  int64_t v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  if ( (byte_42E70D4 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserEventServantPointEntity_TypeInfo, v5, v6, v7);
    byte_42E70D4 = 1;
  }
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v15 = v16;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v15, 0LL);
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  v13 = v9;
  if ( (BYTE3(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  }
  return UserEventServantPointEntity__CreatePK(v13, eventId, svtId, v10);
}


int32_t __fastcall UserEventServantPointEntity__GetBuddyPoint(
        UserEventServantPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  UserEventServantPointEntity_c *v5; // x0

  if ( (byte_42E70D7 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventServantPointEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E70D7 = 1;
  }
  v5 = UserEventServantPointEntity_TypeInfo;
  if ( (BYTE3(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
    v5 = UserEventServantPointEntity_TypeInfo;
  }
  return UserEventServantPointEntity__GetIntValue(this, v5->static_fields->MAX_BUDDY_POINT, v2);
}


int32_t __fastcall UserEventServantPointEntity__GetIntValue(
        UserEventServantPointEntity_o *this,
        int64_t maxValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int64_t value; // x20
  int64_t v10; // x19

  v4 = maxValue;
  if ( (byte_42E70D6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, maxValue, (_DWORD)method, v3);
    sub_B5D5C4(&System_Math_TypeInfo, v6, v7, v8);
    byte_42E70D6 = 1;
  }
  value = this->fields.value;
  if ( !v4 )
    v4 = 0x7FFFFFFFLL;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = System_Math__Min_45149944(v4, value, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32_42786036(v10, 0LL);
}