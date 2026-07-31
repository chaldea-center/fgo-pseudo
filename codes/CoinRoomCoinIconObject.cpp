void CoinRoomCoinIconObject___ctor(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  if ( (byte_593C5C8 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_593C5C8 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CoinRoomCoinIconObject__Awake(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593C5B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___);
    byte_593C5B9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___);
  this->fields.itemDraw = (struct CoinRoomCoinIconDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *CoinRoomCoinIconObject__CreateDragObject(
        CoinRoomCoinIconObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3
  CoinRoomCoinIconObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_593C5BF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    byte_593C5BF = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___)) == 0) )
  {
    sub_21FFECC(DragObject, v4);
  }
  v7 = (CoinRoomCoinIconObject_o *)DragObject;
  CoinRoomCoinIconObject__Init_55368400((CoinRoomCoinIconObject_o *)DragObject, 2, 0, 0.0, v6);
  CoinRoomCoinIconObject__SetupDisp(v7, v8);
  return v5;
}


void CoinRoomCoinIconObject__EventExitMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  ListViewObject_c *v9; // x0
  float v10; // s8
  float v11; // s9
  float v12; // s10
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_593C5C4 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6465/*"EventExitMove2"*/);
    byte_593C5C4 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v4);
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
    v29 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v8 = this->fields.dragObject;
    v9 = ListViewObject_TypeInfo;
    v10 = v29.fields.x + 1000.0;
    v11 = v29.fields.y + 0.0;
    v12 = v29.fields.z + 0.0;
    if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v7);
      v9 = ListViewObject_TypeInfo;
    }
    v30.fields.x = v10;
    v30.fields.y = v11;
    v30.fields.z = v12;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v9->static_fields->BASE_MOVE_TIME, v30, 0);
    if ( !transform )
LABEL_15:
      sub_21FFECC(transform, v4);
    v13 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v13[3].monitor = gameObject;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[3].monitor, (int32_t)gameObject, v15, v16, v17, v18, v19, v20);
    v21 = StringLiteral_6465/*"EventExitMove2"*/;
    v13[3].fields.m_CachedPtr = StringLiteral_6465/*"EventExitMove2"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[3].fields, v21, v22, v23, v24, v25, v26, v27);
  }
}


void CoinRoomCoinIconObject__EventExitMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  if ( (byte_593C5C5 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593C5C5 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v4, v5, v6, v7, v8, v9);
  CoinRoomCoinIconObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinIconObject__EventExitStart(CoinRoomCoinIconObject_o *this, float delay, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v16; // x3
  int v17; // s1 OVERLAPPED

  if ( (byte_593C5C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6464/*"EventExitMove"*/);
    byte_593C5C3 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_object )
LABEL_12:
    sub_21FFECC(dragObject, v12);
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  CoinRoomCoinIconObject__Init(
    (CoinRoomCoinIconObject_o *)Component_object,
    2,
    0,
    0.0,
    *(UnityEngine_Vector3_o *)&v17,
    v16);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6464/*"EventExitMove"*/,
    delay,
    0);
}


void CoinRoomCoinIconObject__EventIntoMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v5; // x1
  float x; // s8
  float y; // s9
  ListViewObject_c *v8; // x0
  float z; // s10
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_593C5C1 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    sub_21FFC50(&StringLiteral_6480/*"EventIntoMove2"*/);
    byte_593C5C1 = 1;
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
  v27 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  x = v27.fields.x;
  y = v27.fields.y;
  v8 = ListViewObject_TypeInfo;
  z = v27.fields.z;
  v10 = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v5);
    v8 = ListViewObject_TypeInfo;
  }
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v8->static_fields->BASE_MOVE_TIME, v28, 0);
  if ( !dragObject )
