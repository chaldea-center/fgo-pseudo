void __fastcall EquipGraphListViewObject___ctor(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B1BADB & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewObject_TypeInfo, method);
    byte_4B1BADB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EquipGraphListViewObject__Awake(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1BAD2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewItemDraw___, method);
    byte_4B1BAD2 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCB254(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewItemDraw___);
  this->fields.itemDraw = (struct EquipGraphListViewItemDraw_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall EquipGraphListViewObject__CreateDragObject(
        EquipGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4B1BAD6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, method);
    byte_4B1BAD6 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___)) == 0LL) )
  {
    sub_1BCB254(DragObject, v4);
  }
  EquipGraphListViewObject__Init_40277708((EquipGraphListViewObject_o *)DragObject, 2, 0, v6);
  return v5;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewObject__GetItem(
        EquipGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B1BAD4 & 1) == 0 )
  {
    sub_1BCAFF8(&EquipGraphListViewItem_TypeInfo, method);
    byte_4B1BAD4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewItem_TypeInfo )
    return (EquipGraphListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__Init(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        bool afterEndSelectConfirm,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  unsigned int v13; // w23
  int32_t dispMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  struct System_Action_o **p_callbackFunc; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  int32_t v23; // w8
  struct System_Action_o *v24; // x19

  if ( (byte_4B1BAD7 & 1) == 0 )
  {
    sub_1BCAFF8(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B1BAD7 = 1;
  }
  if ( initMode == 4 )
  {
    EquipGraphListViewObject__SetupDisp(this, afterEndSelectConfirm, (const MethodInfo *)callbackFunc);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewItem_TypeInfo )
        v13 = initMode;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
    ((void (__fastcall *)(EquipGraphListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      v13 == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1BCB254(transform, v17);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v19, v20);
    if ( v13 <= 3 )
    {
      v23 = dword_BE1740[v13];
      this->fields.dispMode = v13;
      this->fields.state = v23;
    }
    if ( !state || dispMode != this->fields.dispMode )
      EquipGraphListViewObject__SetupDisp(this, afterEndSelectConfirm, v21);
    v24 = *p_callbackFunc;
    if ( *p_callbackFunc )
    {
      *p_callbackFunc = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)v21, v22);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v24->fields.m_target)(
        v24->fields.original_method_info,
        *(_QWORD *)&v24->fields.extra_arg);
    }
  }
}


void __fastcall EquipGraphListViewObject__InitItem(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__Init_40277708(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        bool afterEndSelectConfirm,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float v5; // s0
  int v6; // s1

  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B16191 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, 0LL, v5, *(UnityEngine_Vector3_o *)&v6, afterEndSelectConfirm, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__Init_40278876(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4
  int v6; // s1

  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B16191 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v6, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__Init_40278964(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float v5; // s0
  int v6; // s1

  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B16191 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, callbackFunc, v5, *(UnityEngine_Vector3_o *)&v6, 0, v4);
}


void __fastcall EquipGraphListViewObject__OnClickSelect(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  EquipGraphListViewObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10

  v2 = this;
  if ( (byte_4B1BAD9 & 1) == 0 )
  {
    sub_1BCAFF8(&EquipGraphListViewItem_TypeInfo, method);
    sub_1BCAFF8(&Method_EquipGraphListViewObject_OnClickSelect__, v3);
    this = (EquipGraphListViewObject_o *)sub_1BCAFF8(&StringLiteral_9791/*"OnClickSelectListView"*/, v4);
    byte_4B1BAD9 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo
      || (this = (EquipGraphListViewObject_o *)v2->fields.manager) == 0LL
      || (ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL),
          (this = (EquipGraphListViewObject_o *)v2->fields.manager) == 0LL) )
    {
      sub_1BCB254(this, method);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnClickSelectListView"*/,
      (Il2CppObject *)v2,
      0LL);
  }
}


void __fastcall EquipGraphListViewObject__OnDestroy(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1BAD3 & 1) == 0 )
  {
    sub_1BCAFF8(&NGUITools_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1BAD3 = 1;
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


void __fastcall EquipGraphListViewObject__OnLongPush(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B1BADA & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9851/*"OnLongPushListView"*/, method);
    byte_4B1BADA = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BCB254(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9851/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__SetInput(
        EquipGraphListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  EquipGraphListViewItemDraw_o *v11; // x0

  if ( (byte_4B1BAD5 & 1) == 0 )
  {
    sub_1BCAFF8(&EquipGraphListViewItem_TypeInfo, isInput);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1BAD5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1BCB254(0LL, v10);
    EquipGraphListViewItemDraw__SetInput(v11, (EquipGraphListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall EquipGraphListViewObject__SetItem(
        EquipGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42963052((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EquipGraphListViewObject__SetItem_40287740(
        EquipGraphListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__SetupDisp(
        EquipGraphListViewObject_o *this,
        bool afterEndSelectConfirm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  bool v8; // w1
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  EquipGraphListViewItemDraw_o *v12; // x0

  if ( (byte_4B1BAD8 & 1) == 0 )
  {
    sub_1BCAFF8(&EquipGraphListViewItem_TypeInfo, afterEndSelectConfirm);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1BAD8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1BCB254(0LL, v10);
    EquipGraphListViewItemDraw__SetItem(
      v12,
      (EquipGraphListViewItem_o *)linkItem,
      this->fields.dispMode,
      afterEndSelectConfirm,
      v11);
  }
}


void __fastcall EquipGraphListViewObject__add_callbackFunc(
        EquipGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1BAD0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1BAD0 = 1;
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
  EquipGraphListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EquipGraphListViewObject__remove_callbackFunc(
        EquipGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1BAD1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1BAD1 = 1;
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
  EquipGraphListViewObject__Awake(v11, v12);
}