void CharaGraphSortOwnerGrandEquipRewardUp___ctor(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B5E5 & 1) == 0 )
  {
    sub_1C93AD4(&CharaGraphSortManageUnitGrandEquipRewardUp_TypeInfo);
    byte_4D2B5E5 = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1C93D20(CharaGraphSortManageUnitGrandEquipRewardUp_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  if ( (byte_4D2B5E4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4413/*"CharaGraphSort_GrandEquip_Reward_Up"*/);
    byte_4D2B5E4 = 1;
  }
  return (System_String_o *)StringLiteral_4413/*"CharaGraphSort_GrandEquip_Reward_Up"*/;
}


void CharaGraphSortOwnerGrandEquipRewardUp__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipRewardUp_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}