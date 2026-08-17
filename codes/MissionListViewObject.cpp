void MissionListViewObject___ctor(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A0C0 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596A0C0 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MissionListViewObject__Awake(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_596A0B0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
    byte_596A0B0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
  this->fields.itemDraw = (struct MissionListViewItemDraw_o *)Component_object;
  sub_2213A04(&this->fields.itemDraw, Component_object);
}


void MissionListViewObject__CommonEventMoveEnd(MissionListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_onCompleteMoveAction; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *onCompleteMoveAction; // t1

  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = &this->fields.onCompleteMoveAction;
  v3 = onCompleteMoveAction;
  *((_BYTE *)p_onCompleteMoveAction - 8) = 0;
  *((_DWORD *)p_onCompleteMoveAction - 1) = 1;
  if ( onCompleteMoveAction )
  {
    *p_onCompleteMoveAction = 0;
    sub_2213A04(p_onCompleteMoveAction, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
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

  if ( (byte_596A0B3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    byte_596A0B3 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  MissionListViewObject__Init((MissionListViewObject_o *)DragObject, 2, 0, 0.0, 0, v6);
  return v5;
}


void MissionListViewObject__EventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
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
  __int64 v17; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596A0BB & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10280/*"OnCompleteEventExitMove"*/);
    byte_596A0BB = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v5);
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
    v19 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v10 = this->fields.dragObject;
    v11 = ListViewObject_TypeInfo;
    v12 = v19.fields.x + 1000.0;
    v13 = v19.fields.y + 0.0;
    v14 = v19.fields.z + 0.0;
    if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v8, v9);
      v11 = ListViewObject_TypeInfo;
    }
    v20.fields.x = v12;
    v20.fields.y = v13;
    v20.fields.z = v14;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v11->static_fields->BASE_MOVE_TIME, v20, 0);
    if ( !transform )
LABEL_15:
      sub_2213CDC(transform, v5);
    v15 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v15[3].monitor = gameObject;
    sub_2213A04(&v15[3].monitor, gameObject);
    v17 = StringLiteral_10280/*"OnCompleteEventExitMove"*/;
    v15[3].fields.m_CachedPtr = StringLiteral_10280/*"OnCompleteEventExitMove"*/;
    sub_2213A04(&v15[3].fields, v17);
  }
}


void MissionListViewObject__EventExitStart(MissionListViewObject_o *this, float delay, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v12; // x4

  if ( (byte_596A0BA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6476/*"EventExitMove"*/);
    byte_596A0BA = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v6;
  sub_2213A04(&this->fields.dragObject, v6);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v7);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_2213CDC(dragObject, v7);
  MissionListViewObject__Init((MissionListViewObject_o *)Component_object, 2, 0, 0.0, 0, v12);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6476/*"EventExitMove"*/,
    delay,
    0);
}


void MissionListViewObject__EventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596A0B8 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_10281/*"OnCompleteEventIntoMove"*/);
    byte_596A0B8 = 1;
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
  v16 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  x = v16.fields.x;
  y = v16.fields.y;
  v9 = ListViewObject_TypeInfo;
  z = v16.fields.z;
  v11 = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v5, v6);
    v9 = ListViewObject_TypeInfo;
  }
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v11, v9->static_fields->BASE_MOVE_TIME, v17, 0);
  if ( !dragObject )
LABEL_11:
    sub_2213CDC(dragObject, method);
  v12 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[3].monitor = gameObject;
  sub_2213A04(&v12[3].monitor, gameObject);
  v14 = StringLiteral_10281/*"OnCompleteEventIntoMove"*/;
  v12[3].fields.m_CachedPtr = StringLiteral_10281/*"OnCompleteEventIntoMove"*/;
  sub_2213A04(&v12[3].fields, v14);
}


