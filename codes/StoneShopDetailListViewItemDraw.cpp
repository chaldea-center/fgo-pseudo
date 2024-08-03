void __fastcall StoneShopDetailListViewItemDraw___ctor(
        StoneShopDetailListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StoneShopDetailListViewItemDraw__Awake(
        StoneShopDetailListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall StoneShopDetailListViewItemDraw__SetItem(
        StoneShopDetailListViewItemDraw_o *this,
        StoneShopDetailListViewItem_o *item,
        const MethodInfo *method)
{
  StoneShopDetailListViewItemDraw_o *v3; // x20

  if ( !item
    || (v3 = this, (this = (StoneShopDetailListViewItemDraw_o *)this->fields.itemIcon) == 0LL)
    || (ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, item->fields._ImageId_k__BackingField, 0LL),
        (this = (StoneShopDetailListViewItemDraw_o *)v3->fields.messageLabel) == 0LL) )
  {
    sub_1B64324(this);
  }
  UILabel__set_text((UILabel_o *)this, item->fields._Message_k__BackingField, 0LL);
}