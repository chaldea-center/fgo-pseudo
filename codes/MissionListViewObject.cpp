void MissionListViewObject___ctor(MissionListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D3022E & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D3022E = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MissionListViewObject__Awake(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D3021E & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
    byte_4D3021E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
  this->fields.itemDraw = (struct MissionListViewItemDraw_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void MissionListViewObject__CommonEventMoveEnd(MissionListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onCompleteMoveAction; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onCompleteMoveAction; // t1

  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = (GrandQuestFolderBoardItem_o *)&this->fields.onCompleteMoveAction;
  v9 = onCompleteMoveAction;
  LOBYTE(p_onCompleteMoveAction[-1].fields._ClosedMessage_k__BackingField) = 0;
  HIDWORD(p_onCompleteMoveAction[-1].fields._ClosedMessage_k__BackingField) = 1;
  if ( onCompleteMoveAction )
  {
    p_onCompleteMoveAction->klass = 0;
    sub_1C9403C(p_onCompleteMoveAction, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


UnityEngine_GameObject_o *MissionListViewObject__CreateDragObject(
        MissionListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x4

  if ( (byte_4D30221 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    byte_4D30221 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0) )
  {
    sub_1C942F0(DragObject, v4);
  }
  MissionListViewObject__Init((MissionListViewObject_o *)DragObject, 2, 0, 0.0, 0, v6);
  return v5;
}


void MissionListViewObject__EventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D30229 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_9900/*"OnCompleteEventExitMove"*/);
    byte_4D30229 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v4);
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
    v28 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v7 = this->fields.dragObject;
    v8 = ListViewObject_TypeInfo;
    v9 = v28.fields.x + 1000.0;
    v10 = v28.fields.y + 0.0;
    v11 = v28.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v8 = ListViewObject_TypeInfo;
    }
    v29.fields.x = v9;
    v29.fields.y = v10;
    v29.fields.z = v11;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v7, v8->static_fields->BASE_MOVE_TIME, v29, 0);
    if ( !transform )
LABEL_15:
      sub_1C942F0(transform, v4);
    v12 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v12[3].monitor = gameObject;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15, v16, v17, v18, v19);
    v20 = StringLiteral_9900/*"OnCompleteEventExitMove"*/;
    v12[3].fields.m_CachedPtr = StringLiteral_9900/*"OnCompleteEventExitMove"*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12[3].fields, v20, v21, v22, v23, v24, v25, v26);
  }
}


void MissionListViewObject__EventExitStart(MissionListViewObject_o *this, float delay, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v16; // x4

  if ( (byte_4D30228 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_6221/*"EventExitMove"*/);
    byte_4D30228 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v13);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C942F0(dragObject, v13);
  MissionListViewObject__Init((MissionListViewObject_o *)Component_object, 2, 0, 0.0, 0, v16);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6221/*"EventExitMove"*/,
    delay,
    0);
}


