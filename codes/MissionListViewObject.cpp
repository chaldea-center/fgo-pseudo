void __fastcall MissionListViewObject___ctor(MissionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E878D & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E878D = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct MissionListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E877F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42E877F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct MissionListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  dispObject,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
    sub_B5D560(p_onCompleteMoveAction, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall MissionListViewObject__CreateDragObject(
        MissionListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  const MethodInfo *v8; // x4

  if ( (byte_42E8782 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, (_DWORD)method, v2, v3);
    byte_42E8782 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  MissionListViewObject__Init((MissionListViewObject_o *)DragObject, 2, 0LL, 0.0, 0, v8);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v15; // s0
  UnityEngine_GameObject_o *v18; // x20
  ListViewObject_c *v19; // x0
  float v20; // s8
  float v21; // s10
  float v22; // s9
  UnityEngine_GameObject_o *v23; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42E878A & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10084/*"OnCompleteEventExitMove"*/, v8, v9, v10);
    byte_42E878A = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v12);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_17;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_17;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_17;
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_17;
    v38 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v15, 0LL);
    v18 = this->fields.dragObject;
    v19 = ListViewObject_TypeInfo;
    v20 = v38.fields.x + 1000.0;
    v21 = v38.fields.y + 0.0;
    v22 = v38.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v19 = ListViewObject_TypeInfo;
    }
    v39.fields.x = v20;
    v39.fields.y = v21;
    v39.fields.z = v22;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v18, v19->static_fields->BASE_MOVE_TIME, v39, 0LL);
    if ( !transform )
LABEL_17:
      sub_B5D69C(transform, v12);
    v23 = transform;
    LODWORD(transform[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v23[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3], gameObject, v25, v26, v27, v28, v29, v30);
    v31 = (System_Int32_array **)StringLiteral_10084/*"OnCompleteEventExitMove"*/;
    v23[3].monitor = (void *)StringLiteral_10084/*"OnCompleteEventExitMove"*/;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3].monitor, v31, v32, v33, v34, v35, v36, v37);
  }
}


