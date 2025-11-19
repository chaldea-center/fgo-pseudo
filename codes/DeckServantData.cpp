void DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int64_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB5DD7 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    byte_4CB5DD7 = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int64_array *)sub_1C6BAB0(long___TypeInfo, (unsigned int)v3->static_fields->SvtEquipMax);
  this->fields.userSvtEquipIds = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userSvtEquipIds, (int32_t)v4, v5, v6);
  v7 = (struct System_Int32_array *)sub_1C6BAB0(
                                      int___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax);
  this->fields.svtEquipIds = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.svtEquipIds, (int32_t)v7, v8, v9);
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
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  int32_t v12; // w0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  DeckServantData_o *result; // x0

  if ( (byte_4CB5DD8 & 1) == 0 )
  {
    sub_1C6BA08(&DeckServantData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    byte_4CB5DD8 = 1;
  }
  v3 = sub_1C6BC54(DeckServantData_TypeInfo);
  DeckServantData___ctor((DeckServantData_o *)v3, v4);
  if ( !v3 )
    goto LABEL_7;
  *(_DWORD *)(v3 + 16) = this->fields.id;
  *(_QWORD *)(v3 + 24) = this->fields.userSvtId;
  *(_DWORD *)(v3 + 32) = this->fields.svtId;
  userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds;
  if ( !userSvtEquipIds
    || (v7 = System_Array__Clone(userSvtEquipIds, 0),
        *(_QWORD *)(v3 + 40) = sub_1C6BB44(v7, long___TypeInfo),
        v8 = sub_1C6BB44(v7, long___TypeInfo),
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), v8, v9, v10),
        (userSvtEquipIds = (System_Array_o *)this->fields.svtEquipIds) == 0) )
  {
LABEL_7:
    sub_1C6BC60(userSvtEquipIds, v6);
  }
  v11 = System_Array__Clone(userSvtEquipIds, 0);
  *(_QWORD *)(v3 + 48) = sub_1C6BB44(v11, int___TypeInfo);
  v12 = sub_1C6BB44(v11, int___TypeInfo);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 48), v12, v13, v14);
  result = (DeckServantData_o *)v3;
  *(_BYTE *)(v3 + 56) = this->fields.isFollowerSvt;
  *(_QWORD *)(v3 + 64) = this->fields.npcFollowerSvtId;
  *(_QWORD *)(v3 + 72) = *(_QWORD *)&this->fields.followerType;
  *(_DWORD *)(v3 + 80) = this->fields.equipTarget2SkillChange;
  return result;
}