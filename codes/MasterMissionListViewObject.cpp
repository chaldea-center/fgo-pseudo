void __fastcall MasterMissionListViewObject___ctor(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


MasterMissionListViewItem_o *__fastcall MasterMissionListViewObject__GetItem(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4C009F5 & 1) == 0 )
  {
    sub_1C2E12C(&MasterMissionListViewItem_TypeInfo, method);
    byte_4C009F5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (MasterMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
    return (MasterMissionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall MasterMissionListViewObject__OnChangeAlphaAnim(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewItem_o *Item; // x0
  const MethodInfo *v4; // x1
  struct ListViewManager_o *manager; // x8
  MasterMissionListViewItem_o *v6; // x20
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v8; // x21
  MasterMissionListViewItemDraw_o *MasterMissionItemDraw; // x0
  __int64 v10; // x1

  if ( (byte_4C009F6 & 1) == 0 )
  {
    sub_1C2E12C(&MasterMissionListViewManager_TypeInfo, method);
    byte_4C009F6 = 1;
  }
  if ( this->fields.linkItem )
  {
    Item = MasterMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    v6 = Item;
    if ( manager
      && (methodPtr_low = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (MasterMissionListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewManager_TypeInfo )
        v8 = this->fields.manager;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    MasterMissionItemDraw = MasterMissionListViewObject__get_MasterMissionItemDraw(this, v4);
    if ( !MasterMissionItemDraw )
      sub_1C2E388(0LL, v10);
    MasterMissionListViewItemDraw__OnChangeAlphaAnim(
      MasterMissionItemDraw,
      v6,
      this->fields.dispMode,
      (MasterMissionListViewManager_o *)v8,
      0LL);
  }
}


void __fastcall MasterMissionListViewObject__Update(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  MasterMissionListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1
  struct ListViewManager_o *manager; // x8
  MasterMissionListViewItem_o *v7; // x20
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v9; // x21
  MasterMissionListViewItemDraw_o *MasterMissionItemDraw; // x0
  __int64 v11; // x1

  if ( (byte_4C009F4 & 1) == 0 )
  {
    sub_1C2E12C(&MasterMissionListViewManager_TypeInfo, method);
    byte_4C009F4 = 1;
  }
  MissionListViewObject__RedispResTime((MissionListViewObject_o *)this, 0LL);
  if ( this->fields.linkItem )
  {
    Item = MasterMissionListViewObject__GetItem(this, v3);
    manager = this->fields.manager;
    v7 = Item;
    if ( manager
      && (methodPtr_low = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (MasterMissionListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewManager_TypeInfo )
        v9 = this->fields.manager;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    MasterMissionItemDraw = MasterMissionListViewObject__get_MasterMissionItemDraw(this, v5);
    if ( !MasterMissionItemDraw )
      sub_1C2E388(0LL, v11);
    MasterMissionListViewItemDraw__UpdateItem(
      MasterMissionItemDraw,
      v7,
      this->fields.dispMode,
      (MasterMissionListViewManager_o *)v9,
      0LL);
  }
}


MasterMissionListViewItemDraw_o *__fastcall MasterMissionListViewObject__get_MasterMissionItemDraw(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4C009F3 & 1) == 0 )
  {
    sub_1C2E12C(&MasterMissionListViewItemDraw_TypeInfo, method);
    byte_4C009F3 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  methodPtr_low = LOBYTE(MasterMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemDraw->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (MasterMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItemDraw_TypeInfo )
    return (MasterMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}