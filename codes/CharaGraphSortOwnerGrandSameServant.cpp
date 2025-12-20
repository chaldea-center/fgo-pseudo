void CharaGraphSortOwnerGrandSameServant___ctor(CharaGraphSortOwnerGrandSameServant_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitServant_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D27457 & 1) == 0 )
  {
    sub_1C94098(&CharaGraphSortManageUnitGrandSameServant_TypeInfo);
    byte_4D27457 = 1;
  }
  v3 = (CharaGraphSortManageUnitServant_o *)sub_1C942E4(CharaGraphSortManageUnitGrandSameServant_TypeInfo);
  CharaGraphSortManageUnitServant___ctor(v3, 0);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
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
  if ( (byte_4D27456 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_4397/*"CharaGraphSort_GrandSameServant"*/);
    byte_4D27456 = 1;
  }
  return (System_String_o *)StringLiteral_4397/*"CharaGraphSort_GrandSameServant"*/;
}


void CharaGraphSortOwnerGrandSameServant__set_ServantSortManageUnit(
        CharaGraphSortOwnerGrandSameServant_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}