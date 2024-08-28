void __fastcall ServantCollectionCharaGraphFilterLogic___ctor(
        ServantCollectionCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  CharaGraphFilterLogicBase___ctor((CharaGraphFilterLogicBase_o *)this, 0LL);
}


bool __fastcall ServantCollectionCharaGraphFilterLogic__IsMatchAllFilter(
        ServantCollectionCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  if ( (((__int64 (__fastcall *)(ServantCollectionCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._5_IsMatchRarityFilter.method)(
          this,
          this->klass->vtable._6_IsMatchSelectedItemFilter.methodPtr) & 1) != 0 )
    return ((__int64 (__fastcall *)(ServantCollectionCharaGraphFilterLogic_o *, void *))this->klass->vtable._7_IsMatchClassFilter.method)(
             this,
             this->klass[1]._1.image);
  else
    return 0;
}


bool __fastcall ServantCollectionCharaGraphFilterLogic__IsMatchClassFilter(
        ServantCollectionCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  const MethodInfo *v4; // x1
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantCollectionListViewItem_o *ListViewItem; // x0
  __int64 v10; // x1
  ListViewSort_o *v11; // x20

  if ( (byte_4A07FEA & 1) == 0 )
  {
    sub_1B686D4(&FilterKindList_TypeInfo, method);
    byte_4A07FEA = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( !CharaGraphFilterLogicBase__IsAllFilterOff(
          (CharaGraphFilterLogicBase_o *)this,
          v3->static_fields->ClassGroupFilterKindList,
          0LL) )
  {
    sort = this->fields.sort;
    ListViewItem = ServantCollectionCharaGraphFilterLogic__get_ListViewItem(this, v4);
    if ( ListViewItem && sort )
      return ListViewSort__IsMatchClassGroupFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
LABEL_16:
    sub_1B68930(ListViewItem, v10);
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v5->static_fields->ClassFilterKindList,
         0LL) )
  {
    return 1;
  }
  v11 = this->fields.sort;
  ListViewItem = ServantCollectionCharaGraphFilterLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem || !v11 )
    goto LABEL_16;
  return ListViewSort__IsMatchClassFilter(v11, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
}


CharaGraphServantCollectionListViewItem_o *__fastcall ServantCollectionCharaGraphFilterLogic__get_ListViewItem(
        ServantCollectionCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_listViewItem; // x0
  CharaGraphServantCollectionListViewItem_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCollectionCharaGraphFilterLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A07FE9 & 1) == 0 )
  {
    sub_1B686D4(&CharaGraphServantCollectionListViewItem_TypeInfo, method);
    byte_4A07FE9 = 1;
  }
  p_listViewItem = (ServantStatusBattleListViewItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantCollectionListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (methodPtr_low = LOBYTE(CharaGraphServantCollectionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(listViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (CharaGraphServantCollectionListViewItem_c *)listViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphServantCollectionListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (ServantStatusBattleListViewItem_c *)listViewItem;
    sub_1B68678(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1B68BF0(this->fields.item);
  return (CharaGraphServantCollectionListViewItem_o *)ServantCollectionCharaGraphFilterLogic__IsMatchAllFilter(v10, v11);
}