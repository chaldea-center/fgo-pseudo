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
  if ( (byte_4A07FD3 & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_1B686D4(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                            list);
    byte_4A07FD3 = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)list,
                                                (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_1B68930(this, list);
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
  if ( (byte_4A07FD4 & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_1B686D4(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                            list);
    byte_4A07FD4 = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)list,
                                                (const MethodInfo_34A3538 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_1B68930(this, list);
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

  if ( (byte_4A07FD5 & 1) == 0 )
  {
    sub_1B686D4(&FilterKindList_TypeInfo, method);
    byte_4A07FD5 = 1;
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
    sub_1B68930(item, v5);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0LL);
}


bool __fastcall CharaGraphFilterLogicBase__IsMatchSelectedItemFilter(
        CharaGraphFilterLogicBase_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x20
  ListViewSort_FilterKind_array *item; // x0
  ListViewSort_FilterKind_array *v5; // x1

  if ( (byte_4A07FD6 & 1) == 0 )
  {
    sub_1B686D4(&ListViewSort_FilterKind___TypeInfo, method);
    byte_4A07FD6 = 1;
  }
  sort = this->fields.sort;
  item = (ListViewSort_FilterKind_array *)sub_1B6877C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !item )
    goto LABEL_13;
  v5 = item;
  if ( !item->max_length )
    sub_1B68938(item, item);
  item->m_Items[1] = 39;
  if ( !sort )
    goto LABEL_13;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, item, 0LL) )
    return 1;
  item = (ListViewSort_FilterKind_array *)this->fields.sort;
  if ( !item )
    goto LABEL_13;
  if ( !ListViewSort__GetFilter((ListViewSort_o *)item, 39, 0LL) )
    return 1;
  item = (ListViewSort_FilterKind_array *)this->fields.item;
  if ( !item )
LABEL_13:
    sub_1B68930(item, v5);
  return CharaGraphListViewItemBase__get_IsDispChoice((CharaGraphListViewItemBase_o *)item, 0LL);
}


void __fastcall CharaGraphFilterLogicBase__SetListViewItem(
        CharaGraphFilterLogicBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.item = item;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.item, (int32_t)item, (int32_t)method, v3);
}


void __fastcall CharaGraphFilterLogicBase__SetListViewSort(
        CharaGraphFilterLogicBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.sort = sort;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)sort, (int32_t)method, v3);
}