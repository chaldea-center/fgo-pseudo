void __fastcall ServantCollectionCharaGraphFilterLogic___ctor(
        ServantCollectionCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  FilterKindList_c *v7; // x0
  const MethodInfo *v8; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantCollectionListViewItem_o *ListViewItem; // x0
  __int64 v12; // x1
  ListViewSort_o *v13; // x20

  if ( (byte_4AB50A8 & 1) == 0 )
  {
    sub_1BAB41C(&FilterKindList_TypeInfo, method);
    byte_4AB50A8 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  if ( !CharaGraphFilterLogicBase__IsAllFilterOff(
          (CharaGraphFilterLogicBase_o *)this,
          v4->static_fields->ClassGroupFilterKindList,
          v2) )
  {
    sort = this->fields.sort;
    ListViewItem = ServantCollectionCharaGraphFilterLogic__get_ListViewItem(this, v5);
    if ( ListViewItem && sort )
      return ListViewSort__IsMatchClassGroupFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
LABEL_16:
    sub_1BAB678(ListViewItem, v12);
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v7->static_fields->ClassFilterKindList,
         v6) )
  {
    return 1;
  }
  v13 = this->fields.sort;
  ListViewItem = ServantCollectionCharaGraphFilterLogic__get_ListViewItem(this, v8);
  if ( !ListViewItem || !v13 )
    goto LABEL_16;
  return ListViewSort__IsMatchClassFilter(v13, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
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

  if ( (byte_4AB50A7 & 1) == 0 )
  {
    sub_1BAB41C(&CharaGraphServantCollectionListViewItem_TypeInfo, method);
    byte_4AB50A7 = 1;
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
    sub_1BAB3C0(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1BAB938(this->fields.item);
  return (CharaGraphServantCollectionListViewItem_o *)ServantCollectionCharaGraphFilterLogic__IsMatchAllFilter(v10, v11);
}