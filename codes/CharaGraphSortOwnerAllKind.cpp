void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  Il2CppObject *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDB90A & 1) == 0 )
  {
    sub_1C21E38(&CharaGraphSortManageUnitCommandCode_TypeInfo);
    sub_1C21E38(&CharaGraphSortManageUnitServantEquip_TypeInfo);
    sub_1C21E38(&CharaGraphSortManageUnitServant_TypeInfo);
    byte_4BDB90A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1C22084(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (Il2CppObject *)sub_1C22084(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v10, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (Il2CppObject *)sub_1C22084(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v17, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v17;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}