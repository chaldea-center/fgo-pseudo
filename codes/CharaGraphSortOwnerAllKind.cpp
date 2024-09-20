void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5A564 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphSortManageUnitCommandCode_TypeInfo);
    sub_1B885B0(&CharaGraphSortManageUnitServantEquip_TypeInfo);
    sub_1B885B0(&CharaGraphSortManageUnitServant_TypeInfo);
    byte_4A5A564 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1B887FC(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (Il2CppObject *)sub_1B887FC(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v6, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v6;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)v6,
    v7,
    v8);
  v9 = (Il2CppObject *)sub_1B887FC(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v9;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)v9,
    v10,
    v11);
}