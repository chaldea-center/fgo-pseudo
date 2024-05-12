void __fastcall CharaGraphSortManageUnitBase___ctor(CharaGraphSortManageUnitBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphSortManageUnitBase__SetSortSaveKeyPrefix(
        CharaGraphSortManageUnitBase_o *this,
        System_String_o *sortSaveKeyPrefix,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SortSaveKeyPrefix_k__BackingField = sortSaveKeyPrefix;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)sortSaveKeyPrefix,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


ListViewSort_o *__fastcall CharaGraphSortManageUnitBase__get_SortInfo(
        CharaGraphSortManageUnitBase_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sortInfo; // x21
  System_String_o *SortSaveKeyPrefix_k__BackingField; // x21
  System_String_o *v5; // x0
  System_String_o *v6; // x22
  int32_t v7; // w23
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438E33B & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_TypeInfo);
    byte_438E33B = 1;
  }
  sortInfo = this->fields.sortInfo;
  if ( !sortInfo )
  {
    SortSaveKeyPrefix_k__BackingField = this->fields._SortSaveKeyPrefix_k__BackingField;
    v5 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, const char *))this->klass[1]._1.gc_desc)(
                              this,
                              this->klass[1]._1.name);
    v6 = System_String__Concat_44901936(SortSaveKeyPrefix_k__BackingField, v5, 0LL);
    v7 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, void *))this->klass[1]._1.namespaze)(
           this,
           this->klass[1]._1.byval_arg.data);
    sortInfo = (struct ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
    ListViewSort___ctor_34308400(sortInfo, v6, v7, 0, 0LL);
    v8 = (*(__int64 (__fastcall **)(CharaGraphSortManageUnitBase_o *, void *))&this->klass[1]._1.byval_arg.bits)(
           this,
           this->klass[1]._1.this_arg.data);
    if ( !sortInfo )
      sub_B7769C(v8, v9);
    sortInfo->fields.listViewKind = v8;
    this->fields.sortInfo = sortInfo;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.sortInfo,
      (System_Int32_array **)sortInfo,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return sortInfo;
}


System_String_o *__fastcall CharaGraphSortManageUnitBase__get_SortSaveKeyPrefix(
        CharaGraphSortManageUnitBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SortSaveKeyPrefix_k__BackingField;
}


void __fastcall CharaGraphSortManageUnitBase__set_SortSaveKeyPrefix(
        CharaGraphSortManageUnitBase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SortSaveKeyPrefix_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}