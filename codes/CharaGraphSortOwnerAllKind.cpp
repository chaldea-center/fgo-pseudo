void CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1

  if ( (byte_4D2BB7C & 1) == 0 )
  {
    sub_1C94098(&CharaGraphSortManageUnitCommandCode_TypeInfo);
    sub_1C94098(&CharaGraphSortManageUnitServantEquip_TypeInfo);
    sub_1C94098(&CharaGraphSortManageUnitServant_TypeInfo);
    byte_4D2BB7C = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (Il2CppObject *)sub_1C942E4(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v10, 0);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (Il2CppObject *)sub_1C942E4(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v17, 0);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v17;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}