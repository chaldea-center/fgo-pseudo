void __fastcall MasterMissionListViewObject___ctor(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


MasterMissionListViewItem_o *__fastcall MasterMissionListViewObject__GetItem(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_4189CB1 & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, method);
    byte_4189CB1 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (MasterMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == MasterMissionListViewItem_TypeInfo )
    return (MasterMissionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall MasterMissionListViewObject__OnChangeAlphaAnim(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v5; // x11
  struct ListViewManager_o *v6; // x20
  MasterMissionListViewItemDraw_o *MasterMissionItemDraw; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4189CB2 & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionListViewManager_TypeInfo, method);
    byte_4189CB2 = 1;
  }
  if ( this->fields.linkItem )
  {
    MasterMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (v5 = *(&MasterMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
    {
      if ( (MasterMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] == MasterMissionListViewManager_TypeInfo )
        v6 = this->fields.manager;
      else
        v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    MasterMissionItemDraw = MasterMissionListViewObject__get_MasterMissionItemDraw(this, v3);
    if ( !MasterMissionItemDraw )
      sub_B2C434(0LL, v8);
    MasterMissionListViewItemDraw__ChangeNextRewardIcon(MasterMissionItemDraw, (MasterMissionListViewManager_o *)v6, v9);
  }
}


void __fastcall MasterMissionListViewObject__Update(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  MasterMissionListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1
  struct ListViewManager_o *manager; // x8
  MasterMissionListViewItem_o *v7; // x20
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x21
  MasterMissionListViewItemDraw_o *MasterMissionItemDraw; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_4189CB0 & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionListViewManager_TypeInfo, method);
    byte_4189CB0 = 1;
  }
  MissionListViewObject__RedispResTime((MissionListViewObject_o *)this, 0LL);
  if ( this->fields.linkItem )
  {
    Item = MasterMissionListViewObject__GetItem(this, v3);
    manager = this->fields.manager;
    v7 = Item;
    if ( manager
      && (v8 = *(&MasterMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (MasterMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == MasterMissionListViewManager_TypeInfo )
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
      sub_B2C434(0LL, v11);
    MasterMissionListViewItemDraw__UpdateItem(
      MasterMissionItemDraw,
      v7,
      this->fields.dispMode,
      (MasterMissionListViewManager_o *)v9,
      v12);
  }
}


MasterMissionListViewItemDraw_o *__fastcall MasterMissionListViewObject__get_MasterMissionItemDraw(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 v4; // x11

  if ( (byte_4189CAF & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionListViewItemDraw_TypeInfo, method);
    byte_4189CAF = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  v4 = *(&MasterMissionListViewItemDraw_TypeInfo->_2.bitflags2 + 1);
  if ( *(&itemDraw->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (MasterMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[v4 - 1] == MasterMissionListViewItemDraw_TypeInfo )
    return (MasterMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}