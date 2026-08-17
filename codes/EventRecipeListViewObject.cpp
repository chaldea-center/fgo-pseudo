void EventRecipeListViewObject___ctor(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A9D8 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596A9D8 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventRecipeListViewObject__Awake(EventRecipeListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596A9D0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewItemDraw___);
    byte_596A9D0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewItemDraw___);
  this->fields.itemDraw = (struct EventRecipeListViewItemDraw_o *)Component_object;
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


void EventRecipeListViewObject__CallOnMoveEnd(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_2213A04(p_onMoveEnd, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


UnityEngine_GameObject_o *EventRecipeListViewObject__CreateDragObject(
        EventRecipeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_596A9D3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
    byte_596A9D3 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  EventRecipeListViewObject__Init_38570112((EventRecipeListViewObject_o *)DragObject, 2, 0, 0.0, v6);
  return v5;
}


void EventRecipeListViewObject__EventMove(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float x; // s8
  float y; // s9
  ListViewObject_c *v8; // x0
  float z; // s10
  UnityEngine_GameObject_o *dragObject; // x20
  TweenPosition_o *v11; // x0
  __int64 v12; // x1
  TweenPosition_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596A9D7 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6499/*"EventMoveFinish"*/);
    byte_596A9D7 = 1;
  }
  TargetPosition = EventRecipeListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  v8 = ListViewObject_TypeInfo;
  z = TargetPosition.fields.z;
  dragObject = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v4, v5);
    v8 = ListViewObject_TypeInfo;
  }
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  v11 = TweenPosition__Begin(dragObject, v8->static_fields->BASE_MOVE_TIME, v29, 0);
  if ( !v11 )
    sub_2213CDC(0, v12);
  v13 = v11;
  v11->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13->fields.eventReceiver = gameObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.eventReceiver,
    (int32_t)gameObject,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = StringLiteral_6499/*"EventMoveFinish"*/;
  v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6499/*"EventMoveFinish"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
}


// local variable allocation has failed, the output may be wrong!
void EventRecipeListViewObject__EventStart(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Vector3_o StartPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A9D6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
    sub_2213A60(&StringLiteral_6497/*"EventMove"*/);
    byte_596A9D6 = 1;
  }
  this->fields.isBusy = 1;
  EventRecipeListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRecipeListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v7;
  p_dragObject = &this->fields.dragObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___)) == 0
    || (EventRecipeListViewObject__Init_38570112((EventRecipeListViewObject_o *)dragObject, 2, 0, 0.0, v17),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        StartPosition = EventRecipeListViewObject__GetStartPosition(this, initMode, v19),
        !transform) )
  {
    sub_2213CDC(dragObject, v15);
  }
  UnityEngine_Transform__set_position(transform, StartPosition, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6497/*"EventMove"*/,
    delay,
    0);
}


EventRecipeListViewItem_o *EventRecipeListViewObject__GetItem(
        EventRecipeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596A9D2 & 1) == 0 )
  {
    sub_2213A60(&EventRecipeListViewItem_TypeInfo);
    byte_596A9D2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventRecipeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventRecipeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRecipeListViewItem_TypeInfo )
    return (EventRecipeListViewItem_o *)this->fields.linkItem;
  return 0;
}


UnityEngine_Vector3_o EventRecipeListViewObject__GetStartPosition(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( initMode == 4 )
  {
    if ( transform )
      return UnityEngine_Transform__TransformPoint_83496448(transform, 1000.0, 0.0, 0.0, 0);
LABEL_6:
    sub_2213CDC(transform, v5);
  }
  if ( !transform )
    goto LABEL_6;
  return UnityEngine_Transform__get_position(transform, 0);
}


