void __fastcall EventMissionItemListViewObject___ctor(EventMissionItemListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


EventMissionItemListViewItem_o *__fastcall EventMissionItemListViewObject__GetItem(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4AB9C30 & 1) == 0 )
  {
    sub_1BAB41C(&EventMissionItemListViewItem_TypeInfo, method);
    byte_4AB9C30 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventMissionItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionItemListViewItem_TypeInfo )
    return (EventMissionItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventMissionItemListViewObject__ModifyBoardImage(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x19
  const MethodInfo *v4; // x1
  EventMissionItemListViewItem_o *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
  Item = EventMissionItemListViewObject__GetItem(this, v4);
  if ( !Item || !EventMissionItemDraw )
    sub_1BAB678(Item, v6);
  EventMissionItemListViewItemDraw__ModifyBoardImage(EventMissionItemDraw, Item->fields.bannerGroupId, v7);
}


void __fastcall EventMissionItemListViewObject__OnChangeAlphaAnim(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v6; // x20
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4AB9C31 & 1) == 0 )
  {
    sub_1BAB41C(&EventMissionItemListViewManager_TypeInfo, method);
    byte_4AB9C31 = 1;
  }
  if ( this->fields.linkItem )
  {
    EventMissionItemListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (methodPtr_low = LOBYTE(EventMissionItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (EventMissionItemListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionItemListViewManager_TypeInfo )
        v6 = this->fields.manager;
      else
        v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, v3);
    if ( !EventMissionItemDraw )
      sub_1BAB678(0LL, v8);
    EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
      EventMissionItemDraw,
      (EventMissionItemListViewManager_o *)v6,
      v9);
  }
}


void __fastcall EventMissionItemListViewObject__Update(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventMissionItemListViewItem_c *v5; // x10
  EventMissionItemListViewItem_o *v6; // x20
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4AB9C2F & 1) == 0 )
  {
    sub_1BAB41C(&EventMissionItemListViewItem_TypeInfo, method);
    byte_4AB9C2F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v5 = (EventMissionItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v6 = v5 == EventMissionItemListViewItem_TypeInfo ? (EventMissionItemListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == EventMissionItemListViewItem_TypeInfo )
      {
        EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
        if ( !EventMissionItemDraw )
          sub_1BAB678(0LL, v8);
        EventMissionItemListViewItemDraw__UpdateItem(EventMissionItemDraw, v6, this->fields.dispMode, v9);
      }
    }
  }
}


EventMissionItemListViewItemDraw_o *__fastcall EventMissionItemListViewObject__get_EventMissionItemDraw(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4AB9C2E & 1) == 0 )
  {
    sub_1BAB41C(&EventMissionItemListViewItemDraw_TypeInfo, method);
    byte_4AB9C2E = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  methodPtr_low = LOBYTE(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemDraw->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventMissionItemListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionItemListViewItemDraw_TypeInfo )
    return (EventMissionItemListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}