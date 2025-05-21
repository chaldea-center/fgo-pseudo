void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_4B43E05 & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphSortManageUnitCommandCode_TypeInfo, method);
    sub_1BDB878(&CharaGraphSortManageUnitServantEquip_TypeInfo, v3);
    sub_1BDB878(&CharaGraphSortManageUnitServant_TypeInfo, v4);
    byte_4B43E05 = 1;
  }
  v5 = (Il2CppObject *)sub_1BDBAC4(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ServantSortManageUnit_k__BackingField, (int32_t)v5, v6, v7);
  v8 = (Il2CppObject *)sub_1BDBAC4(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v8, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField, (int32_t)v8, v9, v10);
  v11 = (Il2CppObject *)sub_1BDBAC4(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v11, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField, (int32_t)v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  CharaGraphSortOwnerBase__SetSortSaveKeyPrefix((CharaGraphSortOwnerBase_o *)this, v14);
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerAllKind__get_CommandCodeSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerAllKind__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerAllKind__get_ServantSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantSortManageUnit_k__BackingField;
}


void __fastcall CharaGraphSortOwnerAllKind__set_CommandCodeSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerAllKind__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerAllKind__set_ServantSortManageUnit(
        CharaGraphSortOwnerAllKind_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ServantSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}