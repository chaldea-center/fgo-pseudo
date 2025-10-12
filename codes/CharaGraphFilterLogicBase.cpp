void CharaGraphFilterLogicBase___ctor(CharaGraphFilterLogicBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CharaGraphFilterLogicBase__IsAllFilterOff(
        CharaGraphFilterLogicBase_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *list,
        const MethodInfo *method)
{
  CharaGraphFilterLogicBase_o *v4; // x20
  ListViewSort_o *sort; // x20

  v4 = this;
  if ( (byte_4C36C5F & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C36C5F = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)list,
                                                (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_1C32E7C(this);
  }
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
}


bool CharaGraphFilterLogicBase__IsAllFilterOn(
        CharaGraphFilterLogicBase_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *list,
        const MethodInfo *method)
{
  CharaGraphFilterLogicBase_o *v4; // x20
  ListViewSort_o *sort; // x20

  v4 = this;
  if ( (byte_4C36C60 & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C36C60 = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)list,
                                                (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_1C32E7C(this);
  }
  return ListViewSort__IsSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
}


bool CharaGraphFilterLogicBase__IsMatchRarityFilter(CharaGraphFilterLogicBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  struct CharaGraphListViewItemBase_o *item; // x0
  ListViewSort_o *sort; // x19

  if ( (byte_4C36C61 & 1) == 0 )
  {
    sub_1C32C20(&FilterKindList_TypeInfo);
    byte_4C36C61 = 1;
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
        item = (struct CharaGraphListViewItemBase_o *)((__int64 (__fastcall *)(struct CharaGraphListViewItemBase_o *, const MethodInfo *))item->klass->vtable._9_get_Rarity.methodPtr)(
                                                        item,
                                                        item->klass->vtable._9_get_Rarity.method),
        !sort) )
  {
    sub_1C32E7C(item);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0);
}


bool CharaGraphFilterLogicBase__IsMatchSelectedItemFilter(CharaGraphFilterLogicBase_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x20
  struct ListViewSort_o *Filter; // x0
  struct CharaGraphListViewItemBase_o *item; // x8

  if ( (byte_4C36C62 & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_FilterKind___TypeInfo);
    byte_4C36C62 = 1;
  }
  sort = this->fields.sort;
  Filter = (struct ListViewSort_o *)sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !Filter )
    goto LABEL_13;
  if ( !*(_DWORD *)&Filter->fields.FILTER_DEFAULT_VALUE )
    sub_1C32E84(Filter);
  LODWORD(Filter->fields.manager) = 39;
  if ( !sort )
    goto LABEL_13;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)Filter, 0) )
    return 1;
  Filter = this->fields.sort;
  if ( !Filter )
    goto LABEL_13;
  Filter = (struct ListViewSort_o *)ListViewSort__GetFilter(Filter, 39, 0);
  if ( ((unsigned __int8)Filter & 1) == 0 )
    return 1;
  item = this->fields.item;
  if ( !item )
LABEL_13:
    sub_1C32E7C(Filter);
  return item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField;
}


void CharaGraphFilterLogicBase__SetListViewItem(
        CharaGraphFilterLogicBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.item = item;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.item, (int32_t)item, (int32_t)method, v3);
}


void CharaGraphFilterLogicBase__SetListViewSort(
        CharaGraphFilterLogicBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.sort = sort;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)sort, (int32_t)method, v3);
}