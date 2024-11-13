void __fastcall MissionListViewObject___ctor(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19420 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B19420 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MissionListViewObject__Awake(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B19410 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___, method, v2);
    byte_4B19410 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewItemDraw___);
  this->fields.itemDraw = (struct MissionListViewItemDraw_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemDraw,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall MissionListViewObject__CommonEventMoveEnd(MissionListViewObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onCompleteMoveAction; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onCompleteMoveAction; // t1

  onCompleteMoveAction = this->fields.onCompleteMoveAction;
  p_onCompleteMoveAction = (PartyOrganizationUtility_o *)&this->fields.onCompleteMoveAction;
  v9 = onCompleteMoveAction;
  p_onCompleteMoveAction[-1].fields._IsQuestStartMenuMode_k__BackingField = 0;
  *(_DWORD *)(&p_onCompleteMoveAction[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = 1;
  if ( onCompleteMoveAction )
  {
    p_onCompleteMoveAction->klass = 0LL;
    sub_1BCA784(p_onCompleteMoveAction, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


UnityEngine_GameObject_o *__fastcall MissionListViewObject__CreateDragObject(
        MissionListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x19
  const MethodInfo *v7; // x4

  if ( (byte_4B19413 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method, v2);
    byte_4B19413 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v6 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL) )
  {
    sub_1BCAA3C(DragObject, v5);
  }
  MissionListViewObject__Init((MissionListViewObject_o *)DragObject, 2, 0LL, 0.0, 0, v7);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v12; // s0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x20
  ListViewObject_c *v17; // x0
  float v18; // s8
  float v19; // s10
  float v20; // s9
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B1941B & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10006/*"OnCompleteEventExitMove"*/, v6, v7);
    byte_4B1941B = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v9);
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
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_15;
    v36 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v12, 0LL);
    v16 = this->fields.dragObject;
    v17 = ListViewObject_TypeInfo;
    v18 = v36.fields.x + 1000.0;
    v19 = v36.fields.y + 0.0;
    v20 = v36.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v15);
      v17 = ListViewObject_TypeInfo;
    }
    v37.fields.x = v18;
    v37.fields.y = v19;
    v37.fields.z = v20;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v16, v17->static_fields->BASE_MOVE_TIME, v37, 0LL);
    if ( !transform )
LABEL_15:
      sub_1BCAA3C(transform, v9);
    v21 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v21[3].monitor = gameObject;
    sub_1BCA784((PartyOrganizationUtility_o *)&v21[3].monitor, (int64_t)gameObject, v23, v24, v25, v26, v27, v28);
    v29 = StringLiteral_10006/*"OnCompleteEventExitMove"*/;
    *(_QWORD *)&v21[3].fields.m_CachedPtr = StringLiteral_10006/*"OnCompleteEventExitMove"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v21[3].fields, v29, v30, v31, v32, v33, v34, v35);
  }
}


void __fastcall MissionListViewObject__EventExitStart(
        MissionListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_GameObject_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v19; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v21; // x4

  if ( (byte_4B1941A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_6295/*"EventExitMove"*/, v8, v9);
    byte_4B1941A = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MissionListViewObject__CommonEventMoveEnd(this, v17);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1BCAA3C(dragObject, v17);
  MissionListViewObject__Init((MissionListViewObject_o *)Component_object, 2, 0LL, 0.0, 0, v21);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6295/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v8; // s0
  __int64 v11; // x1
  ListViewObject_c *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B19418 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10007/*"OnCompleteEventIntoMove"*/, v4, v5);
    byte_4B19418 = 1;
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
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_11;
  v32 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v12 = ListViewObject_TypeInfo;
  v13 = this->fields.dragObject;
  x = v32.fields.x;
  y = v32.fields.y;
  z = v32.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v11);
    v12 = ListViewObject_TypeInfo;
  }
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v12->static_fields->BASE_MOVE_TIME, v33, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1BCAA3C(dragObject, method);
  v17 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17[3].monitor = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17[3].monitor, (int64_t)gameObject, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_10007/*"OnCompleteEventIntoMove"*/;
  *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_10007/*"OnCompleteEventIntoMove"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17[3].fields, v25, v26, v27, v28, v29, v30, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__EventIntoStart(
        MissionListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_GameObject_o *v8; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v18; // x4
  UnityEngine_Transform_o *transform; // x20
  int v20; // s0

  if ( (byte_4B19417 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___, method, v3);
    sub_1BCA7E0(&StringLiteral_6306/*"EventIntoMove"*/, v6, v7);
    byte_4B19417 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MissionListViewObject__SetupDisp(this, 1, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MissionListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  p_dragObject = &this->fields.dragObject;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MissionListViewObject___)) == 0LL
    || (MissionListViewObject__Init((MissionListViewObject_o *)dragObject, 2, 0LL, 0.0, 0, v18),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__TransformPoint_70178832(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1BCAA3C(dragObject, v16);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6306/*"EventIntoMove"*/,
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
  PartyOrganizationUtility_o *p_onCompleteMoveAction; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t v32; // w8
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4B19415 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItem_TypeInfo, *(_QWORD *)&initMode, onCompleteMove);
    byte_4B19415 = 1;
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
    sub_1BCAA3C(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onCompleteMoveAction = onCompleteMove;
  p_onCompleteMoveAction = (PartyOrganizationUtility_o *)&this->fields.onCompleteMoveAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onCompleteMoveAction,
    (int64_t)onCompleteMove,
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
        p_onCompleteMoveAction->klass = 0LL;
        sub_1BCA784(p_onCompleteMoveAction, 0LL, (int64_t)v26, v27, v28, v29, v30, v31);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall MissionListViewObject__Init_44917524(
        MissionListViewObject_o *this,
        int32_t initMode,
        bool isColliderEnable,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionListViewObject__Init(this, initMode, 0LL, 0.0, isColliderEnable, v4);
}


void __fastcall MissionListViewObject__Init_44947396(
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
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B1941E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9995/*"OnClickRewardIcon"*/, method, v2);
    byte_4B1941E = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9995/*"OnClickRewardIcon"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__OnClickSelect(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B1941D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9980/*"OnClickListView"*/, method, v2);
    byte_4B1941D = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9980/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__OnCompleteEventExitMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4B1941C & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B1941C = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  MissionListViewObject__CommonEventMoveEnd(this, v11);
}


