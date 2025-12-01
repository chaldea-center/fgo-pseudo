void EventRecipeListViewObject___ctor(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC199E & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC199E = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventRecipeListViewObject__Awake(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4CC1996 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewItemDraw___);
    byte_4CC1996 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewItemDraw___);
  this->fields.itemDraw = (struct EventRecipeListViewItemDraw_o *)Component_object;
  sub_1C71354(&this->fields.itemDraw, Component_object);
}


void EventRecipeListViewObject__CallOnMoveEnd(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v3 = onMoveEnd;
  if ( onMoveEnd )
  {
    *p_onMoveEnd = 0;
    sub_1C71354(p_onMoveEnd, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
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

  if ( (byte_4CC1999 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
    byte_4CC1999 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___)) == 0) )
  {
    sub_1C71608(DragObject, v4);
  }
  EventRecipeListViewObject__Init_32284112((EventRecipeListViewObject_o *)DragObject, 2, 0, 0.0, v6);
  return v5;
}


void EventRecipeListViewObject__EventMove(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ListViewObject_c *v4; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  TweenPosition_o *v9; // x0
  __int64 v10; // x1
  TweenPosition_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CC199D & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    sub_1C713B0(&StringLiteral_6227/*"EventMoveFinish"*/);
    byte_4CC199D = 1;
  }
  TargetPosition = EventRecipeListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  v4 = ListViewObject_TypeInfo;
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  z = TargetPosition.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v4 = ListViewObject_TypeInfo;
  }
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  v9 = TweenPosition__Begin(dragObject, v4->static_fields->BASE_MOVE_TIME, v15, 0);
  if ( !v9 )
    sub_1C71608(0, v10);
  v11 = v9;
  v9->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11->fields.eventReceiver = gameObject;
  sub_1C71354(&v11->fields.eventReceiver, gameObject);
  v13 = StringLiteral_6227/*"EventMoveFinish"*/;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6227/*"EventMoveFinish"*/;
  sub_1C71354(&v11->fields.callWhenFinished, v13);
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
  __int64 v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v13; // x2
  UnityEngine_Vector3_o StartPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC199C & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
    sub_1C713B0(&StringLiteral_6225/*"EventMove"*/);
    byte_4CC199C = 1;
  }
  this->fields.isBusy = 1;
  EventRecipeListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRecipeListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v7;
  p_dragObject = &this->fields.dragObject;
  sub_1C71354(&this->fields.dragObject, v7);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___)) == 0
    || (EventRecipeListViewObject__Init_32284112((EventRecipeListViewObject_o *)dragObject, 2, 0, 0.0, v11),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        StartPosition = EventRecipeListViewObject__GetStartPosition(this, initMode, v13),
        !transform) )
  {
    sub_1C71608(dragObject, v9);
  }
  UnityEngine_Transform__set_position(transform, StartPosition, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6225/*"EventMove"*/,
    delay,
    0);
}


EventRecipeListViewItem_o *EventRecipeListViewObject__GetItem(
        EventRecipeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC1998 & 1) == 0 )
  {
    sub_1C713B0(&EventRecipeListViewItem_TypeInfo);
    byte_4CC1998 = 1;
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
  if ( !transform )
    sub_1C71608(0, v5);
  if ( initMode == 4 )
    return UnityEngine_Transform__TransformPoint_71751388(transform, 1000.0, 0.0, 0.0, 0);
  else
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
    return dword_D21CF8[initMode];
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

  if ( initMode == 6 )
  {
    dragObject = this->fields.dragObject;
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
    sub_1C71608(dragObject, *(_QWORD *)&initMode);
  }
  if ( initMode != 5 )
  {
    dragObject = this->fields.dragObject;
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
  dragObject = this->fields.dragObject;
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

  EventRecipeListViewObject__Init_32284112(this, initMode, 0, 0.0, v3);
}


void EventRecipeListViewObject__Init_32284112(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int32_t v12; // w8
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  int32_t v19; // w9
  int32_t v20; // w10
  int v21; // w8

  if ( (byte_4CC199A & 1) == 0 )
  {
    sub_1C713B0(&EventRecipeListViewItem_TypeInfo);
    byte_4CC199A = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        naturalAligment = EventRecipeListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
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
    sub_1C71608(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C71354(&this->fields.onMoveEnd, onMoveEnd);
  v18 = (const MethodInfo *)(unsigned int)this->fields.initMode;
  if ( (_DWORD)v18 == 3 )
  {
    v21 = 3;
    this->fields.dispMode = 3;
    v20 = 3;
    goto LABEL_18;
  }
  v19 = this->fields.initMode;
  if ( (_DWORD)v18 == 2 )
    goto LABEL_13;
  if ( (_DWORD)v18 == 1 )
  {
    v19 = 1;
LABEL_13:
    this->fields.dispMode = v19;
LABEL_14:
    v20 = 1;
    v21 = v19;
    goto LABEL_18;
  }
  this->fields.dispMode = 0;
  v19 = 0;
  v21 = 0;
  v20 = 2;
  switch ( (int)v18 )
  {
    case 0:
    case 7:
      goto LABEL_14;
    case 4:
    case 6:
      break;
    default:
      v21 = 0;
      v20 = 0;
      break;
  }
LABEL_18:
  this->fields.state = v20;
  switch ( initMode )
  {
    case 3:
    case 7:
      goto LABEL_19;
    case 4:
    case 6:
      EventRecipeListViewObject__EventStart(this, (int32_t)v18, delay, v17);
      break;
    default:
      if ( !state || dispMode != v21 )
LABEL_19:
        EventRecipeListViewObject__SetupDisp(this, v18);
      EventRecipeListViewObject__CallOnMoveEnd(this, v18);
      break;
  }
}


void EventRecipeListViewObject__OnDestroy(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4CC1997 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1997 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0);
    *p_dragObject = 0;
    sub_1C71354(p_dragObject, 0);
  }
}


void EventRecipeListViewObject__SetItem(
        EventRecipeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
}


void EventRecipeListViewObject__SetupDisp(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EventRecipeListViewItemDraw_o *v9; // x0

  if ( (byte_4CC199B & 1) == 0 )
  {
    sub_1C713B0(&EventRecipeListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC199B = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C71608(0, v7);
    EventRecipeListViewItemDraw__SetItem(v9, (EventRecipeListViewItem_o *)linkItem, this->fields.dispMode, v8);
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
  __int64 v9; // x0
  bool v10; // zf
  EventRecipeListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC1994 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC1994 = 1;
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
    v9 = sub_1CCD184(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRecipeListViewObject_o *)sub_1C719A4(v8);
  EventRecipeListViewObject__remove_onMoveEnd(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  EventRecipeListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC1995 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC1995 = 1;
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
    v9 = sub_1CCD184(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRecipeListViewObject_o *)sub_1C719A4(v8);
  EventRecipeListViewObject__get_DispMode(v11, v12);
}