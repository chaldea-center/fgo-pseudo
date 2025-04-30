void __fastcall PresentBoxNotificationListViewItemDraw___ctor(
        PresentBoxNotificationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationListViewItemDraw__SetInput(
        PresentBoxNotificationListViewItemDraw_o *this,
        PresentBoxNotificationListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void __fastcall PresentBoxNotificationListViewItemDraw__SetItem(
        PresentBoxNotificationListViewItemDraw_o *this,
        PresentBoxNotificationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *nameTextLabel; // x0
  ItemIconComponent_o *itemIcon; // x21
  int32_t GiftType; // w22

  if ( item && mode )
  {
    nameTextLabel = this->fields.nameTextLabel;
    if ( !nameTextLabel )
      goto LABEL_10;
    UILabel__set_text(nameTextLabel, item->fields.presentName, 0LL);
    nameTextLabel = this->fields.countTextLabel;
    if ( !nameTextLabel )
      goto LABEL_10;
    UILabel__set_text(nameTextLabel, item->fields.presentCount, 0LL);
    itemIcon = this->fields.itemIcon;
    GiftType = PresentBoxNotificationListViewItem__get_GiftType(item, 0LL);
    nameTextLabel = (UILabel_o *)PresentBoxNotificationListViewItem__get_ObjactId(item, 0LL);
    if ( !itemIcon
      || (ItemIconComponent__SetGift_39099496(itemIcon, GiftType, (int32_t)nameTextLabel, -1, 0, 0LL),
          (nameTextLabel = this->fields.nameTextLabel) == 0LL)
      || (UILabel__set_text(nameTextLabel, item->fields.presentName, 0LL),
          (nameTextLabel = this->fields.countTextLabel) == 0LL) )
    {
LABEL_10:
      sub_1B86614(nameTextLabel, item);
    }
    UILabel__set_text(nameTextLabel, item->fields.presentCount, 0LL);
  }
}