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
    sub_1C6BC60(sort, method);
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_listViewItem; // x0
  CharaGraphCommandCodeListViewItem_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  CommandCodeCharaGraphFilterLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CB556A & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_4CB556A = 1;
  }
  p_listViewItem = (CGThumbnailListItem_o *)&this->fields.listViewItem;
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
    p_listViewItem->klass = (CGThumbnailListItem_c *)listViewItem;
    sub_1C6B9AC(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1C6BFFC(this->fields.item);
  return (CharaGraphCommandCodeListViewItem_o *)CommandCodeCharaGraphFilterLogic__IsMatchAllFilter(v10, v11);
}