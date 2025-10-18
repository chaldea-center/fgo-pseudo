void CharaGraphSortOwnerGrandEquipBond___ctor(CharaGraphSortOwnerGrandEquipBond_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20

  if ( (byte_4C3DD65 & 1) == 0 )
  {
    sub_1C37058(&CharaGraphSortManageUnitGrandEquip_TypeInfo);
    byte_4C3DD65 = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1C372A4(CharaGraphSortManageUnitGrandEquip_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C36FFC(&this->fields._ServantEquipSortManageUnit_k__BackingField, v3);
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
  if ( (byte_4C3DD64 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4391/*"CharaGraphSort_GrandEquip_Bond"*/);
    byte_4C3DD64 = 1;
  }
  return (System_String_o *)StringLiteral_4391/*"CharaGraphSort_GrandEquip_Bond"*/;
}


void CharaGraphSortOwnerGrandEquipBond__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1C36FFC(&this->fields._ServantEquipSortManageUnit_k__BackingField, value);
}