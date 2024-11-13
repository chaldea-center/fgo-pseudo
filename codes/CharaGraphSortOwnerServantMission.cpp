void __fastcall CharaGraphSortOwnerServantMission___ctor(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  CharaGraphSortManageUnitSvtCollection_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12538 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphSortManageUnitServantMission_TypeInfo, method, v2);
    byte_4B12538 = 1;
  }
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
  v7 = (CharaGraphSortManageUnitSvtCollection_o *)sub_1BCAA2C(
                                                    CharaGraphSortManageUnitServantMission_TypeInfo,
                                                    v4,
                                                    v5,
                                                    v6);
  CharaGraphSortManageUnitSvtCollection___ctor(v7, 0LL);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


System_String_o *__fastcall CharaGraphSortOwnerServantMission__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12537 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4503/*"CharaGraphSort_SvtMission_"*/, method, v2);
    byte_4B12537 = 1;
  }
  return (System_String_o *)StringLiteral_4503/*"CharaGraphSort_SvtMission_"*/;
}