void ServantSellConfirmListViewObject___ctor(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C52EB7 & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    byte_4C52EB7 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantSellConfirmListViewObject__Awake(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C52EAB & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewItemDraw___);
    byte_4C52EAB = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3E7C0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewItemDraw___);
  this->fields.itemDraw = (struct ServantSellConfirmListViewItemDraw_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void ServantSellConfirmListViewObject__CallOnMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (CGThumbnailListItem_o *)&this->fields.onMoveEnd;
  v5 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_1C3E508(p_onMoveEnd, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


UnityEngine_GameObject_o *ServantSellConfirmListViewObject__CreateDragObject(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  ServantSellConfirmListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4C52EB0 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52EB0 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___)) == 0 )
    {
      sub_1C3E7C0(Component_object, v5);
    }
    v7 = (ServantSellConfirmListViewObject_o *)Component_object;
    ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Component_object, 2, 0, v6);
    ServantSellConfirmListViewObject__SetupDisp(v7, v8);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


ServantSellConfirmListViewItem_o *ServantSellConfirmListViewObject__GetItem(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C52EAD & 1) == 0 )
  {
    sub_1C3E564(&ServantSellConfirmListViewItem_TypeInfo);
    byte_4C52EAD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewItem_TypeInfo )
    return (ServantSellConfirmListViewItem_o *)this->fields.linkItem;
  return 0;
}


int32_t ServantSellConfirmListViewObject__GetState(
        ServantSellConfirmListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  if ( initMode == 3 )
    return 3;
  return 0;
}


void ServantSellConfirmListViewObject__Init(
        ServantSellConfirmListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 naturalAligment; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  int32_t v16; // w9
  int32_t v17; // w8

  if ( (byte_4C52EB1 & 1) == 0 )
  {
    sub_1C3E564(&ServantSellConfirmListViewItem_TypeInfo);
    byte_4C52EB1 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantSellConfirmListViewItem_TypeInfo )
  {
    sub_1C3EA80(linkItem);
LABEL_7:
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(ServantSellConfirmListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C3E7C0(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v13, v14);
  if ( initMode == 1 )
    goto LABEL_13;
  if ( initMode == 3 )
  {
    v17 = 2;
    this->fields.dispMode = 2;
  }
  else
  {
    if ( initMode == 2 )
    {
LABEL_13:
      this->fields.dispMode = initMode;
      v16 = 1;
      v17 = initMode;
      goto LABEL_20;
    }
    v17 = 0;
    this->fields.dispMode = 0;
    if ( (unsigned int)initMode < 3 )
    {
      v16 = 1;
      goto LABEL_20;
    }
  }
  if ( initMode == 3 )
    v16 = 3;
  else
    v16 = 0;
LABEL_20:
  this->fields.state = v16;
  if ( !state || dispMode != v17 )
    ServantSellConfirmListViewObject__SetupDisp(this, v15);
  ServantSellConfirmListViewObject__CallOnMoveEnd(this, v15);
}


void ServantSellConfirmListViewObject__InitItem(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


bool ServantSellConfirmListViewObject__IsCanDrag(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4C52EAF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C3E564(&ServantSellConfirmListViewManager_TypeInfo);
    byte_4C52EAF = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_13;
  naturalAligment = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantSellConfirmListViewManager_TypeInfo )
  {
    sub_1C3EA80(manager);
    goto LABEL_13;
  }
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
  {
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0);
      return 0;
    }
LABEL_13:
    sub_1C3E7C0(manager, method);
  }
  return 0;
}


