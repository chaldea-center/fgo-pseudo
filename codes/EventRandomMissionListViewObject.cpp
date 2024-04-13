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
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E8E85 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E85 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventRandomMissionListViewItem_TypeInfo )
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
    sub_B5D69C(Item, v6);
  EventRandomMissionListViewItemDraw__ModifyBoardImage(EventRandomMissionItemDraw, Item->fields.bannerGroupId, v7);
}


void __fastcall EventRandomMissionListViewObject__OnChangeAlphaAnim(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventRandomMissionListViewItem_o *Item; // x0
  const MethodInfo *v6; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x20
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E8E86 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E86 = 1;
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
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, v6);
        if ( !EventRandomMissionItemDraw )
          sub_B5D69C(0LL, v11);
        EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
          EventRandomMissionItemDraw,
          (EventRandomMissionListViewManager_o *)v9,
          v12);
      }
    }
  }
}


void __fastcall EventRandomMissionListViewObject__OnClickRejectButton(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventRandomMissionListViewItem_o *Item; // x0
  const MethodInfo *v6; // x2
  EventRandomMissionListViewItem_o *v7; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v9; // x10

  if ( (byte_42E8E88 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E88 = 1;
  }
  Item = EventRandomMissionListViewObject__GetItem(this, method);
  if ( Item )
  {
    v7 = Item;
    if ( !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
    {
      manager = this->fields.manager;
      if ( !manager
        || (v9 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v9)
        || (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != EventRandomMissionListViewManager_TypeInfo )
      {
        sub_B5D69C(manager, v7);
      }
      EventRandomMissionListViewManager__ShowRejectDialog((EventRandomMissionListViewManager_o *)manager, v7, v6);
    }
  }
}


void __fastcall EventRandomMissionListViewObject__OnClickRewardIcon(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventRandomMissionListViewItem_o *Item; // x0
  MissionListViewItem_o *v6; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v8; // x10

  if ( (byte_42E8E87 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E87 = 1;
  }
  Item = EventRandomMissionListViewObject__GetItem(this, method);
  if ( Item )
  {
    v6 = (MissionListViewItem_o *)Item;
    if ( !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
    {
      manager = this->fields.manager;
      if ( !manager
        || (v8 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8)
        || (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != EventRandomMissionListViewManager_TypeInfo )
      {
        sub_B5D69C(manager, v6);
      }
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)manager, v6, 0LL);
    }
  }
}


void __fastcall EventRandomMissionListViewObject__Update(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  EventRandomMissionListViewItem_c *v10; // x10
  EventRandomMissionListViewItem_o *v11; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  struct ListViewManager_o *v14; // x21
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3

  if ( (byte_42E8E84 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventRandomMissionListViewManager_TypeInfo, v5, v6, v7);
    byte_42E8E84 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      v10 = (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1];
      v11 = v10 == EventRandomMissionListViewItem_TypeInfo
          ? (EventRandomMissionListViewItem_o *)this->fields.linkItem
          : 0LL;
      if ( v10 == EventRandomMissionListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v13 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
        {
          if ( (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == EventRandomMissionListViewManager_TypeInfo )
            v14 = this->fields.manager;
          else
            v14 = 0LL;
        }
        else
        {
          v14 = 0LL;
        }
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
        if ( !v14 || !EventRandomMissionItemDraw )
          sub_B5D69C(EventRandomMissionItemDraw, v16);
        EventRandomMissionListViewItemDraw__UpdateItem(
          EventRandomMissionItemDraw,
          v11,
          this->fields.dispMode,
          *((float *)&v14[1].klass + 1),
          v17);
      }
    }
  }
}


EventRandomMissionListViewItemDraw_o *__fastcall EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 v6; // x11

  if ( (byte_42E8E83 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E83 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  v6 = *(&EventRandomMissionListViewItemDraw_TypeInfo->_2.bitflags2 + 1);
  if ( *(&itemDraw->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventRandomMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[v6 - 1] == EventRandomMissionListViewItemDraw_TypeInfo )
    return (EventRandomMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}