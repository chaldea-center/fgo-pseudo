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
  if ( (byte_59378EC & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_59378EC = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)list,
                                                (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_21FFECC(this, list);
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
  if ( (byte_59378ED & 1) == 0 )
  {
    this = (CharaGraphFilterLogicBase_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_59378ED = 1;
  }
  if ( !list
    || (sort = v4->fields.sort,
        this = (CharaGraphFilterLogicBase_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)list,
                                                (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !sort) )
  {
    sub_21FFECC(this, list);
  }
  return ListViewSort__IsSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
}


bool CharaGraphFilterLogicBase__IsMatchRarityFilter(CharaGraphFilterLogicBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  __int64 v5; // x1
  struct CharaGraphListViewItemBase_o *item; // x0
  ListViewSort_o *sort; // x19

  if ( (byte_59378EE & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    byte_59378EE = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method, v2);
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
    sub_21FFECC(item, v5);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0);
}


bool CharaGraphFilterLogicBase__IsMatchSelectedItemFilter(CharaGraphFilterLogicBase_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x20
  struct ListViewSort_o *Filter; // x0
  struct ListViewSort_o *v5; // x1
  struct CharaGraphListViewItemBase_o *item; // x8
  _BOOL4 IsChoice_k__BackingField; // w9
  _BOOL4 IsSwapChoice_k__BackingField; // w8
  bool v9; // zf
  _BOOL4 v10; // w9
  int v11; // w10
  int v12; // w8

  if ( (byte_59378EF & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    byte_59378EF = 1;
  }
  sort = this->fields.sort;
  Filter = (struct ListViewSort_o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !Filter )
    goto LABEL_19;
  v5 = Filter;
  if ( !*(_DWORD *)&Filter->fields.FILTER_DEFAULT_VALUE )
    sub_21FFED4(Filter);
  LODWORD(Filter->fields.manager) = 39;
  if ( !sort )
    goto LABEL_19;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)Filter, 0) )
    return 1;
  Filter = this->fields.sort;
  if ( !Filter )
    goto LABEL_19;
  Filter = (struct ListViewSort_o *)ListViewSort__GetFilter(Filter, 39, 0);
  if ( ((unsigned __int8)Filter & 1) == 0 )
    return 1;
  item = this->fields.item;
  if ( !item )
LABEL_19:
    sub_21FFECC(Filter, v5);
  IsChoice_k__BackingField = item->fields._IsChoice_k__BackingField;
  IsSwapChoice_k__BackingField = item->fields._IsSwapChoice_k__BackingField;
  v9 = !IsChoice_k__BackingField;
  v10 = !IsChoice_k__BackingField;
  v11 = !v9;
  if ( IsSwapChoice_k__BackingField )
    v12 = v10;
  else
    v12 = v11;
  return v12 == 1;
}


void CharaGraphFilterLogicBase__SetListViewItem(
        CharaGraphFilterLogicBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.item = item;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.item,
    (int32_t)item,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphFilterLogicBase__SetListViewSort(
        CharaGraphFilterLogicBase_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.sort = sort;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)sort,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}