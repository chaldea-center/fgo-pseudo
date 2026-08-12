void UserEventServantPointEntity___cctor(const MethodInfo *method)
{
  if ( (byte_5971724 & 1) == 0 )
  {
    sub_2213A60(&UserEventServantPointEntity_TypeInfo);
    byte_5971724 = 1;
  }
  UserEventServantPointEntity_TypeInfo->static_fields->MAX_BUDDY_POINT = 9999999;
}


void UserEventServantPointEntity___ctor(UserEventServantPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971723 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971723 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventServantPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_5971720 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5971720 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           svtId,
           (const MethodInfo_3854A80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventServantPointEntity__CreatePrimaryKey(
        UserEventServantPointEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  int64_t v7; // x21
  int32_t svtId; // w19
  int32_t eventId; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_597171F & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserEventServantPointEntity_TypeInfo);
    byte_597171F = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v11 = v12;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v11, 0);
  eventId = this->fields.eventId;
  svtId = this->fields.svtId;
  if ( !*(&UserEventServantPointEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo, v5);
  return UserEventServantPointEntity__CreatePK(v7, eventId, svtId, v6);
}


int32_t UserEventServantPointEntity__GetBuddyPoint(UserEventServantPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserEventServantPointEntity_c *v4; // x0

  if ( (byte_5971722 & 1) == 0 )
  {
    sub_2213A60(&UserEventServantPointEntity_TypeInfo);
    byte_5971722 = 1;
  }
  v4 = UserEventServantPointEntity_TypeInfo;
  if ( !*(&UserEventServantPointEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo, method);
    v4 = UserEventServantPointEntity_TypeInfo;
  }
  return UserEventServantPointEntity__GetIntValue(this, v4->static_fields->MAX_BUDDY_POINT, v2);
}


int32_t UserEventServantPointEntity__GetIntValue(
        UserEventServantPointEntity_o *this,
        int64_t maxValue,
        const MethodInfo *method)
{
  int64_t v3; // x19
  int64_t value; // x20
  __int64 v6; // x1
  int64_t v7; // x19

  v3 = maxValue;
  if ( (byte_5971721 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    byte_5971721 = 1;
  }
  value = this->fields.value;
  if ( !v3 )
    v3 = 0x7FFFFFFF;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, maxValue);
  v7 = System_Math__Min_77153608(v3, value, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v6);
  return System_Convert__ToInt32_76686424(v7, 0);
}