void __fastcall CharaGraphSortOwnerGrandEquipBond___ctor(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20

  if ( (byte_4AFCEC9 & 1) == 0 )
  {
    sub_1BC3008(&CharaGraphSortManageUnitGrandEquip_TypeInfo, method);
    byte_4AFCEC9 = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1BC3254(CharaGraphSortManageUnitGrandEquip_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1BC2FAC(&this->fields._ServantEquipSortManageUnit_k__BackingField);
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
  if ( (byte_4AFCEC8 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4353/*"CharaGraphSort_GrandEquip_Bond"*/, method);
    byte_4AFCEC8 = 1;
  }
  return (System_String_o *)StringLiteral_4353/*"CharaGraphSort_GrandEquip_Bond"*/;
}


void __fastcall CharaGraphSortOwnerGrandEquipBond__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipBond_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1BC2FAC(&this->fields._ServantEquipSortManageUnit_k__BackingField);
}