void __fastcall MissionListViewObject___ctor(MissionListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B486BB & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    byte_4B486BB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MissionListViewObject__Awake(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B486AB & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___, method);
    byte_4B486AB = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BDBAD4(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
  this->fields.itemDraw = (struct MissionListViewItemDraw_o *)Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall MissionListViewObject__CommonEventMoveEnd(MissionListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onCompleteMoveAction; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onCompleteMoveAction; // t1

  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = (CGThumbnailListItem_o *)&this->fields.onCompleteMoveAction;
  v5 = onCompleteMoveAction;
  LOBYTE(p_onCompleteMoveAction[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  HIDWORD(p_onCompleteMoveAction[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  if ( onCompleteMoveAction )
  {
    p_onCompleteMoveAction->klass = 0LL;
    sub_1BDB81C(p_onCompleteMoveAction, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


UnityEngine_GameObject_o *__fastcall MissionListViewObject__CreateDragObject(
        MissionListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x4

  if ( (byte_4B486AE & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method);
    byte_4B486AE = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL) )
  {
    sub_1BDBAD4(DragObject, v4);
  }
  MissionListViewObject__Init((MissionListViewObject_o *)DragObject, 2, 0LL, 0.0, 0, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
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
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B486B6 & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_9878/*"OnCompleteEventExitMove"*/, v4);
    byte_4B486B6 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v6);
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
      sub_1BDBAD4(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v17[3].monitor = gameObject;
    sub_1BDB81C((CGThumbnailListItem_o *)&v17[3].monitor, (int32_t)gameObject, v19, v20);
    v21 = StringLiteral_9878/*"OnCompleteEventExitMove"*/;
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_9878/*"OnCompleteEventExitMove"*/;
    sub_1BDB81C((CGThumbnailListItem_o *)&v17[3].fields, v21, v22, v23);
  }
}


void __fastcall MissionListViewObject__EventExitStart(
        MissionListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v14; // x4

  if ( (byte_4B486B5 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_6224/*"EventExitMove"*/, v7);
    byte_4B486B5 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v8, v9, v10);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v11);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1BDBAD4(dragObject, v11);
  MissionListViewObject__Init((MissionListViewObject_o *)Component_object, 2, 0LL, 0.0, 0, v14);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6224/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
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
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B486B3 & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    sub_1BDB878(&StringLiteral_9879/*"OnCompleteEventIntoMove"*/, v3);
    byte_4B486B3 = 1;
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
    sub_1BDBAD4(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].monitor = gameObject;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17);
  v18 = StringLiteral_9879/*"OnCompleteEventIntoMove"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_9879/*"OnCompleteEventIntoMove"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14[3].fields, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoStart(
        MissionListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v13; // x4
  UnityEngine_Transform_o *transform; // x20
  int v15; // s0

  if ( (byte_4B486B2 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method);
    sub_1BDB878(&StringLiteral_6235/*"EventIntoMove"*/, v6);
    byte_4B486B2 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  p_dragObject = &this->fields.dragObject;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v7, v9, v10);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL
    || (MissionListViewObject__Init((MissionListViewObject_o *)dragObject, 2, 0LL, 0.0, 0, v13),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__TransformPoint_70311200(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1BDBAD4(dragObject, v11);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6235/*"EventIntoMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__Init(
        MissionListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onCompleteMove,
        float delay,
        bool isColliderEnable,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v13; // w23
  int32_t dispMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  CGThumbnailListItem_o *p_onCompleteMoveAction; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  int32_t v24; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4B486B0 & 1) == 0 )
  {
    sub_1BDB878(&MissionListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B486B0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(MissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MissionListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(MissionListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BDBAD4(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onCompleteMoveAction = onCompleteMove;
  p_onCompleteMoveAction = (CGThumbnailListItem_o *)&this->fields.onCompleteMoveAction;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onCompleteMoveAction, (int32_t)onCompleteMove, v19, v20);
  v24 = 1;
  switch ( v13 )
  {
    case 0:
    case 2:
      goto LABEL_13;
    case 1:
    case 3:
      v24 = v13;
LABEL_13:
      this->fields.dispMode = v13;
      this->fields.state = v24;
      goto LABEL_14;
    case 4:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      MissionListViewObject__EventIntoStart(this, delay, v21);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      MissionListViewObject__EventExitStart(this, delay, v21);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        MissionListViewObject__SetupDisp(this, isColliderEnable, v22);
      klass = p_onCompleteMoveAction->klass;
      if ( p_onCompleteMoveAction->klass )
      {
        p_onCompleteMoveAction->klass = 0LL;
        sub_1BDB81C(p_onCompleteMoveAction, 0, (int32_t)v22, v23);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall MissionListViewObject__Init_47100452(
        MissionListViewObject_o *this,
        int32_t initMode,
        bool isColliderEnable,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionListViewObject__Init(this, initMode, 0LL, 0.0, isColliderEnable, v4);
}


void __fastcall MissionListViewObject__Init_47102232(
        MissionListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onCompleteMove,
        bool isColliderEnable,
        const MethodInfo *method)
{
  MissionListViewObject__Init(this, initMode, onCompleteMove, 0.0, isColliderEnable, method);
}


void __fastcall MissionListViewObject__OnClickReward(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B486B9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9865/*"OnClickRewardIcon"*/, method);
    byte_4B486B9 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1BDBAD4(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9865/*"OnClickRewardIcon"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__OnClickSelect(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B486B8 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9848/*"OnClickListView"*/, method);
    byte_4B486B8 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1BDBAD4(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9848/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__OnCompleteEventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B486B7 & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, method);
    byte_4B486B7 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v4, v5);
  MissionListViewObject__CommonEventMoveEnd(this, v6);
}


void __fastcall MissionListViewObject__OnCompleteEventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4B486B4 & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, method);
    byte_4B486B4 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MissionListViewObject__SetupDisp(this, 1, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v5, v6);
  MissionListViewObject__CommonEventMoveEnd(this, v7);
}


void __fastcall MissionListViewObject__OnDestroy(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B486AC & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B486AC = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
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
    sub_1BDB81C(p_dragObject, 0, v8, v9);
  }
}


