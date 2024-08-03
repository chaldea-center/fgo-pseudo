void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FB82F & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphSortManageUnitCommandCode_TypeInfo, method);
    sub_1B640C8(&CharaGraphSortManageUnitServantEquip_TypeInfo, v3);
    sub_1B640C8(&CharaGraphSortManageUnitServant_TypeInfo, v4);
    byte_49FB82F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (Il2CppObject *)sub_1B64314(CharaGraphSortManageUnitServant_TypeInfo, v5, v6);
  System_Object___ctor(v7, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v12 = (Il2CppObject *)sub_1B64314(CharaGraphSortManageUnitServantEquip_TypeInfo, v10, v11);
  System_Object___ctor(v12, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v12;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v17 = (Il2CppObject *)sub_1B64314(CharaGraphSortManageUnitCommandCode_TypeInfo, v15, v16);
  System_Object___ctor(v17, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v17;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)v17,
    v18,
    v19);
}