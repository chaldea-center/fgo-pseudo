void __fastcall CompleteMissionListViewObject___ctor(CompleteMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


CompleteMissionListViewItem_o *__fastcall CompleteMissionListViewObject__GetItem(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B14F60 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, method, v2);
    byte_4B14F60 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CompleteMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CompleteMissionListViewItem_TypeInfo )
    return (CompleteMissionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall CompleteMissionListViewObject__OnChangeAlphaAnim(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v7; // x20
  CompleteMissionListViewItemDraw_o *CompleteMissionItemDraw; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B14F61 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewManager_TypeInfo, method, v2);
    byte_4B14F61 = 1;
  }
  if ( this->fields.linkItem )
  {
    CompleteMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (methodPtr_low = LOBYTE(CompleteMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (CompleteMissionListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CompleteMissionListViewManager_TypeInfo )
        v7 = this->fields.manager;
      else
        v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    CompleteMissionItemDraw = CompleteMissionListViewObject__get_CompleteMissionItemDraw(this, v4);
    if ( !CompleteMissionItemDraw )
      sub_1BCAA3C(0LL, v9);
    CompleteMissionListViewItemDraw__ChangeNextRewardIcon(
      CompleteMissionItemDraw,
      (CompleteMissionListViewManager_o *)v7,
      v10);
  }
}


void __fastcall CompleteMissionListViewObject__Update(CompleteMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject__RedispResTime((MissionListViewObject_o *)this, 0LL);
}


CompleteMissionListViewItemDraw_o *__fastcall CompleteMissionListViewObject__get_CompleteMissionItemDraw(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B14F5F & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItemDraw_TypeInfo, method, v2);
    byte_4B14F5F = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  methodPtr_low = LOBYTE(CompleteMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemDraw->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CompleteMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[methodPtr_low - 1] == CompleteMissionListViewItemDraw_TypeInfo )
    return (CompleteMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}