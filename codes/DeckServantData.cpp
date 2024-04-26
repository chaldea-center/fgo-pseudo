void __fastcall DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int64_array **p_userSvtEquipIds; // x19

  if ( (byte_434D85C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&long___TypeInfo);
    byte_434D85C = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  this->fields.userSvtEquipIds = (struct System_Int64_array *)sub_B706AC(
                                                                long___TypeInfo,
                                                                (unsigned int)v3->static_fields->SvtEquipMax);
  p_userSvtEquipIds = &this->fields.userSvtEquipIds;
  sub_B70630(p_userSvtEquipIds);
  p_userSvtEquipIds[1] = (struct System_Int64_array *)sub_B706AC(
                                                        int___TypeInfo,
                                                        (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax);
  sub_B70630(p_userSvtEquipIds + 1);
}


DeckServantData_o *__fastcall DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData_o *v3; // x20
  const MethodInfo *v4; // x1
  System_Array_o *userSvtEquipIds; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  Il2CppObject *v8; // x0
  DeckServantData_o *result; // x0

  if ( (byte_434D85D & 1) == 0 )
  {
    sub_B70694(&DeckServantData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&long___TypeInfo);
    byte_434D85D = 1;
  }
  v3 = (DeckServantData_o *)sub_B70764(DeckServantData_TypeInfo);
  DeckServantData___ctor(v3, v4);
  if ( !v3 )
    goto LABEL_7;
  v3->fields.id = this->fields.id;
  v3->fields.userSvtId = this->fields.userSvtId;
  v3->fields.svtId = this->fields.svtId;
  userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds;
  if ( !userSvtEquipIds
    || (v7 = System_Array__Clone(userSvtEquipIds, 0LL),
        v3->fields.userSvtEquipIds = (struct System_Int64_array *)sub_B70754(v7, long___TypeInfo),
        sub_B70630(&v3->fields.userSvtEquipIds),
        (userSvtEquipIds = (System_Array_o *)this->fields.svtEquipIds) == 0LL) )
  {
LABEL_7:
    sub_B7076C(userSvtEquipIds, v6);
  }
  v8 = System_Array__Clone(userSvtEquipIds, 0LL);
  v3->fields.svtEquipIds = (struct System_Int32_array *)sub_B70754(v8, int___TypeInfo);
  sub_B70630(&v3->fields.svtEquipIds);
  result = v3;
  v3->fields.isFollowerSvt = this->fields.isFollowerSvt;
  v3->fields.npcFollowerSvtId = this->fields.npcFollowerSvtId;
  v3->fields.followerType = this->fields.followerType;
  v3->fields.initPos = this->fields.initPos;
  return result;
}