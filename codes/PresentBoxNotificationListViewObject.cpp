void __fastcall PresentBoxNotificationListViewObject___ctor(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B5951 & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    byte_49B5951 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationListViewObject__Awake(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_49B5949 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewItemDraw___, method);
    byte_49B5949 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B4D1EC(0LL, v3);
  this->fields.itemDraw = (struct PresentBoxNotificationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               dispObject,
                                                                               (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewItemDraw___);
  sub_1B4CF34(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall PresentBoxNotificationListViewObject__CreateDragObject(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_49B594D & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewObject___, method);
    byte_49B594D = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewObject___)) == 0LL) )
  {
    sub_1B4D1EC(DragObject, v4);
  }
  PresentBoxNotificationListViewObject__Init_30368028((PresentBoxNotificationListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void __fastcall PresentBoxNotificationListViewObject__EventMoveEnd(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 8) = 0;
  *((_DWORD *)p_callbackFunc - 1) = 1;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B4CF34(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


PresentBoxNotificationListViewItem_o *__fastcall PresentBoxNotificationListViewObject__GetItem(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49B594B & 1) == 0 )
  {
    sub_1B4CF90(&PresentBoxNotificationListViewItem_TypeInfo, method);
    byte_49B594B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(PresentBoxNotificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PresentBoxNotificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PresentBoxNotificationListViewItem_TypeInfo )
    return (PresentBoxNotificationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewObject__Init(
        PresentBoxNotificationListViewObject_o *this,
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
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // w9
  struct System_Action_o *v19; // x19

  if ( (byte_49B594E & 1) == 0 )
  {
    sub_1B4CF90(&PresentBoxNotificationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_49B594E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(PresentBoxNotificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PresentBoxNotificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PresentBoxNotificationListViewItem_TypeInfo )
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
  ((void (__fastcall *)(PresentBoxNotificationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
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
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1B4CF34(&this->fields.callbackFunc);
  if ( (unsigned int)v11 <= 3 )
  {
    v18 = dword_BA9750[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BAA330 + v11);
    this->fields.state = v18;
  }
  if ( !state || dispMode != this->fields.dispMode )
    PresentBoxNotificationListViewObject__SetupDisp(this, v17);
  v19 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B4CF34(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v19->fields.m_target)(
      v19->fields.original_method_info,
      *(_QWORD *)&v19->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewObject__Init_30368028(
        PresentBoxNotificationListViewObject_o *this,
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
  PresentBoxNotificationListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewObject__Init_30369324(
        PresentBoxNotificationListViewObject_o *this,
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
  PresentBoxNotificationListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewObject__Init_30369408(
        PresentBoxNotificationListViewObject_o *this,
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
  PresentBoxNotificationListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall PresentBoxNotificationListViewObject__OnDestroy(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_49B594A & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B594A = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_1B4CF34(p_dragObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewObject__SetInput(
        PresentBoxNotificationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_49B594C & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B4CF90(&PresentBoxNotificationListViewItem_TypeInfo, v5);
    byte_49B594C = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v7 && !this->fields.itemDraw )
    sub_1B4D1EC(v7, v8);
}


void __fastcall PresentBoxNotificationListViewObject__SetItem(
        PresentBoxNotificationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41356616((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall PresentBoxNotificationListViewObject__SetupDisp(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  PresentBoxNotificationListViewItemDraw_o *v10; // x0

  if ( (byte_49B594F & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&PresentBoxNotificationListViewItem_TypeInfo, v3);
    byte_49B594F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(PresentBoxNotificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PresentBoxNotificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PresentBoxNotificationListViewItem_TypeInfo )
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
    PresentBoxNotificationListViewItemDraw__SetItem(
      v10,
      (PresentBoxNotificationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


void __fastcall PresentBoxNotificationListViewObject__Start(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    PresentBoxNotificationListViewObject__Init_30368028(this, 2, v2);
}


System_String_o *__fastcall PresentBoxNotificationListViewObject__ToString(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_49B5950 & 1) == 0 )
  {
    sub_1B4CF90(&PresentBoxNotificationListViewItemDraw_DispMode_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_115/*" "*/, v3);
    byte_49B5950 = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)PresentBoxNotificationListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D09D10(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_61131716(v6, (System_String_o *)StringLiteral_115/*" "*/, v7, 0LL);
}


void __fastcall PresentBoxNotificationListViewObject__add_callbackFunc(
        PresentBoxNotificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxNotificationListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49B5947 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49B5947 = 1;
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
  v11 = (PresentBoxNotificationListViewObject_o *)sub_1B4D4AC(v8);
  PresentBoxNotificationListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PresentBoxNotificationListViewObject__remove_callbackFunc(
        PresentBoxNotificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxNotificationListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49B5948 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49B5948 = 1;
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
  v11 = (PresentBoxNotificationListViewObject_o *)sub_1B4D4AC(v8);
  PresentBoxNotificationListViewObject__Awake(v11, v12);
}