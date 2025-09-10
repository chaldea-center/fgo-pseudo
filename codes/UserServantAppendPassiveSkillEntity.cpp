void UserServantAppendPassiveSkillEntity___ctor(UserServantAppendPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28219 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28219 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserServantAppendPassiveSkillEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C28218 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C28218 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_30CCBE0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserServantAppendPassiveSkillEntity__CreatePrimaryKey(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantAppendPassiveSkillEntity__CreatePK(this->fields.userId, this->fields.svtId, v2);
}


int32_t UserServantAppendPassiveSkillEntity__GetExchangeNum(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.exchangeNum;
}


int32_t UserServantAppendPassiveSkillEntity__GetRemainingExchangeNum(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t exchangeNum; // w19

  if ( (byte_4C28217 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C28217 = 1;
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


int32_t UserServantAppendPassiveSkillEntity__GetSvtId(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.svtId;
}


System_Int32_array *UserServantAppendPassiveSkillEntity__GetUnlockNums(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.unlockNums;
}


int64_t UserServantAppendPassiveSkillEntity__GetUserId(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}