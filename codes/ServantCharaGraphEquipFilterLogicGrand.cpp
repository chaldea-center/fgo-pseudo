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

  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, 0);
  if ( !ListViewItem )
    sub_1C372B4(0);
  return ListViewItem->fields._IsBase_k__BackingField
      || ServantCharaGraphEquipFilterLogic__IsMatchAllFilter((ServantCharaGraphEquipFilterLogic_o *)this, 0);
}