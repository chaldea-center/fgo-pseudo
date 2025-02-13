void __fastcall CharaGraphSortOwnerServantMission___ctor(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitSvtCollection_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD87E9 & 1) == 0 )
  {
    sub_1C21E38(&CharaGraphSortManageUnitServantMission_TypeInfo);
    byte_4BD87E9 = 1;
  }
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
  v3 = (CharaGraphSortManageUnitSvtCollection_o *)sub_1C22084(CharaGraphSortManageUnitServantMission_TypeInfo);
  CharaGraphSortManageUnitSvtCollection___ctor(v3, 0LL);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


System_String_o *__fastcall CharaGraphSortOwnerServantMission__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD87E8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4529/*"CharaGraphSort_SvtMission_"*/);
    byte_4BD87E8 = 1;
  }
  return (System_String_o *)StringLiteral_4529/*"CharaGraphSort_SvtMission_"*/;
}