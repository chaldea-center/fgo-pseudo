void CharaGraphSortOwnerGrandSameServant___ctor(CharaGraphSortOwnerGrandSameServant_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitServant_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59331CB & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphSortManageUnitGrandSameServant_TypeInfo);
    byte_59331CB = 1;
  }
  v3 = (CharaGraphSortManageUnitServant_o *)sub_21FFEBC(CharaGraphSortManageUnitGrandSameServant_TypeInfo);
  CharaGraphSortManageUnitServant___ctor(v3, 0);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  if ( (byte_59331CA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4557/*"CharaGraphSort_GrandSameServant"*/);
    byte_59331CA = 1;
  }
  return (System_String_o *)StringLiteral_4557/*"CharaGraphSort_GrandSameServant"*/;
}


void CharaGraphSortOwnerGrandSameServant__set_ServantSortManageUnit(
        CharaGraphSortOwnerGrandSameServant_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}