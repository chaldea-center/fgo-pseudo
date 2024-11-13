void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  Il2CppObject *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  Il2CppObject *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  Il2CppObject *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B155D0 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphSortManageUnitCommandCode_TypeInfo, method, v2);
    sub_1BCA7E0(&CharaGraphSortManageUnitServantEquip_TypeInfo, v4, v5);
    sub_1BCA7E0(&CharaGraphSortManageUnitServant_TypeInfo, v6, v7);
    byte_4B155D0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (Il2CppObject *)sub_1BCAA2C(CharaGraphSortManageUnitServant_TypeInfo, v8, v9, v10);
  System_Object___ctor(v11, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (Il2CppObject *)sub_1BCAA2C(CharaGraphSortManageUnitServantEquip_TypeInfo, v18, v19, v20);
  System_Object___ctor(v21, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v31 = (Il2CppObject *)sub_1BCAA2C(CharaGraphSortManageUnitCommandCode_TypeInfo, v28, v29, v30);
  System_Object___ctor(v31, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v31;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}