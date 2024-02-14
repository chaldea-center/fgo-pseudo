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

  if ( (byte_4214CED & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, method);
    byte_4214CED = 1;
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
  const MethodInfo *v6; // x2

  EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
  Item = EventMissionItemListViewObject__GetItem(this, v4);
  if ( !Item || !EventMissionItemDraw )
    sub_B0D97C(Item);
  EventMissionItemListViewItemDraw__ModifyBoardImage(EventMissionItemDraw, Item->fields.bannerGroupId, v6);
}


void __fastcall EventMissionItemListViewObject__OnChangeAlphaAnim(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v5; // x11
  struct ListViewManager_o *v6; // x20
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4214CEE & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewManager_TypeInfo, method);
    byte_4214CEE = 1;
  }
  if ( this->fields.linkItem )
  {
    EventMissionItemListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (v5 = *(&EventMissionItemListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
    {
      if ( (EventMissionItemListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] == EventMissionItemListViewManager_TypeInfo )
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
      sub_B0D97C(0LL);
    EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
      EventMissionItemDraw,
      (EventMissionItemListViewManager_o *)v6,
      v8);
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
  const MethodInfo *v8; // x3

  if ( (byte_4214CEC & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, method);
    byte_4214CEC = 1;
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
          sub_B0D97C(0LL);
        EventMissionItemListViewItemDraw__UpdateItem(EventMissionItemDraw, v6, this->fields.dispMode, v8);
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

  if ( (byte_4214CEB & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewItemDraw_TypeInfo, method);
    byte_4214CEB = 1;
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