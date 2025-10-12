void CharaGraphSortOwnerGrandSameServant___ctor(CharaGraphSortOwnerGrandSameServant_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitServant_o *v3; // x20

  if ( (byte_4C3274B & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphSortManageUnitGrandSameServant_TypeInfo);
    byte_4C3274B = 1;
  }
  v3 = (CharaGraphSortManageUnitServant_o *)sub_1C32E6C(CharaGraphSortManageUnitGrandSameServant_TypeInfo);
  CharaGraphSortManageUnitServant___ctor(v3, 0);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C32BC4(&this->fields._ServantSortManageUnit_k__BackingField, v3);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0);
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerGrandSameServant__get_ServantSortManageUnit(
        CharaGraphSortOwnerGrandSameServant_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantSortManageUnit_k__BackingField;
}


System_String_o *CharaGraphSortOwnerGrandSameServant__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerGrandSameServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3274A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4394/*"CharaGraphSort_GrandSameServant"*/);
    byte_4C3274A = 1;
  }
  return (System_String_o *)StringLiteral_4394/*"CharaGraphSort_GrandSameServant"*/;
}


void CharaGraphSortOwnerGrandSameServant__set_ServantSortManageUnit(
        CharaGraphSortOwnerGrandSameServant_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1C32BC4(&this->fields._ServantSortManageUnit_k__BackingField, value);
}