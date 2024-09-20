void __fastcall EventTowerListViewObject___ctor(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F477 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5F477 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventTowerListViewObject__Awake(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5F46A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
    byte_4A5F46A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
  this->fields.itemDraw = (struct EventTowerListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__EventExitMove(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v7; // s0
  UnityEngine_GameObject_o *v10; // x20
  ListViewObject_c *v11; // x0
  float v12; // s8
  float v13; // s10
  float v14; // s9
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A5F474 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6177/*"EventExitMove2"*/);
    byte_4A5F474 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    EventTowerListViewObject__EventMoveEnd(this, v4);
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
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_15;
    v22 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL);
    v10 = this->fields.dragObject;
    v11 = ListViewObject_TypeInfo;
    v12 = v22.fields.x + 1000.0;
    v13 = v22.fields.y + 0.0;
    v14 = v22.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v11 = ListViewObject_TypeInfo;
    }
    v23.fields.x = v12;
    v23.fields.y = v13;
    v23.fields.z = v14;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v11->static_fields->BASE_MOVE_TIME, v23, 0LL);
    if ( !transform )
LABEL_15:
      sub_1B8880C(transform, v4);
    v15 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15[3].monitor = gameObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15[3].monitor, (int32_t)gameObject, v17, v18);
    v19 = StringLiteral_6177/*"EventExitMove2"*/;
    *(_QWORD *)&v15[3].fields.m_CachedPtr = StringLiteral_6177/*"EventExitMove2"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15[3].fields, v19, v20, v21);
  }
}


void __fastcall EventTowerListViewObject__EventExitMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_4A5F475 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A5F475 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v4, v5);
  EventTowerListViewObject__EventMoveEnd(this, v6);
}


void __fastcall EventTowerListViewObject__EventExitStart(
        EventTowerListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4A5F473 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6176/*"EventExitMove"*/);
    byte_4A5F473 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventTowerListViewObject__EventMoveEnd(this, v8);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1B8880C(dragObject, v8);
  EventTowerListViewObject__Init_46212484((EventTowerListViewObject_o *)Component_object, 2, v11);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6176/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__EventIntoMove(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  ListViewObject_c *v8; // x0
  UnityEngine_GameObject_o *v9; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A5F471 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    sub_1B885B0(&StringLiteral_6187/*"EventIntoMove2"*/);
    byte_4A5F471 = 1;
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
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_11;
  v20 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL);
  v8 = ListViewObject_TypeInfo;
  v9 = this->fields.dragObject;
  x = v20.fields.x;
  y = v20.fields.y;
  z = v20.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v8 = ListViewObject_TypeInfo;
  }
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v9, v8->static_fields->BASE_MOVE_TIME, v21, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1B8880C(dragObject, method);
  v13 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[3].monitor = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v13[3].monitor, (int32_t)gameObject, v15, v16);
  v17 = StringLiteral_6187/*"EventIntoMove2"*/;
  *(_QWORD *)&v13[3].fields.m_CachedPtr = StringLiteral_6187/*"EventIntoMove2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v13[3].fields, v17, v18, v19);
}


void __fastcall EventTowerListViewObject__EventIntoMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_4A5F472 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A5F472 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventTowerListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v5, v6);
  EventTowerListViewObject__EventMoveEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__EventIntoStart(
        EventTowerListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0

  if ( (byte_4A5F470 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_1B885B0(&StringLiteral_6186/*"EventIntoMove"*/);
    byte_4A5F470 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___)) == 0LL
    || (EventTowerListViewObject__Init_46212484((EventTowerListViewObject_o *)dragObject, 2, v11),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__TransformPoint_69483968(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B8880C(dragObject, v9);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6186/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall EventTowerListViewObject__EventMoveEnd(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_CallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *CallbackFunc; // t1

  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc;
  v5 = CallbackFunc;
  LOBYTE(p_CallbackFunc[-1].fields.name) = 0;
  HIDWORD(p_CallbackFunc[-1].fields.name) = 1;
  if ( CallbackFunc )
  {
    p_CallbackFunc->klass = 0LL;
    sub_1B88554(p_CallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


EventTowerListViewItem_o *__fastcall EventTowerListViewObject__GetItem(
        EventTowerListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A5F46C & 1) == 0 )
  {
    sub_1B885B0(&EventTowerListViewItem_TypeInfo);
    byte_4A5F46C = 1;
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
  ServantStatusBattleListViewItem_o *p_CallbackFunc; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A5F46E & 1) == 0 )
  {
    sub_1B885B0(&EventTowerListViewItem_TypeInfo);
    byte_4A5F46E = 1;
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
    sub_1B8880C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc, (int32_t)callbackFunc, v18, v19);
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
      this->fields.state = v23;
      this->fields.dispMode = v12;
      goto LABEL_14;
    case 4:
      *(_QWORD *)&this->fields.state = 2LL;
      EventTowerListViewObject__EventIntoStart(this, delay, v20);
      return;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
        EventTowerListViewObject__SetupDisp(this, v20);
      klass = p_CallbackFunc->klass;
      if ( p_CallbackFunc->klass )
      {
        p_CallbackFunc->klass = 0LL;
        sub_1B88554(p_CallbackFunc, 0, v21, v22);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall EventTowerListViewObject__InitItem(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_46212484(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_46213336(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_46213856(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EventTowerListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall EventTowerListViewObject__OnClickSelect(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A5F476 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9847/*"OnClickListView"*/);
    byte_4A5F476 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B8880C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9847/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall EventTowerListViewObject__SetInput(
        EventTowerListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5F46D & 1) == 0 )
  {
    sub_1B885B0(&EventTowerListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F46D = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v6 && !this->fields.itemDraw )
    sub_1B8880C(v6, v7);
}


void __fastcall EventTowerListViewObject__SetItem(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventTowerListViewObject__SetItem_46215804(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
}


void __fastcall EventTowerListViewObject__SetupDisp(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  struct ListViewManager_o *v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  EventTowerListViewItemDraw_o *v14; // x0

  if ( (byte_4A5F46F & 1) == 0 )
  {
    sub_1B885B0(&EventTowerListViewItem_TypeInfo);
    sub_1B885B0(&EventTowerListViewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F46F = 1;
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
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)v11, v7, v8);
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_1B8880C(0LL, v12);
    EventTowerListViewItemDraw__SetItem(v14, (EventTowerListViewItem_o *)linkItem, this->fields.dispMode, v13);
  }
}


void __fastcall EventTowerListViewObject__Update(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x19

  if ( (byte_4A5F46B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F46B = 1;
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

  if ( (byte_4A5F468 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F468 = 1;
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
    v9 = sub_1BC3AA0(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5F469 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F469 = 1;
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
    v9 = sub_1BC3AA0(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  EventTowerListViewObject__Awake(v11, v12);
}