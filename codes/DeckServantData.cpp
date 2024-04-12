void __fastcall DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0

  if ( (byte_42ABC78 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&long___TypeInfo);
    byte_42ABC78 = 1;
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
  this->fields.userSvtEquipIds = (struct System_Int64_array *)sub_B5299C(
                                                                long___TypeInfo,
                                                                (unsigned int)v3->static_fields->SvtEquipMax);
  sub_B52920(&this->fields.userSvtEquipIds);
}


DeckServantData_o *__fastcall DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData_o *v3; // x20
  const MethodInfo *v4; // x1
  System_Array_o *userSvtEquipIds; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  DeckServantData_o *result; // x0

  if ( (byte_42ABC79 & 1) == 0 )
  {
    sub_B52984(&DeckServantData_TypeInfo);
    sub_B52984(&long___TypeInfo);
    byte_42ABC79 = 1;
  }
  v3 = (DeckServantData_o *)sub_B52A54(DeckServantData_TypeInfo);
  DeckServantData___ctor(v3, v4);
  if ( !v3
    || (v3->fields.id = this->fields.id,
        v3->fields.userSvtId = this->fields.userSvtId,
        (userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds) == 0LL) )
  {
    sub_B52A5C(userSvtEquipIds, v6);
  }
  v7 = System_Array__Clone(userSvtEquipIds, 0LL);
  v3->fields.userSvtEquipIds = (struct System_Int64_array *)sub_B52A44(v7, long___TypeInfo);
  sub_B52920(&v3->fields.userSvtEquipIds);
  result = v3;
  v3->fields.isFollowerSvt = this->fields.isFollowerSvt;
  v3->fields.npcFollowerSvtId = this->fields.npcFollowerSvtId;
  v3->fields.followerType = this->fields.followerType;
  v3->fields.initPos = this->fields.initPos;
  return result;
}