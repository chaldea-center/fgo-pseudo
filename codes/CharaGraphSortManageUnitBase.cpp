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
  sub_1BCA784(
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
  __int64 v2; // x2
  struct ListViewSort_o *sortInfo; // x21
  System_String_o *SortSaveKeyPrefix_k__BackingField; // x21
  System_String_o *v6; // x0
  System_String_o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B155BF & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, method, v2);
    byte_4B155BF = 1;
  }
  sortInfo = this->fields.sortInfo;
  if ( !sortInfo )
  {
    SortSaveKeyPrefix_k__BackingField = this->fields._SortSaveKeyPrefix_k__BackingField;
    v6 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, const char *))this->klass[1]._1.gc_desc)(
                              this,
                              this->klass[1]._1.name);
    v7 = System_String__Concat_62401220(SortSaveKeyPrefix_k__BackingField, v6, 0LL);
    v8 = ((__int64 (__fastcall *)(CharaGraphSortManageUnitBase_o *, void *))this->klass[1]._1.namespaze)(
           this,
           this->klass[1]._1.byval_arg.data);
    sortInfo = (struct ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v9, v10, v11);
    ListViewSort___ctor_41480716(sortInfo, v7, v8, 0, 0LL);
    v12 = (*(__int64 (__fastcall **)(CharaGraphSortManageUnitBase_o *, void *))&this->klass[1]._1.byval_arg.bits)(
            this,
            this->klass[1]._1.this_arg.data);
    if ( !sortInfo )
      sub_1BCAA3C(v12, v13);
    sortInfo->fields.listViewKind = v12;
    this->fields.sortInfo = sortInfo;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sortInfo, (int64_t)sortInfo, v14, v15, v16, v17, v18, v19);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}