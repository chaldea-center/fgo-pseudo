void __fastcall WarehouseListViewObject___ctor(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4389487 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_4389487 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall WarehouseListViewObject__Awake(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438947B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewItemDraw___);
    byte_438947B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              dispObject,
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewItemDraw___);
  this->fields.itemDraw = (struct WarehouseListViewItemDraw_o *)Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemDrag,
    (System_Int32_array **)Component_WebViewObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WarehouseListViewObject__CreateDragObject(
        WarehouseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  WarehouseListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4389480 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389480 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(DragObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !DragObject
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)DragObject,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___)) == 0LL )
    {
      sub_B7769C(Component_srcLineSprite, v5);
    }
    v6 = (WarehouseListViewObject_o *)Component_srcLineSprite;
    zero = UnityEngine_Vector3__get_zero(0LL);
    WarehouseListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
    WarehouseListViewObject__SetupDisp(v6, v8);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


void __fastcall WarehouseListViewObject__EventMoveEnd(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields.isEquip = 0;
  *(_DWORD *)&p_callbackFunc[-1].fields.isOpenAfter = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


WarehouseListViewItem_o *__fastcall WarehouseListViewObject__GetItem(
        WarehouseListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438947D & 1) == 0 )
  {
    sub_B775C4(&WarehouseListViewItem_TypeInfo);
    byte_438947D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == WarehouseListViewItem_TypeInfo )
    return (WarehouseListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall WarehouseListViewObject__Init(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x9
  int32_t v13; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w9
  int32_t v31; // w8
  System_Action_o *klass; // x19
  WarehouseListViewObject_o *v33; // x0
  int32_t v34; // w1
  System_Action_o *v35; // x2
  const MethodInfo *v36; // x3
  float v37; // s0

  if ( (byte_4389481 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListViewItem_TypeInfo);
    byte_4389481 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && ((v12 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
         *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
     || (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != WarehouseListViewItem_TypeInfo) )
  {
    v33 = (WarehouseListViewObject_o *)sub_B77990(linkItem);
    WarehouseListViewObject__Init_21871832(v33, v34, v35, v37, v36);
  }
  else
  {
    if ( linkItem )
      v13 = initMode;
    else
      v13 = 0;
    ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
    ((void (__fastcall *)(WarehouseListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      v13 == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B7769C(transform, v15);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callbackFunc,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v30 = 1;
    v31 = v13;
    switch ( v13 )
    {
      case 0:
      case 2:
        goto LABEL_16;
      case 1:
        v31 = v13;
        goto LABEL_15;
      case 3:
        v31 = 2;
LABEL_15:
        v30 = v13;
LABEL_16:
        this->fields.dispMode = v31;
        this->fields.state = v30;
        goto LABEL_17;
      case 4:
        this->fields.dispMode = 2;
        this->fields.state = 1;
        goto LABEL_19;
      default:
LABEL_17:
        if ( !state || dispMode != this->fields.dispMode )
LABEL_19:
          WarehouseListViewObject__SetupDisp(this, v23);
        klass = (System_Action_o *)p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0LL;
          sub_B77560(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
          System_Action__Invoke(klass, 0LL);
        }
        break;
    }
  }
}


void __fastcall WarehouseListViewObject__InitItem(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewObject__Init_21870928(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  WarehouseListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewObject__Init_21871832(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  WarehouseListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewObject__Init_21871896(
        WarehouseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  WarehouseListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


bool __fastcall WarehouseListViewObject__IsCanDrag(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  WarehouseListViewObject_o *v2; // x19
  WarehouseListViewManager_o *manager; // x20
  __int64 v4; // x9
  WarehouseListViewItem_o *linkItem; // x1
  __int64 v6; // x10
  UnityEngine_Object_o *touchPress; // x20
  WarehouseListViewObject_o *v9; // x0
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_438947F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewObject_o *)sub_B775C4(&WarehouseListViewManager_TypeInfo);
    byte_438947F = 1;
  }
  manager = (WarehouseListViewManager_o *)v2->fields.manager;
  if ( !manager )
    goto LABEL_20;
  v4 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != WarehouseListViewManager_TypeInfo )
  {
    this = (WarehouseListViewObject_o *)sub_B77990(v2->fields.manager);
    goto LABEL_20;
  }
  if ( !WarehouseListViewManager__IsDragStart((WarehouseListViewManager_o *)v2->fields.manager, 0LL) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v2->fields.touchPress;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    this = (WarehouseListViewObject_o *)v2->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0LL);
      return 0;
    }
LABEL_20:
    sub_B7769C(this, method);
  }
  linkItem = (WarehouseListViewItem_o *)v2->fields.linkItem;
  if ( !linkItem
    || (v6 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6)
    && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( WarehouseListViewManager__IsDragEnable(manager, linkItem, 0LL) )
      return 1;
    goto LABEL_12;
  }
  v9 = (WarehouseListViewObject_o *)sub_B77990(v2->fields.linkItem);
  return (unsigned __int8)WarehouseListViewObject__CreateDragObject(v9, v10);
}


void __fastcall WarehouseListViewObject__OnClickSelect(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *linkItem; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4389483 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10152/*"OnClickSelectListView"*/);
    byte_4389483 = 1;
  }
  linkItem = (Il2CppObject *)this->fields.linkItem;
  if ( linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B7769C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10152/*"OnClickSelectListView"*/, linkItem, 0LL);
  }
}


void __fastcall WarehouseListViewObject__OnDestroy(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438947C & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438947C = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B77560(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall WarehouseListViewObject__OnDragDropStart(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 v4; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4389485 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&WarehouseListViewManager_TypeInfo);
    byte_4389485 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_15;
  v4 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != WarehouseListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_B77990(manager);
    goto LABEL_15;
  }
  if ( WarehouseListViewManager__IsDragStart((WarehouseListViewManager_o *)manager, 0LL) )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0LL);
        return;
      }
LABEL_15:
      sub_B7769C(manager, method);
    }
  }
}


