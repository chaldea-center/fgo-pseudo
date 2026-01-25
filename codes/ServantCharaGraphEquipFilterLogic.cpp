void ServantCharaGraphEquipFilterLogic___ctor(ServantCharaGraphEquipFilterLogic_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantCharaGraphEquipFilterLogic__IsMatchAllFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  return ServantCharaGraphFilterLogic__IsMatchAllFilter((ServantCharaGraphFilterLogic_o *)this, method)
      && ServantCharaGraphEquipFilterLogic__IsMatchEquipCategoryFilter(this, v3)
      && ServantCharaGraphEquipFilterLogic__IsMatchServantEquipTypeFilter(this, v4)
      && ServantCharaGraphEquipFilterLogic__IsMatchServantEquipCombineStatusFilter(this, v5)
      && ServantCharaGraphEquipFilterLogic__IsMatchServantEquipHaveStatusFilter(this, v6);
}


bool ServantCharaGraphEquipFilterLogic__IsMatchAttributeFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool ServantCharaGraphEquipFilterLogic__IsMatchClassFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool ServantCharaGraphEquipFilterLogic__IsMatchEquipCategoryFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  void *sort; // x0
  const MethodInfo *v4; // x1

  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_6;
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll((ListViewSort_o *)sort, 0) )
    return 1;
  sort = ServantCharaGraphEquipFilterLogic__get_EquipListViewItem(this, v4);
  if ( !sort )
LABEL_6:
    sub_1C7BD40(sort, method);
  return ServantEquipEffectFilterController__IsMatchEffectCategory(
           *((System_Int32_array **)sort + 37),
           this->fields.sort,
           0);
}


bool ServantCharaGraphEquipFilterLogic__IsMatchEventBonusFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool ServantCharaGraphEquipFilterLogic__IsMatchNPEffectFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool ServantCharaGraphEquipFilterLogic__IsMatchNPTypeFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool ServantCharaGraphEquipFilterLogic__IsMatchServantEquipCombineStatusFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  const MethodInfo *v9; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_4CED942 & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    byte_4CED942 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->ServantEquipCombineStatusFilterKindList,
         v2) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v5);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v9)) == 0)
    || !sort )
  {
    sub_1C7BD40(ListViewItem, v9);
  }
  return ListViewSort__IsMatchServantEquipCombineStatusFilter(
           sort,
           UserServantEntity_k__BackingField,
           ListViewItem->fields._ServantEntity_k__BackingField,
           0,
           0);
}


bool ServantCharaGraphEquipFilterLogic__IsMatchServantEquipHaveStatusFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  const MethodInfo *v9; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_4CED943 & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    byte_4CED943 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->ServantEquipHaveStatusFilterKindList,
         v2) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v5);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v9)) == 0)
    || !sort )
  {
    sub_1C7BD40(ListViewItem, v9);
  }
  return ListViewSort__IsMatchServantEquipHaveStatusFilter(
           sort,
           UserServantEntity_k__BackingField,
           ListViewItem->fields._ServantEntity_k__BackingField,
           0,
           0);
}


bool ServantCharaGraphEquipFilterLogic__IsMatchServantEquipTypeFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v9; // x1

  if ( (byte_4CED941 & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    byte_4CED941 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->ServantEquipTypeFilterKindList,
         v2) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v5);
  if ( !ListViewItem || !sort )
    sub_1C7BD40(ListViewItem, v9);
  return ListViewSort__IsMatchServantEquipTypeFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0);
}


bool ServantCharaGraphEquipFilterLogic__IsMatchServantTypeFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool ServantCharaGraphEquipFilterLogic__IsMatchSkillAndTreasureDeviceFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool ServantCharaGraphEquipFilterLogic__IsMatchSubAttributeFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


CharaGraphEquipListViewItem_o *ServantCharaGraphEquipFilterLogic__get_EquipListViewItem(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_listViewItem; // x0
  CharaGraphEquipListViewItem_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphEquipFilterLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4CED940 & 1) == 0 )
  {
    sub_1C7BAE8(&CharaGraphEquipListViewItem_TypeInfo);
    byte_4CED940 = 1;
  }
  p_listViewItem = (GrandQuestFolderBoardItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphEquipListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (naturalAligment = CharaGraphEquipListViewItem_TypeInfo->_2.naturalAligment,
        listViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (CharaGraphEquipListViewItem_c *)listViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphEquipListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (GrandQuestFolderBoardItem_c *)listViewItem;
    sub_1C7BA8C(p_listViewItem, (int32_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1C7C0DC(this->fields.item);
  return (CharaGraphEquipListViewItem_o *)ServantCharaGraphEquipFilterLogic__IsMatchAllFilter(v14, v15);
}