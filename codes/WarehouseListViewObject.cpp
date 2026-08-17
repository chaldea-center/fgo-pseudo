void WarehouseListViewObject___ctor(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E51A & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596E51A = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void WarehouseListViewObject__Awake(WarehouseListViewObject_o *this, const MethodInfo *method)
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596E50E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewItemDraw___);
    byte_596E50E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewItemDraw___);
  this->fields.itemDraw = (struct WarehouseListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemDrag, (int32_t)v12, v13, v14, v15, v16, v17, v18);
}


UnityEngine_GameObject_o *WarehouseListViewObject__CreateDragObject(
        WarehouseListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  WarehouseListViewObject_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_596E513 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E513 = 1;
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
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___)) == 0 )
    {
      sub_2213CDC(Component_object, v7);
    }
    v9 = (WarehouseListViewObject_o *)Component_object;
    WarehouseListViewObject__Init_45323744((WarehouseListViewObject_o *)Component_object, 2, v8);
    WarehouseListViewObject__SetupDisp(v9, v10);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


void WarehouseListViewObject__EventMoveEnd(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 0;
  p_callbackFunc[-1].fields._BoardType_k__BackingField = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


WarehouseListViewItem_o *WarehouseListViewObject__GetItem(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596E510 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E510 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
    return (WarehouseListViewItem_o *)this->fields.linkItem;
  return 0;
}


void WarehouseListViewObject__Init(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w23
  int32_t state; // w24
  __int64 naturalAligment; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w8
  MissionNaviTransitionBoardItem_c *klass; // x19

  if ( (byte_596E514 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E514 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
  {
    sub_221405C(linkItem, WarehouseListViewItem_TypeInfo, callbackFunc, method);
LABEL_7:
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(WarehouseListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( initMode <= 1 )
  {
    if ( initMode )
    {
      v29 = initMode;
      if ( initMode != 1 )
      {
LABEL_17:
        if ( !state )
          goto LABEL_23;
        goto LABEL_22;
      }
LABEL_21:
      this->fields.dispMode = v29;
      this->fields.state = initMode;
      if ( !state )
        goto LABEL_23;
LABEL_22:
      if ( dispMode == this->fields.dispMode )
        goto LABEL_24;
      goto LABEL_23;
    }
LABEL_19:
    v29 = initMode;
    initMode = 1;
    goto LABEL_21;
  }
  if ( initMode == 2 )
    goto LABEL_19;
  if ( initMode == 3 )
  {
    v29 = 2;
    goto LABEL_21;
  }
  if ( initMode != 4 )
    goto LABEL_17;
  this->fields.dispMode = 2;
  this->fields.state = 1;
LABEL_23:
  WarehouseListViewObject__SetupDisp(this, v22);
LABEL_24:
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v23, v24, v25, v26, v27, v28);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void WarehouseListViewObject__InitItem(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewObject__Init_45323744(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewObject__Init_45324668(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewObject__Init_45324752(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool WarehouseListViewObject__IsCanDrag(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  WarehouseListViewObject_o *v4; // x19
  WarehouseListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  WarehouseListViewItem_o *linkItem; // x1
  __int64 v11; // x10
  UnityEngine_Object_o *touchPress; // x20
  WarehouseListViewObject_o *v14; // x0
  const MethodInfo *v15; // x1

  v4 = this;
  if ( (byte_596E512 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewObject_o *)sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E512 = 1;
  }
  manager = (WarehouseListViewManager_o *)v4->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_221405C(v4->fields.manager, WarehouseListViewManager_TypeInfo, v2, v3);
    goto LABEL_19;
  }
  if ( !WarehouseListViewManager__IsDragStart((WarehouseListViewManager_o *)v4->fields.manager, 0) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v4->fields.touchPress;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
      return 0;
    this = (WarehouseListViewObject_o *)v4->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0);
      return 0;
    }
LABEL_19:
    sub_2213CDC(this, method);
  }
  linkItem = (WarehouseListViewItem_o *)v4->fields.linkItem;
  if ( !linkItem
    || (v11 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)v11)
    && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( WarehouseListViewManager__IsDragEnable(manager, linkItem, 0) )
      return 1;
    goto LABEL_12;
  }
  sub_221405C(v4->fields.linkItem, WarehouseListViewItem_TypeInfo, v8, v9);
  return (unsigned __int8)WarehouseListViewObject__CreateDragObject(v14, v15);
}


void WarehouseListViewObject__OnClickSelect(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *linkItem; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596E516 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10267/*"OnClickSelectListView"*/);
    byte_596E516 = 1;
  }
  linkItem = (Il2CppObject *)this->fields.linkItem;
  if ( linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10267/*"OnClickSelectListView"*/, linkItem, 0);
  }
}


void WarehouseListViewObject__OnDestroy(WarehouseListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596E50F & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E50F = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void WarehouseListViewObject__OnDragDropStart(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_596E518 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E518 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_221405C(manager, WarehouseListViewManager_TypeInfo, v2, v3);
    goto LABEL_14;
  }
  if ( WarehouseListViewManager__IsDragStart((WarehouseListViewManager_o *)manager, 0) )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(manager, method);
    }
  }
}