void __fastcall MissionListViewObject__OnCompleteEventIntoMove(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4B19419 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B19419 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MissionListViewObject__SetupDisp(this, 1, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  MissionListViewObject__CommonEventMoveEnd(this, v13);
}


void __fastcall MissionListViewObject__OnDestroy(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19411 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19411 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCA784(p_dragObject, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall MissionListViewObject__OnLongPressReward(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B1941F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10049/*"OnLongPressRewardIcon"*/, method, v2);
    byte_4B1941F = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10049/*"OnLongPressRewardIcon"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewObject__RedispResTime(MissionListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v10; // x20
  UnityEngine_Object_o *manager; // x21
  bool v12; // w0
  __int64 v13; // x1
  struct MissionListViewItemDraw_o *itemDraw; // x19
  int64_t Time; // x0
  __int64 v16; // x1

  if ( (byte_4B19414 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19414 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(MissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MissionListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v12 = UnityEngine_Object__op_Equality(manager, 0LL, 0LL);
    if ( v10 && !v12 )
    {
      itemDraw = this->fields.itemDraw;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
      Time = NetworkManager__getTime(0LL);
      if ( !itemDraw )
        sub_1BCAA3C(Time, v16);
      ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, int64_t, Il2CppMethodPointer))itemDraw->klass->vtable._9_UpdateDispResTime.method)(
        itemDraw,
        v10,
        Time,
        itemDraw->klass->vtable._10_SetInput.methodPtr);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__SetInput(MissionListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v11; // x1
  struct MissionListViewItemDraw_o *v12; // x0

  if ( (byte_4B19412 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItem_TypeInfo, isInput, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19412 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(MissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (MissionListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MissionListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1BCAA3C(0LL, v11);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, void *))v12->klass->vtable._10_SetInput.method)(
      v12,
      v11,
      v12->klass[1]._1.image);
  }
}


void __fastcall MissionListViewObject__SetItem(
        MissionListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewObject__SetupDisp(
        MissionListViewObject_o *this,
        bool isColliderEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  struct MissionListViewItemDraw_o *v18; // x0

  if ( (byte_4B19416 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItem_TypeInfo, isColliderEnable, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19416 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.manager,
      (int64_t)this->fields.manager,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v18 = this->fields.itemDraw;
    if ( !v18 )
      sub_1BCAA3C(0LL, v17);
    ((void (__fastcall *)(struct MissionListViewItemDraw_o *, struct ListViewItem_o *, _QWORD, struct ListViewManager_o *, Il2CppMethodPointer))v18->klass->vtable._4_SetItem.method)(
      v18,
      linkItem,
      (unsigned int)this->fields.dispMode,
      this->fields.manager,
      v18->klass->vtable._5_InitDispResTime.methodPtr);
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

  if ( (byte_4B1940E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1940E = 1;
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
    v9 = sub_1C05CD0(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B1940F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1940F = 1;
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
    v9 = sub_1C05CD0(p_onCompleteMoveAction, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  MissionListViewObject__Awake(v11, v12);
}