void __fastcall BattleServantSnapShotOnBuffUpdate___ctor(
        BattleServantSnapShotOnBuffUpdate_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_Int32_array *AuraIdList; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData
    || (this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId,
        this->fields._Hp_k__BackingField = BattleServantData__getNowHp(svtData, 0LL),
        this->fields._MaxHp_k__BackingField = BattleServantData__getMaxHp(svtData, 0LL),
        (AuraIdList = BattleServantData__getAuraIdList(svtData, 0LL)) == 0LL) )
  {
    sub_1B9026C(AuraIdList, v6);
  }
  this->fields._AuraSum_k__BackingField = *(_QWORD *)&AuraIdList->max_length;
}