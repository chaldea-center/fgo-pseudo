void __fastcall EventMissionItemListViewObject___ctor(EventMissionItemListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


EventMissionItemListViewItem_o *__fastcall EventMissionItemListViewObject__GetItem(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FABBF & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, method);
    byte_40FABBF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventMissionItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventMissionItemListViewItem_TypeInfo )
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

  EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
  Item = EventMissionItemListViewObject__GetItem(this, v4);
  if ( !Item || !EventMissionItemDraw )
    sub_B170D4();
  EventMissionItemListViewItemDraw__ModifyBoardImage(EventMissionItemDraw, Item->fields.bannerGroupId, 0LL);
}


void __fastcall EventMissionItemListViewObject__OnChangeAlphaAnim(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *Item; // x0
  const MethodInfo *v4; // x1
  struct ListViewManager_o *manager; // x8
  EventMissionItemListViewItem_o *v6; // x20
  __int64 v7; // x11
  struct ListViewManager_o *v8; // x21
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0

  if ( (byte_40FABC0 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewManager_TypeInfo, method);
    byte_40FABC0 = 1;
  }
  if ( this->fields.linkItem )
  {
    Item = EventMissionItemListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    v6 = Item;
    if ( manager
      && (v7 = *(&EventMissionItemListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
    {
      if ( (EventMissionItemListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == EventMissionItemListViewManager_TypeInfo )
        v8 = this->fields.manager;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, v4);
    if ( !EventMissionItemDraw )
      sub_B170D4();
    EventMissionItemListViewItemDraw__OnChangeAlphaAnim(
      EventMissionItemDraw,
      v6,
      this->fields.dispMode,
      (EventMissionItemListViewManager_o *)v8,
      0LL);
  }
}


void __fastcall EventMissionItemListViewObject__Update(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  EventMissionItemListViewItem_c *v5; // x10
  EventMissionItemListViewItem_o *v6; // x20
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0

  if ( (byte_40FABBE & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, method);
    byte_40FABBE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      v5 = (EventMissionItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1];
      v6 = v5 == EventMissionItemListViewItem_TypeInfo ? (EventMissionItemListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == EventMissionItemListViewItem_TypeInfo )
      {
        EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
        if ( !EventMissionItemDraw )
          sub_B170D4();
        EventMissionItemListViewItemDraw__UpdateItem(EventMissionItemDraw, v6, this->fields.dispMode, 0LL);
      }
    }
  }
}


EventMissionItemListViewItemDraw_o *__fastcall EventMissionItemListViewObject__get_EventMissionItemDraw(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 v4; // x11

  if ( (byte_40FABBD & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItemDraw_TypeInfo, method);
    byte_40FABBD = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  v4 = *(&EventMissionItemListViewItemDraw_TypeInfo->_2.bitflags2 + 1);
  if ( *(&itemDraw->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventMissionItemListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[v4 - 1] == EventMissionItemListViewItemDraw_TypeInfo )
    return (EventMissionItemListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}