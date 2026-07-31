void CharaGraphSortManageUnitBase___ctor(CharaGraphSortManageUnitBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphSortManageUnitBase__SetSortSaveKeyPrefix(
        CharaGraphSortManageUnitBase_o *this,
        System_String_o *sortSaveKeyPrefix,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SortSaveKeyPrefix_k__BackingField = sortSaveKeyPrefix;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)sortSaveKeyPrefix,
    (System_String_o *)method,
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593797B & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    byte_593797B = 1;
  }
  sortInfo = this->fields.sortInfo;
  if ( !sortInfo )
  {
    SortSaveKeyPrefix_k__BackingField = this->fields._SortSaveKeyPrefix_k__BackingField;
    v5 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, void *))this->klass[1]._1.image)(
                              this,
                              this->klass[1]._1.gc_desc);
    v6 = System_String__Concat_75438412(SortSaveKeyPrefix_k__BackingField, v5, 0);
    v7 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, const char *))this->klass[1]._1.name)(
           this,
           this->klass[1]._1.namespaze);
    sortInfo = (struct ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
    ListViewSort___ctor_50784632(sortInfo, v6, v7, 0, 0);
    v8 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
           this,
           *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
    if ( !sortInfo )
      sub_21FFECC(v8, v9);
    sortInfo->fields.listViewKind = v8;
    this->fields.sortInfo = sortInfo;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sortInfo,
      (int32_t)sortInfo,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SortSaveKeyPrefix_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}