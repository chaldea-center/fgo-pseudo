void EventRandomMissionListViewObject___ctor(EventRandomMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0);
}


EventRandomMissionListViewItem_o *EventRandomMissionListViewObject__GetItem(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596A976 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionListViewItem_TypeInfo);
    byte_596A976 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItem_TypeInfo )
    return (EventRandomMissionListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventRandomMissionListViewObject__ModifyBoardImage(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x19
  const MethodInfo *v4; // x1
  EventRandomMissionListViewItem_o *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
  Item = EventRandomMissionListViewObject__GetItem(this, v4);
  if ( !Item || !EventRandomMissionItemDraw )
    sub_2213CDC(Item, v6);
  EventRandomMissionListViewItemDraw__ModifyBoardImage(EventRandomMissionItemDraw, Item->fields.bannerGroupId, v7);
}


void EventRandomMissionListViewObject__OnChangeAlphaAnim(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *Item; // x0
  const MethodInfo *v4; // x1
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v7; // x20
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_596A977 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionListViewManager_TypeInfo);
    byte_596A977 = 1;
  }
  if ( this->fields.linkItem )
  {
    Item = EventRandomMissionListViewObject__GetItem(this, method);
    if ( Item )
    {
      if ( !Item->fields._IsDummy_k__BackingField )
      {
        manager = this->fields.manager;
        if ( manager
          && (naturalAligment = EventRandomMissionListViewManager_TypeInfo->_2.naturalAligment,
              manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewManager_TypeInfo )
            v7 = this->fields.manager;
          else
            v7 = 0;
        }
        else
        {
          v7 = 0;
        }
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, v4);
        if ( !EventRandomMissionItemDraw )
          sub_2213CDC(0, v9);
        EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
          EventRandomMissionItemDraw,
          (EventRandomMissionListViewManager_o *)v7,
          v10);
      }
    }
  }
}


void EventRandomMissionListViewObject__OnClickRejectButton(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *Item; // x0
  const MethodInfo *v4; // x2
  EventRandomMissionListViewItem_o *v5; // x1
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596A979 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionListViewManager_TypeInfo);
    byte_596A979 = 1;
  }
  Item = EventRandomMissionListViewObject__GetItem(this, method);
  if ( Item )
  {
    v5 = Item;
    if ( !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
    {
      manager = this->fields.manager;
      if ( !manager
        || (naturalAligment = EventRandomMissionListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != EventRandomMissionListViewManager_TypeInfo )
      {
        sub_2213CDC(manager, v5);
      }
      EventRandomMissionListViewManager__ShowRejectDialog((EventRandomMissionListViewManager_o *)manager, v5, v4);
    }
  }
}


void EventRandomMissionListViewObject__OnClickRewardIcon(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *Item; // x0
  MissionListViewItem_o *v4; // x1
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596A978 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionListViewManager_TypeInfo);
    byte_596A978 = 1;
  }
  Item = EventRandomMissionListViewObject__GetItem(this, method);
  if ( Item )
  {
    v4 = (MissionListViewItem_o *)Item;
    if ( !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
    {
      manager = this->fields.manager;
      if ( !manager
        || (naturalAligment = EventRandomMissionListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != EventRandomMissionListViewManager_TypeInfo )
      {
        sub_2213CDC(manager, v4);
      }
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)manager, v4, 0, 0);
    }
  }
}


void EventRandomMissionListViewObject__Update(EventRandomMissionListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  float *manager; // x21
  __int64 v6; // x10
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_596A975 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionListViewItem_TypeInfo);
    sub_2213A60(&EventRandomMissionListViewManager_TypeInfo);
    byte_596A975 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItem_TypeInfo )
    {
      manager = (float *)this->fields.manager;
      if ( manager
        && (v6 = EventRandomMissionListViewManager_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) >= (unsigned int)v6)
        && *(EventRandomMissionListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v6 - 8) == EventRandomMissionListViewManager_TypeInfo )
      {
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
        if ( EventRandomMissionItemDraw )
        {
          EventRandomMissionListViewItemDraw__UpdateItem(
            EventRandomMissionItemDraw,
            (EventRandomMissionListViewItem_o *)linkItem,
            this->fields.dispMode,
            manager[83],
            v9);
          return;
        }
      }
      else
      {
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
      }
      sub_2213CDC(EventRandomMissionItemDraw, v8);
    }
  }
}


EventRandomMissionListViewItemDraw_o *EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596A974 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionListViewItemDraw_TypeInfo);
    byte_596A974 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0;
  naturalAligment = EventRandomMissionListViewItemDraw_TypeInfo->_2.naturalAligment;
  if ( itemDraw->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventRandomMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItemDraw_TypeInfo )
    return (EventRandomMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0;
}