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
  PresentBoxNotificationListViewItem_o *v6; // x19
  struct UserPresentBoxEntity_o *entity; // x8
  int32_t objectId; // w2

  if ( item && mode )
  {
    nameTextLabel = this->fields.nameTextLabel;
    if ( !nameTextLabel )
      goto LABEL_13;
    v6 = item;
    UILabel__set_text(nameTextLabel, item->fields.presentName, 0);
    nameTextLabel = this->fields.countTextLabel;
    if ( !nameTextLabel )
      goto LABEL_13;
    UILabel__set_text(nameTextLabel, v6->fields.presentCount, 0);
    entity = v6->fields.entity;
    nameTextLabel = (UILabel_o *)this->fields.itemIcon;
    if ( entity )
    {
      item = (PresentBoxNotificationListViewItem_o *)(unsigned int)entity->fields.giftType;
      objectId = entity->fields.objectId;
      if ( !nameTextLabel )
        goto LABEL_13;
    }
    else
    {
      item = 0;
      objectId = 0;
      if ( !nameTextLabel )
        goto LABEL_13;
    }
    ItemIconComponent__SetGift_41196280((ItemIconComponent_o *)nameTextLabel, (int32_t)item, objectId, -1, 0, 0);
    nameTextLabel = this->fields.nameTextLabel;
    if ( !nameTextLabel
      || (UILabel__set_text(nameTextLabel, v6->fields.presentName, 0), (nameTextLabel = this->fields.countTextLabel) == 0) )
    {
LABEL_13:
      sub_1C71608(nameTextLabel, item);
    }
    UILabel__set_text(nameTextLabel, v6->fields.presentCount, 0);
  }
}