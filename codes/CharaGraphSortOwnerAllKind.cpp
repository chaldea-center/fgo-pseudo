void __fastcall CharaGraphSortOwnerAllKind___ctor(CharaGraphSortOwnerAllKind_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  Il2CppObject *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  Il2CppObject *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42AFDF5 & 1) == 0 )
  {
    sub_B52984(&CharaGraphSortManageUnitCommandCode_TypeInfo);
    sub_B52984(&CharaGraphSortManageUnitServantEquip_TypeInfo);
    sub_B52984(&CharaGraphSortManageUnitServant_TypeInfo);
    byte_42AFDF5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_B52A54(CharaGraphSortManageUnitServant_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._ServantSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (Il2CppObject *)sub_B52A54(CharaGraphSortManageUnitServantEquip_TypeInfo);
  System_Object___ctor(v10, 0LL);
  this->fields._ServantEquipSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (Il2CppObject *)sub_B52A54(CharaGraphSortManageUnitCommandCode_TypeInfo);
  System_Object___ctor(v17, 0LL);
  this->fields._CommandCodeSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}