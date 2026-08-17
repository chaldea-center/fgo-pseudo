void DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int64_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Int32_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5970337 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&long___TypeInfo);
    byte_5970337 = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int64_array *)sub_2213B20(long___TypeInfo, (unsigned int)v4->static_fields->SvtEquipMax);
  this->fields.userSvtEquipIds = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEquipIds, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct System_Int32_array *)sub_2213B20(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax);
  this->fields.svtEquipIds = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.svtEquipIds, (int32_t)v12, v13, v14, v15, v16, v17, v18);
}


DeckServantData_o *DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  System_Array_o *userSvtEquipIds; // x0
  __int64 v6; // x1
  int64_t userSvtId; // x9
  int32_t svtId; // w10
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  Il2CppClass *v11; // x1
  int32_t v12; // w0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x21
  __int64 v20; // x0
  Il2CppClass *v21; // x1
  int32_t v22; // w0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  bool isFollowerSvt; // w8
  DeckServantData_o *result; // x0
  int64_t npcFollowerSvtId; // x9
  int32_t equipTarget2SkillChange; // w8

  if ( (byte_5970338 & 1) == 0 )
  {
    sub_2213A60(&DeckServantData_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&long___TypeInfo);
    byte_5970338 = 1;
  }
  v3 = sub_2213CCC(DeckServantData_TypeInfo);
  DeckServantData___ctor((DeckServantData_o *)v3, v4);
  if ( !v3 )
    goto LABEL_7;
  userSvtId = this->fields.userSvtId;
  svtId = this->fields.svtId;
  userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds;
  *(_DWORD *)(v3 + 16) = this->fields.id;
  *(_QWORD *)(v3 + 24) = userSvtId;
  *(_DWORD *)(v3 + 32) = svtId;
  if ( !userSvtEquipIds
    || (v9 = System_Array__Clone(userSvtEquipIds, 0),
        v10 = sub_2213BB4(v9, long___TypeInfo),
        v11 = long___TypeInfo,
        *(_QWORD *)(v3 + 40) = v10,
        v12 = sub_2213BB4(v9, v11),
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), v12, v13, v14, v15, v16, v17, v18),
        (userSvtEquipIds = (System_Array_o *)this->fields.svtEquipIds) == 0) )
  {
LABEL_7:
    sub_2213CDC(userSvtEquipIds, v6);
  }
  v19 = System_Array__Clone(userSvtEquipIds, 0);
  v20 = sub_2213BB4(v19, int___TypeInfo);
  v21 = int___TypeInfo;
  *(_QWORD *)(v3 + 48) = v20;
  v22 = sub_2213BB4(v19, v21);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 48), v22, v23, v24, v25, v26, v27, v28);
  isFollowerSvt = this->fields.isFollowerSvt;
  result = (DeckServantData_o *)v3;
  npcFollowerSvtId = this->fields.npcFollowerSvtId;
  *(_QWORD *)(v3 + 72) = *(_QWORD *)&this->fields.followerType;
  *(_BYTE *)(v3 + 56) = isFollowerSvt;
  equipTarget2SkillChange = this->fields.equipTarget2SkillChange;
  *(_QWORD *)(v3 + 64) = npcFollowerSvtId;
  *(_DWORD *)(v3 + 80) = equipTarget2SkillChange;
  return result;
}