LABEL_11:
    sub_21FFECC(dragObject, method);
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[3].monitor = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11[3].monitor, (int32_t)gameObject, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_6480/*"EventIntoMove2"*/;
  v11[3].fields.m_CachedPtr = StringLiteral_6480/*"EventIntoMove2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11[3].fields, v19, v20, v21, v22, v23, v24, v25);
}


void CoinRoomCoinIconObject__EventIntoMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  if ( (byte_593C5C2 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593C5C2 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  CoinRoomCoinIconObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v6, v7, v8, v9, v10, v11);
  CoinRoomCoinIconObject__EventMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinIconObject__EventIntoStart(CoinRoomCoinIconObject_o *this, float delay, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v15; // x3
  int v16; // s1 OVERLAPPED
  CoinRoomCoinIconObject_o *v19; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C5C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    sub_21FFC50(&StringLiteral_6479/*"EventIntoMove"*/);
    byte_593C5C0 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             dragObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
  if ( !dragObject )
    goto LABEL_11;
  v19 = (CoinRoomCoinIconObject_o *)dragObject;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  CoinRoomCoinIconObject__Init(v19, 2, 0, 0.0, *(UnityEngine_Vector3_o *)&v16, v15);
  dragObject = *p_dragObject;
  if ( !*p_dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v21 = UnityEngine_Transform__TransformPoint_83283144((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
LABEL_11:
    sub_21FFECC(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, v21, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6479/*"EventIntoMove"*/,
    delay,
    0);
}


void CoinRoomCoinIconObject__EventMoveEnd(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._BoardType_k__BackingField) = 0;
  *(&p_callbackFunc[-1].fields._BoardType_k__BackingField + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void CoinRoomCoinIconObject__Init(
        CoinRoomCoinIconObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int32_t v13; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w8
  int32_t v33; // w9
  MissionNaviTransitionBoardItem_c *v34; // x19

  if ( (byte_593C5BB & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomCoinIconItem_TypeInfo);
    byte_593C5BB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CoinRoomCoinIconItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
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
  ((void (__fastcall *)(CoinRoomCoinIconObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( v13 <= 2 )
  {
    v32 = 1;
    if ( !v13 )
    {
      v33 = 0;
LABEL_27:
      this->fields.dispMode = v33;
      this->fields.state = v32;
      goto LABEL_28;
    }
    if ( v13 != 1 )
    {
      v33 = v13;
      if ( v13 != 2 )
        goto LABEL_28;
      goto LABEL_27;
    }
    v33 = 1;
LABEL_26:
    v32 = v13;
    goto LABEL_27;
  }
  if ( v13 > 4 )
  {
    if ( v13 == 5 )
    {
      this->fields.dispMode = 0;
      this->fields.state = 2;
      CoinRoomCoinIconObject__EventIntoStart(this, delay, v25);
      return;
    }
    if ( v13 == 7 )
    {
      this->fields.dispMode = 2;
      this->fields.state = 2;
      CoinRoomCoinIconObject__EventExitStart(this, delay, v25);
      return;
    }
LABEL_28:
    if ( state && dispMode == this->fields.dispMode )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( v13 == 3 )
  {
    v33 = 2;
    goto LABEL_26;
  }
  this->fields.dispMode = 2;
  this->fields.state = 1;
LABEL_30:
  CoinRoomCoinIconObject__SetupDisp(this, v25);
LABEL_31:
  v34 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v26, v27, v28, v29, v30, v31);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v34->_1.namespaze)(
      v34->_1.element_class,
      *(_QWORD *)&v34->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinIconObject__Init_55368400(
        CoinRoomCoinIconObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  CoinRoomCoinIconObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


bool CoinRoomCoinIconObject__IsCanDrag(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  return 0;
}


void CoinRoomCoinIconObject__OnClickIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  CoinRoomCoinIconObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  v2 = this;
  if ( (byte_593C5C6 & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomCoinIconItem_TypeInfo);
    sub_21FFC50(&Method_CoinRoomCoinIconObject_OnClickIcon__);
    this = (CoinRoomCoinIconObject_o *)sub_21FFC50(&StringLiteral_10229/*"OnClickIcon"*/);
    byte_593C5C6 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconItem_TypeInfo )
    {
      goto LABEL_15;
    }
    v5 = Method_CoinRoomCoinIconObject_OnClickIcon__;
    if ( BYTE4(linkItem[1].fields.sortValue0) )
    {
      if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnClickIcon__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_CoinRoomCoinIconObject_OnClickIcon__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      this = (CoinRoomCoinIconObject_o *)v2->fields.manager;
      if ( this )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10229/*"OnClickIcon"*/,
          (Il2CppObject *)v2,
          0);
        return;
      }
LABEL_15:
      sub_21FFECC(this, method);
    }
    if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnClickIcon__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_CoinRoomCoinIconObject_OnClickIcon__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
}


void CoinRoomCoinIconObject__OnDestroy(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593C5BA & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C5BA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v8, v9, v10, v11, v12, v13);
  }
}


void CoinRoomCoinIconObject__OnPressIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_593C5C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_CoinRoomCoinIconObject_OnPressIcon__);
    sub_21FFC50(&StringLiteral_10337/*"OnPressIcon"*/);
    byte_593C5C7 = 1;
  }
  if ( this->fields.linkItem )
  {
    v3 = Method_CoinRoomCoinIconObject_OnPressIcon__;
    if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnPressIcon__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CoinRoomCoinIconObject_OnPressIcon__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_21FFECC(0, v5);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10337/*"OnPressIcon"*/, (Il2CppObject *)this, 0);
  }
}


