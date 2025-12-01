void EventRankingListViewObject___ctor(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC1963 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC1963 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventRankingListViewObject__Awake(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4CC1955 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewItemDraw___);
    byte_4CC1955 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewItemDraw___),
        this->fields.itemDraw = (struct EventRankingListViewItemDraw_o *)Component_object,
        sub_1C71354(&this->fields.itemDraw, Component_object),
        (dispObject = (UnityEngine_GameObject_o *)this->fields.itemDraw) == 0) )
  {
    sub_1C71608(dispObject, v3);
  }
  dispObject[5].fields.m_CachedPtr = (intptr_t)this;
  sub_1C71354(&dispObject[5].fields, this);
}


void EventRankingListViewObject__EventExitMove(EventRankingListViewObject_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CC195F & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_6209/*"EventExitMove2"*/);
    byte_4CC195F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    EventRankingListViewObject__EventMoveEnd(this, v4);
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
    v16 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v7 = this->fields.dragObject;
    v8 = ListViewObject_TypeInfo;
    v9 = v16.fields.x + 1000.0;
    v10 = v16.fields.y + 0.0;
    v11 = v16.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v8 = ListViewObject_TypeInfo;
    }
    v17.fields.x = v9;
    v17.fields.y = v10;
    v17.fields.z = v11;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v7, v8->static_fields->BASE_MOVE_TIME, v17, 0);
    if ( !transform )
LABEL_15:
      sub_1C71608(transform, v4);
    v12 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v12[3].monitor = gameObject;
    sub_1C71354(&v12[3].monitor, gameObject);
    v14 = StringLiteral_6209/*"EventExitMove2"*/;
    v12[3].fields.m_CachedPtr = StringLiteral_6209/*"EventExitMove2"*/;
    sub_1C71354(&v12[3].fields, v14);
  }
}


void EventRankingListViewObject__EventExitMove2(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4CC1960 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    byte_4CC1960 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C71354(&this->fields.dragObject, 0);
  EventRankingListViewObject__EventMoveEnd(this, v4);
}


void EventRankingListViewObject__EventExitStart(
        EventRankingListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4CC195E & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_6208/*"EventExitMove"*/);
    byte_4CC195E = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventRankingListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRankingListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C71354(&this->fields.dragObject, v5);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventRankingListViewObject__EventMoveEnd(this, v6);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C71608(dragObject, v6);
  EventRankingListViewObject__Init_32256196((EventRankingListViewObject_o *)Component_object, 2, v9);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6208/*"EventExitMove"*/,
    delay,
    0);
}


