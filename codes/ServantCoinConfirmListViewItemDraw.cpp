void ServantCoinConfirmListViewItemDraw___ctor(ServantCoinConfirmListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantCoinConfirmListViewItemDraw__SetItem(
        ServantCoinConfirmListViewItemDraw_o *this,
        ServantCoinConfirmListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item || (this = (ServantCoinConfirmListViewItemDraw_o *)this->fields.itemIcon) == 0 )
    sub_1C7BD40(this, item);
  ItemIconComponent__SetItem(
    (ItemIconComponent_o *)this,
    item->fields._ItemId_k__BackingField,
    item->fields._Num_k__BackingField,
    1,
    0);
}