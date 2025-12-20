void UserEventServantPointEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4D2D6F5 & 1) == 0 )
  {
    sub_1C94098(&UserEventServantPointEntity_TypeInfo);
    byte_4D2D6F5 = 1;
  }
  UserEventServantPointEntity_TypeInfo->static_fields->MAX_BUDDY_POINT = 9999999;
}


void UserEventServantPointEntity___ctor(UserEventServantPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D6F4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D6F4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventServantPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4D2D6F1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4D2D6F1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           svtId,
           (const MethodInfo_319A908 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventServantPointEntity__CreatePrimaryKey(
        UserEventServantPointEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q0
  int64_t v4; // x0
  const MethodInfo *v5; // x3
  int32_t svtId; // w19
  int32_t eventId; // w20
  int64_t v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4D2D6F0 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&UserEventServantPointEntity_TypeInfo);
    byte_4D2D6F0 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v10, 0);
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  v8 = v4;
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  return UserEventServantPointEntity__CreatePK(v8, eventId, svtId, v5);
}


int32_t UserEventServantPointEntity__GetBuddyPoint(UserEventServantPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserEventServantPointEntity_c *v4; // x0

  if ( (byte_4D2D6F3 & 1) == 0 )
  {
    sub_1C94098(&UserEventServantPointEntity_TypeInfo);
    byte_4D2D6F3 = 1;
  }
  v4 = UserEventServantPointEntity_TypeInfo;
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
    v4 = UserEventServantPointEntity_TypeInfo;
  }
  return UserEventServantPointEntity__GetIntValue(this, v4->static_fields->MAX_BUDDY_POINT, v2);
}


int32_t UserEventServantPointEntity__GetIntValue(
        UserEventServantPointEntity_o *this,
        int64_t maxValue,
        const MethodInfo *method)
{
  int64_t value; // x20
  int64_t v6; // x19

  if ( (byte_4D2D6F2 & 1) == 0 )
  {
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2D6F2 = 1;
  }
  value = this->fields.value;
  if ( !maxValue )
    maxValue = 0x7FFFFFFF;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = System_Math__Min_65939904(maxValue, value, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32_65503016(v6, 0);
}