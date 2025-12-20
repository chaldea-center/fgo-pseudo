void CommandCodeCharaGraphFilterLogic___ctor(CommandCodeCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CommandCodeCharaGraphFilterLogic__IsMatchAllFilter(
        CommandCodeCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (((__int64 (__fastcall *)(CommandCodeCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._5_IsMatchRarityFilter.methodPtr)(
          this,
          this->klass->vtable._5_IsMatchRarityFilter.method)
      & 1) != 0
    && CommandCodeCharaGraphFilterLogic__IsMatchCommandCodeCategoryFilter(this, v3) )
  {
    return ((__int64 (__fastcall *)(CommandCodeCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._6_IsMatchSelectedItemFilter.methodPtr)(
             this,
             this->klass->vtable._6_IsMatchSelectedItemFilter.method);
  }
  else
  {
    return 0;
  }
}


bool CommandCodeCharaGraphFilterLogic__IsMatchCommandCodeCategoryFilter(
        CommandCodeCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  void *sort; // x0
  const MethodInfo *v4; // x1

  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_6;
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll((ListViewSort_o *)sort, 0) )
    return 1;
  sort = CommandCodeCharaGraphFilterLogic__get_CommandCodeListViewItem(this, v4);
  if ( !sort )
LABEL_6:
    sub_1C942F0(sort, method);
  return ServantEquipEffectFilterController__IsMatchEffectCategory(
           *((System_Int32_array **)sort + 31),
           this->fields.sort,
           0);
}


CharaGraphCommandCodeListViewItem_o *CommandCodeCharaGraphFilterLogic__get_CommandCodeListViewItem(
        CommandCodeCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_listViewItem; // x0
  CharaGraphCommandCodeListViewItem_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  CommandCodeCharaGraphFilterLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4D2BAEC & 1) == 0 )
  {
    sub_1C94098(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_4D2BAEC = 1;
  }
  p_listViewItem = (GrandQuestFolderBoardItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphCommandCodeListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (naturalAligment = CharaGraphCommandCodeListViewItem_TypeInfo->_2.naturalAligment,
        listViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (CharaGraphCommandCodeListViewItem_c *)listViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (GrandQuestFolderBoardItem_c *)listViewItem;
    sub_1C9403C(p_listViewItem, (int32_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1C9468C(this->fields.item);
  return (CharaGraphCommandCodeListViewItem_o *)CommandCodeCharaGraphFilterLogic__IsMatchAllFilter(v14, v15);
}