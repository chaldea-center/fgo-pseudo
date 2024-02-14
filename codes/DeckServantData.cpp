void __fastcall DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int64_array *v5; // x0

  if ( (byte_4210259 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&long___TypeInfo, v3);
    byte_4210259 = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int64_array *)sub_B0D8BC(long___TypeInfo, (unsigned int)v4->static_fields->SvtEquipMax);
  this->fields.userSvtEquipIds = v5;
  sub_B0D840(&this->fields.userSvtEquipIds, v5);
}


DeckServantData_o *__fastcall DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  DeckServantData_o *v5; // x20
  const MethodInfo *v6; // x1
  System_Array_o *userSvtEquipIds; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x0
  DeckServantData_o *result; // x0

  if ( (byte_421025A & 1) == 0 )
  {
    sub_B0D8A4(&DeckServantData_TypeInfo, method);
    sub_B0D8A4(&long___TypeInfo, v4);
    byte_421025A = 1;
  }
  v5 = (DeckServantData_o *)sub_B0D974(DeckServantData_TypeInfo, method, v2);
  DeckServantData___ctor(v5, v6);
  if ( !v5
    || (v5->fields.id = this->fields.id,
        v5->fields.userSvtId = this->fields.userSvtId,
        (userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds) == 0LL) )
  {
    sub_B0D97C(userSvtEquipIds);
  }
  v8 = System_Array__Clone(userSvtEquipIds, 0LL);
  v9 = sub_B0D964(v8, long___TypeInfo);
  v5->fields.userSvtEquipIds = (struct System_Int64_array *)v9;
  sub_B0D840(&v5->fields.userSvtEquipIds, v9);
  result = v5;
  v5->fields.isFollowerSvt = this->fields.isFollowerSvt;
  v5->fields.npcFollowerSvtId = this->fields.npcFollowerSvtId;
  v5->fields.followerType = this->fields.followerType;
  v5->fields.initPos = this->fields.initPos;
  return result;
}