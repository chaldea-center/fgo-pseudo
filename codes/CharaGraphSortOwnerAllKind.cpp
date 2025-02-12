void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BB3AA6 & 1) == 0 )
  {
    sub_1C13D24(&CharaGraphSortManageUnitCommandCode_TypeInfo, method);
    sub_1C13D24(&CharaGraphSortManageUnitServantEquip_TypeInfo, v3);
    sub_1C13D24(&CharaGraphSortManageUnitServant_TypeInfo, v4);
    byte_4BB3AA6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (Il2CppObject *)sub_1C13F70(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (Il2CppObject *)sub_1C13F70(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v12, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v12;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (Il2CppObject *)sub_1C13F70(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v19, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v19;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}