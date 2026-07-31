void CharaGraphSortOwnerServantMission___ctor(CharaGraphSortOwnerServantMission_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitSvtCollection_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593450E & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphSortManageUnitServantMission_TypeInfo);
    byte_593450E = 1;
  }
  v3 = (CharaGraphSortManageUnitSvtCollection_o *)sub_21FFEBC(CharaGraphSortManageUnitServantMission_TypeInfo);
  CharaGraphSortManageUnitSvtCollection___ctor(v3, 0);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0);
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerServantMission__get_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantCollectionSortManageUnit_k__BackingField;
}


System_String_o *CharaGraphSortOwnerServantMission__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  if ( (byte_593450D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4558/*"CharaGraphSort_SvtMission_"*/);
    byte_593450D = 1;
  }
  return (System_String_o *)StringLiteral_4558/*"CharaGraphSort_SvtMission_"*/;
}


void CharaGraphSortOwnerServantMission__set_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerServantMission_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}