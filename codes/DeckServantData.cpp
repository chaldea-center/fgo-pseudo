void DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int64_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Int32_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CEE1B7 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&long___TypeInfo);
    byte_4CEE1B7 = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int64_array *)sub_1C7BB90(long___TypeInfo, (unsigned int)v3->static_fields->SvtEquipMax);
  this->fields.userSvtEquipIds = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEquipIds, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct System_Int32_array *)sub_1C7BB90(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax);
  this->fields.svtEquipIds = v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEquipIds, (int32_t)v11, v12, v13, v14, v15, v16, v17);
}


DeckServantData_o *DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  System_Array_o *userSvtEquipIds; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  int32_t v8; // w0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *v15; // x21
  int32_t v16; // w0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  DeckServantData_o *result; // x0

  if ( (byte_4CEE1B8 & 1) == 0 )
  {
    sub_1C7BAE8(&DeckServantData_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&long___TypeInfo);
    byte_4CEE1B8 = 1;
  }
  v3 = sub_1C7BD34(DeckServantData_TypeInfo);
  DeckServantData___ctor((DeckServantData_o *)v3, v4);
  if ( !v3 )
    goto LABEL_7;
  *(_DWORD *)(v3 + 16) = this->fields.id;
  *(_QWORD *)(v3 + 24) = this->fields.userSvtId;
  *(_DWORD *)(v3 + 32) = this->fields.svtId;
  userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds;
  if ( !userSvtEquipIds
    || (v7 = System_Array__Clone(userSvtEquipIds, 0),
        *(_QWORD *)(v3 + 40) = sub_1C7BC24(v7, long___TypeInfo),
        v8 = sub_1C7BC24(v7, long___TypeInfo),
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 40), v8, v9, v10, v11, v12, v13, v14),
        (userSvtEquipIds = (System_Array_o *)this->fields.svtEquipIds) == 0) )
  {
LABEL_7:
    sub_1C7BD40(userSvtEquipIds, v6);
  }
  v15 = System_Array__Clone(userSvtEquipIds, 0);
  *(_QWORD *)(v3 + 48) = sub_1C7BC24(v15, int___TypeInfo);
  v16 = sub_1C7BC24(v15, int___TypeInfo);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 48), v16, v17, v18, v19, v20, v21, v22);
  result = (DeckServantData_o *)v3;
  *(_BYTE *)(v3 + 56) = this->fields.isFollowerSvt;
  *(_QWORD *)(v3 + 64) = this->fields.npcFollowerSvtId;
  *(_QWORD *)(v3 + 72) = *(_QWORD *)&this->fields.followerType;
  *(_DWORD *)(v3 + 80) = this->fields.equipTarget2SkillChange;
  return result;
}