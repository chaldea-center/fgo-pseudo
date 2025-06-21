void __fastcall WarehouseListViewObject___ctor(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B1A372 & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewObject_TypeInfo, method);
    byte_4B1A372 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall WarehouseListViewObject__Awake(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1A366 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewItemDraw___, v3);
    byte_4B1A366 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCB254(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewItemDraw___);
  this->fields.itemDraw = (struct WarehouseListViewItemDraw_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v7, v8);
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemDrag, (int32_t)v9, v10, v11);
}


UnityEngine_GameObject_o *__fastcall WarehouseListViewObject__CreateDragObject(
        WarehouseListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarehouseListViewObject_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B1A36B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1A36B = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___)) == 0LL )
    {
      sub_1BCB254(Component_object, v6);
    }
    v8 = (WarehouseListViewObject_o *)Component_object;
    WarehouseListViewObject__Init_37628560((WarehouseListViewObject_o *)Component_object, 2, v7);
    WarehouseListViewObject__SetupDisp(v8, v9);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


void __fastcall WarehouseListViewObject__EventMoveEnd(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._Id_k__BackingField) = 0;
  LODWORD(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


WarehouseListViewItem_o *__fastcall WarehouseListViewObject__GetItem(
        WarehouseListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B1A368 & 1) == 0 )
  {
    sub_1BCAFF8(&WarehouseListViewItem_TypeInfo, method);
    byte_4B1A368 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
    return (WarehouseListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewObject__Init(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  int32_t v7; // w20
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w23
  int32_t state; // w24
  __int64 methodPtr_low; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w9
  int32_t v22; // w8
  CGThumbnailListItem_c *klass; // x19

  v7 = initMode;
  if ( (byte_4B1A36C & 1) == 0 )
  {
    sub_1BCAFF8(&WarehouseListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B1A36C = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
  {
    sub_1BCB514(linkItem);
LABEL_7:
    v7 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(WarehouseListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v7 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCB254(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v16, v17);
  v21 = 1;
  v22 = v7;
  switch ( v7 )
  {
    case 0:
    case 2:
      goto LABEL_14;
    case 1:
      v22 = v7;
      goto LABEL_13;
    case 3:
      v22 = 2;
LABEL_13:
      v21 = v7;
LABEL_14:
      this->fields.dispMode = v22;
      this->fields.state = v21;
      goto LABEL_15;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_19;
    default:
LABEL_15:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_19:
        WarehouseListViewObject__SetupDisp(this, v18);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1BCAF9C(p_callbackFunc, 0, v19, v20);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall WarehouseListViewObject__InitItem(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewObject__Init_37628560(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B16191 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewObject__Init_37629472(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B16191 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewObject__Init_37629556(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B16191 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool __fastcall WarehouseListViewObject__IsCanDrag(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  WarehouseListViewObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  WarehouseListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x9
  WarehouseListViewItem_o *linkItem; // x1
  __int64 v8; // x10
  UnityEngine_Object_o *touchPress; // x20
  WarehouseListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  v2 = this;
  if ( (byte_4B1A36A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&WarehouseListViewItem_TypeInfo, v3);
    this = (WarehouseListViewObject_o *)sub_1BCAFF8(&WarehouseListViewManager_TypeInfo, v4);
    byte_4B1A36A = 1;
  }
  manager = (WarehouseListViewManager_o *)v2->fields.manager;
  if ( !manager )
    goto LABEL_19;
  methodPtr_low = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_1BCB514(v2->fields.manager);
    goto LABEL_19;
  }
  if ( !WarehouseListViewManager__IsDragStart((WarehouseListViewManager_o *)v2->fields.manager, 0LL) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v2->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    this = (WarehouseListViewObject_o *)v2->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0LL);
      return 0;
    }
LABEL_19:
    sub_1BCB254(this, method);
  }
  linkItem = (WarehouseListViewItem_o *)v2->fields.linkItem;
  if ( !linkItem
    || (v8 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v8)
    && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( WarehouseListViewManager__IsDragEnable(manager, linkItem, 0LL) )
      return 1;
    goto LABEL_12;
  }
  sub_1BCB514(v2->fields.linkItem);
  return (unsigned __int8)WarehouseListViewObject__CreateDragObject(v11, v12);
}


void __fastcall WarehouseListViewObject__OnClickSelect(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *linkItem; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B1A36E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9791/*"OnClickSelectListView"*/, method);
    byte_4B1A36E = 1;
  }
  linkItem = (Il2CppObject *)this->fields.linkItem;
  if ( linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BCB254(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9791/*"OnClickSelectListView"*/, linkItem, 0LL);
  }
}


void __fastcall WarehouseListViewObject__OnDestroy(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1A367 & 1) == 0 )
  {
    sub_1BCAFF8(&NGUITools_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1A367 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCAF9C(p_dragObject, 0, v8, v9);
  }
}


void __fastcall WarehouseListViewObject__OnDragDropStart(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4B1A370 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&WarehouseListViewManager_TypeInfo, v3);
    byte_4B1A370 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  methodPtr_low = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_1BCB514(manager);
    goto LABEL_14;
  }
  if ( WarehouseListViewManager__IsDragStart((WarehouseListViewManager_o *)manager, 0LL) )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0LL);
        return;
      }
LABEL_14:
      sub_1BCB254(manager, method);
    }
  }
}


