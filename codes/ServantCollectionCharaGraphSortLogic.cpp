void ServantCollectionCharaGraphSortLogic__SetSortValueLocal(
        ServantCollectionCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *ListViewItem; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w8
  int SvtId_k__BackingField; // w0

  ListViewItem = ServantCollectionCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( !ListViewItem )
    goto LABEL_15;
  ListViewItem = ServantCollectionCharaGraphSortLogic__get_ListViewItem(this, v4);
  if ( !ListViewItem )
    goto LABEL_15;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_15;
  sortKind = sort->fields.sortKind;
  if ( sortKind == 2 )
  {
    ListViewItem = ServantCollectionCharaGraphSortLogic__get_ListViewItem(this, v4);
    if ( ListViewItem )
    {
      SvtId_k__BackingField = ((__int64 (__fastcall *)(CharaGraphServantCollectionListViewItem_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
                                ListViewItem,
                                ListViewItem->klass->vtable._9_get_Rarity.method);
      goto LABEL_13;
    }
LABEL_15:
    sub_1C2D6EC(ListViewItem, v4);
  }
  if ( sortKind == 8 )
  {
    ListViewItem = ServantCollectionCharaGraphSortLogic__get_ListViewItem(this, v4);
    if ( ListViewItem )
    {
      SvtId_k__BackingField = -((int (__fastcall *)(CharaGraphServantCollectionListViewItem_o *, const MethodInfo *))ListViewItem->klass->vtable._8_get_SortPriority.methodPtr)(
                                 ListViewItem,
                                 ListViewItem->klass->vtable._8_get_SortPriority.method);
      goto LABEL_13;
    }
    goto LABEL_15;
  }
  if ( sortKind != 13 )
    return;
  ListViewItem = ServantCollectionCharaGraphSortLogic__get_ListViewItem(this, v4);
  if ( !ListViewItem )
    goto LABEL_15;
  SvtId_k__BackingField = ListViewItem->fields._SvtId_k__BackingField;
LABEL_13:
  this->fields._SortValue1_k__BackingField = SvtId_k__BackingField;
}


CharaGraphServantCollectionListViewItem_o *ServantCollectionCharaGraphSortLogic__get_ListViewItem(
        ServantCollectionCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_listViewItem; // x0
  CharaGraphServantCollectionListViewItem_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  CharaGraphServantCollectionListViewItem_o *result; // x0
  ServantCollectionCharaGraphSortLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C26639 & 1) == 0 )
  {
    sub_1C2D490(&CharaGraphServantCollectionListViewItem_TypeInfo);
    byte_4C26639 = 1;
  }
  p_listViewItem = (CGThumbnailListItem_o *)&this->fields.listViewItem;
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
    p_listViewItem->klass = (CGThumbnailListItem_c *)listViewItem;
    sub_1C2D434(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1C2D9AC(this->fields.item);
  ServantCollectionCharaGraphSortLogic__SetSortValueLocal(v10, v11);
  return result;
}