void __fastcall CoinRoomCoinIconObject___ctor(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B197CF & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B197CF = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CoinRoomCoinIconObject__Awake(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B197C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___, method, v2);
    byte_4B197C0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___);
  this->fields.itemDraw = (struct CoinRoomCoinIconDraw_o *)Component_object;
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


UnityEngine_GameObject_o *__fastcall CoinRoomCoinIconObject__CreateDragObject(
        CoinRoomCoinIconObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x19
  const MethodInfo *v7; // x3
  CoinRoomCoinIconObject_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B197C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, method, v2);
    byte_4B197C6 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v6 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___)) == 0LL) )
  {
    sub_1BCAA3C(DragObject, v5);
  }
  v8 = (CoinRoomCoinIconObject_o *)DragObject;
  CoinRoomCoinIconObject__Init_45358540((CoinRoomCoinIconObject_o *)DragObject, 2, 0LL, 0.0, v7);
  CoinRoomCoinIconObject__SetupDisp(v8, v9);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventExitMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B197CB & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6296/*"EventExitMove2"*/, v6, v7);
    byte_4B197CB = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v9);
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
    v29 = StringLiteral_6296/*"EventExitMove2"*/;
    *(_QWORD *)&v21[3].fields.m_CachedPtr = StringLiteral_6296/*"EventExitMove2"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v21[3].fields, v29, v30, v31, v32, v33, v34, v35);
  }
}


void __fastcall CoinRoomCoinIconObject__EventExitMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B197CC & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B197CC = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  CoinRoomCoinIconObject__EventMoveEnd(this, v11);
}


void __fastcall CoinRoomCoinIconObject__EventExitStart(
        CoinRoomCoinIconObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v3; // x2
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
  const MethodInfo *v21; // x3

  if ( (byte_4B197CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_6295/*"EventExitMove"*/, v8, v9);
    byte_4B197CA = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v17);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1BCAA3C(dragObject, v17);
  CoinRoomCoinIconObject__Init_45358540((CoinRoomCoinIconObject_o *)Component_object, 2, 0LL, 0.0, v21);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6295/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventIntoMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B197C8 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6307/*"EventIntoMove2"*/, v4, v5);
    byte_4B197C8 = 1;
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
  v25 = StringLiteral_6307/*"EventIntoMove2"*/;
  *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6307/*"EventIntoMove2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17[3].fields, v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall CoinRoomCoinIconObject__EventIntoMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4B197C9 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B197C9 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  CoinRoomCoinIconObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  CoinRoomCoinIconObject__EventMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventIntoStart(
        CoinRoomCoinIconObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v3; // x2
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
  const MethodInfo *v18; // x3
  UnityEngine_Transform_o *transform; // x20
  int v20; // s0

  if ( (byte_4B197C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, method, v3);
    sub_1BCA7E0(&StringLiteral_6306/*"EventIntoMove"*/, v6, v7);
    byte_4B197C7 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  p_dragObject = &this->fields.dragObject;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___)) == 0LL
    || (CoinRoomCoinIconObject__Init_45358540((CoinRoomCoinIconObject_o *)dragObject, 2, 0LL, 0.0, v18),
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
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B197C2 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B197C2 = 1;
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
    sub_1BCAA3C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1BCA784(
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
        sub_1BCA784(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__Init_45358540(
        CoinRoomCoinIconObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  CoinRoomCoinIconObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


bool __fastcall CoinRoomCoinIconObject__IsCanDrag(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall CoinRoomCoinIconObject__OnClickIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CoinRoomCoinIconObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned __int8 *linkItem; // x8
  __int64 methodPtr_low; // x11
  int v10; // w20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  v3 = this;
  if ( (byte_4B197CD & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomCoinIconItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CoinRoomCoinIconObject_OnClickIcon__, v4, v5);
    this = (CoinRoomCoinIconObject_o *)sub_1BCA7E0(&StringLiteral_9974/*"OnClickIcon"*/, v6, v7);
    byte_4B197CD = 1;
  }
  linkItem = (unsigned __int8 *)v3->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) < (unsigned int)methodPtr_low
      || *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * methodPtr_low - 8) != CoinRoomCoinIconItem_TypeInfo )
    {
      goto LABEL_13;
    }
    v10 = linkItem[156];
    v11 = Method_CoinRoomCoinIconObject_OnClickIcon__;
    if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnClickIcon__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_CoinRoomCoinIconObject_OnClickIcon__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    if ( v10 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
      this = (CoinRoomCoinIconObject_o *)v3->fields.manager;
      if ( this )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_9974/*"OnClickIcon"*/,
          (Il2CppObject *)v3,
          0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(this, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
  }
}


void __fastcall CoinRoomCoinIconObject__OnDestroy(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B197C1 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B197C1 = 1;
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


void __fastcall CoinRoomCoinIconObject__OnPressIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B197CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinRoomCoinIconObject_OnPressIcon__, method, v2);
    sub_1BCA7E0(&StringLiteral_10074/*"OnPressIcon"*/, v4, v5);
    byte_4B197CE = 1;
  }
  if ( this->fields.linkItem )
  {
    v6 = Method_CoinRoomCoinIconObject_OnPressIcon__;
    if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnPressIcon__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_CoinRoomCoinIconObject_OnPressIcon__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BCAA3C(0LL, v8);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10074/*"OnPressIcon"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__ResetItem(
        CoinRoomCoinIconObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x20
  CoinRoomCoinIconDraw_o *v9; // x0
  const MethodInfo *v10; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  CoinRoomCoinIconItem_c *v13; // x10
  CoinRoomCoinIconItem_o *v14; // x1

  if ( (byte_4B197C4 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomCoinIconItem_TypeInfo, isInput, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B197C4 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = (CoinRoomCoinIconDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v13 = (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        v14 = v13 == CoinRoomCoinIconItem_TypeInfo ? (CoinRoomCoinIconItem_o *)this->fields.linkItem : 0LL;
        if ( v13 == CoinRoomCoinIconItem_TypeInfo )
        {
          if ( !v14
            || (v14->fields._selectedNum_k__BackingField = 0,
                v14->fields.selectNum = -1,
                v14->fields._isTouchEnabled_k__BackingField = 1,
                (v9 = this->fields.itemDraw) == 0LL) )
          {
            sub_1BCAA3C(v9, v14);
          }
          CoinRoomCoinIconDraw__ResetItem(v9, v14, 0, v10);
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
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CoinRoomCoinIconObject__SetupDisp(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  CoinRoomCoinIconDraw_o *v13; // x0

  if ( (byte_4B197C3 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomCoinIconItem_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B197C3 = 1;
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
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_1BCAA3C(0LL, v11);
    CoinRoomCoinIconDraw__SetItem(v13, (CoinRoomCoinIconItem_o *)linkItem, this->fields.dispMode, 0, v12);
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
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v11; // x4
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  CoinRoomCoinIconItem_c *v14; // x10
  CoinRoomCoinIconItem_o *v15; // x1
  CoinRoomCoinIconDraw_o *v16; // x0

  if ( (byte_4B197C5 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&num, isInput);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B197C5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v14 = (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        v15 = v14 == CoinRoomCoinIconItem_TypeInfo ? (CoinRoomCoinIconItem_o *)this->fields.linkItem : 0LL;
        if ( v14 == CoinRoomCoinIconItem_TypeInfo )
        {
          v16 = this->fields.itemDraw;
          if ( !v16 )
            sub_1BCAA3C(0LL, v15);
          CoinRoomCoinIconDraw__UpdateItem(v16, v15, num, 0, v11);
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

  if ( (byte_4B197BE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B197BE = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B197BF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B197BF = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  CoinRoomCoinIconObject__Awake(v11, v12);
}