void WarehouseListViewObject__OnLongPush(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  WarehouseListViewObject_o *v4; // x19
  ListViewItem_o *linkItem; // x20
  WarehouseListViewManager_o *manager; // x19
  WarehouseListViewManager_c *v7; // x1
  __int64 v8; // x9
  WarehouseListViewItem_c *v9; // x1
  __int64 naturalAligment; // x9
  int32_t sortIndex; // w21
  bool IsSelect; // w0

  v4 = this;
  if ( (byte_596E517 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewObject_o *)sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E517 = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    manager = (WarehouseListViewManager_o *)v4->fields.manager;
    if ( !manager
      || (v7 = WarehouseListViewManager_TypeInfo,
          v8 = WarehouseListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)v8)
      && (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == WarehouseListViewManager_TypeInfo )
    {
      v9 = WarehouseListViewItem_TypeInfo;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
      {
        if ( manager )
        {
          if ( WarehouseListViewManager__IsDragEnable(manager, (WarehouseListViewItem_o *)linkItem, 0) )
          {
            sortIndex = linkItem->fields.sortIndex;
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0);
            WarehouseListViewManager__SetDragStart(manager, sortIndex, !IsSelect, 0);
          }
          return;
        }
LABEL_15:
        sub_2213CDC(this, v9);
      }
      sub_221405C(linkItem, WarehouseListViewItem_TypeInfo, v2, v3);
    }
    sub_221405C(manager, v7, v2, v3);
    goto LABEL_15;
  }
}


void WarehouseListViewObject__OnLongRelease(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v5; // x1
  UIDragDropListViewItem_o *manager; // x0

  if ( (byte_596E519 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    sub_2213A60(&StringLiteral_4180/*"CancelDragEnd"*/);
    byte_596E519 = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0, 0) )
    {
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_13;
      UIDragDropListViewItem__PressReset(manager, 0);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      UnityEngine_Component__SendMessage_83422876(
        (UnityEngine_Component_o *)manager,
        (System_String_o *)StringLiteral_4180/*"CancelDragEnd"*/,
        0);
      manager = (UIDragDropListViewItem_o *)this->fields.manager;
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
LABEL_13:
    sub_2213CDC(manager, v5);
  }
}


void WarehouseListViewObject__SetInput(WarehouseListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v8; // x0
  WarehouseListViewItem_c *v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v13; // x9
  struct ListViewManager_o *manager; // x21
  __int64 naturalAligment; // x9
  WarehouseListViewItemDraw_o *v16; // x8
  WarehouseListViewObject_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_596E511 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E511 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v8 )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem
      || (v9 = WarehouseListViewItem_TypeInfo,
          v13 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)v13)
      && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == WarehouseListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager )
      {
        naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewManager_TypeInfo )
        {
          v8 = WarehouseListViewManager__GetModeKind((WarehouseListViewManager_o *)this->fields.manager, 0) == 3
            || WarehouseListViewManager__IsSelectEnable(
                 (WarehouseListViewManager_o *)manager,
                 (WarehouseListViewItem_o *)linkItem,
                 0,
                 0,
                 0);
          v16 = this->fields.itemDraw;
          if ( v16 )
          {
            WarehouseListViewItemDraw__SetInput(v16, (WarehouseListViewItem_o *)linkItem, v8, 0);
            return;
          }
        }
        else
        {
          sub_221405C(this->fields.manager, WarehouseListViewManager_TypeInfo, v10, v11);
        }
      }
      sub_2213CDC(v8, v9);
    }
    sub_221405C(this->fields.linkItem, WarehouseListViewItem_TypeInfo, v10, v11);
    WarehouseListViewObject__IsCanDrag(v17, v18);
  }
}


void WarehouseListViewObject__SetItem(
        WarehouseListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void WarehouseListViewObject__SetItem_45322808(
        WarehouseListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void WarehouseListViewObject__SetupDisp(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x21
  struct ListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  WarehouseListViewItem_c *v8; // x1
  __int64 v9; // x9
  bool v10; // w1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *itemDraw; // x22
  _BOOL8 IsSelectEnable; // x0
  __int64 v15; // x1
  WarehouseListViewItemDraw_o *v16; // x22
  int32_t dispMode; // w19

  if ( (byte_596E515 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E515 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
    {
      sub_221405C(this->fields.manager, WarehouseListViewManager_TypeInfo, v2, v3);
      goto LABEL_19;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v8 = WarehouseListViewItem_TypeInfo;
    v9 = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v9
      && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == WarehouseListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_19:
    sub_221405C(linkItem, v8, v2, v3);
    goto LABEL_20;
  }
  v10 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( IsSelectEnable )
  {
    if ( manager )
    {
      v16 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(
                         (WarehouseListViewManager_o *)manager,
                         (WarehouseListViewItem_o *)linkItem,
                         0,
                         0,
                         0);
      if ( v16 )
      {
        WarehouseListViewItemDraw__SetItem(v16, (WarehouseListViewItem_o *)linkItem, dispMode, IsSelectEnable, 0);
        return;
      }
    }
LABEL_20:
    sub_2213CDC(IsSelectEnable, v15);
  }
}


void WarehouseListViewObject__add_callbackFunc(
        WarehouseListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WarehouseListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596E50C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596E50C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  WarehouseListViewObject__remove_callbackFunc(v13, v14, v15);
}


void WarehouseListViewObject__remove_callbackFunc(
        WarehouseListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WarehouseListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596E50D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596E50D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  WarehouseListViewObject__Awake(v13, v14);
}