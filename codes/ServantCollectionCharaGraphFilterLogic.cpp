void ServantCollectionCharaGraphFilterLogic___ctor(
        ServantCollectionCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantCollectionCharaGraphFilterLogic__IsMatchAllFilter(
        ServantCollectionCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  if ( (((__int64 (__fastcall *)(ServantCollectionCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._5_IsMatchRarityFilter.methodPtr)(
          this,
          this->klass->vtable._5_IsMatchRarityFilter.method)
      & 1) != 0 )
    return ((__int64 (__fastcall *)(ServantCollectionCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._7_IsMatchClassFilter.methodPtr)(
             this,
             this->klass->vtable._7_IsMatchClassFilter.method);
  else
    return 0;
}


bool ServantCollectionCharaGraphFilterLogic__IsMatchClassFilter(
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

  if ( (byte_4D2BAEE & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    byte_4D2BAEE = 1;
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
      return ListViewSort__IsMatchClassGroupFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0);
LABEL_16:
    sub_1C942F0(ListViewItem, v12);
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
  return ListViewSort__IsMatchClassFilter(v13, ListViewItem->fields._ServantEntity_k__BackingField, 0);
}


CharaGraphServantCollectionListViewItem_o *ServantCollectionCharaGraphFilterLogic__get_ListViewItem(
        ServantCollectionCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_listViewItem; // x0
  CharaGraphServantCollectionListViewItem_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCollectionCharaGraphFilterLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4D2BAED & 1) == 0 )
  {
    sub_1C94098(&CharaGraphServantCollectionListViewItem_TypeInfo);
    byte_4D2BAED = 1;
  }
  p_listViewItem = (GrandQuestFolderBoardItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantCollectionListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (naturalAligment = CharaGraphServantCollectionListViewItem_TypeInfo->_2.naturalAligment,
        listViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (CharaGraphServantCollectionListViewItem_c *)listViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphServantCollectionListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (GrandQuestFolderBoardItem_c *)listViewItem;
    sub_1C9403C(p_listViewItem, (int32_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1C9468C(this->fields.item);
  return (CharaGraphServantCollectionListViewItem_o *)ServantCollectionCharaGraphFilterLogic__IsMatchAllFilter(v14, v15);
}