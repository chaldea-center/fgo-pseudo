void GrandGraphEntity___ctor(GrandGraphEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B02 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938B02 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


bool GrandGraphEntity__CanSelectToGrand(
        GrandGraphEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  GrandGraphEntity_o *v4; // x20
  bool v5; // w22
  int32_t v6; // w21
  BalanceConfig_c *v7; // x0
  int32_t SvtSkillListMax; // w8
  int32_t SkillLevel; // w0

  v4 = this;
  if ( (byte_5938B01 & 1) == 0 )
  {
    this = (GrandGraphEntity_o *)sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5938B01 = 1;
  }
  if ( !userServantEntity )
    sub_21FFECC(this, userServantEntity);
  if ( userServantEntity->fields.lv < v4->fields.condSvtLv )
    return 0;
  v6 = 0;
  do
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userServantEntity);
      v7 = BalanceConfig_TypeInfo;
    }
    SvtSkillListMax = v7->static_fields->SvtSkillListMax;
    v5 = v6 >= SvtSkillListMax;
    if ( v6 >= SvtSkillListMax )
      break;
    SkillLevel = UserServantEntity__getSkillLevel(userServantEntity, v6++, 0);
  }
  while ( SkillLevel >= v4->fields.condSkillLv );
  return v5;
}


int32_t GrandGraphEntity__CreatePrimaryKey(GrandGraphEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool GrandGraphEntity__IsOpen(GrandGraphEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condTargetId; // w21
  int64_t condNum; // x19

  if ( (byte_5938B00 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938B00 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}