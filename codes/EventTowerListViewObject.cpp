void EventTowerListViewObject___ctor(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AD1A & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596AD1A = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventTowerListViewObject__Awake(EventTowerListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596AD0D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
    byte_596AD0D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
  this->fields.itemDraw = (struct EventTowerListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void EventTowerListViewObject__EventExitMove(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x20
  ListViewObject_c *v11; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s10
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596AD17 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6477/*"EventExitMove2"*/);
    byte_596AD17 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    EventTowerListViewObject__EventMoveEnd(this, v5);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_15;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_15;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_15;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !parent )
      goto LABEL_15;
    v31 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v10 = this->fields.dragObject;
    v11 = ListViewObject_TypeInfo;
    v12 = v31.fields.x + 1000.0;
    v13 = v31.fields.y + 0.0;
    v14 = v31.fields.z + 0.0;
    if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v8, v9);
      v11 = ListViewObject_TypeInfo;
    }
    v32.fields.x = v12;
    v32.fields.y = v13;
    v32.fields.z = v14;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v11->static_fields->BASE_MOVE_TIME, v32, 0);
    if ( !transform )
LABEL_15:
      sub_2213CDC(transform, v5);
    v15 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v15[3].monitor = gameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].monitor, (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
    v23 = StringLiteral_6477/*"EventExitMove2"*/;
    v15[3].fields.m_CachedPtr = StringLiteral_6477/*"EventExitMove2"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].fields, v23, v24, v25, v26, v27, v28, v29);
  }
}


void EventTowerListViewObject__EventExitMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  if ( (byte_596AD18 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596AD18 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  EventTowerListViewObject__EventMoveEnd(this, v11);
}


void EventTowerListViewObject__EventExitStart(EventTowerListViewObject_o *this, float delay, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v17; // x2

  if ( (byte_596AD16 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6476/*"EventExitMove"*/);
    byte_596AD16 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventTowerListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_2213CDC(dragObject, v12);
  EventTowerListViewObject__Init_38964112((EventTowerListViewObject_o *)Component_object, 2, v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6476/*"EventExitMove"*/,
    delay,
    0);
}


void EventTowerListViewObject__EventIntoMove(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  float x; // s8
  float y; // s9
  ListViewObject_c *v9; // x0
  float z; // s10
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596AD14 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6492/*"EventIntoMove2"*/);
    byte_596AD14 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_11;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_11;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !parent )
    goto LABEL_11;
  v28 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  x = v28.fields.x;
  y = v28.fields.y;
  v9 = ListViewObject_TypeInfo;
  z = v28.fields.z;
  v11 = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v5, v6);
    v9 = ListViewObject_TypeInfo;
  }
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v11, v9->static_fields->BASE_MOVE_TIME, v29, 0);
  if ( !dragObject )
LABEL_11:
    sub_2213CDC(dragObject, method);
  v12 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_6492/*"EventIntoMove2"*/;
  v12[3].fields.m_CachedPtr = StringLiteral_6492/*"EventIntoMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].fields, v20, v21, v22, v23, v24, v25, v26);
}


void EventTowerListViewObject__EventIntoMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1

  if ( (byte_596AD15 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596AD15 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  EventTowerListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  EventTowerListViewObject__EventMoveEnd(this, v13);
}


void EventTowerListViewObject__EventIntoStart(EventTowerListViewObject_o *this, float delay, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AD13 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_2213A60(&StringLiteral_6491/*"EventIntoMove"*/);
    byte_596AD13 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___)) == 0
    || (EventTowerListViewObject__Init_38964112((EventTowerListViewObject_o *)dragObject, 2, v15),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v17 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_2213CDC(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, v17, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6491/*"EventIntoMove"*/,
    delay,
    0);
}


