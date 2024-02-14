void __fastcall ServantCharaGraphEquipFilterLogic___ctor(
        ServantCharaGraphEquipFilterLogic_o *this,
        const MethodInfo *method)
{
  CharaGraphFilterLogicBase___ctor((CharaGraphFilterLogicBase_o *)this, 0LL);
}


bool __fastcall ServantCharaGraphEquipFilterLogic__IsMatchAllFilter(
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
    sub_B0D97C(sort);
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
  const MethodInfo *v4; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  const MethodInfo *v8; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_4215939 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, method);
    byte_4215939 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
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
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v4);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v8)) == 0LL)
    || !sort )
  {
    sub_B0D97C(ListViewItem);
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
  const MethodInfo *v4; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  const MethodInfo *v8; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_421593A & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, method);
    byte_421593A = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
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
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v4);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v8)) == 0LL)
    || !sort )
  {
    sub_B0D97C(ListViewItem);
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
  const MethodInfo *v4; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0

  if ( (byte_4215938 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, method);
    byte_4215938 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
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
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v4);
  if ( !ListViewItem || !sort )
    sub_B0D97C(ListViewItem);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_listViewItem; // x0
  CharaGraphEquipListViewItem_o *listViewItem; // x19
  __int64 v11; // x9
  System_Int32_array **item; // x1
  ServantCharaGraphEquipFilterLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4215937 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphEquipListViewItem_TypeInfo, method);
    byte_4215937 = 1;
  }
  p_listViewItem = (BattleServantConfConponent_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphEquipListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (v11 = *(&CharaGraphEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&listViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11)
    && (CharaGraphEquipListViewItem_c *)listViewItem->klass->_2.typeHierarchy[v11 - 1] == CharaGraphEquipListViewItem_TypeInfo )
  {
    item = (System_Int32_array **)this->fields.item;
    p_listViewItem->klass = (BattleServantConfConponent_c *)listViewItem;
    sub_B0D840(p_listViewItem, item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  v14 = (ServantCharaGraphEquipFilterLogic_o *)sub_B0DC70(this->fields.item);
  return (CharaGraphEquipListViewItem_o *)ServantCharaGraphEquipFilterLogic__IsMatchAllFilter(v14, v15);
}