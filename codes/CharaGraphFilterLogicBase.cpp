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
  if ( (byte_4B1B7E5 & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_1BCAFF8(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                            list);
    byte_4B1B7E5 = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)list,
                                                (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_1BCB254(this, list);
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
  if ( (byte_4B1B7E6 & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_1BCAFF8(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                            list);
    byte_4B1B7E6 = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)list,
                                                (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_1BCB254(this, list);
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

  if ( (byte_4B1B7E7 & 1) == 0 )
  {
    sub_1BCAFF8(&FilterKindList_TypeInfo, method);
    byte_4B1B7E7 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
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
    sub_1BCB254(item, v5);
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
  __int64 v6; // x2
  struct CharaGraphListViewItemBase_o *item; // x8

  if ( (byte_4B1B7E8 & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewSort_FilterKind___TypeInfo, method);
    byte_4B1B7E8 = 1;
  }
  sort = this->fields.sort;
  Filter = (struct ListViewSort_o *)sub_1BCB0A0(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !Filter )
    goto LABEL_13;
  v5 = Filter;
  if ( !*(_DWORD *)&Filter->fields.FILTER_DEFAULT_VALUE )
    sub_1BCB25C(Filter, Filter, v6);
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
    sub_1BCB254(Filter, v5);
  return item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField;
}


void __fastcall CharaGraphFilterLogicBase__SetListViewItem(
        CharaGraphFilterLogicBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.item = item;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.item, (int32_t)item, (int32_t)method, v3);
}


void __fastcall CharaGraphFilterLogicBase__SetListViewSort(
        CharaGraphFilterLogicBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.sort = sort;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)sort, (int32_t)method, v3);
}