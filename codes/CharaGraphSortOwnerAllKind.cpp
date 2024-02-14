void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_421424C & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphSortManageUnitCommandCode_TypeInfo, method);
    sub_B0D8A4(&CharaGraphSortManageUnitServantEquip_TypeInfo, v3);
    sub_B0D8A4(&CharaGraphSortManageUnitServant_TypeInfo, v4);
    byte_421424C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (Il2CppObject *)sub_B0D974(CharaGraphSortManageUnitServant_TypeInfo, v5, v6);
  System_Object___ctor(v7, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v7;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v16 = (Il2CppObject *)sub_B0D974(CharaGraphSortManageUnitServantEquip_TypeInfo, v14, v15);
  System_Object___ctor(v16, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v25 = (Il2CppObject *)sub_B0D974(CharaGraphSortManageUnitCommandCode_TypeInfo, v23, v24);
  System_Object___ctor(v25, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}