void WarehouseListViewObject___ctor(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C357CB & 1) == 0 )
  {
    sub_1C32C20(&ListViewObject_TypeInfo);
    byte_4C357CB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void WarehouseListViewObject__Awake(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C357BF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewItemDraw___);
    byte_4C357BF = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewItemDraw___);
  this->fields.itemDraw = (struct WarehouseListViewItemDraw_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDrag, (int32_t)v7, v8, v9);
}


UnityEngine_GameObject_o *WarehouseListViewObject__CreateDragObject(
        WarehouseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x2
  WarehouseListViewObject_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4C357C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C357C4 = 1;
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
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___)) == 0 )
    {
      sub_1C32E7C(Component_object);
    }
    v6 = (WarehouseListViewObject_o *)Component_object;
    WarehouseListViewObject__Init_38328928((WarehouseListViewObject_o *)Component_object, 2, v5);
    WarehouseListViewObject__SetupDisp(v6, v7);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


void WarehouseListViewObject__EventMoveEnd(WarehouseListViewObject_o *this, const MethodInfo *method)
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
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


WarehouseListViewItem_o *WarehouseListViewObject__GetItem(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C357C1 & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357C1 = 1;
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
  CGThumbnailListItem_o *p_callbackFunc; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w9
  int32_t v21; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4C357C5 & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357C5 = 1;
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
    sub_1C3313C(linkItem);
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
    sub_1C32E7C(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v15, v16);
  v20 = 1;
  v21 = initMode;
  switch ( initMode )
  {
    case 0:
    case 2:
      goto LABEL_14;
    case 1:
      v21 = initMode;
      goto LABEL_13;
    case 3:
      v21 = 2;
LABEL_13:
      v20 = initMode;
LABEL_14:
      this->fields.dispMode = v21;
      this->fields.state = v20;
      goto LABEL_15;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_19;
    default:
LABEL_15:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_19:
        WarehouseListViewObject__SetupDisp(this, v17);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C32BC4(p_callbackFunc, 0, v18, v19);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void WarehouseListViewObject__InitItem(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewObject__Init_38328928(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewObject__Init_38329840(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewObject__Init_38329924(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  WarehouseListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool WarehouseListViewObject__IsCanDrag(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  WarehouseListViewObject_o *v2; // x19
  WarehouseListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  WarehouseListViewItem_o *linkItem; // x1
  __int64 v6; // x10
  UnityEngine_Object_o *touchPress; // x20
  WarehouseListViewObject_o *v9; // x0
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_4C357C3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewObject_o *)sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    byte_4C357C3 = 1;
  }
  manager = (WarehouseListViewManager_o *)v2->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_1C3313C(v2->fields.manager);
    goto LABEL_19;
  }
  if ( !WarehouseListViewManager__IsDragStart((WarehouseListViewManager_o *)v2->fields.manager, 0) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v2->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
      return 0;
    this = (WarehouseListViewObject_o *)v2->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0);
      return 0;
    }
LABEL_19:
    sub_1C32E7C(this);
  }
  linkItem = (WarehouseListViewItem_o *)v2->fields.linkItem;
  if ( !linkItem
    || (v6 = WarehouseListViewItem_TypeInfo->_2.naturalAligment, linkItem->klass->_2.naturalAligment >= (unsigned int)v6)
    && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( WarehouseListViewManager__IsDragEnable(manager, linkItem, 0) )
      return 1;
    goto LABEL_12;
  }
  sub_1C3313C(v2->fields.linkItem);
  return (unsigned __int8)WarehouseListViewObject__CreateDragObject(v9, v10);
}


void WarehouseListViewObject__OnClickSelect(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *linkItem; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C357C7 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9867/*"OnClickSelectListView"*/);
    byte_4C357C7 = 1;
  }
  linkItem = (Il2CppObject *)this->fields.linkItem;
  if ( linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C32E7C(0);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9867/*"OnClickSelectListView"*/, linkItem, 0);
  }
}


void WarehouseListViewObject__OnDestroy(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C357C0 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C357C0 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C32BC4(p_dragObject, 0, v7, v8);
  }
}


void WarehouseListViewObject__OnDragDropStart(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4C357C9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    byte_4C357C9 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_1C3313C(manager);
    goto LABEL_14;
  }
  if ( WarehouseListViewManager__IsDragStart((WarehouseListViewManager_o *)manager, 0) )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0);
        return;
      }
LABEL_14:
      sub_1C32E7C(manager);
    }
  }
}