void CoinRoomCoinIconObject__ResetItem(CoinRoomCoinIconObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v7; // x3
  CoinRoomCoinIconItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  CoinRoomCoinIconDraw_o *v10; // x0

  if ( (byte_593C5BD & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomCoinIconItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C5BD = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = (CoinRoomCoinIconItem_o *)this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v10 = this->fields.itemDraw;
        linkItem->fields._selectedNum_k__BackingField = 0;
        linkItem->fields.selectNum = -1;
        linkItem->fields._isTouchEnabled_k__BackingField = 1;
        if ( !v10 )
          sub_21FFECC(0, linkItem);
        CoinRoomCoinIconDraw__ResetItem(v10, linkItem, 0, v7);
      }
    }
  }
}


void CoinRoomCoinIconObject__SetItem(
        CoinRoomCoinIconObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CoinRoomCoinIconObject__SetupDisp(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  CoinRoomCoinIconDraw_o *v10; // x0

  if ( (byte_593C5BC & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomCoinIconItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C5BC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_21FFECC(0, v8);
    CoinRoomCoinIconDraw__SetItem(v10, (CoinRoomCoinIconItem_o *)linkItem, this->fields.dispMode, 0, v9);
  }
}


void CoinRoomCoinIconObject__UpdateItem(
        CoinRoomCoinIconObject_o *this,
        int32_t num,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v9; // x4
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  CoinRoomCoinIconDraw_o *v12; // x0

  if ( (byte_593C5BE & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomCoinIconItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C5BE = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v12 = this->fields.itemDraw;
        if ( !v12 )
          sub_21FFECC(0, linkItem);
        CoinRoomCoinIconDraw__UpdateItem(v12, (CoinRoomCoinIconItem_o *)linkItem, num, 0, v9);
      }
    }
  }
}


void CoinRoomCoinIconObject__add_callbackFunc(
        CoinRoomCoinIconObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  CoinRoomCoinIconObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_593C5B7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593C5B7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9);
  CoinRoomCoinIconObject__remove_callbackFunc(v12, v13, v14);
}


void CoinRoomCoinIconObject__remove_callbackFunc(
        CoinRoomCoinIconObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  CoinRoomCoinIconObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593C5B8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593C5B8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9);
  CoinRoomCoinIconObject__Awake(v12, v13);
}