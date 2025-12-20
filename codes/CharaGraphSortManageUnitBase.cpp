void CharaGraphSortManageUnitBase___ctor(CharaGraphSortManageUnitBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphSortManageUnitBase__SetSortSaveKeyPrefix(
        CharaGraphSortManageUnitBase_o *this,
        System_String_o *sortSaveKeyPrefix,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SortSaveKeyPrefix_k__BackingField = sortSaveKeyPrefix;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)sortSaveKeyPrefix,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


ListViewSort_o *CharaGraphSortManageUnitBase__get_SortInfo(
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2BB6A & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_TypeInfo);
    byte_4D2BB6A = 1;
  }
  sortInfo = this->fields.sortInfo;
  if ( !sortInfo )
  {
    SortSaveKeyPrefix_k__BackingField = this->fields._SortSaveKeyPrefix_k__BackingField;
    v5 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, void *))this->klass[1]._1.image)(
                              this,
                              this->klass[1]._1.gc_desc);
    v6 = System_String__Concat_64417744(SortSaveKeyPrefix_k__BackingField, v5, 0);
    v7 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, const char *))this->klass[1]._1.name)(
           this,
           this->klass[1]._1.namespaze);
    sortInfo = (struct ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
    ListViewSort___ctor_44628284(sortInfo, v6, v7, 0, 0);
    v8 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
           this,
           *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
    if ( !sortInfo )
      sub_1C942F0(v8, v9);
    sortInfo->fields.listViewKind = v8;
    this->fields.sortInfo = sortInfo;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sortInfo, (int32_t)sortInfo, v10, v11, v12, v13, v14, v15);
  }
  return sortInfo;
}


System_String_o *CharaGraphSortManageUnitBase__get_SortSaveKeyPrefix(
        CharaGraphSortManageUnitBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SortSaveKeyPrefix_k__BackingField;
}


void CharaGraphSortManageUnitBase__set_SortSaveKeyPrefix(
        CharaGraphSortManageUnitBase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SortSaveKeyPrefix_k__BackingField = value;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}