void MissionListViewObject__EventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D30226 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    sub_1C94098(&StringLiteral_9901/*"OnCompleteEventIntoMove"*/);
    byte_4D30226 = 1;
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
  v26 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  x = v26.fields.x;
  y = v26.fields.y;
  z = v26.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v27, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C942F0(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10[3].monitor, (int32_t)gameObject, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_9901/*"OnCompleteEventIntoMove"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_9901/*"OnCompleteEventIntoMove"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10[3].fields, v18, v19, v20, v21, v22, v23, v24);
}


void MissionListViewObject__EventIntoStart(MissionListViewObject_o *this, float delay, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v16; // x4
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D30225 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    sub_1C94098(&StringLiteral_6232/*"EventIntoMove"*/);
    byte_4D30225 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0
    || (MissionListViewObject__Init((MissionListViewObject_o *)dragObject, 2, 0, 0.0, 0, v16),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v18 = UnityEngine_Transform__TransformPoint_72137752((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_1C942F0(dragObject, v14);
  }
  UnityEngine_Transform__set_position(transform, v18, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6232/*"EventIntoMove"*/,
    delay,
    0);
}


void MissionListViewObject__Init(
        MissionListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onCompleteMove,
        float delay,
        bool isColliderEnable,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v13; // w23
  int32_t dispMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  GrandQuestFolderBoardItem_o *p_onCompleteMoveAction; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w8
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4D30223 & 1) == 0 )
  {
    sub_1C94098(&MissionListViewItem_TypeInfo);
    byte_4D30223 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = MissionListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(MissionListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C942F0(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onCompleteMoveAction = onCompleteMove;
  p_onCompleteMoveAction = (GrandQuestFolderBoardItem_o *)&this->fields.onCompleteMoveAction;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onCompleteMoveAction,
    (int32_t)onCompleteMove,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v32 = 1;
  switch ( v13 )
  {
    case 0:
    case 2:
      goto LABEL_13;
    case 1:
    case 3:
      v32 = v13;
LABEL_13:
      this->fields.dispMode = v13;
      this->fields.state = v32;
      goto LABEL_14;
    case 4:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      MissionListViewObject__EventIntoStart(this, delay, v25);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      MissionListViewObject__EventExitStart(this, delay, v25);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        MissionListViewObject__SetupDisp(this, isColliderEnable, v26);
      klass = p_onCompleteMoveAction->klass;
      if ( p_onCompleteMoveAction->klass )
      {
        p_onCompleteMoveAction->klass = 0;
        sub_1C9403C(p_onCompleteMoveAction, 0, (int32_t)v26, v27, v28, v29, v30, v31);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void MissionListViewObject__Init_48586988(
        MissionListViewObject_o *this,
        int32_t initMode,
        bool isColliderEnable,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionListViewObject__Init(this, initMode, 0, 0.0, isColliderEnable, v4);
}


void MissionListViewObject__Init_48617808(
        MissionListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onCompleteMove,
        bool isColliderEnable,
        const MethodInfo *method)
{
  MissionListViewObject__Init(this, initMode, onCompleteMove, 0.0, isColliderEnable, method);
}


void MissionListViewObject__OnClickReward(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D3022C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9887/*"OnClickRewardIcon"*/);
    byte_4D3022C = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C942F0(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9887/*"OnClickRewardIcon"*/, (Il2CppObject *)this, 0);
}


void MissionListViewObject__OnClickSelect(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D3022B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9870/*"OnClickListView"*/);
    byte_4D3022B = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C942F0(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9870/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void MissionListViewObject__OnCompleteEventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4D3022A & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    byte_4D3022A = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v4, v5, v6, v7, v8, v9);
  MissionListViewObject__CommonEventMoveEnd(this, v10);
}


void MissionListViewObject__OnCompleteEventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4D30227 & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    byte_4D30227 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  MissionListViewObject__SetupDisp(this, 1, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  MissionListViewObject__CommonEventMoveEnd(this, v11);
}


void MissionListViewObject__OnDestroy(MissionListViewObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D3021F & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3021F = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C9403C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void MissionListViewObject__OnLongPressReward(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D3022D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9944/*"OnLongPressRewardIcon"*/);
    byte_4D3022D = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C942F0(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9944/*"OnLongPressRewardIcon"*/, (Il2CppObject *)this, 0);
}


void MissionListViewObject__RedispResTime(MissionListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *manager; // x21
  bool v7; // w0
  struct MissionListViewItemDraw_o *itemDraw; // x19
  int64_t Time; // x0
  __int64 v10; // x1

  if ( (byte_4D30222 & 1) == 0 )
  {
    sub_1C94098(&MissionListViewItem_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30222 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = MissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewItem_TypeInfo )
        v5 = this->fields.linkItem;
      else
        v5 = 0;
    }
    else
    {
      v5 = 0;
    }
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality(manager, 0, 0);
    if ( v5 && !v7 )
    {
      itemDraw = this->fields.itemDraw;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      if ( !itemDraw )
        sub_1C942F0(Time, v10);
      ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, int64_t, const MethodInfo *))itemDraw->klass->vtable._9_UpdateDispResTime.methodPtr)(
        itemDraw,
        v5,
        Time,
        itemDraw->klass->vtable._9_UpdateDispResTime.method);
    }
  }
}


void MissionListViewObject__SetInput(MissionListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v8; // x1
  struct MissionListViewItemDraw_o *v9; // x0

  if ( (byte_4D30220 & 1) == 0 )
  {
    sub_1C94098(&MissionListViewItem_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30220 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = MissionListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewItem_TypeInfo )
        v8 = this->fields.linkItem;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C942F0(0, v8);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, const MethodInfo *))v9->klass->vtable._10_SetInput.methodPtr)(
      v9,
      v8,
      v9->klass->vtable._10_SetInput.method);
  }
}


void MissionListViewObject__SetItem(
        MissionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_44621212((ListViewObject_o *)this, item, seed, 0);
}


void MissionListViewObject__SetupDisp(MissionListViewObject_o *this, bool isColliderEnable, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *itemDraw; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  struct MissionListViewItemDraw_o *v15; // x0

  if ( (byte_4D30224 & 1) == 0 )
  {
    sub_1C94098(&MissionListViewItem_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30224 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = MissionListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewItem_TypeInfo )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, this->fields.dispMode != 0, 0);
    BYTE5(linkItem[2].fields.sortValue1) = isColliderEnable;
  }
  else
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
    linkItem = 0;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.manager,
      (int32_t)this->fields.manager,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v15 = this->fields.itemDraw;
    if ( !v15 )
      sub_1C942F0(0, v14);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, _QWORD, struct ListViewManager_o *, const MethodInfo *))v15->klass->vtable._4_SetItem.methodPtr)(
      v15,
      linkItem,
      (unsigned int)this->fields.dispMode,
      this->fields.manager,
      v15->klass->vtable._4_SetItem.method);
  }
}


void MissionListViewObject__add_onCompleteMoveAction(
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

  if ( (byte_4D3021C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D3021C = 1;
  }
  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = &this->fields.onCompleteMoveAction;
  v6 = (System_Delegate_o *)onCompleteMoveAction;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  MissionListViewObject__remove_onCompleteMoveAction(v11, v12, v13);
}


void MissionListViewObject__remove_onCompleteMoveAction(
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

  if ( (byte_4D3021D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D3021D = 1;
  }
  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = &this->fields.onCompleteMoveAction;
  v6 = (System_Delegate_o *)onCompleteMoveAction;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  MissionListViewObject__Awake(v11, v12);
}