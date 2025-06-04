void __fastcall CharaGraphSortOwnerGrandEquipNormal___ctor(
        CharaGraphSortOwnerGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip_o *v3; // x20

  if ( (byte_4AFCEC7 & 1) == 0 )
  {
    sub_1BC3008(&CharaGraphSortManageUnitGrandEquip_TypeInfo, method);
    byte_4AFCEC7 = 1;
  }
  v3 = (CharaGraphSortManageUnitServantEquip_o *)sub_1BC3254(CharaGraphSortManageUnitGrandEquip_TypeInfo);
  CharaGraphSortManageUnitServantEquip___ctor(v3, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1BC2FAC(&this->fields._ServantEquipSortManageUnit_k__BackingField);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerGrandEquipNormal__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


System_String_o *__fastcall CharaGraphSortOwnerGrandEquipNormal__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerGrandEquipNormal_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFCEC6 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4354/*"CharaGraphSort_GrandEquip_Normal"*/, method);
    byte_4AFCEC6 = 1;
  }
  return (System_String_o *)StringLiteral_4354/*"CharaGraphSort_GrandEquip_Normal"*/;
}


void __fastcall CharaGraphSortOwnerGrandEquipNormal__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerGrandEquipNormal_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1BC2FAC(&this->fields._ServantEquipSortManageUnit_k__BackingField);
}