void __fastcall CompleteMissionListViewObject___ctor(CompleteMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0LL);
}


CompleteMissionListViewItem_o *__fastcall CompleteMissionListViewObject__GetItem(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E8F13 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F13 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (CompleteMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CompleteMissionListViewItem_TypeInfo )
    return (CompleteMissionListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall CompleteMissionListViewObject__OnChangeAlphaAnim(
        CompleteMissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v7; // x11
  struct ListViewManager_o *v8; // x20
  CompleteMissionListViewItemDraw_o *CompleteMissionItemDraw; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42E8F14 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F14 = 1;
  }
  if ( this->fields.linkItem )
  {
    CompleteMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    if ( manager
      && (v7 = *(&CompleteMissionListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
    {
      if ( (CompleteMissionListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == CompleteMissionListViewManager_TypeInfo )
        v8 = this->fields.manager;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    CompleteMissionItemDraw = CompleteMissionListViewObject__get_CompleteMissionItemDraw(this, v5);
    if ( !CompleteMissionItemDraw )
      sub_B5D69C(0LL, v10);
    CompleteMissionListViewItemDraw__ChangeNextRewardIcon(
      CompleteMissionItemDraw,
      (CompleteMissionListViewManager_o *)v8,
      v11);
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
  int v2; // w2
  __int64 v3; // x3
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 v6; // x11

  if ( (byte_42E8F12 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F12 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0LL;
  v6 = *(&CompleteMissionListViewItemDraw_TypeInfo->_2.bitflags2 + 1);
  if ( *(&itemDraw->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (CompleteMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[v6 - 1] == CompleteMissionListViewItemDraw_TypeInfo )
    return (CompleteMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0LL;
}