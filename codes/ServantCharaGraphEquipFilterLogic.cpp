void __fastcall ServantCharaGraphEquipFilterLogic___ctor(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphFilterLogic___ctor((ServantCharaGraphFilterLogic_o *)this, 0LL);
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchAllFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  return ServantCharaGraphFilterLogic__IsMatchAllFilter((ServantCharaGraphFilterLogic_o *)this, 0LL)
      && ServantCharaGraphEquipFilterLogic__IsMatchEquipCategoryFilter(this, v3)
      && ServantCharaGraphEquipFilterLogic__IsMatchServantEquipTypeFilter(this, v4)
      && ServantCharaGraphEquipFilterLogic__IsMatchServantEquipCombineStatusFilter(this, v5)
      && ServantCharaGraphEquipFilterLogic__IsMatchServantEquipHaveStatusFilter(this, v6);
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchClassFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchEquipCategoryFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  void *sort; // x0
  const MethodInfo *v4; // x1

  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_6;
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll((ListViewSort_o *)sort, 0LL) )
    return 1;
  sort = ServantCharaGraphEquipFilterLogic__get_EquipListViewItem(this, v4);
  if ( !sort )
LABEL_6:
    sub_1B00F28(sort, method);
  return ServantEquipEffectFilterController__IsMatchEffectCategory(
           *((System_Int32_array **)sort + 36),
           this->fields.sort,
           0LL);
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchEventBonusFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchNPEffectFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchNPTypeFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchServantEquipCombineStatusFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v7; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_48E1BD7 & 1) == 0 )
  {
    sub_1B00CCC(&FilterKindList_TypeInfo, method);
    byte_48E1BD7 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v3->static_fields->ServantEquipCombineStatusFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, 0LL);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, 0LL)) == 0LL)
    || !sort )
  {
    sub_1B00F28(ListViewItem, v7);
  }
  return ListViewSort__IsMatchServantEquipCombineStatusFilter(
           sort,
           UserServantEntity_k__BackingField,
           ListViewItem->fields._ServantEntity_k__BackingField,
           0,
           0LL);
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchServantEquipHaveStatusFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v7; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_48E1BD8 & 1) == 0 )
  {
    sub_1B00CCC(&FilterKindList_TypeInfo, method);
    byte_48E1BD8 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v3->static_fields->ServantEquipHaveStatusFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, 0LL);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, 0LL)) == 0LL)
    || !sort )
  {
    sub_1B00F28(ListViewItem, v7);
  }
  return ListViewSort__IsMatchServantEquipHaveStatusFilter(
           sort,
           UserServantEntity_k__BackingField,
           ListViewItem->fields._ServantEntity_k__BackingField,
           0,
           0LL);
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchServantEquipTypeFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v7; // x1

  if ( (byte_48E1BD6 & 1) == 0 )
  {
    sub_1B00CCC(&FilterKindList_TypeInfo, method);
    byte_48E1BD6 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v3->static_fields->ServantEquipTypeFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, 0LL);
  if ( !ListViewItem || !sort )
    sub_1B00F28(ListViewItem, v7);
  return ListViewSort__IsMatchServantEquipTypeFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchServantTypeFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchSkillAndTreasureDeviceFilter(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  return 1;
}


CharaGraphEquipListViewItem_o *__fastcall ServantCharaGraphEquipFilterLogic__get_EquipListViewItem(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_listViewItem; // x0
  CharaGraphEquipListViewItem_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphEquipFilterLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_48E1BD5 & 1) == 0 )
  {
    sub_1B00CCC(&CharaGraphEquipListViewItem_TypeInfo, method);
    byte_48E1BD5 = 1;
  }
  p_listViewItem = (ServantStatusBattleListViewItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphEquipListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (methodPtr_low = LOBYTE(CharaGraphEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(listViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (CharaGraphEquipListViewItem_c *)listViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphEquipListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (ServantStatusBattleListViewItem_c *)listViewItem;
    sub_1B00C70(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1B011E8(this->fields.item);
  return (CharaGraphEquipListViewItem_o *)ServantCharaGraphEquipFilterLogic__IsMatchAllFilter(v10, v11);
}