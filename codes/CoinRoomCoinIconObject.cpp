void __fastcall CoinRoomCoinIconObject___ctor(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BB7D6E & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    byte_4BB7D6E = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CoinRoomCoinIconObject__Awake(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB7D5F & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___, method);
    byte_4BB7D5F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C13F80(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___);
  this->fields.itemDraw = (struct CoinRoomCoinIconDraw_o *)Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


UnityEngine_GameObject_o *__fastcall CoinRoomCoinIconObject__CreateDragObject(
        CoinRoomCoinIconObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3
  CoinRoomCoinIconObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4BB7D65 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, method);
    byte_4BB7D65 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___)) == 0LL) )
  {
    sub_1C13F80(DragObject, v4);
  }
  v7 = (CoinRoomCoinIconObject_o *)DragObject;
  CoinRoomCoinIconObject__Init_45827788((CoinRoomCoinIconObject_o *)DragObject, 2, 0LL, 0.0, v6);
  CoinRoomCoinIconObject__SetupDisp(v7, v8);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventExitMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_4BB7D6A & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_6330/*"EventDelegate"*/, v4);
    byte_4BB7D6A = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v6);
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
    v32 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = this->fields.dragObject;
    v13 = ListViewObject_TypeInfo;
    v14 = v32.fields.x + 1000.0;
    v15 = v32.fields.y + 0.0;
    v16 = v32.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v13 = ListViewObject_TypeInfo;
    }
    v33.fields.x = v14;
    v33.fields.y = v15;
    v33.fields.z = v16;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v13->static_fields->BASE_MOVE_TIME, v33, 0LL);
    if ( !transform )
LABEL_15:
      sub_1C13F80(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v17[3].monitor = gameObject;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v17[3].monitor, (int64_t)gameObject, v19, v20, v21, v22, v23, v24);
    v25 = StringLiteral_6330/*"EventDelegate"*/;
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6330/*"EventDelegate"*/;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v17[3].fields, v25, v26, v27, v28, v29, v30, v31);
  }
}


void __fastcall CoinRoomCoinIconObject__EventExitMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4BB7D6B & 1) == 0 )
  {
    sub_1C13D24(&NGUITools_TypeInfo, method);
    byte_4BB7D6B = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  CoinRoomCoinIconObject__EventMoveEnd(this, v10);
}


void __fastcall CoinRoomCoinIconObject__EventExitStart(
        CoinRoomCoinIconObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v17; // x3

  if ( (byte_4BB7D69 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_6329/*"EventDeckId"*/, v6);
    byte_4BB7D69 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v14);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C13F80(dragObject, v14);
  CoinRoomCoinIconObject__Init_45827788((CoinRoomCoinIconObject_o *)Component_object, 2, 0LL, 0.0, v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6329/*"EventDeckId"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventIntoMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BB7D67 & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    sub_1C13D24(&StringLiteral_6341/*"EventInfoPointGaugePrefab"*/, v3);
    byte_4BB7D67 = 1;
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
  v29 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = ListViewObject_TypeInfo;
  v10 = this->fields.dragObject;
  x = v29.fields.x;
  y = v29.fields.y;
  z = v29.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v9->static_fields->BASE_MOVE_TIME, v30, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1C13F80(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].monitor = gameObject;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v14[3].monitor, (int64_t)gameObject, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_6341/*"EventInfoPointGaugePrefab"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6341/*"EventInfoPointGaugePrefab"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v14[3].fields, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall CoinRoomCoinIconObject__EventIntoMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4BB7D68 & 1) == 0 )
  {
    sub_1C13D24(&NGUITools_TypeInfo, method);
    byte_4BB7D68 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  CoinRoomCoinIconObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  CoinRoomCoinIconObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventIntoStart(
        CoinRoomCoinIconObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v16; // x3
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0

  if ( (byte_4BB7D66 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, method);
    sub_1C13D24(&StringLiteral_6340/*"EventInfoPointGaugeControl"*/, v5);
    byte_4BB7D66 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___)) == 0LL
    || (CoinRoomCoinIconObject__Init_45827788((CoinRoomCoinIconObject_o *)dragObject, 2, 0LL, 0.0, v16),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__TransformPoint_70746736(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1C13F80(dragObject, v14);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6340/*"EventInfoPointGaugeControl"*/,
    delay,
    0LL);
}


