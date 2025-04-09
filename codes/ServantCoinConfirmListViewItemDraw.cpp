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
  if ( !item || (this = (ServantCoinConfirmListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
    sub_1B4D1EC(this, item);
  ItemIconComponent__SetItem(
    (ItemIconComponent_o *)this,
    item->fields._ItemId_k__BackingField,
    item->fields._Num_k__BackingField,
    1,
    0LL);
}