void EventRankingListViewObject__EventIntoMove(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CC195C & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    sub_1C713B0(&StringLiteral_6220/*"EventIntoMove2"*/);
    byte_4CC195C = 1;
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
  v14 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  x = v14.fields.x;
  y = v14.fields.y;
  z = v14.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v15, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C71608(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = gameObject;
  sub_1C71354(&v10[3].monitor, gameObject);
  v12 = StringLiteral_6220/*"EventIntoMove2"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_6220/*"EventIntoMove2"*/;
  sub_1C71354(&v10[3].fields, v12);
}


void EventRankingListViewObject__EventIntoMove2(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4CC195D & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    byte_4CC195D = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  EventRankingListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C71354(&this->fields.dragObject, 0);
  EventRankingListViewObject__EventMoveEnd(this, v5);
}


void EventRankingListViewObject__EventIntoStart(
        EventRankingListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC195B & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_1C713B0(&StringLiteral_6219/*"EventIntoMove"*/);
    byte_4CC195B = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventRankingListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRankingListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_1C71354(&this->fields.dragObject, v5);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___)) == 0
    || (EventRankingListViewObject__Init_32256196((EventRankingListViewObject_o *)dragObject, 2, v9),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v11 = UnityEngine_Transform__TransformPoint_71751388((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_1C71608(dragObject, v7);
  }
  UnityEngine_Transform__set_position(transform, v11, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6219/*"EventIntoMove"*/,
    delay,
    0);
}


void EventRankingListViewObject__EventMoveEnd(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 16) = 0;
  *((_DWORD *)p_callbackFunc - 3) = 1;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C71354(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


EventRankingListViewItem_o *EventRankingListViewObject__GetItem(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC1957 & 1) == 0 )
  {
    sub_1C713B0(&EventRankingListViewItem_TypeInfo);
    byte_4CC1957 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventRankingListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRankingListViewItem_TypeInfo )
    return (EventRankingListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventRankingListViewObject__Init(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v12; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w9
  int32_t v20; // w8
  struct System_Action_o *v21; // x19

  if ( (byte_4CC1959 & 1) == 0 )
  {
    sub_1C713B0(&EventRankingListViewItem_TypeInfo);
    byte_4CC1959 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = EventRankingListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRankingListViewItem_TypeInfo )
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
  ((void (__fastcall *)(EventRankingListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C71354(&this->fields.callbackFunc, callbackFunc);
  v19 = 1;
  v20 = v12;
  switch ( v12 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v20 = v12;
      goto LABEL_14;
    case 3:
      v20 = 2;
LABEL_14:
      v19 = v12;
LABEL_15:
      this->fields.state = v19;
      this->fields.dispMode = v20;
      goto LABEL_16;
    case 4:
      *(_QWORD *)&this->fields.state = 2;
      EventRankingListViewObject__EventIntoStart(this, delay, v18);
      return;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
        EventRankingListViewObject__SetupDisp(this, v18);
      v21 = *p_callbackFunc;
      if ( *p_callbackFunc )
      {
        *p_callbackFunc = 0;
        sub_1C71354(p_callbackFunc, 0);
        ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
      }
      return;
  }
}


void EventRankingListViewObject__InitItem(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void EventRankingListViewObject__Init_32256196(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  EventRankingListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void EventRankingListViewObject__Init_32257048(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  EventRankingListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void EventRankingListViewObject__Init_32257568(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  EventRankingListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void EventRankingListViewObject__OnChangeAlphaAnim(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v6; // x1
  EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4CC1961 & 1) == 0 )
  {
    sub_1C713B0(&EventRankingListViewItem_TypeInfo);
    sub_1C713B0(&EventRankingListViewManager_TypeInfo);
    byte_4CC1961 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager
      && (naturalAligment = EventRankingListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (EventRankingListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EventRankingListViewManager_TypeInfo )
        v6 = this->fields.manager;
      else
        v6 = 0;
    }
    else
    {
      v6 = 0;
    }
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_1C71608(0, v6);
    EventRankingListViewItemDraw__ChangeNextRewardIcon(itemDraw, (EventRankingListViewManager_o *)v6, v2);
  }
}


void EventRankingListViewObject__SetInput(EventRankingListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CC1958 & 1) == 0 )
  {
    sub_1C713B0(&EventRankingListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1958 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 && !this->fields.itemDraw )
    sub_1C71608(v6, v7);
}


void EventRankingListViewObject__SetItem(
        EventRankingListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void EventRankingListViewObject__SetItem_32260244(
        EventRankingListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void EventRankingListViewObject__SetupDisp(EventRankingListViewObject_o *this, const MethodInfo *method)
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
  EventRankingListViewItemDraw_o *v12; // x0

  if ( (byte_4CC195A & 1) == 0 )
  {
    sub_1C713B0(&EventRankingListViewItem_TypeInfo);
    sub_1C713B0(&EventRankingListViewManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC195A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EventRankingListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventRankingListViewItem_TypeInfo )
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
      && (v8 = EventRankingListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)v8) )
    {
      if ( (EventRankingListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == EventRankingListViewManager_TypeInfo )
        v9 = this->fields.manager;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    this->fields.manager = v9;
    sub_1C71354(&this->fields.manager, v9);
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1C71608(0, v10);
    EventRankingListViewItemDraw__SetItem(v12, (EventRankingListViewItem_o *)linkItem, this->fields.dispMode, v11);
  }
}


System_String_o *EventRankingListViewObject__ToString(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4CC1962 & 1) == 0 )
  {
    sub_1C713B0(&EventRankingListViewItemDraw_DispMode_TypeInfo);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    byte_4CC1962 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)EventRankingListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E2ED10(&v10, 0, 0, 0);
  return System_String__Concat_64069988(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void EventRankingListViewObject__Update(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  const MethodInfo *v4; // x4
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v7; // x1
  struct ListViewManager_o *v8; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x3
  EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4CC1956 & 1) == 0 )
  {
    sub_1C713B0(&EventRankingListViewItem_TypeInfo);
    sub_1C713B0(&EventRankingListViewManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1956 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(manager, 0, 0) )
    {
      linkItem = this->fields.linkItem;
      if ( linkItem
        && (naturalAligment = EventRankingListViewItem_TypeInfo->_2.naturalAligment,
            linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRankingListViewItem_TypeInfo )
          v7 = this->fields.linkItem;
        else
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      v8 = this->fields.manager;
      if ( v8
        && (v9 = EventRankingListViewManager_TypeInfo->_2.naturalAligment,
            v8->klass->_2.naturalAligment >= (unsigned int)v9) )
      {
        if ( (EventRankingListViewManager_c *)v8->klass->_2.typeHierarchy[v9 - 1] == EventRankingListViewManager_TypeInfo )
          v10 = this->fields.manager;
        else
          v10 = 0;
      }
      else
      {
        v10 = 0;
      }
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_1C71608(0, v7);
      EventRankingListViewItemDraw__UpdateItem(
        itemDraw,
        (EventRankingListViewItem_o *)v7,
        this->fields.dispMode,
        (EventRankingListViewManager_o *)v10,
        v4);
    }
  }
}


void EventRankingListViewObject__add_callbackFunc(
        EventRankingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC1953 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC1953 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRankingListViewObject_o *)sub_1C719A4(v8);
  EventRankingListViewObject__remove_callbackFunc(v11, v12, v13);
}


void EventRankingListViewObject__remove_callbackFunc(
        EventRankingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC1954 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC1954 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRankingListViewObject_o *)sub_1C719A4(v8);
  EventRankingListViewObject__Awake(v11, v12);
}