void __fastcall DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  struct System_Int64_array *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Int32_array *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B15D72 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&long___TypeInfo, v6, v7);
    byte_4B15D72 = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = (struct System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
  this->fields.userSvtEquipIds = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtEquipIds, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Int32_array *)sub_1BCA888(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax);
  this->fields.svtEquipIds = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEquipIds, (int64_t)v17, v18, v19, v20, v21, v22, v23);
}


DeckServantData_o *__fastcall DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x20
  const MethodInfo *v10; // x1
  System_Array_o *userSvtEquipIds; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  int64_t v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *v21; // x21
  int64_t v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  DeckServantData_o *result; // x0

  if ( (byte_4B15D73 & 1) == 0 )
  {
    sub_1BCA7E0(&DeckServantData_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    byte_4B15D73 = 1;
  }
  v9 = sub_1BCAA2C(DeckServantData_TypeInfo, method, v2, v3);
  DeckServantData___ctor((DeckServantData_o *)v9, v10);
  if ( !v9 )
    goto LABEL_7;
  *(_DWORD *)(v9 + 16) = this->fields.id;
  *(_QWORD *)(v9 + 24) = this->fields.userSvtId;
  *(_DWORD *)(v9 + 32) = this->fields.svtId;
  userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds;
  if ( !userSvtEquipIds
    || (v13 = System_Array__Clone(userSvtEquipIds, 0LL),
        *(_QWORD *)(v9 + 40) = sub_1BCA91C(v13, long___TypeInfo),
        v14 = sub_1BCA91C(v13, long___TypeInfo),
        sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 40), v14, v15, v16, v17, v18, v19, v20),
        (userSvtEquipIds = (System_Array_o *)this->fields.svtEquipIds) == 0LL) )
  {
LABEL_7:
    sub_1BCAA3C(userSvtEquipIds, v12);
  }
  v21 = System_Array__Clone(userSvtEquipIds, 0LL);
  *(_QWORD *)(v9 + 48) = sub_1BCA91C(v21, int___TypeInfo);
  v22 = sub_1BCA91C(v21, int___TypeInfo);
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 48), v22, v23, v24, v25, v26, v27, v28);
  result = (DeckServantData_o *)v9;
  *(_BYTE *)(v9 + 56) = this->fields.isFollowerSvt;
  *(_QWORD *)(v9 + 64) = this->fields.npcFollowerSvtId;
  *(_QWORD *)(v9 + 72) = *(_QWORD *)&this->fields.followerType;
  return result;
}