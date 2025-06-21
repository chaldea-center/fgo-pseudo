void __fastcall CharaGraphSortOwnerGrandEquipRewardUp___ctor(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20

  if ( (byte_4B173A5 & 1) == 0 )
  {
    sub_1BCAFF8(&CharaGraphSortManageUnitGrandEquipRewardUp_TypeInfo, method);
    byte_4B173A5 = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1BCB244(CharaGraphSortManageUnitGrandEquipRewardUp_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1BCAF9C(&this->fields._ServantEquipSortManageUnit_k__BackingField);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerGrandEquipRewardUp__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


System_String_o *__fastcall CharaGraphSortOwnerGrandEquipRewardUp__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B173A4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_4357/*"CharaGraphSort_GrandEquip_Reward_Up"*/, method);
    byte_4B173A4 = 1;
  }
  return (System_String_o *)StringLiteral_4357/*"CharaGraphSort_GrandEquip_Reward_Up"*/;
}


void __fastcall CharaGraphSortOwnerGrandEquipRewardUp__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1BCAF9C(&this->fields._ServantEquipSortManageUnit_k__BackingField);
}