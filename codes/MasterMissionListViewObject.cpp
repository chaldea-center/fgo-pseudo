void __fastcall MasterMissionListViewObject___ctor(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


MasterMissionListViewItem_o *__fastcall MasterMissionListViewObject__GetItem(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E89D9 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89D9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (MasterMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == MasterMissionListViewItem_TypeInfo )
    return (MasterMissionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall MasterMissionListViewObject__OnChangeAlphaAnim(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v7; // x11
  struct ListViewManager_o *v8; // x20
  MasterMissionListViewItemDraw_o *MasterMissionItemDraw; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42E89DA & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89DA = 1;
  }
  if ( this->fields.linkItem )
  {
    MasterMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (v7 = *(&MasterMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
    {
      if ( (MasterMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == MasterMissionListViewManager_TypeInfo )
        v8 = this->fields.manager;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    MasterMissionItemDraw = MasterMissionListViewObject__get_MasterMissionItemDraw(this, v5);
    if ( !MasterMissionItemDraw )
      sub_B5D69C(0LL, v10);
    MasterMissionListViewItemDraw__ChangeNextRewardIcon(
      MasterMissionItemDraw,
      (MasterMissionListViewManager_o *)v8,
      v11);
  }
}


void __fastcall MasterMissionListViewObject__Update(MasterMissionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  MasterMissionListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  struct ListViewManager_o *manager; // x8
  MasterMissionListViewItem_o *v9; // x20
  __int64 v10; // x11
  struct ListViewManager_o *v11; // x21
  MasterMissionListViewItemDraw_o *MasterMissionItemDraw; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4

  if ( (byte_42E89D8 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89D8 = 1;
  }
  MissionListViewObject__RedispResTime((MissionListViewObject_o *)this, 0LL);
  if ( this->fields.linkItem )
  {
    Item = MasterMissionListViewObject__GetItem(this, v5);
    manager = this->fields.manager;
    v9 = Item;
    if ( manager
      && (v10 = *(&MasterMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
    {
      if ( (MasterMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == MasterMissionListViewManager_TypeInfo )
        v11 = this->fields.manager;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    MasterMissionItemDraw = MasterMissionListViewObject__get_MasterMissionItemDraw(this, v7);
    if ( !MasterMissionItemDraw )
      sub_B5D69C(0LL, v13);
    MasterMissionListViewItemDraw__UpdateItem(
      MasterMissionItemDraw,
      v9,
      this->fields.dispMode,
      (MasterMissionListViewManager_o *)v11,
      v14);
  }
}


MasterMissionListViewItemDraw_o *__fastcall MasterMissionListViewObject__get_MasterMissionItemDraw(
        MasterMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 v6; // x11

  if ( (byte_42E89D7 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89D7 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  v6 = *(&MasterMissionListViewItemDraw_TypeInfo->_2.bitflags2 + 1);
  if ( *(&itemDraw->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (MasterMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[v6 - 1] == MasterMissionListViewItemDraw_TypeInfo )
    return (MasterMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}