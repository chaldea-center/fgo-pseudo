void __fastcall EventRankingListViewObject___ctor(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A32B & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B1A32B = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventRankingListViewObject__Awake(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  char *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1A31D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewItemDraw___, method, v2);
    byte_4B1A31D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = (char *)this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)dispObject,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewItemDraw___),
        this->fields.itemDraw = (struct EventRankingListViewItemDraw_o *)Component_object,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.itemDraw,
          (int64_t)Component_object,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (dispObject = (char *)this->fields.itemDraw) == 0LL) )
  {
    sub_1BCAA3C(dispObject, v4);
  }
  *((_QWORD *)dispObject + 17) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(dispObject + 136), (int64_t)this, v13, v14, v15, v16, v17, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventExitMove(EventRankingListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B1A327 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6296/*"EventExitMove2"*/, v6, v7);
    byte_4B1A327 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    EventRankingListViewObject__EventMoveEnd(this, v9);
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


void __fastcall EventRankingListViewObject__EventExitMove2(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4B1A328 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B1A328 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  EventRankingListViewObject__EventMoveEnd(this, v11);
}


void __fastcall EventRankingListViewObject__EventExitStart(
        EventRankingListViewObject_o *this,
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
  const MethodInfo *v21; // x2

  if ( (byte_4B1A326 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_6295/*"EventExitMove"*/, v8, v9);
    byte_4B1A326 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventRankingListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRankingListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventRankingListViewObject__EventMoveEnd(this, v17);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1BCAA3C(dragObject, v17);
  EventRankingListViewObject__Init_46690908((EventRankingListViewObject_o *)Component_object, 2, v21);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6295/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventIntoMove(EventRankingListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B1A324 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6307/*"EventIntoMove2"*/, v4, v5);
    byte_4B1A324 = 1;
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


void __fastcall EventRankingListViewObject__EventIntoMove2(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4B1A325 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B1A325 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventRankingListViewObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  EventRankingListViewObject__EventMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventIntoStart(
        EventRankingListViewObject_o *this,
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
  const MethodInfo *v18; // x2
  UnityEngine_Transform_o *transform; // x20
  int v20; // s0

  if ( (byte_4B1A323 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method, v3);
    sub_1BCA7E0(&StringLiteral_6306/*"EventIntoMove"*/, v6, v7);
    byte_4B1A323 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventRankingListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRankingListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  p_dragObject = &this->fields.dragObject;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___)) == 0LL
    || (EventRankingListViewObject__Init_46690908((EventRankingListViewObject_o *)dragObject, 2, v18),
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


void __fastcall EventRankingListViewObject__EventMoveEnd(EventRankingListViewObject_o *this, const MethodInfo *method)
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
  LOBYTE(p_callbackFunc[-1].fields._TransitionDestinationFromDetail_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._TransitionDestinationFromDetail_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


EventRankingListViewItem_o *__fastcall EventRankingListViewObject__GetItem(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B1A31F & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItem_TypeInfo, method, v2);
    byte_4B1A31F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventRankingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRankingListViewItem_TypeInfo )
    return (EventRankingListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init(
        EventRankingListViewObject_o *this,
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

  if ( (byte_4B1A321 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B1A321 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventRankingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRankingListViewItem_TypeInfo )
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
  ((void (__fastcall *)(EventRankingListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
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
      this->fields.state = v31;
      this->fields.dispMode = v32;
      goto LABEL_16;
    case 4:
      *(_QWORD *)&this->fields.state = 2LL;
      EventRankingListViewObject__EventIntoStart(this, delay, v24);
      return;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
        EventRankingListViewObject__SetupDisp(this, v24);
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


void __fastcall EventRankingListViewObject__InitItem(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_46690908(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, method);
    byte_4B109C1 = 1;
  }
  EventRankingListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_46691760(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  EventRankingListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_46692280(
        EventRankingListViewObject_o *this,
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
  EventRankingListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall EventRankingListViewObject__OnChangeAlphaAnim(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v8; // x1
  EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4B1A329 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&EventRankingListViewManager_TypeInfo, v4, v5);
    byte_4B1A329 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager
      && (methodPtr_low = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (EventRankingListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRankingListViewManager_TypeInfo )
        v8 = this->fields.manager;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_1BCAA3C(0LL, v8);
    EventRankingListViewItemDraw__ChangeNextRewardIcon(itemDraw, (EventRankingListViewManager_o *)v8, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__SetInput(
        EventRankingListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1A320 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItem_TypeInfo, isInput, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1A320 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v9 && !this->fields.itemDraw )
    sub_1BCAA3C(v9, v10);
}


void __fastcall EventRankingListViewObject__SetItem(
        EventRankingListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventRankingListViewObject__SetItem_46694948(
        EventRankingListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall EventRankingListViewObject__SetupDisp(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v10; // w1
  __int64 v11; // x1
  UnityEngine_Object_o *itemDraw; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct ListViewManager_o *manager; // x8
  __int64 v20; // x11
  struct ListViewManager_o *v21; // x1
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  EventRankingListViewItemDraw_o *v24; // x0

  if ( (byte_4B1A322 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&EventRankingListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A322 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EventRankingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  v10 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    manager = this->fields.manager;
    if ( manager
      && (v20 = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v20) )
    {
      if ( (EventRankingListViewManager_c *)manager->klass->_2.typeHierarchy[v20 - 1] == EventRankingListViewManager_TypeInfo )
        v21 = this->fields.manager;
      else
        v21 = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    this->fields.manager = v21;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.manager, (int64_t)v21, v13, v14, v15, v16, v17, v18);
    v24 = this->fields.itemDraw;
    if ( !v24 )
      sub_1BCAA3C(0LL, v22);
    EventRankingListViewItemDraw__SetItem(v24, (EventRankingListViewItem_o *)linkItem, this->fields.dispMode, v23);
  }
}


System_String_o *__fastcall EventRankingListViewObject__ToString(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  float z; // w9
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v13; // [xsp+20h] [xbp-40h] BYREF
  float v14; // [xsp+28h] [xbp-38h]

  if ( (byte_4B1A32A & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItemDraw_DispMode_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    byte_4B1A32A = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v11.klass = (System_Enum_c *)EventRankingListViewItemDraw_DispMode_TypeInfo;
  v11.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v6 = System_Enum__ToString(&v11, 0LL);
  z = this->fields.basePosition.fields.z;
  v8 = v6;
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v14 = z;
  v9 = (System_String_o *)sub_1DDA8EC(&v13, 0LL, 0LL, 0LL);
  return System_String__Concat_62412480(v8, (System_String_o *)StringLiteral_116/*" "*/, v9, 0LL);
}


void __fastcall EventRankingListViewObject__Update(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *manager; // x20
  const MethodInfo *v9; // x4
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v12; // x1
  struct ListViewManager_o *v13; // x8
  __int64 v14; // x11
  struct ListViewManager_o *v15; // x3
  EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4B1A31E & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&EventRankingListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A31E = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) )
    {
      linkItem = this->fields.linkItem;
      if ( linkItem
        && (methodPtr_low = LOBYTE(EventRankingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRankingListViewItem_TypeInfo )
          v12 = this->fields.linkItem;
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      v13 = this->fields.manager;
      if ( v13
        && (v14 = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v13->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v14) )
      {
        if ( (EventRankingListViewManager_c *)v13->klass->_2.typeHierarchy[v14 - 1] == EventRankingListViewManager_TypeInfo )
          v15 = this->fields.manager;
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_1BCAA3C(0LL, v12);
      EventRankingListViewItemDraw__UpdateItem(
        itemDraw,
        (EventRankingListViewItem_o *)v12,
        this->fields.dispMode,
        (EventRankingListViewManager_o *)v15,
        v9);
    }
  }
}


void __fastcall EventRankingListViewObject__add_callbackFunc(
        EventRankingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1A31B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A31B = 1;
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
  EventRankingListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EventRankingListViewObject__remove_callbackFunc(
        EventRankingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1A31C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A31C = 1;
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
  EventRankingListViewObject__Awake(v11, v12);
}