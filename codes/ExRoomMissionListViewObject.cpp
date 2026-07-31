void ExRoomMissionListViewObject___ctor(ExRoomMissionListViewObject_o *this, const MethodInfo *method)
{
  MissionListViewObject___ctor((MissionListViewObject_o *)this, 0);
}


ExRoomMissionListViewItem_o *ExRoomMissionListViewObject__GetItem(
        ExRoomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5932E1F & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionListViewItem_TypeInfo);
    byte_5932E1F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ExRoomMissionListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ExRoomMissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomMissionListViewItem_TypeInfo )
    return (ExRoomMissionListViewItem_o *)this->fields.linkItem;
  return 0;
}


void ExRoomMissionListViewObject__OnChangeAlphaAnim(ExRoomMissionListViewObject_o *this, const MethodInfo *method)
{
  ExRoomMissionListViewItem_o *Item; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewManager_o *manager; // x8
  ExRoomMissionListViewItem_o *v7; // x20
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v9; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x22
  const MethodInfo *v14; // x1
  ExRoomMissionListViewItemDraw_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4

  if ( (byte_5932E21 & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E21 = 1;
  }
  if ( this->fields.linkItem )
  {
    Item = ExRoomMissionListViewObject__GetItem(this, method);
    manager = this->fields.manager;
    v7 = Item;
    if ( manager
      && (naturalAligment = ExRoomMissionListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ExRoomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomMissionListViewManager_TypeInfo )
        v9 = this->fields.manager;
      else
        v9 = 0;
      if ( !Item )
        return;
    }
    else
    {
      v9 = 0;
      if ( !Item )
        return;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0) )
    {
      v13 = (UnityEngine_Object_o *)ExRoomMissionListViewObject__get_ExRoomItemDraw(this, v10);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
      {
        v15 = ExRoomMissionListViewObject__get_ExRoomItemDraw(this, v14);
        if ( !v15 )
          sub_21FFECC(0, v16);
        ExRoomMissionListViewItemDraw__OnChangeAlphaAnim(
          v15,
          v7,
          this->fields.dispMode,
          (ExRoomMissionListViewManager_o *)v9,
          v17);
      }
    }
  }
}


void ExRoomMissionListViewObject__Update(ExRoomMissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ExRoomMissionListViewItem_o *Item; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ListViewManager_o *manager; // x8
  ExRoomMissionListViewItem_o *v8; // x20
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v10; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *v14; // x22
  const MethodInfo *v15; // x1
  ExRoomMissionListViewItemDraw_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4

  if ( (byte_5932E20 & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E20 = 1;
  }
  MissionListViewObject__RedispResTime((MissionListViewObject_o *)this, 0);
  if ( this->fields.linkItem )
  {
    Item = ExRoomMissionListViewObject__GetItem(this, v3);
    manager = this->fields.manager;
    v8 = Item;
    if ( manager
      && (naturalAligment = ExRoomMissionListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ExRoomMissionListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomMissionListViewManager_TypeInfo )
        v10 = this->fields.manager;
      else
        v10 = 0;
      if ( !Item )
        return;
    }
    else
    {
      v10 = 0;
      if ( !Item )
        return;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0) )
    {
      v14 = (UnityEngine_Object_o *)ExRoomMissionListViewObject__get_ExRoomItemDraw(this, v11);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      if ( !UnityEngine_Object__op_Equality(v14, 0, 0) )
      {
        v16 = ExRoomMissionListViewObject__get_ExRoomItemDraw(this, v15);
        if ( !v16 )
          sub_21FFECC(0, v17);
        ExRoomMissionListViewItemDraw__UpdateItem(
          v16,
          v8,
          this->fields.dispMode,
          (ExRoomMissionListViewManager_o *)v10,
          v18);
      }
    }
  }
}


ExRoomMissionListViewItemDraw_o *ExRoomMissionListViewObject__get_ExRoomItemDraw(
        ExRoomMissionListViewObject_o *this,
        const MethodInfo *method)
{
  struct MissionListViewItemDraw_o *itemDraw; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5932E1E & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionListViewItemDraw_TypeInfo);
    byte_5932E1E = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    return 0;
  naturalAligment = ExRoomMissionListViewItemDraw_TypeInfo->_2.naturalAligment;
  if ( itemDraw->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ExRoomMissionListViewItemDraw_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomMissionListViewItemDraw_TypeInfo )
    return (ExRoomMissionListViewItemDraw_o *)this->fields.itemDraw;
  return 0;
}