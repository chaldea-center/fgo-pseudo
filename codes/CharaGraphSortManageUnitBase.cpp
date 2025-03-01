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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SortSaveKeyPrefix_k__BackingField = sortSaveKeyPrefix;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)sortSaveKeyPrefix,
    (int64_t)method,
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BFCAFE & 1) == 0 )
  {
    sub_1C2E12C(&ListViewSort_TypeInfo, method);
    byte_4BFCAFE = 1;
  }
  sortInfo = this->fields.sortInfo;
  if ( !sortInfo )
  {
    SortSaveKeyPrefix_k__BackingField = this->fields._SortSaveKeyPrefix_k__BackingField;
    v5 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, const char *))this->klass[1]._1.gc_desc)(
                              this,
                              this->klass[1]._1.name);
    v6 = System_String__Concat_63235584(SortSaveKeyPrefix_k__BackingField, v5, 0LL);
    v7 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, void *))this->klass[1]._1.namespaze)(
           this,
           this->klass[1]._1.byval_arg.data);
    sortInfo = (struct ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
    ListViewSort___ctor_42114616(sortInfo, v6, v7, 0, 0LL);
    v8 = (*(__int64 (__fastcall **)(CharaGraphSortManageUnitBase_o *, void *))&this->klass[1]._1.byval_arg.bits)(
           this,
           this->klass[1]._1.this_arg.data);
    if ( !sortInfo )
      sub_1C2E388(v8, v9);
    sortInfo->fields.listViewKind = v8;
    this->fields.sortInfo = sortInfo;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.sortInfo, (int64_t)sortInfo, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SortSaveKeyPrefix_k__BackingField = value;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}