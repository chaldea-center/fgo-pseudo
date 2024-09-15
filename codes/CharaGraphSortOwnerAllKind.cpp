void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  Il2CppObject *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A2D349 & 1) == 0 )
  {
    sub_1B761C0(&CharaGraphSortManageUnitCommandCode_TypeInfo, method);
    sub_1B761C0(&CharaGraphSortManageUnitServantEquip_TypeInfo, v3);
    sub_1B761C0(&CharaGraphSortManageUnitServant_TypeInfo, v4);
    byte_4A2D349 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (Il2CppObject *)sub_1B7640C(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v5;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = (Il2CppObject *)sub_1B7640C(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v8, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v8;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)v8,
    v9,
    v10);
  v11 = (Il2CppObject *)sub_1B7640C(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v11, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v11;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)v11,
    v12,
    v13);
}