void __fastcall MissionListViewObject__OnLongPressReward(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B486BA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9921/*"OnLongPressRewardIcon"*/, method);
    byte_4B486BA = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1BDBAD4(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9921/*"OnLongPressRewardIcon"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__RedispResTime(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v7; // x20
  UnityEngine_Object_o *manager; // x21
  bool v9; // w0
  struct MissionListViewItemDraw_o *itemDraw; // x19
  int64_t Time; // x0
  __int64 v12; // x1

  if ( (byte_4B486AF & 1) == 0 )
  {
    sub_1BDB878(&MissionListViewItem_TypeInfo, method);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B486AF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(MissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MissionListViewItem_TypeInfo )
        v7 = this->fields.linkItem;
      else
        v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality(manager, 0LL, 0LL);
    if ( v7 && !v9 )
    {
      itemDraw = this->fields.itemDraw;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( !itemDraw )
        sub_1BDBAD4(Time, v12);
      ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, int64_t, Il2CppMethodPointer))itemDraw->klass->vtable._9_UpdateDispResTime.method)(
        itemDraw,
        v7,
        Time,
        itemDraw->klass->vtable._10_SetInput.methodPtr);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__SetInput(MissionListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v9; // x1
  struct MissionListViewItemDraw_o *v10; // x0

  if ( (byte_4B486AD & 1) == 0 )
  {
    sub_1BDB878(&MissionListViewItem_TypeInfo, isInput);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B486AD = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(MissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MissionListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BDBAD4(0LL, v9);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, void *))v10->klass->vtable._10_SetInput.method)(
      v10,
      v9,
      v10->klass[1]._1.image);
  }
}


void __fastcall MissionListViewObject__SetItem(
        MissionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_42764972((ListViewObject_o *)this, item, seed, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__SetupDisp(
        MissionListViewObject_o *this,
        bool isColliderEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *itemDraw; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  struct MissionListViewItemDraw_o *v12; // x0

  if ( (byte_4B486B1 & 1) == 0 )
  {
    sub_1BDB878(&MissionListViewItem_TypeInfo, isColliderEnable);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B486B1 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(MissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MissionListViewItem_TypeInfo )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, this->fields.dispMode != 0, 0LL);
    BYTE5(linkItem[2].fields.sortStr1) = isColliderEnable;
  }
  else
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
    linkItem = 0LL;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.manager, (int32_t)this->fields.manager, v9, v10);
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1BDBAD4(0LL, v11);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, _QWORD, struct ListViewManager_o *, Il2CppMethodPointer))v12->klass->vtable._4_SetItem.method)(
      v12,
      linkItem,
      (unsigned int)this->fields.dispMode,
      this->fields.manager,
      v12->klass->vtable._5_InitDispResTime.methodPtr);
  }
}


void __fastcall MissionListViewObject__add_onCompleteMoveAction(
        MissionListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onCompleteMoveAction; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onCompleteMoveAction; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MissionListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B486A9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B486A9 = 1;
  }
  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = &this->fields.onCompleteMoveAction;
  v6 = (System_Delegate_o *)onCompleteMoveAction;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BDBD94(v8);
  MissionListViewObject__remove_onCompleteMoveAction(v11, v12, v13);
}


void __fastcall MissionListViewObject__remove_onCompleteMoveAction(
        MissionListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onCompleteMoveAction; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onCompleteMoveAction; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MissionListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B486AA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B486AA = 1;
  }
  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = &this->fields.onCompleteMoveAction;
  v6 = (System_Delegate_o *)onCompleteMoveAction;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BDBD94(v8);
  MissionListViewObject__Awake(v11, v12);
}