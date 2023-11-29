void __fastcall DeckServantData___ctor(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  BalanceConfig_c *v5; // x0
  struct System_Int64_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F5A8D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&long___TypeInfo, v3);
    byte_40F5A8D = 1;
  }
  this->fields.followerType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v5->static_fields->SvtEquipMax, v4);
  this->fields.userSvtEquipIds = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEquipIds,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


DeckServantData_o *__fastcall DeckServantData__Clone(DeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x20
  const MethodInfo *v8; // x1
  System_Array_o *userSvtEquipIds; // x0
  Il2CppObject *v10; // x0
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  DeckServantData_o *result; // x0

  if ( (byte_40F5A8E & 1) == 0 )
  {
    sub_B16FFC(&DeckServantData_TypeInfo, method);
    sub_B16FFC(&long___TypeInfo, v6);
    byte_40F5A8E = 1;
  }
  v7 = sub_B170CC(DeckServantData_TypeInfo, method, v2, v3, v4);
  DeckServantData___ctor((DeckServantData_o *)v7, v8);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = this->fields.id,
        *(_QWORD *)(v7 + 24) = this->fields.userSvtId,
        (userSvtEquipIds = (System_Array_o *)this->fields.userSvtEquipIds) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = System_Array__Clone(userSvtEquipIds, 0LL);
  v11 = (System_Int32_array **)sub_B170BC(v10, long___TypeInfo);
  *(_QWORD *)(v7 + 32) = v11;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), v11, v12, v13, v14, v15, v16, v17);
  result = (DeckServantData_o *)v7;
  *(_BYTE *)(v7 + 40) = this->fields.isFollowerSvt;
  *(_QWORD *)(v7 + 48) = this->fields.npcFollowerSvtId;
  *(_DWORD *)(v7 + 56) = this->fields.followerType;
  *(_DWORD *)(v7 + 60) = this->fields.initPos;
  return result;
}