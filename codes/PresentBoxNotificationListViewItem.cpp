void PresentBoxNotificationListViewItem___ctor(
        PresentBoxNotificationListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *e,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x0
  __int64 v13; // x1

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.entity = e;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.entity, (int32_t)e, v6, v7, v8, v9, v10, v11);
  if ( !e )
    sub_21FFECC(v12, v13);
  UserPresentBoxEntity__GetInfo(e, &this->fields.presentName, &this->fields.presentCount, 0);
}


void PresentBoxNotificationListViewItem__Finalize(PresentBoxNotificationListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *PresentBoxNotificationListViewItem__get_CountText(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.presentCount;
}


int32_t PresentBoxNotificationListViewItem__get_GiftType(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( entity )
    return entity->fields.giftType;
  else
    return 0;
}


System_String_o *PresentBoxNotificationListViewItem__get_NameText(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.presentName;
}


int32_t PresentBoxNotificationListViewItem__get_ObjactId(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( entity )
    return entity->fields.objectId;
  else
    return 0;
}