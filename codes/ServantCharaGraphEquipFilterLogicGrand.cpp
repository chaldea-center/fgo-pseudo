void ServantCharaGraphEquipFilterLogicGrand___ctor(
        ServantCharaGraphEquipFilterLogicGrand_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphEquipFilterLogic___ctor((ServantCharaGraphEquipFilterLogic_o *)this, 0);
}


bool ServantCharaGraphEquipFilterLogicGrand__IsMatchAllFilter(
        ServantCharaGraphEquipFilterLogicGrand_o *this,
        const MethodInfo *method)
{
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v4; // x1

  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, 0);
  if ( !ListViewItem )
    sub_1C3E7C0(0, v4);
  return ListViewItem->fields._IsBase_k__BackingField
      || ServantCharaGraphEquipFilterLogic__IsMatchAllFilter((ServantCharaGraphEquipFilterLogic_o *)this, 0);
}