void __fastcall WarehouseListViewObject__OnLongPush(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  WarehouseListViewObject_o *v2; // x19
  ListViewItem_o *linkItem; // x20
  WarehouseListViewManager_o *manager; // x19
  __int64 v5; // x9
  WarehouseListViewItem_c *v6; // x1
  __int64 v7; // x9
  int32_t sortIndex; // w21
  char v9; // w8

  v2 = this;
  if ( (byte_4389484 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewObject_o *)sub_B775C4(&WarehouseListViewManager_TypeInfo);
    byte_4389484 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    manager = (WarehouseListViewManager_o *)v2->fields.manager;
    if ( !manager
      || (v5 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v5)
      && (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] == WarehouseListViewManager_TypeInfo )
    {
      v6 = WarehouseListViewItem_TypeInfo;
      v7 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7
        && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == WarehouseListViewItem_TypeInfo )
      {
        if ( manager )
        {
          if ( WarehouseListViewManager__IsDragEnable(manager, (WarehouseListViewItem_o *)linkItem, 0LL) )
          {
            sortIndex = linkItem->fields.sortIndex;
            v9 = ~ListViewItem__get_IsSelect(linkItem, 0LL);
            WarehouseListViewManager__SetDragStart(manager, sortIndex, v9 & 1, 0LL);
          }
          return;
        }
LABEL_15:
        sub_B7769C(this, v6);
      }
      sub_B77990(linkItem);
    }
    this = (WarehouseListViewObject_o *)sub_B77990(manager);
    goto LABEL_15;
  }
}


