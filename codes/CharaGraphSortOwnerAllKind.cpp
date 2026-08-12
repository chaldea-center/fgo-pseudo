void CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1

  if ( (byte_596FAF0 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphSortManageUnitCommandCode_TypeInfo);
    sub_2213A60(&CharaGraphSortManageUnitServantEquip_TypeInfo);
    sub_2213A60(&CharaGraphSortManageUnitServant_TypeInfo);
    byte_596FAF0 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (Il2CppObject *)sub_2213CCC(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v10, 0);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (Il2CppObject *)sub_2213CCC(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v17, 0);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  System_Object___ctor((Il2CppObject *)this, 0);
  CharaGraphSortOwnerBase__SetSortSaveKeyPrefix((CharaGraphSortOwnerBase_o *)this, v24);
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerAllKind__get_CommandCodeSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerAllKind__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerAllKind__get_ServantSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantSortManageUnit_k__BackingField;
}


void CharaGraphSortOwnerAllKind__set_CommandCodeSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortOwnerAllKind__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortOwnerAllKind__set_ServantSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}