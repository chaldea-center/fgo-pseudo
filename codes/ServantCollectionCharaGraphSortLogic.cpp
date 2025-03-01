void __fastcall ServantCollectionCharaGraphSortLogic__SetSortValueLocal(
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
      SvtId_k__BackingField = ((__int64 (__fastcall *)(CharaGraphServantCollectionListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
                                ListViewItem,
                                ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
      goto LABEL_13;
    }
LABEL_15:
    sub_1C2E388(ListViewItem, v4);
  }
  if ( sortKind == 8 )
  {
    ListViewItem = ServantCollectionCharaGraphSortLogic__get_ListViewItem(this, v4);
    if ( ListViewItem )
    {
      SvtId_k__BackingField = -((__int64 (__fastcall *)(CharaGraphServantCollectionListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._8_get_SortPriority.method)(
                                 ListViewItem,
                                 ListViewItem->klass->vtable._9_get_Rarity.methodPtr);
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


CharaGraphServantCollectionListViewItem_o *__fastcall ServantCollectionCharaGraphSortLogic__get_ListViewItem(
        ServantCollectionCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_listViewItem; // x0
  CharaGraphServantCollectionListViewItem_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  CharaGraphServantCollectionListViewItem_o *result; // x0
  ServantCollectionCharaGraphSortLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4BFCB22 & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphServantCollectionListViewItem_TypeInfo, method);
    byte_4BFCB22 = 1;
  }
  p_listViewItem = (PartyOrganizationUtility_o *)&this->fields.listViewItem;
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
    p_listViewItem->klass = (PartyOrganizationUtility_c *)listViewItem;
    sub_1C2E0D0(p_listViewItem, (int64_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1C2E648(this->fields.item);
  ServantCollectionCharaGraphSortLogic__SetSortValueLocal(v14, v15);
  return result;
}