void __fastcall CoinRoomCoinIconObject__EventMoveEnd(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields._IsQuestStartMenuMode_k__BackingField = 0;
  *(_DWORD *)(&p_callbackFunc[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C13CC8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__Init(
        CoinRoomCoinIconObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v12; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t v31; // w9
  int32_t v32; // w8
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4BB7D61 & 1) == 0 )
  {
    sub_1C13D24(&CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4BB7D61 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0LL);
  ((void (__fastcall *)(CoinRoomCoinIconObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v12 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v31 = 1;
  v32 = v12;
  switch ( v12 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v32 = v12;
      goto LABEL_14;
    case 3:
      v32 = 2;
LABEL_14:
      v31 = v12;
LABEL_15:
      this->fields.dispMode = v32;
      this->fields.state = v31;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      CoinRoomCoinIconObject__EventIntoStart(this, delay, v24);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      CoinRoomCoinIconObject__EventExitStart(this, delay, v24);
      return;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        CoinRoomCoinIconObject__SetupDisp(this, v24);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1C13CC8(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__Init_45827788(
        CoinRoomCoinIconObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BAEDA1 = 1;
  }
  CoinRoomCoinIconObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


bool __fastcall CoinRoomCoinIconObject__IsCanDrag(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall CoinRoomCoinIconObject__OnClickIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  CoinRoomCoinIconObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  unsigned __int8 *linkItem; // x8
  __int64 methodPtr_low; // x11
  int v7; // w20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v2 = this;
  if ( (byte_4BB7D6C & 1) == 0 )
  {
    sub_1C13D24(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1C13D24(&Method_CoinRoomCoinIconObject_OnClickIcon__, v3);
    this = (CoinRoomCoinIconObject_o *)sub_1C13D24(&StringLiteral_10022/*"OnCheckLongPress"*/, v4);
    byte_4BB7D6C = 1;
  }
  linkItem = (unsigned __int8 *)v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) < (unsigned int)methodPtr_low
      || *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * methodPtr_low - 8) != CoinRoomCoinIconItem_TypeInfo )
    {
      goto LABEL_13;
    }
    v7 = linkItem[156];
    v8 = Method_CoinRoomCoinIconObject_OnClickIcon__;
    if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnClickIcon__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C13D3C(Method_CoinRoomCoinIconObject_OnClickIcon__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C13D08(v8, v8[4]);
    if ( v7 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
      this = (CoinRoomCoinIconObject_o *)v2->fields.manager;
      if ( this )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10022/*"OnCheckLongPress"*/,
          (Il2CppObject *)v2,
          0LL);
        return;
      }
LABEL_13:
      sub_1C13F80(this, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
  }
}


void __fastcall CoinRoomCoinIconObject__OnDestroy(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BB7D60 & 1) == 0 )
  {
    sub_1C13D24(&NGUITools_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB7D60 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
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
    sub_1C13CC8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall CoinRoomCoinIconObject__OnPressIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4BB7D6D & 1) == 0 )
  {
    sub_1C13D24(&Method_CoinRoomCoinIconObject_OnPressIcon__, method);
    sub_1C13D24(&StringLiteral_10122/*"OnMouseUpAsButton"*/, v3);
    byte_4BB7D6D = 1;
  }
  if ( this->fields.linkItem )
  {
    v4 = Method_CoinRoomCoinIconObject_OnPressIcon__;
    if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnPressIcon__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C13D3C(Method_CoinRoomCoinIconObject_OnPressIcon__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C13F80(0LL, v6);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10122/*"OnMouseUpAsButton"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__ResetItem(
        CoinRoomCoinIconObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  CoinRoomCoinIconDraw_o *v7; // x0
  const MethodInfo *v8; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  CoinRoomCoinIconItem_c *v11; // x10
  CoinRoomCoinIconItem_o *v12; // x1

  if ( (byte_4BB7D63 & 1) == 0 )
  {
    sub_1C13D24(&CoinRoomCoinIconItem_TypeInfo, isInput);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB7D63 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (CoinRoomCoinIconDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v11 = (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        v12 = v11 == CoinRoomCoinIconItem_TypeInfo ? (CoinRoomCoinIconItem_o *)this->fields.linkItem : 0LL;
        if ( v11 == CoinRoomCoinIconItem_TypeInfo )
        {
          if ( !v12
            || (v12->fields._selectedNum_k__BackingField = 0,
                v12->fields.selectNum = -1,
                v12->fields._isTouchEnabled_k__BackingField = 1,
                (v7 = this->fields.itemDraw) == 0LL) )
          {
            sub_1C13F80(v7, v12);
          }
          CoinRoomCoinIconDraw__ResetItem(v7, v12, 0, v8);
        }
      }
    }
  }
}


void __fastcall CoinRoomCoinIconObject__SetItem(
        CoinRoomCoinIconObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41915964((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CoinRoomCoinIconObject__SetupDisp(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  CoinRoomCoinIconDraw_o *v10; // x0

  if ( (byte_4BB7D62 & 1) == 0 )
  {
    sub_1C13D24(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB7D62 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C13F80(0LL, v8);
    CoinRoomCoinIconDraw__SetItem(v10, (CoinRoomCoinIconItem_o *)linkItem, this->fields.dispMode, 0, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__UpdateItem(
        CoinRoomCoinIconObject_o *this,
        int32_t num,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v9; // x4
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  CoinRoomCoinIconItem_c *v12; // x10
  CoinRoomCoinIconItem_o *v13; // x1
  CoinRoomCoinIconDraw_o *v14; // x0

  if ( (byte_4BB7D64 & 1) == 0 )
  {
    sub_1C13D24(&CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&num);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB7D64 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v12 = (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        v13 = v12 == CoinRoomCoinIconItem_TypeInfo ? (CoinRoomCoinIconItem_o *)this->fields.linkItem : 0LL;
        if ( v12 == CoinRoomCoinIconItem_TypeInfo )
        {
          v14 = this->fields.itemDraw;
          if ( !v14 )
            sub_1C13F80(0LL, v13);
          CoinRoomCoinIconDraw__UpdateItem(v14, v13, num, 0, v9);
        }
      }
    }
  }
}


void __fastcall CoinRoomCoinIconObject__add_callbackFunc(
        CoinRoomCoinIconObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CoinRoomCoinIconObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BB7D5D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, value);
    byte_4BB7D5D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  CoinRoomCoinIconObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CoinRoomCoinIconObject__remove_callbackFunc(
        CoinRoomCoinIconObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CoinRoomCoinIconObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BB7D5E & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, value);
    byte_4BB7D5E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  CoinRoomCoinIconObject__Awake(v11, v12);
}