void __fastcall WarehouseListViewObject__OnLongRelease(WarehouseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v4; // x1
  UIDragDropListViewItem_o *manager; // x0

  if ( (byte_4389486 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10205/*"OnLongPushListView"*/);
    sub_B775C4(&StringLiteral_3686/*"CancelDragEnd"*/);
    byte_4389486 = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0LL, 0LL) )
    {
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_14;
      UIDragDropListViewItem__PressReset(manager, 0LL);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      UnityEngine_Component__SendMessage_41419016(
        (UnityEngine_Component_o *)manager,
        (System_String_o *)StringLiteral_3686/*"CancelDragEnd"*/,
        0LL);
      manager = (UIDragDropListViewItem_o *)this->fields.manager;
      if ( manager )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_10205/*"OnLongPushListView"*/,
          (Il2CppObject *)this->fields.linkItem,
          0LL);
        return;
      }
    }
LABEL_14:
    sub_B7769C(manager, v4);
  }
}


void __fastcall WarehouseListViewObject__SetInput(
        WarehouseListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v6; // x0
  WarehouseListViewItem_c *v7; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x9
  struct ListViewManager_o *manager; // x21
  __int64 v11; // x9
  WarehouseListViewItemDraw_o *v12; // x8
  WarehouseListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_438947E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&WarehouseListViewItem_TypeInfo);
    sub_B775C4(&WarehouseListViewManager_TypeInfo);
    byte_438947E = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    linkItem = this->fields.linkItem;
    if ( !linkItem
      || (v7 = WarehouseListViewItem_TypeInfo,
          v9 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9)
      && (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == WarehouseListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager )
      {
        v11 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] == WarehouseListViewManager_TypeInfo )
        {
          v6 = WarehouseListViewManager__GetModeKind((WarehouseListViewManager_o *)this->fields.manager, 0LL) == 3
            || WarehouseListViewManager__IsSelectEnable(
                 (WarehouseListViewManager_o *)manager,
                 (WarehouseListViewItem_o *)linkItem,
                 0,
                 0,
                 0LL);
          v12 = this->fields.itemDraw;
          if ( v12 )
          {
            WarehouseListViewItemDraw__SetInput(v12, (WarehouseListViewItem_o *)linkItem, v6 & 1, 0LL);
            return;
          }
        }
        else
        {
          v6 = sub_B77990(this->fields.manager);
        }
      }
      sub_B7769C(v6, v7);
    }
    v13 = (WarehouseListViewObject_o *)sub_B77990(this->fields.linkItem);
    WarehouseListViewObject__IsCanDrag(v13, v14);
  }
}


void __fastcall WarehouseListViewObject__SetItem(
        WarehouseListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarehouseListViewObject__SetItem_21869928(
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
  struct ListViewManager_o *manager; // x20
  __int64 v5; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  __int64 IsSelectEnable; // x0
  __int64 v10; // x1
  WarehouseListViewItemDraw_o *v11; // x22
  int32_t dispMode; // w19

  if ( (byte_4389482 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&WarehouseListViewItem_TypeInfo);
    sub_B775C4(&WarehouseListViewManager_TypeInfo);
    byte_4389482 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    v5 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5
      || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != WarehouseListViewManager_TypeInfo )
    {
      sub_B77990(this->fields.manager);
      goto LABEL_20;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v7 = 0;
    goto LABEL_11;
  }
  v6 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (WarehouseListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewItem_TypeInfo )
  {
LABEL_20:
    IsSelectEnable = sub_B77990(linkItem);
    goto LABEL_21;
  }
  v7 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( (IsSelectEnable & 1) != 0 )
  {
    if ( manager )
    {
      v11 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(
                         (WarehouseListViewManager_o *)manager,
                         (WarehouseListViewItem_o *)linkItem,
                         0,
                         0,
                         0LL);
      if ( v11 )
      {
        WarehouseListViewItemDraw__SetItem(v11, (WarehouseListViewItem_o *)linkItem, dispMode, IsSelectEnable & 1, 0LL);
        return;
      }
    }
LABEL_21:
    sub_B7769C(IsSelectEnable, v10);
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

  if ( (byte_4389479 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4389479 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListViewObject_o *)sub_B77990(v8);
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

  if ( (byte_438947A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438947A = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListViewObject_o *)sub_B77990(v8);
  WarehouseListViewObject__Awake(v11, v12);
}