void __fastcall CharaGraphFilterLogicBase___ctor(CharaGraphFilterLogicBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsAllFilterOff(
        CharaGraphFilterLogicBase_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CharaGraphFilterLogicBase_o *v5; // x20
  ListViewSort_o *sort; // x20

  v5 = this;
  if ( (byte_42E964A & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                            (_DWORD)list,
                                            (_DWORD)method,
                                            v3);
    byte_42E964A = 1;
  }
  if ( !list
    || (sort = v5->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)list,
                                                (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_B5D69C(this, list);
  }
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsAllFilterOn(
        CharaGraphFilterLogicBase_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CharaGraphFilterLogicBase_o *v5; // x20
  ListViewSort_o *sort; // x20

  v5 = this;
  if ( (byte_42E964B & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                            (_DWORD)list,
                                            (_DWORD)method,
                                            v3);
    byte_42E964B = 1;
  }
  if ( !list
    || (sort = v5->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)list,
                                                (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_B5D69C(this, list);
  }
  return ListViewSort__IsSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsMatchRarityFilter(
        CharaGraphFilterLogicBase_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  __int64 v6; // x1
  struct CharaGraphListViewItemBase_o *item; // x0
  ListViewSort_o *sort; // x19

  if ( (byte_42E964C & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E964C = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(this, v5->static_fields->RarityFilterKindList, v2) )
    return 1;
  item = this->fields.item;
  if ( !item
    || (sort = this->fields.sort,
        item = (struct CharaGraphListViewItemBase_o *)((__int64 (__fastcall *)(struct CharaGraphListViewItemBase_o *, Il2CppMethodPointer))item->klass->vtable._9_get_Rarity.method)(
                                                        item,
                                                        item->klass->vtable._10_ModifyLocal.methodPtr),
        !sort) )
  {
    sub_B5D69C(item, v6);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsMatchSelectedItemFilter(
        CharaGraphFilterLogicBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *sort; // x20
  struct ListViewSort_o *Filter; // x0
  struct ListViewSort_o *v7; // x1
  struct CharaGraphListViewItemBase_o *item; // x8
  __int64 v10; // x0

  if ( (byte_42E964D & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E964D = 1;
  }
  sort = this->fields.sort;
  Filter = (struct ListViewSort_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !Filter )
    goto LABEL_13;
  v7 = Filter;
  if ( !*(_DWORD *)&Filter->fields.FILTER_DEFAULT_VALUE )
  {
    v10 = sub_B5D6C8(Filter);
    sub_B5D668(v10, 0LL);
  }
  LODWORD(Filter->fields.manager) = 39;
  if ( !sort )
    goto LABEL_13;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)Filter, 0LL) )
    return 1;
  Filter = this->fields.sort;
  if ( !Filter )
    goto LABEL_13;
  Filter = (struct ListViewSort_o *)ListViewSort__GetFilter(Filter, 39, 0LL);
  if ( ((unsigned __int8)Filter & 1) == 0 )
    return 1;
  item = this->fields.item;
  if ( !item )
LABEL_13:
    sub_B5D69C(Filter, v7);
  return !item->fields._IsSwapChoice_k__BackingField == item->fields._IsChoice_k__BackingField;
}


void __fastcall CharaGraphFilterLogicBase__SetListViewItem(
        CharaGraphFilterLogicBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.item = item;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.item,
    (System_Int32_array **)item,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphFilterLogicBase__SetListViewSort(
        CharaGraphFilterLogicBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.sort = sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)sort,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}