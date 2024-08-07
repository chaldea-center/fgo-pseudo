void __fastcall EventPointItemListViewObject___ctor(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A029C6 & 1) == 0 )
  {
    sub_1B64A00(&ListViewObject_TypeInfo, method);
    byte_4A029C6 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventPointItemListViewObject__Awake(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A029B9 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewItemDraw___, method);
    byte_4A029B9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64C5C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewItemDraw___);
  this->fields.itemDraw = (struct EventPointItemListViewItemDraw_o *)Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall EventPointItemListViewObject__CreateDragObject(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A029BC & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, method);
    byte_4A029BC = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___)) == 0LL) )
  {
    sub_1B64C5C(DragObject, v4);
  }
  EventPointItemListViewObject__Init_45393880((EventPointItemListViewObject_o *)DragObject, 2, v6);
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A029C3 & 1) == 0 )
  {
    sub_1B64A00(&ListViewObject_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_6151/*"EventExitMove2"*/, v4);
    byte_4A029C3 = 1;
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
    v24 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = this->fields.dragObject;
    v13 = ListViewObject_TypeInfo;
    v14 = v24.fields.x + 1000.0;
    v15 = v24.fields.y + 0.0;
    v16 = v24.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v13 = ListViewObject_TypeInfo;
    }
    v25.fields.x = v14;
    v25.fields.y = v15;
    v25.fields.z = v16;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v13->static_fields->BASE_MOVE_TIME, v25, 0LL);
    if ( !transform )
LABEL_15:
      sub_1B64C5C(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v17[3].monitor = gameObject;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v17[3].monitor, (int32_t)gameObject, v19, v20);
    v21 = StringLiteral_6151/*"EventExitMove2"*/;
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6151/*"EventExitMove2"*/;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v17[3].fields, v21, v22, v23);
  }
}


void __fastcall EventPointItemListViewObject__EventExitMove2(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_4A029C4 & 1) == 0 )
  {
    sub_1B64A00(&NGUITools_TypeInfo, method);
    byte_4A029C4 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v4, v5);
  EventPointItemListViewObject__EventMoveEnd(this, v6);
}


void __fastcall EventPointItemListViewObject__EventExitStart(
        EventPointItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4A029C2 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_6150/*"EventExitMove"*/, v6);
    byte_4A029C2 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventPointItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventPointItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventPointItemListViewObject__EventMoveEnd(this, v10);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1B64C5C(dragObject, v10);
  EventPointItemListViewObject__Init_45393880((EventPointItemListViewObject_o *)Component_object, 2, v13);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6150/*"EventExitMove"*/,
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A029C0 & 1) == 0 )
  {
    sub_1B64A00(&ListViewObject_TypeInfo, method);
    sub_1B64A00(&StringLiteral_6161/*"EventIntoMove2"*/, v3);
    byte_4A029C0 = 1;
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
  v21 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = ListViewObject_TypeInfo;
  v10 = this->fields.dragObject;
  x = v21.fields.x;
  y = v21.fields.y;
  z = v21.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v9->static_fields->BASE_MOVE_TIME, v22, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1B64C5C(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].monitor = gameObject;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17);
  v18 = StringLiteral_6161/*"EventIntoMove2"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6161/*"EventIntoMove2"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v14[3].fields, v18, v19, v20);
}


void __fastcall EventPointItemListViewObject__EventIntoMove2(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_4A029C1 & 1) == 0 )
  {
    sub_1B64A00(&NGUITools_TypeInfo, method);
    byte_4A029C1 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventPointItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v5, v6);
  EventPointItemListViewObject__EventMoveEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__EventIntoStart(
        EventPointItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0

  if ( (byte_4A029BF & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, method);
    sub_1B64A00(&StringLiteral_6160/*"EventIntoMove"*/, v5);
    byte_4A029BF = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventPointItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventPointItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v6, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___)) == 0LL
    || (EventPointItemListViewObject__Init_45393880((EventPointItemListViewObject_o *)dragObject, 2, v12),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__TransformPoint_69162064(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B64C5C(dragObject, v10);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6160/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall EventPointItemListViewObject__EventMoveEnd(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc[-1].fields.isMine = 0;
  *((_DWORD *)&p_callbackFunc[-1].fields.isMine + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B649A4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


EventPointItemListViewItem_o *__fastcall EventPointItemListViewObject__GetItem(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A029BB & 1) == 0 )
  {
    sub_1B64A00(&EventPointItemListViewItem_TypeInfo, method);
    byte_4A029BB = 1;
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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A029BD & 1) == 0 )
  {
    sub_1B64A00(&EventPointItemListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A029BD = 1;
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
    sub_1B64C5C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v18, v19);
  v23 = 1;
  switch ( v12 )
  {
    case 0:
    case 2:
      goto LABEL_13;
    case 1:
    case 3:
      v23 = v12;
LABEL_13:
      this->fields.dispMode = v12;
      this->fields.state = v23;
      goto LABEL_14;
    case 4:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      EventPointItemListViewObject__EventIntoStart(this, delay, v20);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      EventPointItemListViewObject__EventExitStart(this, delay, v20);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        EventPointItemListViewObject__SetupDisp(this, v20);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1B649A4(p_callbackFunc, 0, v21, v22);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_45393880(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  EventPointItemListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_45394892(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  EventPointItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_45395496(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  EventPointItemListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void __fastcall EventPointItemListViewObject__OnDestroy(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A029BA & 1) == 0 )
  {
    sub_1B64A00(&NGUITools_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A029BA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
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
    sub_1B649A4(p_dragObject, 0, v8, v9);
  }
}


void __fastcall EventPointItemListViewObject__SetItem(
        EventPointItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40424740((ListViewObject_o *)this, item, seed, 0LL);
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

  if ( (byte_4A029BE & 1) == 0 )
  {
    sub_1B64A00(&EventPointItemListViewItem_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A029BE = 1;
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
      sub_1B64C5C(0LL, v8);
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

  if ( (byte_4A029C5 & 1) == 0 )
  {
    sub_1B64A00(&EventPointItemListViewItemDraw_DispMode_TypeInfo, method);
    sub_1B64A00(&StringLiteral_117/*" "*/, v3);
    byte_4A029C5 = 1;
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
  v7 = (System_String_o *)sub_1D8E8C0(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_61396396(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
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

  if ( (byte_4A029B7 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A029B7 = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
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

  if ( (byte_4A029B8 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A029B8 = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  EventPointItemListViewObject__Awake(v11, v12);
}