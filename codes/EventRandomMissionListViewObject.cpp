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
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B1A302 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, method, v2);
    byte_4B1A302 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewItem_TypeInfo )
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
    sub_1BCAA3C(Item, v6);
  EventRandomMissionListViewItemDraw__ModifyBoardImage(EventRandomMissionItemDraw, Item->fields.bannerGroupId, v7);
}


void __fastcall EventRandomMissionListViewObject__OnChangeAlphaAnim(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventRandomMissionListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v8; // x20
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B1A303 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewManager_TypeInfo, method, v2);
    byte_4B1A303 = 1;
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
          && (methodPtr_low = LOBYTE(EventRandomMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewManager_TypeInfo )
            v8 = this->fields.manager;
          else
            v8 = 0LL;
        }
        else
        {
          v8 = 0LL;
        }
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, v5);
        if ( !EventRandomMissionItemDraw )
          sub_1BCAA3C(0LL, v10);
        EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
          EventRandomMissionItemDraw,
          (EventRandomMissionListViewManager_o *)v8,
          v11);
      }
    }
  }
}


void __fastcall EventRandomMissionListViewObject__OnClickRejectButton(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventRandomMissionListViewItem_o *Item; // x0
  const MethodInfo *v5; // x2
  EventRandomMissionListViewItem_o *v6; // x1
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A305 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewManager_TypeInfo, method, v2);
    byte_4B1A305 = 1;
  }
  Item = EventRandomMissionListViewObject__GetItem(this, method);
  if ( Item )
  {
    v6 = Item;
    if ( !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
    {
      manager = this->fields.manager;
      if ( !manager
        || (methodPtr_low = LOBYTE(EventRandomMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
        || (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewManager_TypeInfo )
      {
        sub_1BCAA3C(manager, v6);
      }
      EventRandomMissionListViewManager__ShowRejectDialog((EventRandomMissionListViewManager_o *)manager, v6, v5);
    }
  }
}


void __fastcall EventRandomMissionListViewObject__OnClickRewardIcon(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventRandomMissionListViewItem_o *Item; // x0
  MissionListViewItem_o *v5; // x1
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A304 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewManager_TypeInfo, method, v2);
    byte_4B1A304 = 1;
  }
  Item = EventRandomMissionListViewObject__GetItem(this, method);
  if ( Item )
  {
    v5 = (MissionListViewItem_o *)Item;
    if ( !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
    {
      manager = this->fields.manager;
      if ( !manager
        || (methodPtr_low = LOBYTE(EventRandomMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
        || (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRandomMissionListViewManager_TypeInfo )
      {
        sub_1BCAA3C(manager, v5);
      }
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)manager, v5, 0, 0LL);
    }
  }
}


void __fastcall EventRandomMissionListViewObject__Update(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventRandomMissionListViewItem_c *v8; // x10
  EventRandomMissionListViewItem_o *v9; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  struct ListViewManager_o *v12; // x21
  EventRandomMissionListViewItemDraw_o *EventRandomMissionItemDraw; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3

  if ( (byte_4B1A301 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&EventRandomMissionListViewManager_TypeInfo, v4, v5);
    byte_4B1A301 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v8 = (EventRandomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v9 = v8 == EventRandomMissionListViewItem_TypeInfo
         ? (EventRandomMissionListViewItem_o *)this->fields.linkItem
         : 0LL;
      if ( v8 == EventRandomMissionListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v11 = LOBYTE(EventRandomMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11) )
        {
          if ( (EventRandomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] == EventRandomMissionListViewManager_TypeInfo )
            v12 = this->fields.manager;
          else
            v12 = 0LL;
        }
        else
        {
          v12 = 0LL;
        }
        EventRandomMissionItemDraw = EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(this, method);
        if ( !v12 || !EventRandomMissionItemDraw )
          sub_1BCAA3C(EventRandomMissionItemDraw, v14);
        EventRandomMissionListViewItemDraw__UpdateItem(
          EventRandomMissionItemDraw,
          v9,
          this->fields.dispMode,
          *((float *)&v12[1].klass + 1),
          v15);
      }
    }
  }
}


EventRandomMissionListViewItemDraw_o *__fastcall EventRandomMissionListViewObject__get_EventRandomMissionItemDraw(
        EventRandomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B1A300 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewItemDraw_TypeInfo, method, v2);
    byte_4B1A300 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  methodPtr_low = LOBYTE(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemDraw->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventRandomMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewItemDraw_TypeInfo )
    return (EventRandomMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}