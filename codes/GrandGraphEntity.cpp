void __fastcall GrandGraphEntity___ctor(GrandGraphEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44D9D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B44D9D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall GrandGraphEntity__CanSelectToGrand(
        GrandGraphEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  GrandGraphEntity_o *v4; // x20
  int32_t v6; // w8
  BalanceConfig_c *v7; // x0
  int32_t v8; // w21
  int32_t SvtSkillListMax; // w23
  bool v10; // cc

  v4 = this;
  if ( (byte_4B44D9C & 1) == 0 )
  {
    this = (GrandGraphEntity_o *)sub_1BDB878(&BalanceConfig_TypeInfo, userServantEntity);
    byte_4B44D9C = 1;
  }
  if ( !userServantEntity )
    sub_1BDBAD4(this, userServantEntity);
  if ( userServantEntity->fields.lv < v4->fields.condSvtLv )
    return 0;
  v6 = 0;
  do
  {
    v7 = BalanceConfig_TypeInfo;
    v8 = v6;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    SvtSkillListMax = v7->static_fields->SvtSkillListMax;
    if ( v8 >= SvtSkillListMax )
      break;
    v10 = UserServantEntity__getSkillLevel(userServantEntity, v8, 0LL) < v4->fields.condSkillLv;
    v6 = v8 + 1;
  }
  while ( !v10 );
  return v8 >= SvtSkillListMax;
}


int32_t __fastcall GrandGraphEntity__CreatePrimaryKey(GrandGraphEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall GrandGraphEntity__IsOpen(GrandGraphEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4B44D9B & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, method);
    byte_4B44D9B = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
}