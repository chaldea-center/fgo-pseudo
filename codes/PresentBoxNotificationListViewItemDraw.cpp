void PresentBoxNotificationListViewItemDraw___ctor(
        PresentBoxNotificationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PresentBoxNotificationListViewItemDraw__SetInput(
        PresentBoxNotificationListViewItemDraw_o *this,
        PresentBoxNotificationListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void PresentBoxNotificationListViewItemDraw__SetItem(
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
    UILabel__set_text(nameTextLabel, item->fields.presentName, 0);
    nameTextLabel = this->fields.countTextLabel;
    if ( !nameTextLabel )
      goto LABEL_13;
    UILabel__set_text(nameTextLabel, item->fields.presentCount, 0);
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
    ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)nameTextLabel, giftType, objectId, -1, 0, 0);
    nameTextLabel = this->fields.nameTextLabel;
    if ( !nameTextLabel
      || (UILabel__set_text(nameTextLabel, item->fields.presentName, 0),
          (nameTextLabel = this->fields.countTextLabel) == 0) )
    {
LABEL_13:
      sub_1C372B4(nameTextLabel);
    }
    UILabel__set_text(nameTextLabel, item->fields.presentCount, 0);
  }
}