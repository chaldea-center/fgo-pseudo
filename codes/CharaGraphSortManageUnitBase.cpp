void __fastcall CharaGraphSortManageUnitBase___ctor(CharaGraphSortManageUnitBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphSortManageUnitBase__SetSortSaveKeyPrefix(
        CharaGraphSortManageUnitBase_o *this,
        System_String_o *sortSaveKeyPrefix,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SortSaveKeyPrefix_k__BackingField = sortSaveKeyPrefix;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)sortSaveKeyPrefix, (int32_t)method, v3);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FB81E & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, method);
    byte_49FB81E = 1;
  }
  sortInfo = this->fields.sortInfo;
  if ( !sortInfo )
  {
    SortSaveKeyPrefix_k__BackingField = this->fields._SortSaveKeyPrefix_k__BackingField;
    v5 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, const char *))this->klass[1]._1.gc_desc)(
                              this,
                              this->klass[1]._1.name);
    v6 = System_String__Concat_61375396(SortSaveKeyPrefix_k__BackingField, v5, 0LL);
    v7 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, void *))this->klass[1]._1.namespaze)(
           this,
           this->klass[1]._1.byval_arg.data);
    sortInfo = (struct ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v8, v9);
    ListViewSort___ctor_40426136(sortInfo, v6, v7, 0, 0LL);
    v10 = (*(__int64 (__fastcall **)(CharaGraphSortManageUnitBase_o *, void *))&this->klass[1]._1.byval_arg.bits)(
            this,
            this->klass[1]._1.this_arg.data);
    if ( !sortInfo )
      sub_1B64324(v10);
    sortInfo->fields.listViewKind = v10;
    this->fields.sortInfo = sortInfo;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sortInfo, (int32_t)sortInfo, v11, v12);
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
  int32_t v3; // w3

  this->fields._SortSaveKeyPrefix_k__BackingField = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}