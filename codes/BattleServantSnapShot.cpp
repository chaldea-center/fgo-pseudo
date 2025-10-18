void BattleServantSnapShot___ctor(
        BattleServantSnapShot_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData )
    sub_1C372B4(v5);
  this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId;
}


int32_t BattleServantSnapShot__get_AuraSum(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._AuraSum_k__BackingField;
}


int32_t BattleServantSnapShot__get_BaseMaxHp(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._BaseMaxHp_k__BackingField;
}


BattleBuffData_BuffData_array *BattleServantSnapShot__get_BuffArray(
        BattleServantSnapShot_o *this,
        const MethodInfo *method)
{
  return this->fields._BuffArray_k__BackingField;
}


BattleBuffData_CheckIndividualitiesData_o *BattleServantSnapShot__get_CheckIndividualitiesData(
        BattleServantSnapShot_o *this,
        const MethodInfo *method)
{
  return this->fields._CheckIndividualitiesData_k__BackingField;
}


int32_t BattleServantSnapShot__get_DispLimitCount(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._DispLimitCount_k__BackingField;
}


int32_t BattleServantSnapShot__get_Hp(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._Hp_k__BackingField;
}


int32_t BattleServantSnapShot__get_MaxHp(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._MaxHp_k__BackingField;
}


int32_t BattleServantSnapShot__get_MaxTpTurn(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._MaxTpTurn_k__BackingField;
}


int32_t BattleServantSnapShot__get_ResultHp(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._ResultHp_k__BackingField;
}


int32_t BattleServantSnapShot__get_SvtId(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


int32_t BattleServantSnapShot__get_TransformSvtId(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._TransformSvtId_k__BackingField;
}


int32_t BattleServantSnapShot__get_TreasuredvcId(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._TreasuredvcId_k__BackingField;
}


int32_t BattleServantSnapShot__get_TreasuredvcLevel(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._TreasuredvcLevel_k__BackingField;
}


int32_t BattleServantSnapShot__get_UniqueId(BattleServantSnapShot_o *this, const MethodInfo *method)
{
  return this->fields._UniqueId_k__BackingField;
}


void BattleServantSnapShot__set_AuraSum(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AuraSum_k__BackingField = value;
}


void BattleServantSnapShot__set_BaseMaxHp(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._BaseMaxHp_k__BackingField = value;
}


void BattleServantSnapShot__set_BuffArray(
        BattleServantSnapShot_o *this,
        BattleBuffData_BuffData_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BuffArray_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._BuffArray_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleServantSnapShot__set_CheckIndividualitiesData(
        BattleServantSnapShot_o *this,
        BattleBuffData_CheckIndividualitiesData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CheckIndividualitiesData_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BattleServantSnapShot__set_DispLimitCount(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DispLimitCount_k__BackingField = value;
}


void BattleServantSnapShot__set_Hp(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Hp_k__BackingField = value;
}


void BattleServantSnapShot__set_MaxHp(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxHp_k__BackingField = value;
}


void BattleServantSnapShot__set_MaxTpTurn(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxTpTurn_k__BackingField = value;
}


void BattleServantSnapShot__set_ResultHp(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ResultHp_k__BackingField = value;
}


void BattleServantSnapShot__set_SvtId(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void BattleServantSnapShot__set_TransformSvtId(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TransformSvtId_k__BackingField = value;
}


void BattleServantSnapShot__set_TreasuredvcId(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TreasuredvcId_k__BackingField = value;
}


void BattleServantSnapShot__set_TreasuredvcLevel(
        BattleServantSnapShot_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TreasuredvcLevel_k__BackingField = value;
}


void BattleServantSnapShot__set_UniqueId(BattleServantSnapShot_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._UniqueId_k__BackingField = value;
}