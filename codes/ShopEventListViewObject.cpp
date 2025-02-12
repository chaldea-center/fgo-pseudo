void __fastcall ShopEventListViewObject___ctor(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BB0BA8 & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    byte_4BB0BA8 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ShopEventListViewObject__Awake(ShopEventListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4BB0B9E & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewItemDraw___, method);
    byte_4BB0B9E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C13F80(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewItemDraw___);
  this->fields.itemDraw = (struct ShopEventListViewItemDraw_o *)Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


void __fastcall ShopEventListViewObject__CallOnMoveEnd(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (PartyOrganizationUtility_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_1C13CC8(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


UnityEngine_GameObject_o *__fastcall ShopEventListViewObject__CreateDragObject(
        ShopEventListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4BB0BA1 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, method);
    byte_4BB0BA1 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___)) == 0LL) )
  {
    sub_1C13F80(DragObject, v4);
  }
  ShopEventListViewObject__Init((ShopEventListViewObject_o *)DragObject, 2, 0LL, 0.0, v6);
  return v5;
}


void __fastcall ShopEventListViewObject__EventMove(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  TweenPosition_o *v10; // x0
  __int64 v11; // x1
  TweenPosition_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BB0BA5 & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    sub_1C13D24(&StringLiteral_6349/*"EventMaximMove2"*/, v4);
    byte_4BB0BA5 = 1;
  }
  TargetPosition = ShopEventListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  v5 = ListViewObject_TypeInfo;
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  z = TargetPosition.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v10 = TweenPosition__Begin(dragObject, v5->static_fields->BASE_MOVE_TIME, v28, 0LL);
  if ( !v10 )
    sub_1C13F80(0LL, v11);
  v12 = v10;
  v10->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12->fields.eventReceiver = gameObject;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v12->fields.eventReceiver,
    (int64_t)gameObject,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = StringLiteral_6349/*"EventMaximMove2"*/;
  v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6349/*"EventMaximMove2"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v12->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
}


void __fastcall ShopEventListViewObject__EventMoveFinish(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  int32_t initMode; // w8
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4BB0BA6 & 1) == 0 )
  {
    sub_1C13D24(&NGUITools_TypeInfo, method);
    byte_4BB0BA6 = 1;
  }
  initMode = this->fields.initMode;
  if ( initMode == 7 || initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
    this->fields.dispMode = 2;
    ShopEventListViewObject__SetupDisp(this, v4);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopEventListViewObject__CallOnMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewObject__EventStart(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *v8; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v20; // x2
  int v21; // s0

  if ( (byte_4BB0BA4 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, *(_QWORD *)&initMode);
    sub_1C13D24(&StringLiteral_6347/*"EventLog"*/, v7);
    byte_4BB0BA4 = 1;
  }
  this->fields.isBusy = 1;
  ShopEventListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  if ( initMode != 8 )
  {
    v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopEventListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                              this,
                                              this->klass->vtable._9_SetInput.methodPtr);
    this->fields.dragObject = v8;
    p_dragObject = &this->fields.dragObject;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v8, v10, v11, v12, v13, v14, v15);
    dragObject = this->fields.dragObject;
    if ( !dragObject
      || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     dragObject,
                                                     (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___)) == 0LL
      || (ShopEventListViewObject__Init((ShopEventListViewObject_o *)dragObject, 2, 0LL, 0.0, v18),
          (dragObject = *p_dragObject) == 0LL)
      || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
          *(UnityEngine_Vector3_o *)&v21 = ShopEventListViewObject__GetStartPosition(this, initMode, v20),
          !transform) )
    {
      sub_1C13F80(dragObject, v16);
    }
    UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6347/*"EventLog"*/,
      delay,
      0LL);
  }
}


int32_t __fastcall ShopEventListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 5 )
    return 0;
  else
    return dword_C305B0[initMode - 1];
}


ShopEventListViewItem_o *__fastcall ShopEventListViewObject__GetItem(
        ShopEventListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BB0BA0 & 1) == 0 )
  {
    sub_1C13D24(&ShopEventListViewItem_TypeInfo, method);
    byte_4BB0BA0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ShopEventListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopEventListViewItem_TypeInfo )
    return (ShopEventListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopEventListViewObject__GetStartPosition(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int v5; // s1
  int v6; // s0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( initMode == 7 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      v6 = 0;
      v5 = 1148846080;
      goto LABEL_7;
    }
LABEL_10:
    sub_1C13F80(transform, v4);
  }
  if ( initMode != 4 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(transform, 0LL);
      goto ShopEventListViewObject$$GetStartPosition;
    }
    goto LABEL_10;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  v5 = 0;
  v6 = 1148846080;
LABEL_7:
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__TransformPoint_70746736(
                                    transform,
                                    *(float *)&v6,
                                    *(float *)&v5,
                                    0.0,
                                    0LL);
