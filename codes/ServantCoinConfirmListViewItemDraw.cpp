void __fastcall ServantCoinConfirmListViewItemDraw___ctor(
        ServantCoinConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmListViewItemDraw__SetItem(
        ServantCoinConfirmListViewItemDraw_o *this,
        ServantCoinConfirmListViewItem_o *item,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  if ( !item || (itemIcon = this->fields.itemIcon) == 0LL )
    sub_B170D4();
  ItemIconComponent__SetItem(itemIcon, item->fields._ItemId_k__BackingField, item->fields._Num_k__BackingField, 0LL);
}