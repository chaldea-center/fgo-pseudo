void __fastcall MissionListViewObject___ctor(MissionListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40F7D31 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40F7D31 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MissionListViewObject__Awake(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct MissionListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F7D23 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___, method);
    byte_40F7D23 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct MissionListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  dispObject,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MissionListViewObject__CommonEventMoveEnd(MissionListViewObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onCompleteMoveAction; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onCompleteMoveAction; // t1

  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = (BattleServantConfConponent_o *)&this->fields.onCompleteMoveAction;
  v9 = onCompleteMoveAction;
  p_onCompleteMoveAction[-1].fields.isOpenAfter = 0;
  p_onCompleteMoveAction[-1].fields.adjustHeight = 1;
  if ( onCompleteMoveAction )
  {
    p_onCompleteMoveAction->klass = 0LL;
    sub_B16F98(p_onCompleteMoveAction, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall MissionListViewObject__CreateDragObject(
        MissionListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  MissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v6; // x4

  if ( (byte_40F7D26 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method);
    byte_40F7D26 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = (MissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                DragObject,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  MissionListViewObject__Init(Component_srcLineSprite, 2, 0LL, 0.0, 0, v6);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v10; // x0
  int v11; // s0
  UnityEngine_GameObject_o *v14; // x20
  ListViewObject_c *v15; // x0
  float v16; // s8
  float v17; // s10
  float v18; // s9
  TweenPosition_o *v19; // x0
  TweenPosition_o *v20; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40F7D2E & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9946/*"OnCompleteEventExitMove"*/, v4);
    byte_40F7D2E = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v6);
  }
  else
  {
    v7 = this->fields.dragObject;
    if ( !v7 )
      goto LABEL_17;
    transform = UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( !transform )
      goto LABEL_17;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v10 )
      goto LABEL_17;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(v10, 0LL);
    if ( !parent )
      goto LABEL_17;
    v35 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v11, 0LL);
    v14 = this->fields.dragObject;
    v15 = ListViewObject_TypeInfo;
    v16 = v35.fields.x + 1000.0;
    v17 = v35.fields.y + 0.0;
    v18 = v35.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v15 = ListViewObject_TypeInfo;
    }
    v36.fields.x = v16;
    v36.fields.y = v17;
    v36.fields.z = v18;
    v19 = TweenPosition__Begin(v14, v15->static_fields->BASE_MOVE_TIME, v36, 0LL);
    if ( !v19 )
LABEL_17:
      sub_B170D4();
    v20 = v19;
    v19->fields.style = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
    sub_B16F98((BattleServantConfConponent_o *)&v20->fields.eventReceiver, gameObject, v22, v23, v24, v25, v26, v27);
    v28 = (System_Int32_array **)StringLiteral_9946/*"OnCompleteEventExitMove"*/;
    v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9946/*"OnCompleteEventExitMove"*/;
    sub_B16F98((BattleServantConfConponent_o *)&v20->fields.callWhenFinished, v28, v29, v30, v31, v32, v33, v34);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4

  if ( (byte_40F7D2D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_6141/*"EventExitMove"*/, v7);
    byte_40F7D2D = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v17);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B170D4();
  MissionListViewObject__Init((MissionListViewObject_o *)Component_srcLineSprite, 2, 0LL, 0.0, 0, v18);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6141/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v7; // x0
  int v8; // s0
  UnityEngine_GameObject_o *v11; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v14; // x0
  float z; // s10
  TweenPosition_o *v16; // x0
  TweenPosition_o *v17; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40F7D2B & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9947/*"OnCompleteEventIntoMove"*/, v3);
    byte_40F7D2B = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(v7, 0LL);
  if ( !parent )
    goto LABEL_12;
  v32 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = this->fields.dragObject;
  x = v32.fields.x;
  y = v32.fields.y;
  v14 = ListViewObject_TypeInfo;
  z = v32.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v14 = ListViewObject_TypeInfo;
  }
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v16 = TweenPosition__Begin(v11, v14->static_fields->BASE_MOVE_TIME, v33, 0LL);
  if ( !v16 )
