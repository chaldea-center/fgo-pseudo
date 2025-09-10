void EventTowerListViewObject___ctor(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C21C41 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C21C41 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventTowerListViewObject__Awake(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C21C34 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
    byte_4C21C34 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  this->fields.itemDraw = (struct EventTowerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   dispObject,
                                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
  sub_1C2D434(&this->fields.itemDraw);
}


void EventTowerListViewObject__EventExitMove(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_GameObject_o *v7; // x20
  ListViewObject_c *v8; // x0
  float v9; // s8
  float v10; // s10
  float v11; // s9
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C21C3E & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6208/*"EventExitMove2"*/);
    byte_4C21C3E = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    EventTowerListViewObject__EventMoveEnd(this, v4);
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
    v14 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v7 = this->fields.dragObject;
    v8 = ListViewObject_TypeInfo;
    v9 = v14.fields.x + 1000.0;
    v10 = v14.fields.y + 0.0;
    v11 = v14.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v8 = ListViewObject_TypeInfo;
    }
    v15.fields.x = v9;
    v15.fields.y = v10;
    v15.fields.z = v11;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v7, v8->static_fields->BASE_MOVE_TIME, v15, 0);
    if ( !transform )
LABEL_15:
      sub_1C2D6EC(transform, v4);
    v12 = transform;
    LODWORD(transform[1].monitor) = 3;
    transform[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    sub_1C2D434(&v12[3].monitor);
    v12[3].fields.m_CachedPtr = StringLiteral_6208/*"EventExitMove2"*/;
    sub_1C2D434(&v12[3].fields);
  }
}


void EventTowerListViewObject__EventExitMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4C21C3F & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C21C3F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434(&this->fields.dragObject);
  EventTowerListViewObject__EventMoveEnd(this, v4);
}


void EventTowerListViewObject__EventExitStart(EventTowerListViewObject_o *this, float delay, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4C21C3D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6207/*"EventExitMove"*/);
    byte_4C21C3D = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._8_CreateDragObject.method);
  sub_1C2D434(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventTowerListViewObject__EventMoveEnd(this, v5);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C2D6EC(dragObject, v5);
  EventTowerListViewObject__Init_32222552((EventTowerListViewObject_o *)Component_object, 2, v8);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6207/*"EventExitMove"*/,
    delay,
    0);
}


void EventTowerListViewObject__EventIntoMove(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C21C3B & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    sub_1C2D490(&StringLiteral_6219/*"EventIntoMove2"*/);
    byte_4C21C3B = 1;
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
  v12 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  x = v12.fields.x;
  y = v12.fields.y;
  z = v12.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v13, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C2D6EC(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  sub_1C2D434(&v10[3].monitor);
  v10[3].fields.m_CachedPtr = StringLiteral_6219/*"EventIntoMove2"*/;
  sub_1C2D434(&v10[3].fields);
}


void EventTowerListViewObject__EventIntoMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4C21C3C & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C21C3C = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  EventTowerListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434(&this->fields.dragObject);
  EventTowerListViewObject__EventMoveEnd(this, v5);
}


void EventTowerListViewObject__EventIntoStart(EventTowerListViewObject_o *this, float delay, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21C3A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_1C2D490(&StringLiteral_6218/*"EventIntoMove"*/);
    byte_4C21C3A = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._8_CreateDragObject.method);
  p_dragObject = &this->fields.dragObject;
  sub_1C2D434(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___)) == 0
    || (EventTowerListViewObject__Init_32222552((EventTowerListViewObject_o *)dragObject, 2, v8),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v10 = UnityEngine_Transform__TransformPoint_71190304((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_1C2D6EC(dragObject, v6);
  }
  UnityEngine_Transform__set_position(transform, v10, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6218/*"EventIntoMove"*/,
    delay,
    0);
}


void EventTowerListViewObject__EventMoveEnd(EventTowerListViewObject_o *this, const MethodInfo *method)
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
    *p_CallbackFunc = 0;
    sub_1C2D434(p_CallbackFunc);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


EventTowerListViewItem_o *EventTowerListViewObject__GetItem(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C21C36 & 1) == 0 )
  {
    sub_1C2D490(&EventTowerListViewItem_TypeInfo);
    byte_4C21C36 = 1;
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
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v12; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  struct System_Action_o **p_CallbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  struct System_Action_o *v20; // x19

  if ( (byte_4C21C38 & 1) == 0 )
  {
    sub_1C2D490(&EventTowerListViewItem_TypeInfo);
    byte_4C21C38 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = EventTowerListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventTowerListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(EventTowerListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  sub_1C2D434(&this->fields.CallbackFunc);
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
      *(_QWORD *)&this->fields.state = 2;
      EventTowerListViewObject__EventIntoStart(this, delay, v18);
      return;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
        EventTowerListViewObject__SetupDisp(this, v18);
      v20 = *p_CallbackFunc;
      if ( *p_CallbackFunc )
      {
        *p_CallbackFunc = 0;
        sub_1C2D434(p_CallbackFunc);
        ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
      }
      return;
  }
}


void EventTowerListViewObject__InitItem(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void EventTowerListViewObject__Init_32222552(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void EventTowerListViewObject__Init_32223404(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void EventTowerListViewObject__Init_32223924(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void EventTowerListViewObject__OnClickSelect(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C21C40 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9843/*"OnClickListView"*/);
    byte_4C21C40 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C2D6EC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9843/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void EventTowerListViewObject__SetInput(EventTowerListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C21C37 & 1) == 0 )
  {
    sub_1C2D490(&EventTowerListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21C37 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 && !this->fields.itemDraw )
    sub_1C2D6EC(v6, v7);
}


void EventTowerListViewObject__SetItem(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
}


void EventTowerListViewObject__SetItem_32225880(
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
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  EventTowerListViewItemDraw_o *v12; // x0

  if ( (byte_4C21C39 & 1) == 0 )
  {
    sub_1C2D490(&EventTowerListViewItem_TypeInfo);
    sub_1C2D490(&EventTowerListViewManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21C39 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    manager = this->fields.manager;
    if ( manager
      && (v8 = EventTowerListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)v8) )
    {
      if ( (EventTowerListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == EventTowerListViewManager_TypeInfo )
        v9 = this->fields.manager;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    this->fields.manager = v9;
    sub_1C2D434(&this->fields.manager);
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1C2D6EC(0, v10);
    EventTowerListViewItemDraw__SetItem(v12, (EventTowerListViewItem_o *)linkItem, this->fields.dispMode, v11);
  }
}


void EventTowerListViewObject__Update(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x19

  if ( (byte_4C21C35 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21C35 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C21C32 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21C32 = 1;
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
    v9 = sub_1C676E8(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewObject_o *)sub_1C2D9AC(v8);
  EventTowerListViewObject__remove_CallbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C21C33 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21C33 = 1;
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
    v9 = sub_1C676E8(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewObject_o *)sub_1C2D9AC(v8);
  EventTowerListViewObject__Awake(v11, v12);
}