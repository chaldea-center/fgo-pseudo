void CharaGraphSortOwnerServantMission___ctor(CharaGraphSortOwnerServantMission_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitSvtCollection_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC340F & 1) == 0 )
  {
    sub_1C713B0(&CharaGraphSortManageUnitServantMission_TypeInfo);
    byte_4CC340F = 1;
  }
  v3 = (CharaGraphSortManageUnitSvtCollection_o *)sub_1C715FC(CharaGraphSortManageUnitServantMission_TypeInfo);
  CharaGraphSortManageUnitSvtCollection___ctor(v3, 0);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
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
  if ( (byte_4CC340E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_4388/*"CharaGraphSort_SvtMission_"*/);
    byte_4CC340E = 1;
  }
  return (System_String_o *)StringLiteral_4388/*"CharaGraphSort_SvtMission_"*/;
}


void CharaGraphSortOwnerServantMission__set_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerServantMission_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}