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

  if ( (byte_4E7189B & 1) == 0 )
  {
    sub_1D0F0B4(&EventMissionItemListViewItem_TypeInfo);
    byte_4E7189B = 1;
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

  EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
  Item = EventMissionItemListViewObject__GetItem(this, v4);
  if ( !Item || !EventMissionItemDraw )
    sub_1D0F30C(Item, v6);
  EventMissionItemListViewItemDraw__ModifyBoardImage(EventMissionItemDraw, Item->fields.bannerGroupId, 0);
}


void EventMissionItemListViewObject__OnChangeAlphaAnim(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *Item; // x0
  const MethodInfo *v4; // x1
  struct ListViewManager_o *manager; // x8
  EventMissionItemListViewItem_o *v6; // x20
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v8; // x21
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0
  __int64 v10; // x1

  if ( (byte_4E7189C & 1) == 0 )
  {
    sub_1D0F0B4(&EventMissionItemListViewManager_TypeInfo);
    byte_4E7189C = 1;
  }
  if ( this->fields.linkItem )
  {
    Item = EventMissionItemListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    v6 = Item;
    if ( manager
      && (naturalAligment = EventMissionItemListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (EventMissionItemListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EventMissionItemListViewManager_TypeInfo )
        v8 = this->fields.manager;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, v4);
    if ( !EventMissionItemDraw )
      sub_1D0F30C(0, v10);
    EventMissionItemListViewItemDraw__OnChangeAlphaAnim(
      EventMissionItemDraw,
      v6,
      this->fields.dispMode,
      (EventMissionItemListViewManager_o *)v8,
      0);
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

  if ( (byte_4E7189A & 1) == 0 )
  {
    sub_1D0F0B4(&EventMissionItemListViewItem_TypeInfo);
    byte_4E7189A = 1;
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
          sub_1D0F30C(0, v8);
        EventMissionItemListViewItemDraw__UpdateItem(EventMissionItemDraw, v6, this->fields.dispMode, 0);
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

  if ( (byte_4E71899 & 1) == 0 )
  {
    sub_1D0F0B4(&EventMissionItemListViewItemDraw_TypeInfo);
    byte_4E71899 = 1;
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