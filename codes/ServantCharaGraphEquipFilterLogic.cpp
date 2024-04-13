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
    sub_B5D69C(sort, method);
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
  int v2; // w2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  const MethodInfo *v10; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_42E9965 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9965 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v5->static_fields->ServantEquipCombineStatusFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v6);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v10)) == 0LL)
    || !sort )
  {
    sub_B5D69C(ListViewItem, v10);
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
  int v2; // w2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  const MethodInfo *v10; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_42E9966 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9966 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v5->static_fields->ServantEquipHaveStatusFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v6);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v10)) == 0LL)
    || !sort )
  {
    sub_B5D69C(ListViewItem, v10);
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
  int v2; // w2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v10; // x1

  if ( (byte_42E9964 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9964 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v5->static_fields->ServantEquipTypeFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, v6);
  if ( !ListViewItem || !sort )
    sub_B5D69C(ListViewItem, v10);
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

  if ( (byte_42E9963 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphEquipListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9963 = 1;
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
    sub_B5D560(p_listViewItem, item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  v14 = (ServantCharaGraphEquipFilterLogic_o *)sub_B5D990(this->fields.item);
  return (CharaGraphEquipListViewItem_o *)ServantCharaGraphEquipFilterLogic__IsMatchAllFilter(v14, v15);
}