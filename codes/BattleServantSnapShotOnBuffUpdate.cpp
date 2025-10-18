void BattleServantSnapShotOnBuffUpdate___ctor(
        BattleServantSnapShotOnBuffUpdate_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_Int32_array *AuraIdList; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData
    || (this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId,
        this->fields._Hp_k__BackingField = BattleServantData__getNowHp(svtData, 0),
        this->fields._MaxHp_k__BackingField = BattleServantData__getMaxHp(svtData, 0),
        (AuraIdList = BattleServantData__getAuraIdList(svtData, 0)) == 0) )
  {
    sub_1C372B4(AuraIdList);
  }
  this->fields._AuraSum_k__BackingField = AuraIdList->max_length;
}