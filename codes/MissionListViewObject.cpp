void __fastcall MissionListViewObject___ctor(MissionListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E42B & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5E42B = 1;
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
  int32_t v7; // w3

  if ( (byte_4A5E41B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
    byte_4A5E41B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
  this->fields.itemDraw = (struct MissionListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall MissionListViewObject__CommonEventMoveEnd(MissionListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onCompleteMoveAction; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onCompleteMoveAction; // t1

  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = (ServantStatusBattleListViewItem_o *)&this->fields.onCompleteMoveAction;
  v5 = onCompleteMoveAction;
  p_onCompleteMoveAction[-1].fields.isMine = 0;
  *((_DWORD *)&p_onCompleteMoveAction[-1].fields.isMine + 1) = 1;
  if ( onCompleteMoveAction )
  {
    p_onCompleteMoveAction->klass = 0LL;
    sub_1B88554(p_onCompleteMoveAction, 0, v2, v3);
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

  if ( (byte_4A5E41E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    byte_4A5E41E = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  MissionListViewObject__Init((MissionListViewObject_o *)DragObject, 2, 0LL, 0.0, 0, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E426 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_9873/*"OnCompleteEventExitMove"*/);
    byte_4A5E426 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v4);
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
    v19 = StringLiteral_9873/*"OnCompleteEventExitMove"*/;
    *(_QWORD *)&v15[3].fields.m_CachedPtr = StringLiteral_9873/*"OnCompleteEventExitMove"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15[3].fields, v19, v20, v21);
  }
}


void __fastcall MissionListViewObject__EventExitStart(
        MissionListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v12; // x4

  if ( (byte_4A5E425 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6176/*"EventExitMove"*/);
    byte_4A5E425 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v9);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1B8880C(dragObject, v9);
  MissionListViewObject__Init((MissionListViewObject_o *)Component_object, 2, 0LL, 0.0, 0, v12);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6176/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E423 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    sub_1B885B0(&StringLiteral_9874/*"OnCompleteEventIntoMove"*/);
    byte_4A5E423 = 1;
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
  v17 = StringLiteral_9874/*"OnCompleteEventIntoMove"*/;
  *(_QWORD *)&v13[3].fields.m_CachedPtr = StringLiteral_9874/*"OnCompleteEventIntoMove"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v13[3].fields, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoStart(
        MissionListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v12; // x4
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0

  if ( (byte_4A5E422 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    sub_1B885B0(&StringLiteral_6186/*"EventIntoMove"*/);
    byte_4A5E422 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v6, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL
    || (MissionListViewObject__Init((MissionListViewObject_o *)dragObject, 2, 0LL, 0.0, 0, v12),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__TransformPoint_69483968(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B8880C(dragObject, v10);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6186/*"EventIntoMove"*/,
    delay,
    0LL);
}


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
  ServantStatusBattleListViewItem_o *p_onCompleteMoveAction; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  int32_t v23; // w3
  int32_t v24; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A5E420 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItem_TypeInfo);
    byte_4A5E420 = 1;
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
    sub_1B8880C(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onCompleteMoveAction = onCompleteMove;
  p_onCompleteMoveAction = (ServantStatusBattleListViewItem_o *)&this->fields.onCompleteMoveAction;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onCompleteMoveAction,
    (int32_t)onCompleteMove,
    v19,
    v20);
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
        sub_1B88554(p_onCompleteMoveAction, 0, (int32_t)v22, v23);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall MissionListViewObject__Init_44273872(
        MissionListViewObject_o *this,
        int32_t initMode,
        bool isColliderEnable,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionListViewObject__Init(this, initMode, 0LL, 0.0, isColliderEnable, v4);
}


void __fastcall MissionListViewObject__Init_44297444(
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

  if ( (byte_4A5E429 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9862/*"OnClickRewardIcon"*/);
    byte_4A5E429 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B8880C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9862/*"OnClickRewardIcon"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__OnClickSelect(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A5E428 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9847/*"OnClickListView"*/);
    byte_4A5E428 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B8880C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9847/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__OnCompleteEventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_4A5E427 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A5E427 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v4, v5);
  MissionListViewObject__CommonEventMoveEnd(this, v6);
}


void __fastcall MissionListViewObject__OnCompleteEventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_4A5E424 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A5E424 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MissionListViewObject__SetupDisp(this, 1, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v5, v6);
  MissionListViewObject__CommonEventMoveEnd(this, v7);
}


void __fastcall MissionListViewObject__OnDestroy(MissionListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E41C & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E41C = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


void __fastcall MissionListViewObject__OnLongPressReward(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A5E42A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9915/*"OnLongPressRewardIcon"*/);
    byte_4A5E42A = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B8880C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9915/*"OnLongPressRewardIcon"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__RedispResTime(MissionListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *manager; // x21
  bool v7; // w0
  struct MissionListViewItemDraw_o *itemDraw; // x19
  int64_t Time; // x0
  __int64 v10; // x1

  if ( (byte_4A5E41F & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItem_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E41F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(MissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MissionListViewItem_TypeInfo )
        v5 = this->fields.linkItem;
      else
        v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality(manager, 0LL, 0LL);
    if ( v5 && !v7 )
    {
      itemDraw = this->fields.itemDraw;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( !itemDraw )
        sub_1B8880C(Time, v10);
      ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, int64_t, Il2CppMethodPointer))itemDraw->klass->vtable._9_UpdateDispResTime.method)(
        itemDraw,
        v5,
        Time,
        itemDraw->klass->vtable._10_SetInput.methodPtr);
    }
  }
}


void __fastcall MissionListViewObject__SetInput(MissionListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v8; // x1
  struct MissionListViewItemDraw_o *v9; // x0

  if ( (byte_4A5E41D & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E41D = 1;
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
        v8 = this->fields.linkItem;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v8);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, void *))v9->klass->vtable._10_SetInput.method)(
      v9,
      v8,
      v9->klass[1]._1.image);
  }
}


void __fastcall MissionListViewObject__SetItem(
        MissionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall MissionListViewObject__SetupDisp(
        MissionListViewObject_o *this,
        bool isColliderEnable,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *itemDraw; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  struct MissionListViewItemDraw_o *v11; // x0

  if ( (byte_4A5E421 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E421 = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)this->fields.manager, v8, v9);
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1B8880C(0LL, v10);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, _QWORD, struct ListViewManager_o *, Il2CppMethodPointer))v11->klass->vtable._4_SetItem.method)(
      v11,
      linkItem,
      (unsigned int)this->fields.dispMode,
      this->fields.manager,
      v11->klass->vtable._5_InitDispResTime.methodPtr);
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

  if ( (byte_4A5E419 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5E419 = 1;
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
    v9 = sub_1BC3AA0(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5E41A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5E41A = 1;
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
    v9 = sub_1BC3AA0(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  MissionListViewObject__Awake(v11, v12);
}