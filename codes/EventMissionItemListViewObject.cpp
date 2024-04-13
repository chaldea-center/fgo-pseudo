void __fastcall EventMissionItemListViewObject___ctor(EventMissionItemListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


EventMissionItemListViewItem_o *__fastcall EventMissionItemListViewObject__GetItem(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E9054 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9054 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventMissionItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventMissionItemListViewItem_TypeInfo )
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
    sub_B5D69C(Item, v6);
  EventMissionItemListViewItemDraw__ModifyBoardImage(EventMissionItemDraw, Item->fields.bannerGroupId, v7);
}


void __fastcall EventMissionItemListViewObject__OnChangeAlphaAnim(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v7; // x11
  struct ListViewManager_o *v8; // x20
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42E9055 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9055 = 1;
  }
  if ( this->fields.linkItem )
  {
    EventMissionItemListViewObject__GetItem(this, method);
    manager = this->fields.manager;
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
    EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, v5);
    if ( !EventMissionItemDraw )
      sub_B5D69C(0LL, v10);
    EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
      EventMissionItemDraw,
      (EventMissionItemListViewManager_o *)v8,
      v11);
  }
}


void __fastcall EventMissionItemListViewObject__Update(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11
  EventMissionItemListViewItem_c *v7; // x10
  EventMissionItemListViewItem_o *v8; // x20
  EventMissionItemListViewItemDraw_o *EventMissionItemDraw; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_42E9053 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9053 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      v7 = (EventMissionItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1];
      v8 = v7 == EventMissionItemListViewItem_TypeInfo ? (EventMissionItemListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v7 == EventMissionItemListViewItem_TypeInfo )
      {
        EventMissionItemDraw = EventMissionItemListViewObject__get_EventMissionItemDraw(this, method);
        if ( !EventMissionItemDraw )
          sub_B5D69C(0LL, v10);
        EventMissionItemListViewItemDraw__UpdateItem(EventMissionItemDraw, v8, this->fields.dispMode, v11);
      }
    }
  }
}


EventMissionItemListViewItemDraw_o *__fastcall EventMissionItemListViewObject__get_EventMissionItemDraw(
        EventMissionItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 v6; // x11

  if ( (byte_42E9052 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9052 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  v6 = *(&EventMissionItemListViewItemDraw_TypeInfo->_2.bitflags2 + 1);
  if ( *(&itemDraw->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventMissionItemListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[v6 - 1] == EventMissionItemListViewItemDraw_TypeInfo )
    return (EventMissionItemListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}