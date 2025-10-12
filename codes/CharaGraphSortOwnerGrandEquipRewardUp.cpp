void CharaGraphSortOwnerGrandEquipRewardUp___ctor(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20

  if ( (byte_4C3277D & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphSortManageUnitGrandEquipRewardUp_TypeInfo);
    byte_4C3277D = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1C32E6C(CharaGraphSortManageUnitGrandEquipRewardUp_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C32BC4(&this->fields._ServantEquipSortManageUnit_k__BackingField, v3);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0);
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerGrandEquipRewardUp__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


System_String_o *CharaGraphSortOwnerGrandEquipRewardUp__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3277C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4393/*"CharaGraphSort_GrandEquip_Reward_Up"*/);
    byte_4C3277C = 1;
  }
  return (System_String_o *)StringLiteral_4393/*"CharaGraphSort_GrandEquip_Reward_Up"*/;
}


void CharaGraphSortOwnerGrandEquipRewardUp__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1C32BC4(&this->fields._ServantEquipSortManageUnit_k__BackingField, value);
}