void __fastcall MissionListViewObject__EventExitStart(
        MissionListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct UnityEngine_GameObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v23; // x4

  if ( (byte_42E8789 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, (_DWORD)method, (_DWORD)v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_6238/*"EventExitMove"*/, v10, v11, v12);
    byte_42E8789 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v13 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v20);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B5D69C(dragObject, v20);
  MissionListViewObject__Init((MissionListViewObject_o *)Component_srcLineSprite, 2, 0LL, 0.0, 0, v23);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6238/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v16; // x0
  float z; // s10
  UnityEngine_GameObject_o *v18; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42E8787 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10085/*"OnCompleteEventIntoMove"*/, v5, v6, v7);
    byte_42E8787 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v33 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = this->fields.dragObject;
  x = v33.fields.x;
  y = v33.fields.y;
  v16 = ListViewObject_TypeInfo;
  z = v33.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v16 = ListViewObject_TypeInfo;
  }
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->BASE_MOVE_TIME, v34, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B5D69C(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_10085/*"OnCompleteEventIntoMove"*/;
  v18[3].monitor = (void *)StringLiteral_10085/*"OnCompleteEventIntoMove"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoStart(
        MissionListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v20; // x4
  UnityEngine_Transform_o *transform; // x20
  int v22; // s0

  if ( (byte_42E8786 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, (_DWORD)method, (_DWORD)v3, v4);
    sub_B5D5C4(&StringLiteral_6248/*"EventIntoMove"*/, v7, v8, v9);
    byte_42E8786 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL
    || (MissionListViewObject__Init((MissionListViewObject_o *)dragObject, 2, 0LL, 0.0, 0, v20),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__TransformPoint_35744104(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_B5D69C(dragObject, v18);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v22, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6248/*"EventIntoMove"*/,
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
  __int64 v17; // x1
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

  if ( (byte_42E8784 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItem_TypeInfo, initMode, (_DWORD)onCompleteMove, isColliderEnable);
    byte_42E8784 = 1;
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
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onCompleteMoveAction = onCompleteMove;
  p_onCompleteMoveAction = (BattleServantConfConponent_o *)&this->fields.onCompleteMoveAction;
  sub_B5D560(
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
        sub_B5D560(p_onCompleteMoveAction, 0LL, (System_String_array **)v26, v27, v28, v29, v30, v31);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


void __fastcall MissionListViewObject__Init_25053516(
        MissionListViewObject_o *this,
        int32_t initMode,
        bool isColliderEnable,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionListViewObject__Init(this, initMode, 0LL, 0.0, isColliderEnable, v4);
}


void __fastcall MissionListViewObject__Init_25063908(
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42E878C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10060/*"OnClickListView"*/, (_DWORD)method, v2, v3);
    byte_42E878C = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B5D69C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10060/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__OnCompleteEventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42E878B & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E878B = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  MissionListViewObject__CommonEventMoveEnd(this, v12);
}


void __fastcall MissionListViewObject__OnCompleteEventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_42E8788 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8788 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MissionListViewObject__SetupDisp(this, 1, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  MissionListViewObject__CommonEventMoveEnd(this, v13);
}


void __fastcall MissionListViewObject__OnDestroy(MissionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E8780 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8780 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall MissionListViewObject__RedispResTime(MissionListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11
  struct ListViewItem_o *v13; // x20
  UnityEngine_Object_o *manager; // x21
  bool v15; // w0
  struct MissionListViewItemDraw_o *itemDraw; // x19
  int64_t Time; // x0
  __int64 v18; // x1

  if ( (byte_42E8783 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E8783 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&MissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == MissionListViewItem_TypeInfo )
        v13 = this->fields.linkItem;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Equality(manager, 0LL, 0LL);
    if ( v13 && !v15 )
    {
      itemDraw = this->fields.itemDraw;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( !itemDraw )
        sub_B5D69C(Time, v18);
      ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, int64_t, Il2CppMethodPointer))itemDraw->klass->vtable._9_UpdateDispResTime.method)(
        itemDraw,
        v13,
        Time,
        itemDraw->klass->vtable._10_SetInput.methodPtr);
    }
  }
}


void __fastcall MissionListViewObject__SetInput(MissionListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 v11; // x11
  struct ListViewItem_o *v12; // x1
  struct MissionListViewItemDraw_o *v13; // x0

  if ( (byte_42E8781 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItem_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8781 = 1;
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
      && (v11 = *(&MissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == MissionListViewItem_TypeInfo )
        v12 = this->fields.linkItem;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, void *))v13->klass->vtable._10_SetInput.method)(
      v13,
      v12,
      v13->klass[1]._1.image);
  }
}


void __fastcall MissionListViewObject__SetItem(
        MissionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall MissionListViewObject__SetupDisp(
        MissionListViewObject_o *this,
        bool isColliderEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v10; // x10
  UnityEngine_Object_o *itemDraw; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  struct MissionListViewItemDraw_o *v19; // x0

  if ( (byte_42E8785 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItem_TypeInfo, isColliderEnable, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8785 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v10 = *(&MissionListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10)
    && (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == MissionListViewItem_TypeInfo )
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.manager,
      (System_Int32_array **)this->fields.manager,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v19 = this->fields.itemDraw;
    if ( !v19 )
      sub_B5D69C(0LL, v18);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, _QWORD, struct ListViewManager_o *, Il2CppMethodPointer))v19->klass->vtable._4_SetItem.method)(
      v19,
      linkItem,
      (unsigned int)this->fields.dispMode,
      this->fields.manager,
      v19->klass->vtable._5_InitDispResTime.methodPtr);
  }
}


void __fastcall MissionListViewObject__add_onCompleteMoveAction(
        MissionListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_onCompleteMoveAction; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onCompleteMoveAction; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MissionListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E877D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E877D = 1;
  }
  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = &this->fields.onCompleteMoveAction;
  v7 = (System_Delegate_o *)onCompleteMoveAction;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onCompleteMoveAction, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (MissionListViewObject_o *)sub_B5D990(v9);
  MissionListViewObject__remove_onCompleteMoveAction(v12, v13, v14);
}


void __fastcall MissionListViewObject__remove_onCompleteMoveAction(
        MissionListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_onCompleteMoveAction; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onCompleteMoveAction; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MissionListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E877E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E877E = 1;
  }
  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = &this->fields.onCompleteMoveAction;
  v7 = (System_Delegate_o *)onCompleteMoveAction;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onCompleteMoveAction, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (MissionListViewObject_o *)sub_B5D990(v9);
  MissionListViewObject__Awake(v12, v13);
}