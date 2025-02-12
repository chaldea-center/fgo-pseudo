void __fastcall EventTowerListViewObject___ctor(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BC2A31 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    byte_4BC2A31 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventTowerListViewObject__Awake(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4BC2A24 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___, method);
    byte_4BC2A24 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C1AE30(0LL, v3);
  this->fields.itemDraw = (struct EventTowerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   dispObject,
                                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
  sub_1C1AB78(&this->fields.itemDraw);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__EventExitMove(EventTowerListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4BC2A2E & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_6334/*"EventExitMove2"*/, v4);
    byte_4BC2A2E = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    EventTowerListViewObject__EventMoveEnd(this, v6);
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
      sub_1C1AE30(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    transform[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    sub_1C1AB78(&v17[3].monitor);
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6334/*"EventExitMove2"*/;
    sub_1C1AB78(&v17[3].fields);
  }
}


void __fastcall EventTowerListViewObject__EventExitMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4BC2A2F & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    byte_4BC2A2F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C1AB78(&this->fields.dragObject);
  EventTowerListViewObject__EventMoveEnd(this, v4);
}


void __fastcall EventTowerListViewObject__EventExitStart(
        EventTowerListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4BC2A2D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_6333/*"EventExitMove"*/, v6);
    byte_4BC2A2D = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1C1AB78(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventTowerListViewObject__EventMoveEnd(this, v7);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C1AE30(dragObject, v7);
  EventTowerListViewObject__Init_31574708((EventTowerListViewObject_o *)Component_object, 2, v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6333/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__EventIntoMove(EventTowerListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4BC2A2B & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_6345/*"EventIntoMove2"*/, v3);
    byte_4BC2A2B = 1;
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
    sub_1C1AE30(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1C1AB78(&v14[3].monitor);
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6345/*"EventIntoMove2"*/;
  sub_1C1AB78(&v14[3].fields);
}


void __fastcall EventTowerListViewObject__EventIntoMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4BC2A2C & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    byte_4BC2A2C = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventTowerListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C1AB78(&this->fields.dragObject);
  EventTowerListViewObject__EventMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__EventIntoStart(
        EventTowerListViewObject_o *this,
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

  if ( (byte_4BC2A2A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method);
    sub_1C1ABD4(&StringLiteral_6344/*"EventIntoMove"*/, v5);
    byte_4BC2A2A = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  sub_1C1AB78(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___)) == 0LL
    || (EventTowerListViewObject__Init_31574708((EventTowerListViewObject_o *)dragObject, 2, v9),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__TransformPoint_70819160(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1C1AE30(dragObject, v7);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6344/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall EventTowerListViewObject__EventMoveEnd(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *CallbackFunc; // t1

  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v3 = CallbackFunc;
  *((_BYTE *)p_CallbackFunc - 16) = 0;
  *((_DWORD *)p_CallbackFunc - 3) = 1;
  if ( CallbackFunc )
  {
    *p_CallbackFunc = 0LL;
    sub_1C1AB78(p_CallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


EventTowerListViewItem_o *__fastcall EventTowerListViewObject__GetItem(
        EventTowerListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BC2A26 & 1) == 0 )
  {
    sub_1C1ABD4(&EventTowerListViewItem_TypeInfo, method);
    byte_4BC2A26 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventTowerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTowerListViewItem_TypeInfo )
    return (EventTowerListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init(
        EventTowerListViewObject_o *this,
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
  struct System_Action_o **p_CallbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  struct System_Action_o *v20; // x19

  if ( (byte_4BC2A28 & 1) == 0 )
  {
    sub_1C1ABD4(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2A28 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventTowerListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTowerListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0LL);
  ((void (__fastcall *)(EventTowerListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v12 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C1AE30(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  sub_1C1AB78(&this->fields.CallbackFunc);
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
      this->fields.state = v19;
      this->fields.dispMode = v12;
      goto LABEL_14;
    case 4:
      *(_QWORD *)&this->fields.state = 2LL;
      EventTowerListViewObject__EventIntoStart(this, delay, v18);
      return;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
        EventTowerListViewObject__SetupDisp(this, v18);
      v20 = *p_CallbackFunc;
      if ( *p_CallbackFunc )
      {
        *p_CallbackFunc = 0LL;
        sub_1C1AB78(p_CallbackFunc);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
          v20->fields.original_method_info,
          *(_QWORD *)&v20->fields.extra_arg);
      }
      return;
  }
}


void __fastcall EventTowerListViewObject__InitItem(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_31574708(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_31575560(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_31576080(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall EventTowerListViewObject__OnClickSelect(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4BC2A30 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10034/*"OnClickListView"*/, method);
    byte_4BC2A30 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C1AE30(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10034/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__SetInput(
        EventTowerListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BC2A27 & 1) == 0 )
  {
    sub_1C1ABD4(&EventTowerListViewItem_TypeInfo, isInput);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    byte_4BC2A27 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v7 && !this->fields.itemDraw )
    sub_1C1AE30(v7, v8);
}


void __fastcall EventTowerListViewObject__SetItem(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41974544((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventTowerListViewObject__SetItem_31578036(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
}


void __fastcall EventTowerListViewObject__SetupDisp(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  struct ListViewManager_o *v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  EventTowerListViewItemDraw_o *v14; // x0

  if ( (byte_4BC2A29 & 1) == 0 )
  {
    sub_1C1ABD4(&EventTowerListViewItem_TypeInfo, method);
    sub_1C1ABD4(&EventTowerListViewManager_TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BC2A29 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EventTowerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTowerListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    manager = this->fields.manager;
    if ( manager
      && (v10 = LOBYTE(EventTowerListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10) )
    {
      if ( (EventTowerListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == EventTowerListViewManager_TypeInfo )
        v11 = this->fields.manager;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    this->fields.manager = v11;
    sub_1C1AB78(&this->fields.manager);
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_1C1AE30(0LL, v12);
    EventTowerListViewItemDraw__SetItem(v14, (EventTowerListViewItem_o *)linkItem, this->fields.dispMode, v13);
  }
}


void __fastcall EventTowerListViewObject__Update(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x19

  if ( (byte_4BC2A25 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC2A25 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__op_Equality(manager, 0LL, 0LL);
  }
}


void __fastcall EventTowerListViewObject__add_CallbackFunc(
        EventTowerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BC2A22 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC2A22 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewObject_o *)sub_1C1B0F0(v8);
  EventTowerListViewObject__remove_CallbackFunc(v11, v12, v13);
}


void __fastcall EventTowerListViewObject__remove_CallbackFunc(
        EventTowerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BC2A23 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC2A23 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewObject_o *)sub_1C1B0F0(v8);
  EventTowerListViewObject__Awake(v11, v12);
}