void ServantSellConfirmListViewObject__OnClickSelect(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmListViewObject_o *v2; // x20
  Il2CppObject *linkItem; // x19
  ServantSellConfirmListViewItem_c *v4; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *manager; // x22
  __int64 v7; // x10
  struct ListViewManager_o *v8; // x21
  __int64 *v9; // x8
  Il2CppObject *v10; // x2
  UnityEngine_Component_o *v11; // x0
  int monitor_high; // w8
  UserServantEntity_o *monitor; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  v2 = this;
  if ( (byte_4C52EB3 & 1) == 0 )
  {
    sub_1C3E564(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C3E564(&ServantSellConfirmListViewManager_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmListViewObject_OnClickSelect__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&StringLiteral_9868/*"OnClickSelectListView"*/);
    this = (ServantSellConfirmListViewObject_o *)sub_1C3E564(&StringLiteral_9861/*"OnClickLockModeItem"*/);
    byte_4C52EB3 = 1;
  }
  linkItem = (Il2CppObject *)v2->fields.linkItem;
  if ( linkItem )
  {
    v4 = ServantSellConfirmListViewItem_TypeInfo;
    naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantSellConfirmListViewItem_TypeInfo )
    {
      sub_1C3EA80(v2->fields.linkItem);
      goto LABEL_31;
    }
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( manager
      && (v7 = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)v7) )
    {
      if ( (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == ServantSellConfirmListViewManager_TypeInfo )
        v8 = v2->fields.manager;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    if ( BYTE4(linkItem[11].monitor) )
    {
LABEL_14:
      this = (ServantSellConfirmListViewObject_o *)ServantSellConfirmListViewObject__GetItem(v2, (const MethodInfo *)v4);
      if ( manager )
      {
        v9 = &StringLiteral_9868/*"OnClickSelectListView"*/;
        v10 = (Il2CppObject *)this;
        v11 = manager;
LABEL_25:
        UnityEngine_Component__SendMessage(v11, (System_String_o *)*v9, v10, 0);
        return;
      }
LABEL_31:
      sub_1C3E7C0(this, v4);
    }
    if ( !v8 )
      goto LABEL_31;
    monitor_high = HIDWORD(v8[1].monitor);
    if ( monitor_high == 2 || monitor_high == 1 )
    {
      monitor = (UserServantEntity_o *)linkItem[7].monitor;
      if ( !monitor || !UserServantEntity__IsHeroine(monitor, 0) )
        goto LABEL_24;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_40473944(126, 0) )
      {
LABEL_24:
        v9 = &StringLiteral_9861/*"OnClickLockModeItem"*/;
        v11 = (UnityEngine_Component_o *)v8;
        v10 = linkItem;
        goto LABEL_25;
      }
    }
    else if ( !ServantSellConfirmListViewItem__get_IsCanNotSelect(
                 (ServantSellConfirmListViewItem_o *)v2->fields.linkItem,
                 (const MethodInfo *)ServantSellConfirmListViewItem_TypeInfo) )
    {
      goto LABEL_14;
    }
    v14 = Method_ServantSellConfirmListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_ServantSellConfirmListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C3E57C(Method_ServantSellConfirmListViewObject_OnClickSelect__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C3E548(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
  }
}


void ServantSellConfirmListViewObject__OnDestroy(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C52EAC & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52EAC = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C3E508(p_dragObject, 0, v7, v8);
  }
}


void ServantSellConfirmListViewObject__OnDragDropStart(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmListViewObject_o *v2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x10

  v2 = this;
  if ( (byte_4C52EB5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (ServantSellConfirmListViewObject_o *)sub_1C3E564(&ServantSellConfirmListViewManager_TypeInfo);
    byte_4C52EB5 = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (naturalAligment = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantSellConfirmListViewManager_TypeInfo )
  {
    sub_1C3E7C0(this, method);
  }
}


void ServantSellConfirmListViewObject__OnLongPush(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  void *linkItem; // x0
  ServantSellConfirmListViewItem_c *v4; // x1
  __int64 naturalAligment; // x9
  __int64 v6; // x9

  if ( (byte_4C52EB4 & 1) == 0 )
  {
    sub_1C3E564(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C3E564(&ServantSellConfirmListViewManager_TypeInfo);
    byte_4C52EB4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = ServantSellConfirmListViewItem_TypeInfo;
    naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)naturalAligment
      && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * naturalAligment - 8) == ServantSellConfirmListViewItem_TypeInfo )
    {
      linkItem = this->fields.manager;
      if ( !linkItem )
        goto LABEL_11;
      v6 = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)v6
        && *(ServantSellConfirmListViewManager_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v6 - 8) == ServantSellConfirmListViewManager_TypeInfo )
      {
        return;
      }
    }
    sub_1C3EA80(linkItem);
LABEL_11:
    sub_1C3E7C0(linkItem, v4);
  }
}


