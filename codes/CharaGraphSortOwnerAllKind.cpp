void CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_4CB55FA & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphSortManageUnitCommandCode_TypeInfo);
    sub_1C6BA08(&CharaGraphSortManageUnitServantEquip_TypeInfo);
    sub_1C6BA08(&CharaGraphSortManageUnitServant_TypeInfo);
    byte_4CB55FA = 1;
  }
  v3 = (Il2CppObject *)sub_1C6BC54(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ServantSortManageUnit_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (Il2CppObject *)sub_1C6BC54(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v6, 0);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField, (int32_t)v6, v7, v8);
  v9 = (Il2CppObject *)sub_1C6BC54(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v9, 0);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  CharaGraphSortOwnerBase__SetSortSaveKeyPrefix((CharaGraphSortOwnerBase_o *)this, v12);
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
  const MethodInfo *v3; // x3

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphSortOwnerAllKind__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphSortOwnerAllKind__set_ServantSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}