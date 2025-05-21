void __fastcall ServantCharaGraphEquipFilterLogicGrand___ctor(
        ServantCharaGraphEquipFilterLogicGrand_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphEquipFilterLogic___ctor((ServantCharaGraphEquipFilterLogic_o *)this, 0LL);
}


bool __fastcall ServantCharaGraphEquipFilterLogicGrand__IsMatchAllFilter(
        ServantCharaGraphEquipFilterLogicGrand_o *this,
        const MethodInfo *method)
{
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v4; // x1

  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem((ServantCharaGraphFilterLogic_o *)this, 0LL);
  if ( !ListViewItem )
    sub_1BDBAD4(0LL, v4);
  return ListViewItem->fields._IsBase_k__BackingField
      || ServantCharaGraphEquipFilterLogic__IsMatchAllFilter((ServantCharaGraphEquipFilterLogic_o *)this, 0LL);
}