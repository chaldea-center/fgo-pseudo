void EventMissionItemListViewObject___ctor(EventMissionItemListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0);
}


EventMissionItemListViewItem_o *EventMissionItemListViewObject__GetItem(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2AC7E & 1) == 0 )
  {
    sub_1C93AD4(&EventMissionItemListViewItem_TypeInfo);
    byte_4D2AC7E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventMissionItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventMissionItemListViewItem_TypeInfo )
    return (EventMissionItemListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventMissionItemListViewObject__ModifyBoardImage(EventMissionItemListViewObject_o *this, const MethodInfo *method)
{
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x19
  const MethodInfo *v4; // x1
  EventMissionItemListViewItem_o *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
  Item = EventMissionItemListViewObject__GetItem(this, v4);
  if ( !Item || !EventMissionItemDraw )
    sub_1C93D2C(Item, v6);
  EventMissionItemListViewItemDraw__ModifyBoardImage(EventMissionItemDraw, Item->fields.bannerGroupId, v7);
}


void EventMissionItemListViewObject__OnChangeAlphaAnim(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v6; // x20
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4D2AC7F & 1) == 0 )
  {
    sub_1C93AD4(&EventMissionItemListViewManager_TypeInfo);
    byte_4D2AC7F = 1;
  }
  if ( this->fields.linkItem )
  {
    EventMissionItemListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (naturalAligment = EventMissionItemListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (EventMissionItemListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EventMissionItemListViewManager_TypeInfo )
        v6 = this->fields.manager;
      else
        v6 = 0;
    }
    else
    {
      v6 = 0;
    }
    EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, v3);
    if ( !EventMissionItemDraw )
      sub_1C93D2C(0, v8);
    EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
      EventMissionItemDraw,
      (EventMissionItemListViewManager_o *)v6,
      v9);
  }
}


void EventMissionItemListViewObject__Update(EventMissionItemListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  EventMissionItemListViewItem_c *v5; // x10
  EventMissionItemListViewItem_o *v6; // x20
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4D2AC7D & 1) == 0 )
  {
    sub_1C93AD4(&EventMissionItemListViewItem_TypeInfo);
    byte_4D2AC7D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (EventMissionItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == EventMissionItemListViewItem_TypeInfo ? (EventMissionItemListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == EventMissionItemListViewItem_TypeInfo )
      {
        EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
        if ( !EventMissionItemDraw )
          sub_1C93D2C(0, v8);
        EventMissionItemListViewItemDraw__UpdateItem(EventMissionItemDraw, v6, this->fields.dispMode, v9);
      }
    }
  }
}


EventMissionItemListViewItemDraw_o *EventMissionItemListViewObject__get_EventMissionItemDraw(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2AC7C & 1) == 0 )
  {
    sub_1C93AD4(&EventMissionItemListViewItemDraw_TypeInfo);
    byte_4D2AC7C = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0;
  naturalAligment = EventMissionItemListViewItemDraw_TypeInfo->_2.naturalAligment;
  if ( itemDraw->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventMissionItemListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == EventMissionItemListViewItemDraw_TypeInfo )
    return (EventMissionItemListViewItemDraw_o *)this->fields.itemDraw;
  return 0;
}