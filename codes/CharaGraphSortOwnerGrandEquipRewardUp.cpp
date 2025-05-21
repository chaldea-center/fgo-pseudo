void __fastcall CharaGraphSortOwnerGrandEquipRewardUp___ctor(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20

  if ( (byte_4B3F95B & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphSortManageUnitGrandEquipRewardUp_TypeInfo, method);
    byte_4B3F95B = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1BDBAC4(CharaGraphSortManageUnitGrandEquipRewardUp_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1BDB81C(&this->fields._ServantEquipSortManageUnit_k__BackingField);
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
  if ( (byte_4B3F95A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4432/*"CharaGraphSort_GrandEquip_Reward_Up"*/, method);
    byte_4B3F95A = 1;
  }
  return (System_String_o *)StringLiteral_4432/*"CharaGraphSort_GrandEquip_Reward_Up"*/;
}


void __fastcall CharaGraphSortOwnerGrandEquipRewardUp__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1BDB81C(&this->fields._ServantEquipSortManageUnit_k__BackingField);
}