int32_t EventRecipeListViewObject__GetState(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 7 )
    return 0;
  else
    return dword_ED8FF4[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o EventRecipeListViewObject__GetTargetPosition(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v5; // x20
  float v6; // s0 OVERLAPPED
  float v7; // s1
  UnityEngine_Transform_o *parent; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  dragObject = this->fields.dragObject;
  if ( initMode == 6 )
  {
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
      if ( dragObject )
      {
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( dragObject )
        {
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
          if ( parent )
          {
            v14 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
            v6 = v9 + 1000.0;
            v7 = v10 + 0.0;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_19:
    sub_2213CDC(dragObject, *(_QWORD *)&initMode);
  }
  if ( initMode != 5 )
  {
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
      if ( dragObject )
      {
        v12 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( dragObject )
        {
          v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
          if ( v12 )
          {
            *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__InverseTransformPoint(v12, v16, 0);
            goto LABEL_20;
          }
        }
      }
    }
    goto LABEL_19;
  }
  if ( !dragObject )
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_19;
  v5 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_19;
  v13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v5 )
    goto LABEL_19;
  v14 = UnityEngine_Transform__InverseTransformPoint(v5, v13, 0);
  v6 = v14.fields.x + 0.0;
  v7 = v14.fields.y + 1000.0;
LABEL_13:
  v11 = v14.fields.z + 0.0;
LABEL_20:
  result.fields.z = v11;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


void EventRecipeListViewObject__Init(EventRecipeListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  EventRecipeListViewObject__Init_38570112(this, initMode, 0, 0.0, v3);
}


void EventRecipeListViewObject__Init_38570112(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int32_t v12; // w8
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  EventRecipeListViewObject_o *v23; // x0
  const MethodInfo *v24; // x2
  int32_t v25; // w21
  int32_t v26; // w25
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_596A9D4 & 1) == 0 )
  {
    sub_2213A60(&EventRecipeListViewItem_TypeInfo);
    byte_596A9D4 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        naturalAligment = EventRecipeListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (v12 = initMode,
        (EventRecipeListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != EventRecipeListViewItem_TypeInfo) )
  {
    v12 = 0;
    this->fields.initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(EventRecipeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v25 = this->fields.initMode;
  if ( (unsigned int)(v25 - 1) >= 3 )
    v26 = 0;
  else
    v26 = this->fields.initMode;
  this->fields.dispMode = v26;
  this->fields.state = EventRecipeListViewObject__GetState(v23, v25, v24);
  if ( initMode > 5 )
  {
    if ( initMode != 7 )
    {
      if ( initMode != 6 )
        goto LABEL_15;
      goto LABEL_20;
    }
  }
  else if ( initMode != 3 )
  {
    if ( initMode != 4 )
    {
LABEL_15:
      if ( state && dispMode == v26 )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_20:
    EventRecipeListViewObject__EventStart(this, v25, delay, v28);
    return;
  }
LABEL_21:
  EventRecipeListViewObject__SetupDisp(this, v27);
LABEL_22:
  EventRecipeListViewObject__CallOnMoveEnd(this, v27);
}


void EventRecipeListViewObject__OnDestroy(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A9D1 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A9D1 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void EventRecipeListViewObject__SetItem(
        EventRecipeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void EventRecipeListViewObject__SetupDisp(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  EventRecipeListViewItemDraw_o *v11; // x0

  if ( (byte_596A9D5 & 1) == 0 )
  {
    sub_2213A60(&EventRecipeListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A9D5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EventRecipeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventRecipeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventRecipeListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    EventRecipeListViewItemDraw__SetItem(v11, (EventRecipeListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


void EventRecipeListViewObject__add_onMoveEnd(
        EventRecipeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EventRecipeListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A9CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A9CE = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_onMoveEnd, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (EventRecipeListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  EventRecipeListViewObject__remove_onMoveEnd(v13, v14, v15);
}


int32_t EventRecipeListViewObject__get_DispMode(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.dispMode;
}


void EventRecipeListViewObject__remove_onMoveEnd(
        EventRecipeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EventRecipeListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A9CF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A9CF = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_onMoveEnd, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (EventRecipeListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  EventRecipeListViewObject__get_DispMode(v13, v14);
}