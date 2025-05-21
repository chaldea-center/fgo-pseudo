void __fastcall CharaGraphSortOwnerGrandSameServant___ctor(
        CharaGraphSortOwnerGrandSameServant_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServant_o *v3; // x20

  if ( (byte_4B3F92B & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphSortManageUnitGrandSameServant_TypeInfo, method);
    byte_4B3F92B = 1;
  }
  v3 = (CharaGraphSortManageUnitServant_o *)sub_1BDBAC4(CharaGraphSortManageUnitGrandSameServant_TypeInfo);
  CharaGraphSortManageUnitServant___ctor(v3, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1BDB81C(&this->fields._ServantSortManageUnit_k__BackingField);
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
  if ( (byte_4B3F92A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4433/*"CharaGraphSort_GrandSameServant"*/, method);
    byte_4B3F92A = 1;
  }
  return (System_String_o *)StringLiteral_4433/*"CharaGraphSort_GrandSameServant"*/;
}


void __fastcall CharaGraphSortOwnerGrandSameServant__set_ServantSortManageUnit(
        CharaGraphSortOwnerGrandSameServant_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1BDB81C(&this->fields._ServantSortManageUnit_k__BackingField);
}