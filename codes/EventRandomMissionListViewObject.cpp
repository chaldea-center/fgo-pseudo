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

  if ( (byte_4C31F85 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionListViewItem_TypeInfo);
    byte_4C31F85 = 1;
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
  const MethodInfo *v6; // x2

  EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
  Item = EventRandomMissionListViewObject__GetItem(this, v4);
  if ( !Item || !EventRandomMissionItemDraw )
    sub_1C32E7C(Item);
  EventRandomMissionListViewItemDraw__ModifyBoardImage(EventRandomMissionItemDraw, Item->fields.bannerGroupId, v6);
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
  const MethodInfo *v9; // x2

  if ( (byte_4C31F86 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionListViewManager_TypeInfo);
    byte_4C31F86 = 1;
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
          sub_1C32E7C(0);
        EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
          EventRandomMissionItemDraw,
          (EventRandomMissionListViewManager_o *)v7,
          v9);
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

  if ( (byte_4C31F88 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionListViewManager_TypeInfo);
    byte_4C31F88 = 1;
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
        sub_1C32E7C(manager);
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

  if ( (byte_4C31F87 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionListViewManager_TypeInfo);
    byte_4C31F87 = 1;
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
        sub_1C32E7C(manager);
      }
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)manager, v4, 0, 0);
    }
  }
}


void EventRandomMissionListViewObject__Update(EventRandomMissionListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  EventRandomMissionListViewItem_c *v5; // x10
  EventRandomMissionListViewItem_o *v6; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x21
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4C31F84 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C32C20(&EventRandomMissionListViewManager_TypeInfo);
    byte_4C31F84 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == EventRandomMissionListViewItem_TypeInfo
         ? (EventRandomMissionListViewItem_o *)this->fields.linkItem
         : 0LL;
      if ( v5 == EventRandomMissionListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v8 = EventRandomMissionListViewManager_TypeInfo->_2.naturalAligment,
              manager->klass->_2.naturalAligment >= (unsigned int)v8) )
        {
          if ( (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == EventRandomMissionListViewManager_TypeInfo )
            v9 = this->fields.manager;
          else
            v9 = 0;
        }
        else
        {
          v9 = 0;
        }
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
        if ( !v9 || !EventRandomMissionItemDraw )
          sub_1C32E7C(EventRandomMissionItemDraw);
        EventRandomMissionListViewItemDraw__UpdateItem(
          EventRandomMissionItemDraw,
          v6,
          this->fields.dispMode,
          *((float *)&v9[1].klass + 1),
          v11);
      }
    }
  }
}


EventRandomMissionListViewItemDraw_o *EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C31F83 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionListViewItemDraw_TypeInfo);
    byte_4C31F83 = 1;
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