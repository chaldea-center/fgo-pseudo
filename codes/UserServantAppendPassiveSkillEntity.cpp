void __fastcall UserServantAppendPassiveSkillEntity___ctor(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1D41F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D41F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantAppendPassiveSkillEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4B1D41E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_4B1D41E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_3018D34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantAppendPassiveSkillEntity__CreatePrimaryKey(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantAppendPassiveSkillEntity__CreatePK(this->fields.userId, this->fields.svtId, v2);
}


int32_t __fastcall UserServantAppendPassiveSkillEntity__GetExchangeNum(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.exchangeNum;
}


int32_t __fastcall UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t exchangeNum; // w19

  if ( (byte_4B1D41D & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    byte_4B1D41D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  exchangeNum = this->fields.exchangeNum;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return exchangeNum - v3->static_fields->AppendPassiveSkillMaxExchangeNum;
}


int32_t __fastcall UserServantAppendPassiveSkillEntity__GetSvtId(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.svtId;
}


System_Int32_array *__fastcall UserServantAppendPassiveSkillEntity__GetUnlockNums(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.unlockNums;
}


int64_t __fastcall UserServantAppendPassiveSkillEntity__GetUserId(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}