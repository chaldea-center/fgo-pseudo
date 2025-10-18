void MasterMissionListViewObject___ctor(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0);
}


MasterMissionListViewItem_o *MasterMissionListViewObject__GetItem(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C4611A & 1) == 0 )
  {
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    byte_4C4611A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (MasterMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
    return (MasterMissionListViewItem_o *)this->fields.linkItem;
  return 0;
}


void MasterMissionListViewObject__OnChangeAlphaAnim(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v6; // x20
  MasterMissionListViewItemDraw_o *MasterMissionItemDraw; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C4611B & 1) == 0 )
  {
    sub_1C37058(&MasterMissionListViewManager_TypeInfo);
    byte_4C4611B = 1;
  }
  if ( this->fields.linkItem )
  {
    MasterMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (naturalAligment = MasterMissionListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (MasterMissionListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewManager_TypeInfo )
        v6 = this->fields.manager;
      else
        v6 = 0;
    }
    else
    {
      v6 = 0;
    }
    MasterMissionItemDraw = MasterMissionListViewObject__get_MasterMissionItemDraw(this, v3);
    if ( !MasterMissionItemDraw )
      sub_1C372B4(0);
    MasterMissionListViewItemDraw__ChangeNextRewardIcon(MasterMissionItemDraw, (MasterMissionListViewManager_o *)v6, v8);
  }
}


void MasterMissionListViewObject__Update(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  MasterMissionListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1
  struct ListViewManager_o *manager; // x8
  MasterMissionListViewItem_o *v7; // x20
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v9; // x21
  MasterMissionListViewItemDraw_o *MasterMissionItemDraw; // x0
  const MethodInfo *v11; // x4

  if ( (byte_4C46119 & 1) == 0 )
  {
    sub_1C37058(&MasterMissionListViewManager_TypeInfo);
    byte_4C46119 = 1;
  }
  MissionListViewObject__RedispResTime((MissionListViewObject_o *)this, 0);
  if ( this->fields.linkItem )
  {
    Item = MasterMissionListViewObject__GetItem(this, v3);
    manager = this->fields.manager;
    v7 = Item;
    if ( manager
      && (naturalAligment = MasterMissionListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (MasterMissionListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewManager_TypeInfo )
        v9 = this->fields.manager;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    MasterMissionItemDraw = MasterMissionListViewObject__get_MasterMissionItemDraw(this, v5);
    if ( !MasterMissionItemDraw )
      sub_1C372B4(0);
    MasterMissionListViewItemDraw__UpdateItem(
      MasterMissionItemDraw,
      v7,
      this->fields.dispMode,
      (MasterMissionListViewManager_o *)v9,
      v11);
  }
}


MasterMissionListViewItemDraw_o *MasterMissionListViewObject__get_MasterMissionItemDraw(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C46118 & 1) == 0 )
  {
    sub_1C37058(&MasterMissionListViewItemDraw_TypeInfo);
    byte_4C46118 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0;
  naturalAligment = MasterMissionListViewItemDraw_TypeInfo->_2.naturalAligment;
  if ( itemDraw->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (MasterMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItemDraw_TypeInfo )
    return (MasterMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0;
}