LABEL_12:
    sub_B170D4();
  v17 = v16;
  v16->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.eventReceiver, gameObject, v19, v20, v21, v22, v23, v24);
  v25 = (System_Int32_array **)StringLiteral_9947/*"OnCompleteEventIntoMove"*/;
  v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9947/*"OnCompleteEventIntoMove"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.callWhenFinished, v25, v26, v27, v28, v29, v30, v31);
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
  UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  MissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x4
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v19; // x0
  int v20; // s0

  if ( (byte_40F7D2A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method);
    sub_B16FFC(&StringLiteral_6151/*"EventIntoMove"*/, v6);
    byte_40F7D2A = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (Component_srcLineSprite = (MissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               dragObject,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL
    || (MissionListViewObject__Init(Component_srcLineSprite, 2, 0LL, 0.0, 0, v17), !*p_dragObject)
    || (transform = UnityEngine_GameObject__get_transform(*p_dragObject, 0LL),
        (v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__TransformPoint_34933176(v19, 1000.0, 0.0, 0.0, 0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6151/*"EventIntoMove"*/,
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
  int32_t dispMode; // w23
  int32_t state; // w24
  __int64 v14; // x10
  int32_t v15; // w25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v17; // x0
  BattleServantConfConponent_o *p_onCompleteMoveAction; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  MethodInfo *v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v32; // w8
  System_Action_o *klass; // x19

  if ( (byte_40F7D28 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40F7D28 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v14 = *(&MissionListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
  {
    if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == MissionListViewItem_TypeInfo )
      v15 = initMode;
    else
      v15 = 0;
  }
  else
  {
    v15 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v15 != 0, 0LL);
  ((void (__fastcall *)(MissionListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v15 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v17, this->fields.baseScale, 0LL);
  this->fields.onCompleteMoveAction = onCompleteMove;
  p_onCompleteMoveAction = (BattleServantConfConponent_o *)&this->fields.onCompleteMoveAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onCompleteMoveAction,
    (System_Int32_array **)onCompleteMove,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v32 = 1;
  switch ( v15 )
  {
    case 0:
    case 2:
      goto LABEL_13;
    case 1:
    case 3:
      v32 = v15;
LABEL_13:
      this->fields.dispMode = v15;
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
      klass = (System_Action_o *)p_onCompleteMoveAction->klass;
      if ( p_onCompleteMoveAction->klass )
      {
        p_onCompleteMoveAction->klass = 0LL;
        sub_B16F98(p_onCompleteMoveAction, 0LL, (System_String_array **)v26, v27, v28, v29, v30, v31);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


void __fastcall MissionListViewObject__Init_21013456(
        MissionListViewObject_o *this,
        int32_t initMode,
        bool isColliderEnable,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionListViewObject__Init(this, initMode, 0LL, 0.0, isColliderEnable, v4);
}


void __fastcall MissionListViewObject__Init_21023968(
        MissionListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onCompleteMove,
        bool isColliderEnable,
        const MethodInfo *method)
{
  MissionListViewObject__Init(this, initMode, onCompleteMove, 0.0, isColliderEnable, method);
}


void __fastcall MissionListViewObject__OnClickSelect(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40F7D30 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9922/*"OnClickListView"*/, method);
    byte_40F7D30 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B170D4();
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9922/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__OnCompleteEventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_40F7D2F & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40F7D2F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  MissionListViewObject__CommonEventMoveEnd(this, v10);
}


void __fastcall MissionListViewObject__OnCompleteEventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_40F7D2C & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40F7D2C = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MissionListViewObject__SetupDisp(this, 1, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  MissionListViewObject__CommonEventMoveEnd(this, v11);
}


void __fastcall MissionListViewObject__OnDestroy(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F7D24 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7D24 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall MissionListViewObject__RedispResTime(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11
  struct ListViewItem_o *v7; // x20
  UnityEngine_Object_o *manager; // x21
  bool v9; // w0
  struct MissionListViewItemDraw_o *itemDraw; // x19
  int64_t Time; // x0

  if ( (byte_40F7D27 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItem_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F7D27 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&MissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == MissionListViewItem_TypeInfo )
        v7 = this->fields.linkItem;
      else
        v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Equality(manager, 0LL, 0LL);
    if ( v7 && !v9 )
    {
      itemDraw = this->fields.itemDraw;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( !itemDraw )
        sub_B170D4();
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
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  struct MissionListViewItemDraw_o *v10; // x0

  if ( (byte_40F7D25 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItem_TypeInfo, isInput);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7D25 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v8 = *(&MissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == MissionListViewItem_TypeInfo )
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
      sub_B170D4();
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
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__SetupDisp(
        MissionListViewObject_o *this,
        bool isColliderEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v7; // x10
  UnityEngine_Object_o *itemDraw; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct MissionListViewItemDraw_o *v15; // x0

  if ( (byte_40F7D29 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItem_TypeInfo, isColliderEnable);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7D29 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v7 = *(&MissionListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
    && (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == MissionListViewItem_TypeInfo )
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.manager,
      (System_Int32_array **)this->fields.manager,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v15 = this->fields.itemDraw;
    if ( !v15 )
      sub_B170D4();
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, _QWORD, struct ListViewManager_o *, Il2CppMethodPointer))v15->klass->vtable._4_SetItem.method)(
      v15,
      linkItem,
      (unsigned int)this->fields.dispMode,
      this->fields.manager,
      v15->klass->vtable._5_InitDispResTime.methodPtr);
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

  if ( (byte_40F7D21 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F7D21 = 1;
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
    v9 = sub_B0BA14(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MissionListViewObject_o *)sub_B173C8(v8);
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

  if ( (byte_40F7D22 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F7D22 = 1;
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
    v9 = sub_B0BA14(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MissionListViewObject_o *)sub_B173C8(v8);
  MissionListViewObject__Awake(v11, v12);
}