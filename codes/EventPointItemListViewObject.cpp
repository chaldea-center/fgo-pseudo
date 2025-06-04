void __fastcall EventPointItemListViewObject___ctor(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4AFC67B & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    byte_4AFC67B = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventPointItemListViewObject__Awake(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4AFC66E & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewItemDraw___, method);
    byte_4AFC66E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BC3264(0LL, v3);
  this->fields.itemDraw = (struct EventPointItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       dispObject,
                                                                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewItemDraw___);
  sub_1BC2FAC(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall EventPointItemListViewObject__CreateDragObject(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4AFC671 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, method);
    byte_4AFC671 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___)) == 0LL) )
  {
    sub_1BC3264(DragObject, v4);
  }
  EventPointItemListViewObject__Init_31128108((EventPointItemListViewObject_o *)DragObject, 2, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__EventExitMove(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x20
  ListViewObject_c *v13; // x0
  float v14; // s8
  float v15; // s10
  float v16; // s9
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4AFC678 & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_6161/*"EventExitMove2"*/, v4);
    byte_4AFC678 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    EventPointItemListViewObject__EventMoveEnd(this, v6);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_15;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_15;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_15;
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_15;
    v18 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = this->fields.dragObject;
    v13 = ListViewObject_TypeInfo;
    v14 = v18.fields.x + 1000.0;
    v15 = v18.fields.y + 0.0;
    v16 = v18.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v13 = ListViewObject_TypeInfo;
    }
    v19.fields.x = v14;
    v19.fields.y = v15;
    v19.fields.z = v16;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v13->static_fields->BASE_MOVE_TIME, v19, 0LL);
    if ( !transform )
LABEL_15:
      sub_1BC3264(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    transform[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    sub_1BC2FAC(&v17[3].monitor);
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6161/*"EventExitMove2"*/;
    sub_1BC2FAC(&v17[3].fields);
  }
}


void __fastcall EventPointItemListViewObject__EventExitMove2(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4AFC679 & 1) == 0 )
  {
    sub_1BC3008(&NGUITools_TypeInfo, method);
    byte_4AFC679 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BC2FAC(&this->fields.dragObject);
  EventPointItemListViewObject__EventMoveEnd(this, v4);
}


