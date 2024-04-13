void __fastcall DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  struct System_Int64_array **p_userSvtEquipIds; // x19

  if ( (byte_42E44EB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&long___TypeInfo, v8, v9, v10);
    byte_42E44EB = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  this->fields.userSvtEquipIds = (struct System_Int64_array *)sub_B5D5DC(
                                                                long___TypeInfo,
                                                                (unsigned int)v11->static_fields->SvtEquipMax);
  p_userSvtEquipIds = &this->fields.userSvtEquipIds;
  sub_B5D560(p_userSvtEquipIds);
  p_userSvtEquipIds[1] = (struct System_Int64_array *)sub_B5D5DC(
                                                        int___TypeInfo,
                                                        (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax);
  sub_B5D560(p_userSvtEquipIds + 1);
}


DeckServantData_o *__fastcall DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DeckServantData_o *v11; // x20
  const MethodInfo *v12; // x1
  System_Array_o *userSvtEquipIds; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  DeckServantData_o *result; // x0

  if ( (byte_42E44EC & 1) == 0 )
  {
    sub_B5D5C4(&DeckServantData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&long___TypeInfo, v8, v9, v10);
    byte_42E44EC = 1;
  }
  v11 = (DeckServantData_o *)sub_B5D694(DeckServantData_TypeInfo);
  DeckServantData___ctor(v11, v12);
  if ( !v11 )
    goto LABEL_7;
  v11->fields.id = this->fields.id;
  v11->fields.userSvtId = this->fields.userSvtId;
  v11->fields.svtId = this->fields.svtId;
  userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds;
  if ( !userSvtEquipIds
    || (v15 = System_Array__Clone(userSvtEquipIds, 0LL),
        v11->fields.userSvtEquipIds = (struct System_Int64_array *)sub_B5D684(v15, long___TypeInfo),
        sub_B5D560(&v11->fields.userSvtEquipIds),
        (userSvtEquipIds = (System_Array_o *)this->fields.svtEquipIds) == 0LL) )
  {
LABEL_7:
    sub_B5D69C(userSvtEquipIds, v14);
  }
  v16 = System_Array__Clone(userSvtEquipIds, 0LL);
  v11->fields.svtEquipIds = (struct System_Int32_array *)sub_B5D684(v16, int___TypeInfo);
  sub_B5D560(&v11->fields.svtEquipIds);
  result = v11;
  v11->fields.isFollowerSvt = this->fields.isFollowerSvt;
  v11->fields.npcFollowerSvtId = this->fields.npcFollowerSvtId;
  v11->fields.followerType = this->fields.followerType;
  v11->fields.initPos = this->fields.initPos;
  return result;
}