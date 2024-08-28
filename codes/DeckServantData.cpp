void __fastcall DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct System_Int64_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A1F661 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&int___TypeInfo, v3);
    sub_1B715CC(&long___TypeInfo, v4);
    byte_4A1F661 = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int64_array *)sub_1B71674(long___TypeInfo, (unsigned int)v5->static_fields->SvtEquipMax);
  this->fields.userSvtEquipIds = v6;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEquipIds, (int32_t)v6, v7, v8);
  v9 = (struct System_Int32_array *)sub_1B71674(
                                      int___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax);
  this->fields.svtEquipIds = v9;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.svtEquipIds, (int32_t)v9, v10, v11);
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
  int32_t v10; // w0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x21
  int32_t v14; // w0
  int32_t v15; // w2
  int32_t v16; // w3
  DeckServantData_o *result; // x0

  if ( (byte_4A1F662 & 1) == 0 )
  {
    sub_1B715CC(&DeckServantData_TypeInfo, method);
    sub_1B715CC(&int___TypeInfo, v3);
    sub_1B715CC(&long___TypeInfo, v4);
    byte_4A1F662 = 1;
  }
  v5 = sub_1B71818(DeckServantData_TypeInfo);
  DeckServantData___ctor((DeckServantData_o *)v5, v6);
  if ( !v5 )
    goto LABEL_7;
  *(_DWORD *)(v5 + 16) = this->fields.id;
  *(_QWORD *)(v5 + 24) = this->fields.userSvtId;
  *(_DWORD *)(v5 + 32) = this->fields.svtId;
  userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds;
  if ( !userSvtEquipIds
    || (v9 = System_Array__Clone(userSvtEquipIds, 0LL),
        *(_QWORD *)(v5 + 40) = sub_1B71708(v9, long___TypeInfo),
        v10 = sub_1B71708(v9, long___TypeInfo),
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 40), v10, v11, v12),
        (userSvtEquipIds = (System_Array_o *)this->fields.svtEquipIds) == 0LL) )
  {
LABEL_7:
    sub_1B71828(userSvtEquipIds, v8);
  }
  v13 = System_Array__Clone(userSvtEquipIds, 0LL);
  *(_QWORD *)(v5 + 48) = sub_1B71708(v13, int___TypeInfo);
  v14 = sub_1B71708(v13, int___TypeInfo);
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 48), v14, v15, v16);
  result = (DeckServantData_o *)v5;
  *(_BYTE *)(v5 + 56) = this->fields.isFollowerSvt;
  *(_QWORD *)(v5 + 64) = this->fields.npcFollowerSvtId;
  *(_QWORD *)(v5 + 72) = *(_QWORD *)&this->fields.followerType;
  return result;
}