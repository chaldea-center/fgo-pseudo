void __fastcall CompleteMissionListViewObject___ctor(CompleteMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


CompleteMissionListViewItem_o *__fastcall CompleteMissionListViewObject__GetItem(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438ACB3 & 1) == 0 )
  {
    sub_B775C4(&CompleteMissionListViewItem_TypeInfo);
    byte_438ACB3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (CompleteMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == CompleteMissionListViewItem_TypeInfo )
    return (CompleteMissionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall CompleteMissionListViewObject__OnChangeAlphaAnim(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v5; // x11
  struct ListViewManager_o *v6; // x20
  CompleteMissionListViewItemDraw_o *CompleteMissionItemDraw; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_438ACB4 & 1) == 0 )
  {
    sub_B775C4(&CompleteMissionListViewManager_TypeInfo);
    byte_438ACB4 = 1;
  }
  if ( this->fields.linkItem )
  {
    CompleteMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (v5 = *(&CompleteMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
    {
      if ( (CompleteMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] == CompleteMissionListViewManager_TypeInfo )
        v6 = this->fields.manager;
      else
        v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    CompleteMissionItemDraw = CompleteMissionListViewObject__get_CompleteMissionItemDraw(this, v3);
    if ( !CompleteMissionItemDraw )
      sub_B7769C(0LL, v8);
    CompleteMissionListViewItemDraw__ChangeNextRewardIcon(
      CompleteMissionItemDraw,
      (CompleteMissionListViewManager_o *)v6,
      v9);
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
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 v4; // x11

  if ( (byte_438ACB2 & 1) == 0 )
  {
    sub_B775C4(&CompleteMissionListViewItemDraw_TypeInfo);
    byte_438ACB2 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  v4 = *(&CompleteMissionListViewItemDraw_TypeInfo->_2.bitflags2 + 1);
  if ( *(&itemDraw->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (CompleteMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[v4 - 1] == CompleteMissionListViewItemDraw_TypeInfo )
    return (CompleteMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}