void WarehouseListViewObject__OnLongPush(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  WarehouseListViewObject_o *v2; // x19
  ListViewItem_o *linkItem; // x20
  WarehouseListViewManager_o *manager; // x19
  __int64 v5; // x9
  __int64 naturalAligment; // x9
  int32_t sortIndex; // w21
  char v8; // w8

  v2 = this;
  if ( (byte_4C357C8 & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewObject_o *)sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    byte_4C357C8 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    manager = (WarehouseListViewManager_o *)v2->fields.manager;
    if ( !manager
      || (v5 = WarehouseListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)v5)
      && (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] == WarehouseListViewManager_TypeInfo )
    {
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
      {
        if ( manager )
        {
          if ( WarehouseListViewManager__IsDragEnable(manager, (WarehouseListViewItem_o *)linkItem, 0) )
          {
            sortIndex = linkItem->fields.sortIndex;
            v8 = ~ListViewItem__get_IsSelect(linkItem, 0);
            WarehouseListViewManager__SetDragStart(manager, sortIndex, v8 & 1, 0);
          }
          return;
        }
LABEL_15:
        sub_1C32E7C(this);
      }
      sub_1C3313C(linkItem);
    }
    sub_1C3313C(manager);
    goto LABEL_15;
  }
}


void WarehouseListViewObject__OnLongRelease(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  UIDragDropListViewItem_o *manager; // x0

  if ( (byte_4C357CA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9927/*"OnLongPushListView"*/);
    sub_1C32C20(&StringLiteral_4033/*"CancelDragEnd"*/);
    byte_4C357CA = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      UnityEngine_Component__SendMessage_71195360(
        (UnityEngine_Component_o *)manager,
        (System_String_o *)StringLiteral_4033/*"CancelDragEnd"*/,
        0);
      manager = (UIDragDropListViewItem_o *)this->fields.manager;
      if ( manager )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_9927/*"OnLongPushListView"*/,
          (Il2CppObject *)this->fields.linkItem,
          0);
        return;
      }
    }
LABEL_13:
    sub_1C32E7C(manager);
  }
}


void WarehouseListViewObject__SetInput(WarehouseListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  struct ListViewItem_o *linkItem; // x20
  __int64 v8; // x9
  struct ListViewManager_o *manager; // x21
  __int64 naturalAligment; // x9
  WarehouseListViewItemDraw_o *v11; // x8
  WarehouseListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4C357C2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    byte_4C357C2 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem
      || (v8 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)v8)
      && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == WarehouseListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager )
      {
        naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewManager_TypeInfo )
        {
          v6 = WarehouseListViewManager__GetModeKind((WarehouseListViewManager_o *)this->fields.manager, 0) == 3
            || WarehouseListViewManager__IsSelectEnable(
                 (WarehouseListViewManager_o *)manager,
                 (WarehouseListViewItem_o *)linkItem,
                 0,
                 0,
                 0);
          v11 = this->fields.itemDraw;
          if ( v11 )
          {
            WarehouseListViewItemDraw__SetInput(v11, (WarehouseListViewItem_o *)linkItem, v6, 0);
            return;
          }
        }
        else
        {
          sub_1C3313C(this->fields.manager);
        }
      }
      sub_1C32E7C(v6);
    }
    sub_1C3313C(this->fields.linkItem);
    WarehouseListViewObject__IsCanDrag(v12, v13);
  }
}


void WarehouseListViewObject__SetItem(
        WarehouseListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43729388((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void WarehouseListViewObject__SetItem_38327992(
        WarehouseListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void WarehouseListViewObject__SetupDisp(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  struct ListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  _BOOL8 IsSelectEnable; // x0
  WarehouseListViewItemDraw_o *v10; // x22
  int32_t dispMode; // w19

  if ( (byte_4C357C6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    byte_4C357C6 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
    {
      sub_1C3313C(this->fields.manager);
      goto LABEL_19;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v6
      && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == WarehouseListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_19:
    sub_1C3313C(linkItem);
    goto LABEL_20;
  }
  v7 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( IsSelectEnable )
  {
    if ( manager )
    {
      v10 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(
                         (WarehouseListViewManager_o *)manager,
                         (WarehouseListViewItem_o *)linkItem,
                         0,
                         0,
                         0);
      if ( v10 )
      {
        WarehouseListViewItemDraw__SetItem(v10, (WarehouseListViewItem_o *)linkItem, dispMode, IsSelectEnable, 0);
        return;
      }
    }
LABEL_20:
    sub_1C32E7C(IsSelectEnable);
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
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C357BD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C357BD = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  WarehouseListViewObject__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C357BE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C357BE = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  WarehouseListViewObject__Awake(v11, v12);
}