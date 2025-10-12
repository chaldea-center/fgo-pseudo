void CharaGraphSortOwnerGrandEquipNormal___ctor(CharaGraphSortOwnerGrandEquipNormal_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20

  if ( (byte_4C32779 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphSortManageUnitGrandEquip_TypeInfo);
    byte_4C32779 = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1C32E6C(CharaGraphSortManageUnitGrandEquip_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C32BC4(&this->fields._ServantEquipSortManageUnit_k__BackingField, v3);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0);
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerGrandEquipNormal__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


System_String_o *CharaGraphSortOwnerGrandEquipNormal__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C32778 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4392/*"CharaGraphSort_GrandEquip_Normal"*/);
    byte_4C32778 = 1;
  }
  return (System_String_o *)StringLiteral_4392/*"CharaGraphSort_GrandEquip_Normal"*/;
}


void CharaGraphSortOwnerGrandEquipNormal__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipNormal_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1C32BC4(&this->fields._ServantEquipSortManageUnit_k__BackingField, value);
}