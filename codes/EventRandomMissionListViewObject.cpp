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

  if ( (byte_435260B & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionListViewItem_TypeInfo);
    byte_435260B = 1;
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
  Item = EventRandomMissionListViewObject__GetItem(this, v4);
  if ( !Item || !EventRandomMissionItemDraw )
    sub_B7076C(Item, v6);
  EventRandomMissionListViewItemDraw__ModifyBoardImage(EventRandomMissionItemDraw, Item->fields.bannerGroupId, v7);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_435260C & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionListViewManager_TypeInfo);
    byte_435260C = 1;
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
          sub_B7076C(0LL, v9);
        EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
          EventRandomMissionItemDraw,
          (EventRandomMissionListViewManager_o *)v7,
          v10);
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

  if ( (byte_435260E & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionListViewManager_TypeInfo);
    byte_435260E = 1;
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
        sub_B7076C(manager, v5);
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

  if ( (byte_435260D & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionListViewManager_TypeInfo);
    byte_435260D = 1;
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
        sub_B7076C(manager, v4);
      }
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)manager, v4, 0, 0LL);
    }
  }
}


void __fastcall EventRandomMissionListViewObject__Update(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  EventRandomMissionListViewItem_c *v5; // x10
  EventRandomMissionListViewItem_o *v6; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x21
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_435260A & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionListViewItem_TypeInfo);
    sub_B70694(&EventRandomMissionListViewManager_TypeInfo);
    byte_435260A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      v5 = (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1];
      v6 = v5 == EventRandomMissionListViewItem_TypeInfo
         ? (EventRandomMissionListViewItem_o *)this->fields.linkItem
         : 0LL;
      if ( v5 == EventRandomMissionListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v8 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
        {
          if ( (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == EventRandomMissionListViewManager_TypeInfo )
            v9 = this->fields.manager;
          else
            v9 = 0LL;
        }
        else
        {
          v9 = 0LL;
        }
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
        if ( !v9 || !EventRandomMissionItemDraw )
          sub_B7076C(EventRandomMissionItemDraw, v11);
        EventRandomMissionListViewItemDraw__UpdateItem(
          EventRandomMissionItemDraw,
          v6,
          this->fields.dispMode,
          *((float *)&v9[1].klass + 1),
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

  if ( (byte_4352609 & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionListViewItemDraw_TypeInfo);
    byte_4352609 = 1;
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