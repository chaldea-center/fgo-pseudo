void __fastcall CharaGraphSortOwnerGrandEquipBond___ctor(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20

  if ( (byte_4B3F959 & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphSortManageUnitGrandEquip_TypeInfo, method);
    byte_4B3F959 = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1BDBAC4(CharaGraphSortManageUnitGrandEquip_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1BDB81C(&this->fields._ServantEquipSortManageUnit_k__BackingField);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerGrandEquipBond__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


System_String_o *__fastcall CharaGraphSortOwnerGrandEquipBond__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3F958 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4430/*"CharaGraphSort_GrandEquip_Bond"*/, method);
    byte_4B3F958 = 1;
  }
  return (System_String_o *)StringLiteral_4430/*"CharaGraphSort_GrandEquip_Bond"*/;
}


void __fastcall CharaGraphSortOwnerGrandEquipBond__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1BDB81C(&this->fields._ServantEquipSortManageUnit_k__BackingField);
}