void ServantSellConfirmListViewObject___ctor(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C746 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596C746 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantSellConfirmListViewObject__Awake(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596C73A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewItemDraw___);
    byte_596C73A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewItemDraw___);
  this->fields.itemDraw = (struct ServantSellConfirmListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void ServantSellConfirmListViewObject__CallOnMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_2213A04(p_onMoveEnd, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


UnityEngine_GameObject_o *ServantSellConfirmListViewObject__CreateDragObject(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ServantSellConfirmListViewObject_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_596C73F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C73F = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___)) == 0 )
    {
      sub_2213CDC(Component_object, v7);
    }
    v9 = (ServantSellConfirmListViewObject_o *)Component_object;
    ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Component_object, 2, 0, v8);
    ServantSellConfirmListViewObject__SetupDisp(v9, v10);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


ServantSellConfirmListViewItem_o *ServantSellConfirmListViewObject__GetItem(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596C73C & 1) == 0 )
  {
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    byte_596C73C = 1;
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
  int32_t v3; // w8

  if ( initMode == 3 )
    v3 = 3;
  else
    v3 = 0;
  if ( (unsigned int)initMode <= 2 )
    return 1;
  else
    return v3;
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  int32_t v20; // w8
  int32_t v21; // w9

  if ( (byte_596C740 & 1) == 0 )
  {
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    byte_596C740 = 1;
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
    sub_221405C(linkItem, ServantSellConfirmListViewItem_TypeInfo, onMoveEnd, method);
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
    sub_2213CDC(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( (unsigned int)(initMode - 1) > 2 )
    v20 = 0;
  else
    v20 = dword_ED8B08[initMode - 1];
  this->fields.dispMode = v20;
  if ( initMode == 3 )
    v21 = 3;
  else
    v21 = 0;
  if ( (unsigned int)initMode <= 2 )
    v21 = 1;
  this->fields.state = v21;
  if ( !state || dispMode != v20 )
    ServantSellConfirmListViewObject__SetupDisp(this, v19);
  ServantSellConfirmListViewObject__CallOnMoveEnd(this, v19);
}


void ServantSellConfirmListViewObject__InitItem(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


bool ServantSellConfirmListViewObject__IsCanDrag(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_596C73E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewManager_TypeInfo);
    byte_596C73E = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_13;
  naturalAligment = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantSellConfirmListViewManager_TypeInfo )
  {
    sub_221405C(manager, ServantSellConfirmListViewManager_TypeInfo, v2, v3);
    goto LABEL_13;
  }
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ServantSellConfirmListViewManager_TypeInfo, v2);
  if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
  {
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0);
      return 0;
    }
LABEL_13:
    sub_2213CDC(manager, method);
  }
  return 0;
}