void MissionListViewObject__EventIntoStart(MissionListViewObject_o *this, float delay, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v10; // x4
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A0B7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
    sub_2213A60(&StringLiteral_6491/*"EventIntoMove"*/);
    byte_596A0B7 = 1;
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
  sub_2213A04(&this->fields.dragObject, v6);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0
    || (MissionListViewObject__Init((MissionListViewObject_o *)dragObject, 2, 0, 0.0, 0, v10),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v12 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_2213CDC(dragObject, v8);
  }
  UnityEngine_Transform__set_position(transform, v12, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6491/*"EventIntoMove"*/,
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
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int v14; // w24
  int32_t dispMode; // w23
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  struct System_Action_o **p_onCompleteMoveAction; // x22
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  int32_t v22; // w8
  struct System_Action_o *v23; // x19

  if ( (byte_596A0B5 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewItem_TypeInfo);
    byte_596A0B5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = MissionListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MissionListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0);
  ((void (__fastcall *)(MissionListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v14 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v18);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onCompleteMoveAction = onCompleteMove;
  p_onCompleteMoveAction = &this->fields.onCompleteMoveAction;
  sub_2213A04(&this->fields.onCompleteMoveAction, onCompleteMove);
  if ( v14 <= 2 )
  {
    v22 = 1;
    if ( v14 )
    {
      v22 = v14;
      if ( v14 != 1 )
      {
        v22 = 1;
        if ( v14 != 2 )
          goto LABEL_20;
      }
    }
    goto LABEL_19;
  }
  if ( v14 <= 5 )
  {
    v22 = v14;
    if ( v14 != 3 )
    {
      if ( v14 == 4 )
      {
        this->fields.dispMode = 0;
        this->fields.state = 2;
        MissionListViewObject__EventIntoStart(this, delay, v20);
        return;
      }
      goto LABEL_20;
    }
LABEL_19:
    this->fields.dispMode = v14;
    this->fields.state = v22;
    goto LABEL_20;
  }
  if ( v14 == 6 )
  {
    this->fields.dispMode = 2;
    this->fields.state = 2;
    MissionListViewObject__EventExitStart(this, delay, v20);
    return;
  }
  if ( v14 != 7 )
  {
LABEL_20:
    if ( state && dispMode == this->fields.dispMode )
      goto LABEL_27;
    goto LABEL_26;
  }
  this->fields.dispMode = 2;
  this->fields.state = 1;
LABEL_26:
  MissionListViewObject__SetupDisp(this, isColliderEnable, v21);
LABEL_27:
  v23 = *p_onCompleteMoveAction;
  if ( *p_onCompleteMoveAction )
  {
    *p_onCompleteMoveAction = 0;
    sub_2213A04(p_onCompleteMoveAction, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v23->fields.invoke_impl)(v23->fields.method_code, v23->fields.method);
  }
}


void MissionListViewObject__Init_37506532(
        MissionListViewObject_o *this,
        int32_t initMode,
        bool isColliderEnable,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionListViewObject__Init(this, initMode, 0, 0.0, isColliderEnable, v4);
}


void MissionListViewObject__Init_37508352(
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

  if ( (byte_596A0BE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10265/*"OnClickRewardIcon"*/);
    byte_596A0BE = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10265/*"OnClickRewardIcon"*/, (Il2CppObject *)this, 0);
}


void MissionListViewObject__OnClickSelect(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596A0BD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596A0BD = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void MissionListViewObject__OnCompleteEventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_596A0BC & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596A0BC = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04(&this->fields.dragObject, 0);
  MissionListViewObject__CommonEventMoveEnd(this, v5);
}


void MissionListViewObject__OnCompleteEventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v7; // x1

  if ( (byte_596A0B9 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596A0B9 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  MissionListViewObject__SetupDisp(this, 1, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04(&this->fields.dragObject, 0);
  MissionListViewObject__CommonEventMoveEnd(this, v7);
}


void MissionListViewObject__OnDestroy(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *v9; // x20

  if ( (byte_596A0B1 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0B1 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    v9 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(v9, 0);
    *p_dragObject = 0;
    sub_2213A04(p_dragObject, 0);
  }
}


void MissionListViewObject__OnLongPressReward(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596A0BF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10324/*"OnLongPressRewardIcon"*/);
    byte_596A0BF = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10324/*"OnLongPressRewardIcon"*/, (Il2CppObject *)this, 0);
}


void MissionListViewObject__RedispResTime(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *manager; // x21
  bool v8; // w0
  __int64 v9; // x1
  __int64 v10; // x2
  struct MissionListViewItemDraw_o *itemDraw; // x19
  int64_t Time; // x0
  __int64 v13; // x1

  if ( (byte_596A0B4 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewItem_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0B4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = MissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewItem_TypeInfo )
        v6 = this->fields.linkItem;
      else
        v6 = 0;
    }
    else
    {
      v6 = 0;
    }
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    v8 = UnityEngine_Object__op_Equality(manager, 0, 0);
    if ( v6 && !v8 )
    {
      itemDraw = this->fields.itemDraw;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
      Time = NetworkManager__getTime(0);
      if ( !itemDraw )
        sub_2213CDC(Time, v13);
      ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, int64_t, const MethodInfo *))itemDraw->klass->vtable._9_UpdateDispResTime.methodPtr)(
        itemDraw,
        v6,
        Time,
        itemDraw->klass->vtable._9_UpdateDispResTime.method);
    }
  }
}


void MissionListViewObject__SetInput(MissionListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v10; // x1
  struct MissionListViewItemDraw_o *v11; // x0

  if ( (byte_596A0B2 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0B2 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = MissionListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v10);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, const MethodInfo *))v11->klass->vtable._10_SetInput.methodPtr)(
      v11,
      v10,
      v11->klass->vtable._10_SetInput.method);
  }
}


void MissionListViewObject__SetItem(
        MissionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void MissionListViewObject__SetupDisp(MissionListViewObject_o *this, bool isColliderEnable, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v10; // x1
  struct MissionListViewItemDraw_o *v11; // x0

  if ( (byte_596A0B6 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0B6 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    sub_2213A04(&this->fields.manager, this->fields.manager);
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v10);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, _QWORD, struct ListViewManager_o *, const MethodInfo *))v11->klass->vtable._4_SetItem.methodPtr)(
      v11,
      linkItem,
      (unsigned int)this->fields.dispMode,
      this->fields.manager,
      v11->klass->vtable._4_SetItem.method);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MissionListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A0AE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A0AE = 1;
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
    v11 = sub_224B48C(p_onCompleteMoveAction, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MissionListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  MissionListViewObject__remove_onCompleteMoveAction(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MissionListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A0AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A0AF = 1;
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
    v11 = sub_224B48C(p_onCompleteMoveAction, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MissionListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  MissionListViewObject__Awake(v13, v14);
}