void __fastcall EventPointItemListViewObject__EventExitStart(
        EventPointItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4AFC677 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_6160/*"EventExitMove"*/, v6);
    byte_4AFC677 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventPointItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventPointItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1BC2FAC(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventPointItemListViewObject__EventMoveEnd(this, v7);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1BC3264(dragObject, v7);
  EventPointItemListViewObject__Init_31128108((EventPointItemListViewObject_o *)Component_object, 2, v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6160/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__EventIntoMove(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v6; // s0
  ListViewObject_c *v9; // x0
  UnityEngine_GameObject_o *v10; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4AFC675 & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    sub_1BC3008(&StringLiteral_6172/*"EventIntoMove2"*/, v3);
    byte_4AFC675 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_11;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_11;
  v15 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = ListViewObject_TypeInfo;
  v10 = this->fields.dragObject;
  x = v15.fields.x;
  y = v15.fields.y;
  z = v15.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v9->static_fields->BASE_MOVE_TIME, v16, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1BC3264(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1BC2FAC(&v14[3].monitor);
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6172/*"EventIntoMove2"*/;
  sub_1BC2FAC(&v14[3].fields);
}


void __fastcall EventPointItemListViewObject__EventIntoMove2(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4AFC676 & 1) == 0 )
  {
    sub_1BC3008(&NGUITools_TypeInfo, method);
    byte_4AFC676 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventPointItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BC2FAC(&this->fields.dragObject);
  EventPointItemListViewObject__EventMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__EventIntoStart(
        EventPointItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0

  if ( (byte_4AFC674 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, method);
    sub_1BC3008(&StringLiteral_6171/*"EventIntoMove"*/, v5);
    byte_4AFC674 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventPointItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventPointItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  sub_1BC2FAC(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___)) == 0LL
    || (EventPointItemListViewObject__Init_31128108((EventPointItemListViewObject_o *)dragObject, 2, v9),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__TransformPoint_70060900(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1BC3264(dragObject, v7);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6171/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall EventPointItemListViewObject__EventMoveEnd(
        EventPointItemListViewObject_o *this,
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
    sub_1BC2FAC(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


EventPointItemListViewItem_o *__fastcall EventPointItemListViewObject__GetItem(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4AFC670 & 1) == 0 )
  {
    sub_1BC3008(&EventPointItemListViewItem_TypeInfo, method);
    byte_4AFC670 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventPointItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventPointItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventPointItemListViewItem_TypeInfo )
    return (EventPointItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v12; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  struct System_Action_o *v20; // x19

  if ( (byte_4AFC672 & 1) == 0 )
  {
    sub_1BC3008(&EventPointItemListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4AFC672 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventPointItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventPointItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventPointItemListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0LL);
  ((void (__fastcall *)(EventPointItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v12 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BC3264(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1BC2FAC(&this->fields.callbackFunc);
  v19 = 1;
  switch ( v12 )
  {
    case 0:
    case 2:
      goto LABEL_13;
    case 1:
    case 3:
      v19 = v12;
LABEL_13:
      this->fields.dispMode = v12;
      this->fields.state = v19;
      goto LABEL_14;
    case 4:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      EventPointItemListViewObject__EventIntoStart(this, delay, v18);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      EventPointItemListViewObject__EventExitStart(this, delay, v18);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        EventPointItemListViewObject__SetupDisp(this, v18);
      v20 = *p_callbackFunc;
      if ( *p_callbackFunc )
      {
        *p_callbackFunc = 0LL;
        sub_1BC2FAC(p_callbackFunc);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
          v20->fields.original_method_info,
          *(_QWORD *)&v20->fields.extra_arg);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_31128108(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AFBDB1 = 1;
  }
  EventPointItemListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_31129120(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AFBDB1 = 1;
  }
  EventPointItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_31129724(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AFBDB1 = 1;
  }
  EventPointItemListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void __fastcall EventPointItemListViewObject__OnDestroy(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4AFC66F & 1) == 0 )
  {
    sub_1BC3008(&NGUITools_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFC66F = 1;
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
    sub_1BC2FAC(p_dragObject);
  }
}


void __fastcall EventPointItemListViewObject__SetItem(
        EventPointItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_42800124((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventPointItemListViewObject__SetupDisp(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  EventPointItemListViewItemDraw_o *v10; // x0

  if ( (byte_4AFC673 & 1) == 0 )
  {
    sub_1BC3008(&EventPointItemListViewItem_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFC673 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EventPointItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventPointItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewItem_TypeInfo )
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
      sub_1BC3264(0LL, v8);
    EventPointItemListViewItemDraw__SetItem(v10, (EventPointItemListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


System_String_o *__fastcall EventPointItemListViewObject__ToString(
        EventPointItemListViewObject_o *this,
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

  if ( (byte_4AFC67A & 1) == 0 )
  {
    sub_1BC3008(&EventPointItemListViewItemDraw_DispMode_TypeInfo, method);
    sub_1BC3008(&StringLiteral_113/*" "*/, v3);
    byte_4AFC67A = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)EventPointItemListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D80BBC(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_62386896(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0LL);
}


void __fastcall EventPointItemListViewObject__add_callbackFunc(
        EventPointItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4AFC66C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFC66C = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventPointItemListViewObject_o *)sub_1BC3524(v8);
  EventPointItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EventPointItemListViewObject__remove_callbackFunc(
        EventPointItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4AFC66D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFC66D = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventPointItemListViewObject_o *)sub_1BC3524(v8);
  EventPointItemListViewObject__Awake(v11, v12);
}