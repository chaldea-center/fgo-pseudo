void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  Il2CppObject *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  Il2CppObject *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E9702 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphSortManageUnitCommandCode_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphSortManageUnitServantEquip_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CharaGraphSortManageUnitServant_TypeInfo, v8, v9, v10);
    byte_42E9702 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (Il2CppObject *)sub_B5D694(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v11, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v11;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  v18 = (Il2CppObject *)sub_B5D694(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v18, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (Il2CppObject *)sub_B5D694(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v25, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}