void ServantSellConfirmListViewObject__OnClickSelect(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantSellConfirmListViewObject_o *v4; // x20
  Il2CppObject *linkItem; // x19
  ServantSellConfirmListViewItem_c *v6; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *manager; // x22
  __int64 v9; // x10
  struct ListViewManager_o *v10; // x21
  Il2CppObject *Item; // x2
  UnityEngine_Component_o *v12; // x0
  __int64 *v13; // x8
  int monitor_high; // w8
  UserServantEntity_o *monitor; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  v4 = this;
  if ( (byte_596C742 & 1) == 0 )
  {
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewManager_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmListViewObject_OnClickSelect__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_10267/*"OnClickSelectListView"*/);
    this = (ServantSellConfirmListViewObject_o *)sub_2213A60(&StringLiteral_10260/*"OnClickLockModeItem"*/);
    byte_596C742 = 1;
  }
  linkItem = (Il2CppObject *)v4->fields.linkItem;
  if ( !linkItem )
    return;
  v6 = ServantSellConfirmListViewItem_TypeInfo;
  naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantSellConfirmListViewItem_TypeInfo )
  {
    sub_221405C(v4->fields.linkItem, ServantSellConfirmListViewItem_TypeInfo, v2, v3);
LABEL_30:
    if ( BYTE1(linkItem[11].monitor) )
      this = (ServantSellConfirmListViewObject_o *)ServantSellConfirmListViewObject__GetItem(v4, (const MethodInfo *)v6);
    goto LABEL_32;
  }
  manager = (UnityEngine_Component_o *)v4->fields.manager;
  if ( !manager )
    goto LABEL_30;
  v9 = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment >= (unsigned int)v9 )
  {
    if ( (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == ServantSellConfirmListViewManager_TypeInfo )
      v10 = v4->fields.manager;
    else
      v10 = 0;
  }
  else
  {
    v10 = 0;
  }
  if ( BYTE1(linkItem[11].monitor) )
    goto LABEL_14;
  if ( !v10 )
LABEL_32:
    sub_2213CDC(this, v6);
  monitor_high = HIDWORD(v10[1].monitor);
  if ( monitor_high == 2 || monitor_high == 1 )
  {
    monitor = (UserServantEntity_o *)linkItem[7].monitor;
    if ( !monitor || !UserServantEntity__IsHeroine(monitor, 0) )
      goto LABEL_23;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v16, v17);
    if ( !TutorialFlag__Get_47388504(126, 0) )
    {
LABEL_23:
      v12 = (UnityEngine_Component_o *)v10;
      Item = linkItem;
      v13 = &StringLiteral_10260/*"OnClickLockModeItem"*/;
      goto LABEL_24;
    }
  }
  else if ( !ServantSellConfirmListViewItem__get_IsCanNotSelect(
               (ServantSellConfirmListViewItem_o *)v4->fields.linkItem,
               (const MethodInfo *)ServantSellConfirmListViewItem_TypeInfo) )
  {
LABEL_14:
    Item = (Il2CppObject *)ServantSellConfirmListViewObject__GetItem(v4, (const MethodInfo *)v6);
    v12 = manager;
    v13 = &StringLiteral_10267/*"OnClickSelectListView"*/;
LABEL_24:
    UnityEngine_Component__SendMessage(v12, (System_String_o *)*v13, Item, 0);
    return;
  }
  v18 = Method_ServantSellConfirmListViewObject_OnClickSelect__;
  if ( (*((_BYTE *)Method_ServantSellConfirmListViewObject_OnClickSelect__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_2213A78(Method_ServantSellConfirmListViewObject_OnClickSelect__);
  v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
}


void ServantSellConfirmListViewObject__OnDestroy(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C73B & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C73B = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void ServantSellConfirmListViewObject__OnDragDropStart(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmListViewObject_o *v2; // x19
  struct ListViewManager_o *manager; // x9
  ListViewManager_c *klass; // x9
  __int64 naturalAligment; // x10

  v2 = this;
  if ( (byte_596C744 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (ServantSellConfirmListViewObject_o *)sub_2213A60(&ServantSellConfirmListViewManager_TypeInfo);
    byte_596C744 = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (klass = manager->klass,
        naturalAligment = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantSellConfirmListViewManager_c *)klass->_2.typeHierarchy[naturalAligment - 1] != ServantSellConfirmListViewManager_TypeInfo )
  {
    sub_2213CDC(this, method);
  }
}


void ServantSellConfirmListViewObject__OnLongPush(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  void *linkItem; // x0
  void *v6; // x1
  __int64 naturalAligment; // x9
  __int64 v8; // x9

  if ( (byte_596C743 & 1) == 0 )
  {
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewManager_TypeInfo);
    byte_596C743 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = ServantSellConfirmListViewItem_TypeInfo;
    naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)naturalAligment
      && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * naturalAligment - 8) == ServantSellConfirmListViewItem_TypeInfo )
    {
      linkItem = this->fields.manager;
      if ( !linkItem )
        goto LABEL_11;
      v6 = ServantSellConfirmListViewManager_TypeInfo;
      v8 = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)v8
        && *(ServantSellConfirmListViewManager_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v8 - 8) == ServantSellConfirmListViewManager_TypeInfo )
      {
        return;
      }
    }
    sub_221405C(linkItem, v6, v2, v3);