ShopEventListViewObject$$GetStartPosition:
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


int32_t __fastcall ShopEventListViewObject__GetState(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 8 )
    return 0;
  else
    return dword_C305C8[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopEventListViewObject__GetTargetPosition(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  float v9; // s2
  float v10; // s0
  float v11; // s0
  float v12; // s1
  float v13; // s1
  UnityEngine_Transform_o *parent; // x20
  int v15; // s0
  float v18; // s0
  float v19; // s1
  float v20; // s2
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( initMode == 6 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( dragObject )
      {
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( dragObject )
        {
          *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL);
          if ( parent )
          {
            *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__InverseTransformPoint(
                                                    parent,
                                                    *(UnityEngine_Vector3_o *)&v15,
                                                    0LL);
            v11 = v18 + 1000.0;
            v13 = v19 + 0.0;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_19:
    sub_1C13F80(dragObject, *(_QWORD *)&initMode);
  }
  if ( initMode != 5 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( dragObject )
      {
        v21 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( dragObject )
        {
          *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL);
          if ( v21 )
          {
            *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                               v21,
                                               *(UnityEngine_Vector3_o *)&v22,
                                               0LL);
            goto LABEL_20;
          }
        }
      }
    }
    goto LABEL_19;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  v5 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__InverseTransformPoint(
                                          v5,
                                          *(UnityEngine_Vector3_o *)&v6,
                                          0LL);
  v11 = v10 + 0.0;
  v13 = v12 + 1000.0;
LABEL_13:
  v20 = v9 + 0.0;
LABEL_20:
  result.fields.z = v20;
  result.fields.y = v13;
  result.fields.x = v11;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewObject__Init(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  int32_t v7; // w21
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int32_t v23; // w8
  int32_t v24; // w9

  v7 = initMode;
  if ( (byte_4BB0BA2 & 1) == 0 )
  {
    sub_1C13D24(&ShopEventListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4BB0BA2 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = v7;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(ShopEventListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEventListViewItem_TypeInfo )
  {
    v7 = 0;
    this->fields.initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(ShopEventListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onMoveEnd, (int64_t)onMoveEnd, v15, v16, v17, v18, v19, v20);
  v22 = (const MethodInfo *)(unsigned int)this->fields.initMode;
  if ( (_DWORD)v22 == 3 )
  {
    v23 = 3;
LABEL_14:
    this->fields.dispMode = (int)v22;
    this->fields.state = v23;
    if ( !state )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (_DWORD)v22 == 2 || (_DWORD)v22 == 1 )
  {
    v23 = 1;
    goto LABEL_14;
  }
  this->fields.dispMode = 0;
  if ( (unsigned int)((_DWORD)v22 - 4) >= 4 )
  {
    v24 = 1;
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 != 8 )
        v24 = 0;
    }
    this->fields.state = v24;
    if ( (unsigned int)((_DWORD)v22 - 4) > 4 )
    {
      v22 = 0LL;
      if ( !state )
        goto LABEL_16;
LABEL_15:
      if ( dispMode == (_DWORD)v22 )
      {
LABEL_17:
        ShopEventListViewObject__CallOnMoveEnd(this, v22);
        return;
      }
LABEL_16:
      ShopEventListViewObject__SetupDisp(this, v22);
      goto LABEL_17;
    }
  }
  else
  {
    this->fields.state = 2;
  }
  ShopEventListViewObject__EventStart(this, (int32_t)v22, delay, v21);
}


void __fastcall ShopEventListViewObject__OnClickEvent(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4BB0BA7 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_10035/*"OnClickListViewAccept"*/, method);
    byte_4BB0BA7 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C13F80(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10035/*"OnClickListViewAccept"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall ShopEventListViewObject__OnDestroy(ShopEventListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4BB0B9F & 1) == 0 )
  {
    sub_1C13D24(&NGUITools_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB0B9F = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1C13CC8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ShopEventListViewObject__OnMoveEnd(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopEventListViewObject__CallOnMoveEnd(this, method);
}


void __fastcall ShopEventListViewObject__SetItem(
        ShopEventListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41915964((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopEventListViewObject__SetupDisp(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ShopEventListViewItemDraw_o *v10; // x0

  if ( (byte_4BB0BA3 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&ShopEventListViewItem_TypeInfo, v3);
    byte_4BB0BA3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ShopEventListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEventListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C13F80(0LL, v8);
    ShopEventListViewItemDraw__SetItem(v10, (ShopEventListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall ShopEventListViewObject__add_onMoveEnd(
        ShopEventListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ShopEventListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BB0B9C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, value);
    byte_4BB0B9C = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  ShopEventListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void __fastcall ShopEventListViewObject__remove_onMoveEnd(
        ShopEventListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ShopEventListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BB0B9D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, value);
    byte_4BB0B9D = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  ShopEventListViewObject__Awake(v11, v12);
}