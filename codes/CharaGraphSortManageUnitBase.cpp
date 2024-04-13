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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  struct ListViewSort_o *sortInfo; // x21
  System_String_o *SortSaveKeyPrefix_k__BackingField; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x22
  int32_t v9; // w23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E96F8 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96F8 = 1;
  }
  sortInfo = this->fields.sortInfo;
  if ( !sortInfo )
  {
    SortSaveKeyPrefix_k__BackingField = this->fields._SortSaveKeyPrefix_k__BackingField;
    v7 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, const char *))this->klass[1]._1.gc_desc)(
                              this,
                              this->klass[1]._1.name);
    v8 = System_String__Concat_44577788(SortSaveKeyPrefix_k__BackingField, v7, 0LL);
    v9 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, void *))this->klass[1]._1.namespaze)(
           this,
           this->klass[1]._1.byval_arg.data);
    sortInfo = (struct ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
    ListViewSort___ctor_34028932(sortInfo, v8, v9, 0, 0LL);
    v10 = (*(__int64 (__fastcall **)(CharaGraphSortManageUnitBase_o *, void *))&this->klass[1]._1.byval_arg.bits)(
            this,
            this->klass[1]._1.this_arg.data);
    if ( !sortInfo )
      sub_B5D69C(v10, v11);
    sortInfo->fields.listViewKind = v10;
    this->fields.sortInfo = sortInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.sortInfo,
      (System_Int32_array **)sortInfo,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}