LABEL_11:
    sub_2213CDC(linkItem, v6);
  }
}


void ServantSellConfirmListViewObject__OnLongRelease(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596C745 & 1) == 0 )
  {
    sub_2213A60(&ServantSellConfirmListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    sub_2213A60(&StringLiteral_4180/*"CancelDragEnd"*/);
    byte_596C745 = 1;
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
        UnityEngine_Component__SendMessage_83422876(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4180/*"CancelDragEnd"*/,
          0);
        manager = this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10330/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
    }
    sub_2213CDC(manager, method);
  }
}


void ServantSellConfirmListViewObject__SetInput(
        ServantSellConfirmListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  ServantSellConfirmListViewItemDraw_o *manager; // x0
  __int64 v11; // x9
  struct ListViewItem_o *linkItem; // x1
  ServantSellConfirmListViewItem_c *v13; // x8
  __int64 naturalAligment; // x10
  ServantSellConfirmListViewObject_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_596C73D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewManager_TypeInfo);
    byte_596C73D = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    manager = (ServantSellConfirmListViewItemDraw_o *)this->fields.manager;
    if ( manager
      && ((v11 = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment,
           manager->klass->_2.naturalAligment < (unsigned int)v11)
       || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != ServantSellConfirmListViewManager_TypeInfo) )
    {
      sub_221405C(manager, ServantSellConfirmListViewManager_TypeInfo, v8, v9);
    }
    else
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem
        || (v13 = ServantSellConfirmListViewItem_TypeInfo,
            naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment,
            linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        if ( !manager || (manager = this->fields.itemDraw) == 0 )
          sub_2213CDC(manager, linkItem);
        ServantSellConfirmListViewItemDraw__SetInput(manager, (ServantSellConfirmListViewItem_o *)linkItem, 1, v9);
        return;
      }
    }
    sub_221405C(linkItem, v13, v8, v9);
    ServantSellConfirmListViewObject__IsCanDrag(v15, v16);
  }
}


void ServantSellConfirmListViewObject__SetItem(
        ServantSellConfirmListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void ServantSellConfirmListViewObject__SetItem_41860036(
        ServantSellConfirmListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void ServantSellConfirmListViewObject__SetupDisp(ServantSellConfirmListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 naturalAligment; // x9
  ServantSellConfirmListViewItem_c *v8; // x1
  __int64 v9; // x9
  bool v10; // w1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *itemDraw; // x22
  ServantSellConfirmListViewItemDraw_o *v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x5

  if ( (byte_596C741 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewManager_TypeInfo);
    byte_596C741 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = ServantSellConfirmListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
      || *(ServantSellConfirmListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != ServantSellConfirmListViewManager_TypeInfo )
    {
      sub_221405C(this->fields.manager, ServantSellConfirmListViewManager_TypeInfo, v2, v3);
      goto LABEL_18;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v8 = ServantSellConfirmListViewItem_TypeInfo;
    v9 = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v9
      && (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == ServantSellConfirmListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_18:
    sub_221405C(linkItem, v8, v2, v3);
    goto LABEL_19;
  }
  v10 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  v14 = (ServantSellConfirmListViewItemDraw_o *)UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v14 & 1) == 0 )
  {
    if ( manager )
    {
      v14 = this->fields.itemDraw;
      if ( v14 )
      {
        ServantSellConfirmListViewItemDraw__SetItem(
          v14,
          (ServantSellConfirmListViewItem_o *)linkItem,
          this->fields.dispMode,
          1,
          manager[85],
          v16);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantSellConfirmListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C738 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C738 = 1;
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
    v11 = sub_224B48C(p_onMoveEnd, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ServantSellConfirmListViewObject__remove_onMoveEnd(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantSellConfirmListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C739 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C739 = 1;
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
    v11 = sub_224B48C(p_onMoveEnd, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ServantSellConfirmListViewObject__Awake(v13, v14);
}