void ServantSellConfirmListViewObject__OnLongRelease(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C52EB6 & 1) == 0 )
  {
    sub_1C3E564(&ServantSellConfirmListViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_9928/*"OnLongPushListView"*/);
    sub_1C3E564(&StringLiteral_4033/*"CancelDragEnd"*/);
    byte_4C52EB6 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager )
    {
      naturalAligment = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[1].monitor) )
          return;
        UnityEngine_Component__SendMessage_71313284(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4033/*"CancelDragEnd"*/,
          0);
        manager = this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9928/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
    }
    sub_1C3E7C0(manager, method);
  }
}


void ServantSellConfirmListViewObject__SetInput(
        ServantSellConfirmListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x3
  ServantSellConfirmListViewItemDraw_o *manager; // x0
  __int64 v8; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  ServantSellConfirmListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C52EAE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C3E564(&ServantSellConfirmListViewManager_TypeInfo);
    byte_4C52EAE = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    manager = (ServantSellConfirmListViewItemDraw_o *)this->fields.manager;
    if ( manager
      && ((v8 = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment,
           manager->klass->_2.naturalAligment < (unsigned int)v8)
       || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != ServantSellConfirmListViewManager_TypeInfo) )
    {
      sub_1C3EA80(manager);
    }
    else
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem
        || (naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment,
            linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        if ( !manager || (manager = this->fields.itemDraw) == 0 )
          sub_1C3E7C0(manager, linkItem);
        ServantSellConfirmListViewItemDraw__SetInput(manager, (ServantSellConfirmListViewItem_o *)linkItem, 1, v6);
        return;
      }
    }
    sub_1C3EA80(linkItem);
    ServantSellConfirmListViewObject__IsCanDrag(v11, v12);
  }
}


void ServantSellConfirmListViewObject__SetItem(
        ServantSellConfirmListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43886976((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void ServantSellConfirmListViewObject__SetItem_35146980(
        ServantSellConfirmListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void ServantSellConfirmListViewObject__SetupDisp(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  ServantSellConfirmListViewItemDraw_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4C52EB2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C3E564(&ServantSellConfirmListViewManager_TypeInfo);
    byte_4C52EB2 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
      || *(ServantSellConfirmListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != ServantSellConfirmListViewManager_TypeInfo )
    {
      sub_1C3EA80(this->fields.manager);
      goto LABEL_18;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v6
      && (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ServantSellConfirmListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_18:
    sub_1C3EA80(linkItem);
    goto LABEL_19;
  }
  v7 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (ServantSellConfirmListViewItemDraw_o *)UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( manager )
    {
      v9 = this->fields.itemDraw;
      if ( v9 )
      {
        ServantSellConfirmListViewItemDraw__SetItem(
          v9,
          (ServantSellConfirmListViewItem_o *)linkItem,
          this->fields.dispMode,
          1,
          manager[85],
          v11);
        return;
      }
    }
LABEL_19:
    sub_1C3E7C0(v9, v10);
  }
}


void ServantSellConfirmListViewObject__add_onMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantSellConfirmListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C52EA9 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C52EA9 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C787BC(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ServantSellConfirmListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void ServantSellConfirmListViewObject__remove_onMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantSellConfirmListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C52EAA & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C52EAA = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C787BC(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ServantSellConfirmListViewObject__Awake(v11, v12);
}