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
  UILabel_o *countTextLabel; // x0
  struct UserPresentBoxEntity_o *entity; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t giftType; // w1
  int32_t objectId; // w2
  UILabel_o *v12; // x0
  UILabel_o *v13; // x0

  if ( item && mode )
  {
    nameTextLabel = this->fields.nameTextLabel;
    if ( !nameTextLabel )
      goto LABEL_13;
    UILabel__set_text(nameTextLabel, item->fields.presentName, 0LL);
    countTextLabel = this->fields.countTextLabel;
    if ( !countTextLabel )
      goto LABEL_13;
    UILabel__set_text(countTextLabel, item->fields.presentCount, 0LL);
    entity = item->fields.entity;
    itemIcon = this->fields.itemIcon;
    if ( entity )
    {
      giftType = entity->fields.giftType;
      objectId = entity->fields.objectId;
      if ( !itemIcon )
        goto LABEL_13;
    }
    else
    {
      giftType = 0;
      objectId = 0;
      if ( !itemIcon )
        goto LABEL_13;
    }
    ItemIconComponent__SetGift(itemIcon, giftType, objectId, -1, 0, 0LL);
    v12 = this->fields.nameTextLabel;
    if ( !v12 || (UILabel__set_text(v12, item->fields.presentName, 0LL), (v13 = this->fields.countTextLabel) == 0LL) )
LABEL_13:
      sub_B170D4();
    UILabel__set_text(v13, item->fields.presentCount, 0LL);
  }
}