void EventTowerListViewObject__EventMoveEnd(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_CallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *CallbackFunc; // t1

  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc;
  v9 = CallbackFunc;
  LOBYTE(p_CallbackFunc[-1].fields._NaviAction_k__BackingField) = 0;
  HIDWORD(p_CallbackFunc[-1].fields._NaviAction_k__BackingField) = 1;
  if ( CallbackFunc )
  {
    p_CallbackFunc->klass = 0;
    sub_2213A04(p_CallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


EventTowerListViewItem_o *EventTowerListViewObject__GetItem(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596AD0F & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewItem_TypeInfo);
    byte_596AD0F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventTowerListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventTowerListViewItem_TypeInfo )
    return (EventTowerListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventTowerListViewObject__Init(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int v13; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  MissionNaviTransitionBoardItem_o *p_CallbackFunc; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w8
  MissionNaviTransitionBoardItem_c *v33; // x19

  if ( (byte_596AD11 & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewItem_TypeInfo);
    byte_596AD11 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = EventTowerListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventTowerListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == EventTowerListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(EventTowerListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc,
    (int32_t)callbackFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v32 = 1;
  if ( v13 <= 1 )
  {
    if ( v13 )
    {
      v32 = v13;
      if ( v13 != 1 )
        goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( v13 == 2 || (v32 = v13, v13 == 3) )
  {
LABEL_18:
    this->fields.state = v32;
    this->fields.dispMode = v13;
    goto LABEL_19;
  }
  if ( v13 == 4 )
  {
    *(_QWORD *)&this->fields.state = 2;
    EventTowerListViewObject__EventIntoStart(this, delay, v25);
    return;
  }
LABEL_19:
  if ( !state || dispMode != this->fields.dispMode )
    EventTowerListViewObject__SetupDisp(this, v25);
  v33 = p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0;
    sub_2213A04(p_CallbackFunc, 0, v26, v27, v28, v29, v30, v31);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v33->_1.namespaze)(
      v33->_1.element_class,
      *(_QWORD *)&v33->_1.byval_arg.bits);
  }
}


void EventTowerListViewObject__InitItem(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void EventTowerListViewObject__Init_38964112(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void EventTowerListViewObject__Init_38964968(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void EventTowerListViewObject__Init_38965488(
        EventTowerListViewObject_o *this,
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
  EventTowerListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void EventTowerListViewObject__OnClickSelect(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596AD19 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596AD19 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void EventTowerListViewObject__SetInput(EventTowerListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_596AD10 & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD10 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v8 && !this->fields.itemDraw )
    sub_2213CDC(v8, v9);
}


void EventTowerListViewObject__SetItem(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void EventTowerListViewObject__SetItem_38967436(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
}


void EventTowerListViewObject__SetupDisp(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct ListViewManager_o *manager; // x8
  __int64 v16; // x11
  struct ListViewManager_o *v17; // x1
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  EventTowerListViewItemDraw_o *v20; // x0

  if ( (byte_596AD12 & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewItem_TypeInfo);
    sub_2213A60(&EventTowerListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD12 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EventTowerListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventTowerListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    manager = this->fields.manager;
    if ( manager
      && (v16 = EventTowerListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)v16) )
    {
      if ( (EventTowerListViewManager_c *)manager->klass->_2.typeHierarchy[v16 - 1] == EventTowerListViewManager_TypeInfo )
        v17 = this->fields.manager;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
    this->fields.manager = v17;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.manager, (int32_t)v17, v9, v10, v11, v12, v13, v14);
    v20 = this->fields.itemDraw;
    if ( !v20 )
      sub_2213CDC(0, v18);
    EventTowerListViewItemDraw__SetItem(v20, (EventTowerListViewItem_o *)linkItem, this->fields.dispMode, v19);
  }
}


void EventTowerListViewObject__Update(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *manager; // x19

  if ( (byte_596AD0E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD0E = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    UnityEngine_Object__op_Equality(manager, 0, 0);
  }
}


void EventTowerListViewObject__add_CallbackFunc(
        EventTowerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EventTowerListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596AD0B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596AD0B = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (EventTowerListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  EventTowerListViewObject__remove_CallbackFunc(v13, v14, v15);
}


void EventTowerListViewObject__remove_CallbackFunc(
        EventTowerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EventTowerListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596AD0C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596AD0C = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (EventTowerListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  EventTowerListViewObject__Awake(v13, v14);
}