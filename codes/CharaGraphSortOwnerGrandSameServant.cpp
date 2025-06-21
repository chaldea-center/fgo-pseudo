void __fastcall CharaGraphSortOwnerGrandSameServant___ctor(
        CharaGraphSortOwnerGrandSameServant_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServant_o *v3; // x20

  if ( (byte_4B17375 & 1) == 0 )
  {
    sub_1BCAFF8(&CharaGraphSortManageUnitGrandSameServant_TypeInfo, method);
    byte_4B17375 = 1;
  }
  v3 = (CharaGraphSortManageUnitServant_o *)sub_1BCB244(CharaGraphSortManageUnitGrandSameServant_TypeInfo);
  CharaGraphSortManageUnitServant___ctor(v3, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1BCAF9C(&this->fields._ServantSortManageUnit_k__BackingField);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerGrandSameServant__get_ServantSortManageUnit(
        CharaGraphSortOwnerGrandSameServant_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantSortManageUnit_k__BackingField;
}


System_String_o *__fastcall CharaGraphSortOwnerGrandSameServant__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerGrandSameServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B17374 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_4358/*"CharaGraphSort_GrandSameServant"*/, method);
    byte_4B17374 = 1;
  }
  return (System_String_o *)StringLiteral_4358/*"CharaGraphSort_GrandSameServant"*/;
}


void __fastcall CharaGraphSortOwnerGrandSameServant__set_ServantSortManageUnit(
        CharaGraphSortOwnerGrandSameServant_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1BCAF9C(&this->fields._ServantSortManageUnit_k__BackingField);
}