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
  struct UserPresentBoxEntity_o *entity; // x8
  int32_t giftType; // w1
  int32_t objectId; // w2

  if ( item && mode )
  {
    nameTextLabel = this->fields.nameTextLabel;
    if ( !nameTextLabel )
      goto LABEL_13;
    UILabel__set_text(nameTextLabel, item->fields.presentName, 0LL);
    nameTextLabel = this->fields.countTextLabel;
    if ( !nameTextLabel )
      goto LABEL_13;
    UILabel__set_text(nameTextLabel, item->fields.presentCount, 0LL);
    entity = item->fields.entity;
    nameTextLabel = (UILabel_o *)this->fields.itemIcon;
    if ( entity )
    {
      giftType = entity->fields.giftType;
      objectId = entity->fields.objectId;
      if ( !nameTextLabel )
        goto LABEL_13;
    }
    else
    {
      giftType = 0;
      objectId = 0;
      if ( !nameTextLabel )
        goto LABEL_13;
    }
    ItemIconComponent__SetGift((ItemIconComponent_o *)nameTextLabel, giftType, objectId, -1, 0, 0LL);
    nameTextLabel = this->fields.nameTextLabel;
    if ( !nameTextLabel
      || (UILabel__set_text(nameTextLabel, item->fields.presentName, 0LL),
          (nameTextLabel = this->fields.countTextLabel) == 0LL) )
    {
LABEL_13:
      sub_B0D97C(nameTextLabel);
    }
    UILabel__set_text(nameTextLabel, item->fields.presentCount, 0LL);
  }
}