void __fastcall CharaGraphFilterLogicBase___ctor(CharaGraphFilterLogicBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsAllFilterOff(
        CharaGraphFilterLogicBase_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *list,
        const MethodInfo *method)
{
  CharaGraphFilterLogicBase_o *v4; // x20
  ListViewSort_o *sort; // x20

  v4 = this;
  if ( (byte_438E28D & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438E28D = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)list,
                                                (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_B7769C(this, list);
  }
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsAllFilterOn(
        CharaGraphFilterLogicBase_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *list,
        const MethodInfo *method)
{
  CharaGraphFilterLogicBase_o *v4; // x20
  ListViewSort_o *sort; // x20

  v4 = this;
  if ( (byte_438E28E & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438E28E = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)list,
                                                (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_B7769C(this, list);
  }
  return ListViewSort__IsSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsMatchRarityFilter(
        CharaGraphFilterLogicBase_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  __int64 v5; // x1
  struct CharaGraphListViewItemBase_o *item; // x0
  ListViewSort_o *sort; // x19

  if ( (byte_438E28F & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    byte_438E28F = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(this, v4->static_fields->RarityFilterKindList, v2) )
    return 1;
  item = this->fields.item;
  if ( !item
    || (sort = this->fields.sort,
        item = (struct CharaGraphListViewItemBase_o *)((__int64 (__fastcall *)(struct CharaGraphListViewItemBase_o *, Il2CppMethodPointer))item->klass->vtable._9_get_Rarity.method)(
                                                        item,
                                                        item->klass->vtable._10_ModifyLocal.methodPtr),
        !sort) )
  {
    sub_B7769C(item, v5);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsMatchSelectedItemFilter(
        CharaGraphFilterLogicBase_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x20
  struct ListViewSort_o *Filter; // x0
  struct ListViewSort_o *v5; // x1
  struct CharaGraphListViewItemBase_o *item; // x8
  __int64 v8; // x0

  if ( (byte_438E290 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    byte_438E290 = 1;
  }
  sort = this->fields.sort;
  Filter = (struct ListViewSort_o *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !Filter )
    goto LABEL_13;
  v5 = Filter;
  if ( !*(_DWORD *)&Filter->fields.FILTER_DEFAULT_VALUE )
  {
    v8 = sub_B776C8(Filter);
    sub_B77668(v8, 0LL);
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
    sub_B7769C(Filter, v5);
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
  sub_B77560(
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)sort,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}