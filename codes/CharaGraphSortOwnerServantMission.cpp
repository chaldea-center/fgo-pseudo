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

  if ( (byte_4C1E1D6 & 1) == 0 )
  {
    sub_1C3B764(&CharaGraphSortManageUnitServantMission_TypeInfo, method);
    byte_4C1E1D6 = 1;
  }
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
  v3 = (CharaGraphSortManageUnitSvtCollection_o *)sub_1C3B9B0(CharaGraphSortManageUnitServantMission_TypeInfo);
  CharaGraphSortManageUnitSvtCollection___ctor(v3, 0LL);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C3B708(
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
  if ( (byte_4C1E1D5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_4517/*"CommandCard"*/, method);
    byte_4C1E1D5 = 1;
  }
  return (System_String_o *)StringLiteral_4517/*"CommandCard"*/;
}