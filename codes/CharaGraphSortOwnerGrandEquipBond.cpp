void CharaGraphSortOwnerGrandEquipBond___ctor(CharaGraphSortOwnerGrandEquipBond_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59331FF & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphSortManageUnitGrandEquip_TypeInfo);
    byte_59331FF = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_21FFEBC(CharaGraphSortManageUnitGrandEquip_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0);
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerGrandEquipBond__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


System_String_o *CharaGraphSortOwnerGrandEquipBond__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        const MethodInfo *method)
{
  if ( (byte_59331FE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4554/*"CharaGraphSort_GrandEquip_Bond"*/);
    byte_59331FE = 1;
  }
  return (System_String_o *)StringLiteral_4554/*"CharaGraphSort_GrandEquip_Bond"*/;
}


void CharaGraphSortOwnerGrandEquipBond__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}