void __fastcall DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct System_Int64_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Int32_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BFD2C0 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&int___TypeInfo, v3);
    sub_1C2E12C(&long___TypeInfo, v4);
    byte_4BFD2C0 = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int64_array *)sub_1C2E1D4(long___TypeInfo, (unsigned int)v5->static_fields->SvtEquipMax);
  this->fields.userSvtEquipIds = v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.userSvtEquipIds, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (struct System_Int32_array *)sub_1C2E1D4(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax);
  this->fields.svtEquipIds = v13;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.svtEquipIds, (int64_t)v13, v14, v15, v16, v17, v18, v19);
}


DeckServantData_o *__fastcall DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  System_Array_o *userSvtEquipIds; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  int64_t v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *v17; // x21
  int64_t v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  DeckServantData_o *result; // x0

  if ( (byte_4BFD2C1 & 1) == 0 )
  {
    sub_1C2E12C(&DeckServantData_TypeInfo, method);
    sub_1C2E12C(&int___TypeInfo, v3);
    sub_1C2E12C(&long___TypeInfo, v4);
    byte_4BFD2C1 = 1;
  }
  v5 = sub_1C2E378(DeckServantData_TypeInfo);
  DeckServantData___ctor((DeckServantData_o *)v5, v6);
  if ( !v5 )
    goto LABEL_7;
  *(_DWORD *)(v5 + 16) = this->fields.id;
  *(_QWORD *)(v5 + 24) = this->fields.userSvtId;
  *(_DWORD *)(v5 + 32) = this->fields.svtId;
  userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds;
  if ( !userSvtEquipIds
    || (v9 = System_Array__Clone(userSvtEquipIds, 0LL),
        *(_QWORD *)(v5 + 40) = sub_1C2E268(v9, long___TypeInfo),
        v10 = sub_1C2E268(v9, long___TypeInfo),
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 40), v10, v11, v12, v13, v14, v15, v16),
        (userSvtEquipIds = (System_Array_o *)this->fields.svtEquipIds) == 0LL) )
  {
LABEL_7:
    sub_1C2E388(userSvtEquipIds, v8);
  }
  v17 = System_Array__Clone(userSvtEquipIds, 0LL);
  *(_QWORD *)(v5 + 48) = sub_1C2E268(v17, int___TypeInfo);
  v18 = sub_1C2E268(v17, int___TypeInfo);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 48), v18, v19, v20, v21, v22, v23, v24);
  result = (DeckServantData_o *)v5;
  *(_BYTE *)(v5 + 56) = this->fields.isFollowerSvt;
  *(_QWORD *)(v5 + 64) = this->fields.npcFollowerSvtId;
  *(_QWORD *)(v5 + 72) = *(_QWORD *)&this->fields.followerType;
  return result;
}