void __fastcall WarehouseListViewObject__OnLongPush(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  WarehouseListViewObject_o *v2; // x19
  __int64 v3; // x1
  ListViewItem_o *linkItem; // x20
  WarehouseListViewManager_o *manager; // x19
  __int64 v6; // x9
  WarehouseListViewItem_c *v7; // x1
  __int64 methodPtr_low; // x9
  int32_t sortIndex; // w21
  char v10; // w8

  v2 = this;
  if ( (byte_4B1A36F & 1) == 0 )
  {
    sub_1BCAFF8(&WarehouseListViewItem_TypeInfo, method);
    this = (WarehouseListViewObject_o *)sub_1BCAFF8(&WarehouseListViewManager_TypeInfo, v3);
    byte_4B1A36F = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    manager = (WarehouseListViewManager_o *)v2->fields.manager;
    if ( !manager
      || (v6 = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v6)
      && (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == WarehouseListViewManager_TypeInfo )
    {
      v7 = WarehouseListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
      {
        if ( manager )
        {
          if ( WarehouseListViewManager__IsDragEnable(manager, (WarehouseListViewItem_o *)linkItem, 0LL) )
          {
            sortIndex = linkItem->fields.sortIndex;
            v10 = ~ListViewItem__get_IsSelect(linkItem, 0LL);
            WarehouseListViewManager__SetDragStart(manager, sortIndex, v10 & 1, 0LL);
          }
          return;
        }
LABEL_15:
        sub_1BCB254(this, v7);
      }
      sub_1BCB514(linkItem);
    }
    sub_1BCB514(manager);
    goto LABEL_15;
  }
}


void __fastcall WarehouseListViewObject__OnLongRelease(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v6; // x1
  UIDragDropListViewItem_o *manager; // x0

  if ( (byte_4B1A371 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_9851/*"OnLongPushListView"*/, v3);
    sub_1BCAFF8(&StringLiteral_3996/*"CancelDragEnd"*/, v4);
    byte_4B1A371 = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0LL, 0LL) )
    {
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_13;
      UIDragDropListViewItem__PressReset(manager, 0LL);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      UnityEngine_Component__SendMessage_70107796(
        (UnityEngine_Component_o *)manager,
        (System_String_o *)StringLiteral_3996/*"CancelDragEnd"*/,
        0LL);
      manager = (UIDragDropListViewItem_o *)this->fields.manager;
      if ( manager )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_9851/*"OnLongPushListView"*/,
          (Il2CppObject *)this->fields.linkItem,
          0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCB254(manager, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewObject__SetInput(
        WarehouseListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v8; // x0
  WarehouseListViewItem_c *v9; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v11; // x9
  struct ListViewManager_o *manager; // x21
  __int64 methodPtr_low; // x9
  WarehouseListViewItemDraw_o *v14; // x8
  WarehouseListViewObject_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B1A369 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isInput);
    sub_1BCAFF8(&WarehouseListViewItem_TypeInfo, v5);
    sub_1BCAFF8(&WarehouseListViewManager_TypeInfo, v6);
    byte_4B1A369 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v8 )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem
      || (v9 = WarehouseListViewItem_TypeInfo,
          v11 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11)
      && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == WarehouseListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager )
      {
        methodPtr_low = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewManager_TypeInfo )
        {
          v8 = WarehouseListViewManager__GetModeKind((WarehouseListViewManager_o *)this->fields.manager, 0LL) == 3
            || WarehouseListViewManager__IsSelectEnable(
                 (WarehouseListViewManager_o *)manager,
                 (WarehouseListViewItem_o *)linkItem,
                 0,
                 0,
                 0LL);
          v14 = this->fields.itemDraw;
          if ( v14 )
          {
            WarehouseListViewItemDraw__SetInput(v14, (WarehouseListViewItem_o *)linkItem, v8, 0LL);
            return;
          }
        }
        else
        {
          sub_1BCB514(this->fields.manager);
        }
      }
      sub_1BCB254(v8, v9);
    }
    sub_1BCB514(this->fields.linkItem);
    WarehouseListViewObject__IsCanDrag(v15, v16);
  }
}


void __fastcall WarehouseListViewObject__SetItem(
        WarehouseListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42963052((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarehouseListViewObject__SetItem_37627624(
        WarehouseListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall WarehouseListViewObject__SetupDisp(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  bool v9; // w1
  UnityEngine_Object_o *itemDraw; // x22
  _BOOL8 IsSelectEnable; // x0
  __int64 v12; // x1
  WarehouseListViewItemDraw_o *v13; // x22
  int32_t dispMode; // w19

  if ( (byte_4B1A36D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&WarehouseListViewItem_TypeInfo, v4);
    sub_1BCAFF8(&WarehouseListViewManager_TypeInfo, v5);
    byte_4B1A36D = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewManager_TypeInfo )
    {
      sub_1BCB514(this->fields.manager);
      goto LABEL_19;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v8 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v8
      && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == WarehouseListViewItem_TypeInfo )
    {
      v9 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_19:
    sub_1BCB514(linkItem);
    goto LABEL_20;
  }
  v9 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v9, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( IsSelectEnable )
  {
    if ( manager )
    {
      v13 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(
                         (WarehouseListViewManager_o *)manager,
                         (WarehouseListViewItem_o *)linkItem,
                         0,
                         0,
                         0LL);
      if ( v13 )
      {
        WarehouseListViewItemDraw__SetItem(v13, (WarehouseListViewItem_o *)linkItem, dispMode, IsSelectEnable, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1BCB254(IsSelectEnable, v12);
  }
}


void __fastcall WarehouseListViewObject__add_callbackFunc(
        WarehouseListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1A364 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1A364 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  WarehouseListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall WarehouseListViewObject__remove_callbackFunc(
        WarehouseListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1A365 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1A365 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  WarehouseListViewObject__Awake(v11, v12);
}