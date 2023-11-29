void __fastcall EventRandomMissionListViewObject___ctor(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


EventRandomMissionListViewItem_o *__fastcall EventRandomMissionListViewObject__GetItem(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40F60BE & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, method);
    byte_40F60BE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventRandomMissionListViewItem_TypeInfo )
    return (EventRandomMissionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventRandomMissionListViewObject__ModifyBoardImage(
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
    sub_B170D4();
  EventRandomMissionListViewItemDraw__ModifyBoardImage(EventRandomMissionItemDraw, Item->fields.bannerGroupId, v6);
}


void __fastcall EventRandomMissionListViewObject__OnChangeAlphaAnim(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *Item; // x0
  const MethodInfo *v4; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v6; // x11
  struct ListViewManager_o *v7; // x20
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  const MethodInfo *v9; // x2

  if ( (byte_40F60BF & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewManager_TypeInfo, method);
    byte_40F60BF = 1;
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
          && (v6 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
        {
          if ( (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == EventRandomMissionListViewManager_TypeInfo )
            v7 = this->fields.manager;
          else
            v7 = 0LL;
        }
        else
        {
          v7 = 0LL;
        }
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, v4);
        if ( !EventRandomMissionItemDraw )
          sub_B170D4();
        EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
          EventRandomMissionItemDraw,
          (EventRandomMissionListViewManager_o *)v7,
          v9);
      }
    }
  }
}


void __fastcall EventRandomMissionListViewObject__OnClickRejectButton(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *Item; // x0
  const MethodInfo *v4; // x2
  EventRandomMissionListViewItem_o *v5; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v7; // x10

  if ( (byte_40F60C1 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewManager_TypeInfo, method);
    byte_40F60C1 = 1;
  }
  Item = EventRandomMissionListViewObject__GetItem(this, method);
  if ( Item )
  {
    v5 = Item;
    if ( !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
    {
      manager = this->fields.manager;
      if ( !manager
        || (v7 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v7)
        || (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != EventRandomMissionListViewManager_TypeInfo )
      {
        sub_B170D4();
      }
      EventRandomMissionListViewManager__ShowRejectDialog((EventRandomMissionListViewManager_o *)manager, v5, v4);
    }
  }
}


void __fastcall EventRandomMissionListViewObject__OnClickRewardIcon(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *Item; // x0
  MissionListViewItem_o *v4; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v6; // x10

  if ( (byte_40F60C0 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewManager_TypeInfo, method);
    byte_40F60C0 = 1;
  }
  Item = EventRandomMissionListViewObject__GetItem(this, method);
  if ( Item )
  {
    v4 = (MissionListViewItem_o *)Item;
    if ( !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
    {
      manager = this->fields.manager;
      if ( !manager
        || (v6 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v6)
        || (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != EventRandomMissionListViewManager_TypeInfo )
      {
        sub_B170D4();
      }
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)manager, v4, 0LL);
    }
  }
}


void __fastcall EventRandomMissionListViewObject__Update(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  EventRandomMissionListViewItem_c *v6; // x10
  EventRandomMissionListViewItem_o *v7; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x21
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  const MethodInfo *v12; // x3

  if ( (byte_40F60BD & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, method);
    sub_B16FFC(&EventRandomMissionListViewManager_TypeInfo, v3);
    byte_40F60BD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == EventRandomMissionListViewItem_TypeInfo
         ? (EventRandomMissionListViewItem_o *)this->fields.linkItem
         : 0LL;
      if ( v6 == EventRandomMissionListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
        {
          if ( (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == EventRandomMissionListViewManager_TypeInfo )
            v10 = this->fields.manager;
          else
            v10 = 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
        if ( !v10 || !EventRandomMissionItemDraw )
          sub_B170D4();
        EventRandomMissionListViewItemDraw__UpdateItem(
          EventRandomMissionItemDraw,
          v7,
          this->fields.dispMode,
          *((float *)&v10[1].klass + 1),
          v12);
      }
    }
  }
}


EventRandomMissionListViewItemDraw_o *__fastcall EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 v4; // x11

  if ( (byte_40F60BC & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewItemDraw_TypeInfo, method);
    byte_40F60BC = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  v4 = *(&EventRandomMissionListViewItemDraw_TypeInfo->_2.bitflags2 + 1);
  if ( *(&itemDraw->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventRandomMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[v4 - 1] == EventRandomMissionListViewItemDraw_TypeInfo )
    return (EventRandomMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}