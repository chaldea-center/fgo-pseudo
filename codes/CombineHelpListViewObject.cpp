void __fastcall CombineHelpListViewObject___ctor(CombineHelpListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_49BE976 & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    byte_49BE976 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CombineHelpListViewObject__Awake(CombineHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BE970 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewItemDraw___, method);
    byte_49BE970 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B4D1EC(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewItemDraw___);
  this->fields.itemDraw = (struct CombineHelpListViewItemDraw_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall CombineHelpListViewObject__CreateDragObject(
        CombineHelpListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_49BE973 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___, method);
    byte_49BE973 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___)) == 0LL) )
  {
    sub_1B4D1EC(DragObject, v4);
  }
  CombineHelpListViewObject__Init_45709576((CombineHelpListViewObject_o *)DragObject, 2, v6);
  return v5;
}


CombineHelpListViewItem_o *__fastcall CombineHelpListViewObject__GetItem(
        CombineHelpListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49BE972 & 1) == 0 )
  {
    sub_1B4CF90(&CombineHelpListViewItem_TypeInfo, method);
    byte_49BE972 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(CombineHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CombineHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineHelpListViewItem_TypeInfo )
    return (CombineHelpListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewObject__Init(
        CombineHelpListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w9
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_49BE974 & 1) == 0 )
  {
    sub_1B4CF90(&CombineHelpListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_49BE974 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(CombineHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (CombineHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineHelpListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(CombineHelpListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  if ( (unsigned int)v11 <= 3 )
  {
    v22 = dword_BA9750[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BAA330 + v11);
    this->fields.state = v22;
  }
  if ( !state || dispMode != this->fields.dispMode )
    CombineHelpListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B4CF34(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewObject__Init_45709576(
        CombineHelpListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49B5361 = 1;
  }
  CombineHelpListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewObject__Init_45710172(
        CombineHelpListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49B5361 = 1;
  }
  CombineHelpListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewObject__Init_45710760(
        CombineHelpListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49B5361 = 1;
  }
  CombineHelpListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall CombineHelpListViewObject__OnDestroy(CombineHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49BE971 & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49BE971 = 1;
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
    sub_1B4CF34(p_dragObject, 0, v8, v9);
  }
}


void __fastcall CombineHelpListViewObject__SetItem(
        CombineHelpListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41356616((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall CombineHelpListViewObject__SetupDisp(CombineHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  CombineHelpListViewItemDraw_o *v10; // x0

  if ( (byte_49BE975 & 1) == 0 )
  {
    sub_1B4CF90(&CombineHelpListViewItem_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49BE975 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(CombineHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineHelpListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1B4D1EC(0LL, v8);
    CombineHelpListViewItemDraw__SetItem(v10, (CombineHelpListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall CombineHelpListViewObject__add_callbackFunc(
        CombineHelpListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineHelpListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49BE96E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49BE96E = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  CombineHelpListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CombineHelpListViewObject__remove_callbackFunc(
        CombineHelpListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineHelpListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49BE96F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49BE96F = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  CombineHelpListViewObject__Awake(v11, v12);
}