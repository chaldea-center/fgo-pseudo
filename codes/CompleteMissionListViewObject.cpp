void CompleteMissionListViewObject___ctor(CompleteMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0);
}


CompleteMissionListViewItem_o *CompleteMissionListViewObject__GetItem(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC5F04 & 1) == 0 )
  {
    sub_1C713B0(&CompleteMissionListViewItem_TypeInfo);
    byte_4CC5F04 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CompleteMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CompleteMissionListViewItem_TypeInfo )
    return (CompleteMissionListViewItem_o *)this->fields.linkItem;
  return 0;
}


void CompleteMissionListViewObject__OnChangeAlphaAnim(CompleteMissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v6; // x20
  CompleteMissionListViewItemDraw_o *CompleteMissionItemDraw; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4CC5F05 & 1) == 0 )
  {
    sub_1C713B0(&CompleteMissionListViewManager_TypeInfo);
    byte_4CC5F05 = 1;
  }
  if ( this->fields.linkItem )
  {
    CompleteMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (naturalAligment = CompleteMissionListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (CompleteMissionListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CompleteMissionListViewManager_TypeInfo )
        v6 = this->fields.manager;
      else
        v6 = 0;
    }
    else
    {
      v6 = 0;
    }
    CompleteMissionItemDraw = CompleteMissionListViewObject__get_CompleteMissionItemDraw(this, v3);
    if ( !CompleteMissionItemDraw )
      sub_1C71608(0, v8);
    CompleteMissionListViewItemDraw__ChangeNextRewardIcon(
      CompleteMissionItemDraw,
      (CompleteMissionListViewManager_o *)v6,
      v9);
  }
}


void CompleteMissionListViewObject__Update(CompleteMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject__RedispResTime((MissionListViewObject_o *)this, 0);
}


CompleteMissionListViewItemDraw_o *CompleteMissionListViewObject__get_CompleteMissionItemDraw(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC5F03 & 1) == 0 )
  {
    sub_1C713B0(&CompleteMissionListViewItemDraw_TypeInfo);
    byte_4CC5F03 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0;
  naturalAligment = CompleteMissionListViewItemDraw_TypeInfo->_2.naturalAligment;
  if ( itemDraw->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CompleteMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == CompleteMissionListViewItemDraw_TypeInfo )
    return (CompleteMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0;
}