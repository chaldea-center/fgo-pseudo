void CoinRoomCoinIconObject___ctor(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AEEF & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C2AEEF = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CoinRoomCoinIconObject__Awake(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2AEE0 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___);
    byte_4C2AEE0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___);
  this->fields.itemDraw = (struct CoinRoomCoinIconDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
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

  if ( (byte_4C2AEE6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    byte_4C2AEE6 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___)) == 0) )
  {
    sub_1C2D6EC(DragObject, v4);
  }
  v7 = (CoinRoomCoinIconObject_o *)DragObject;
  CoinRoomCoinIconObject__Init_47904476((CoinRoomCoinIconObject_o *)DragObject, 2, 0, 0.0, v6);
  CoinRoomCoinIconObject__SetupDisp(v7, v8);
  return v5;
}


void CoinRoomCoinIconObject__EventExitMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_GameObject_o *v7; // x20
  ListViewObject_c *v8; // x0
  float v9; // s8
  float v10; // s10
  float v11; // s9
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C2AEEB & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6208/*"EventExitMove2"*/);
    byte_4C2AEEB = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v20 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v7 = this->fields.dragObject;
    v8 = ListViewObject_TypeInfo;
    v9 = v20.fields.x + 1000.0;
    v10 = v20.fields.y + 0.0;
    v11 = v20.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v8 = ListViewObject_TypeInfo;
    }
    v21.fields.x = v9;
    v21.fields.y = v10;
    v21.fields.z = v11;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v7, v8->static_fields->BASE_MOVE_TIME, v21, 0);
    if ( !transform )
LABEL_15:
      sub_1C2D6EC(transform, v4);
    v12 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v12[3].monitor = gameObject;
    sub_1C2D434((CGThumbnailListItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15);
    v16 = StringLiteral_6208/*"EventExitMove2"*/;
    v12[3].fields.m_CachedPtr = StringLiteral_6208/*"EventExitMove2"*/;
    sub_1C2D434((CGThumbnailListItem_o *)&v12[3].fields, v16, v17, v18);
  }
}


void CoinRoomCoinIconObject__EventExitMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C2AEEC & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C2AEEC = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v4, v5);
  CoinRoomCoinIconObject__EventMoveEnd(this, v6);
}


void CoinRoomCoinIconObject__EventExitStart(CoinRoomCoinIconObject_o *this, float delay, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v11; // x3

  if ( (byte_4C2AEEA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6207/*"EventExitMove"*/);
    byte_4C2AEEA = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v8);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C2D6EC(dragObject, v8);
  CoinRoomCoinIconObject__Init_47904476((CoinRoomCoinIconObject_o *)Component_object, 2, 0, 0.0, v11);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6207/*"EventExitMove"*/,
    delay,
    0);
}


void CoinRoomCoinIconObject__EventIntoMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C2AEE8 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    sub_1C2D490(&StringLiteral_6219/*"EventIntoMove2"*/);
    byte_4C2AEE8 = 1;
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
  v18 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  x = v18.fields.x;
  y = v18.fields.y;
  z = v18.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v19, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C2D6EC(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = gameObject;
  sub_1C2D434((CGThumbnailListItem_o *)&v10[3].monitor, (int32_t)gameObject, v12, v13);
  v14 = StringLiteral_6219/*"EventIntoMove2"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_6219/*"EventIntoMove2"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v10[3].fields, v14, v15, v16);
}


void CoinRoomCoinIconObject__EventIntoMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4C2AEE9 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C2AEE9 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  CoinRoomCoinIconObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v5, v6);
  CoinRoomCoinIconObject__EventMoveEnd(this, v7);
}


void CoinRoomCoinIconObject__EventIntoStart(CoinRoomCoinIconObject_o *this, float delay, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2AEE7 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    sub_1C2D490(&StringLiteral_6218/*"EventIntoMove"*/);
    byte_4C2AEE7 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___)) == 0
    || (CoinRoomCoinIconObject__Init_47904476((CoinRoomCoinIconObject_o *)dragObject, 2, 0, 0.0, v11),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v13 = UnityEngine_Transform__TransformPoint_71190304((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_1C2D6EC(dragObject, v9);
  }
  UnityEngine_Transform__set_position(transform, v13, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6218/*"EventIntoMove"*/,
    delay,
    0);
}


void CoinRoomCoinIconObject__EventMoveEnd(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
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
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v12; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w9
  int32_t v24; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4C2AEE2 & 1) == 0 )
  {
    sub_1C2D490(&CoinRoomCoinIconItem_TypeInfo);
    byte_4C2AEE2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(CoinRoomCoinIconObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v18, v19);
  v23 = 1;
  v24 = v12;
  switch ( v12 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v24 = v12;
      goto LABEL_14;
    case 3:
      v24 = 2;
LABEL_14:
      v23 = v12;
LABEL_15:
      this->fields.dispMode = v24;
      this->fields.state = v23;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      CoinRoomCoinIconObject__EventIntoStart(this, delay, v20);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      CoinRoomCoinIconObject__EventExitStart(this, delay, v20);
      return;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        CoinRoomCoinIconObject__SetupDisp(this, v20);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C2D434(p_callbackFunc, 0, v21, v22);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinIconObject__Init_47904476(
        CoinRoomCoinIconObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
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
  unsigned __int8 *linkItem; // x8
  __int64 naturalAligment; // x11
  int v5; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  v2 = this;
  if ( (byte_4C2AEED & 1) == 0 )
  {
    sub_1C2D490(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C2D490(&Method_CoinRoomCoinIconObject_OnClickIcon__);
    this = (CoinRoomCoinIconObject_o *)sub_1C2D490(&StringLiteral_9837/*"OnClickIcon"*/);
    byte_4C2AEED = 1;
  }
  linkItem = (unsigned __int8 *)v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) < (unsigned int)naturalAligment
      || *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * naturalAligment - 8) != CoinRoomCoinIconItem_TypeInfo )
    {
      goto LABEL_13;
    }
    v5 = linkItem[164];
    v6 = Method_CoinRoomCoinIconObject_OnClickIcon__;
    if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnClickIcon__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2D4A8(Method_CoinRoomCoinIconObject_OnClickIcon__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
    if ( v5 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      this = (CoinRoomCoinIconObject_o *)v2->fields.manager;
      if ( this )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_9837/*"OnClickIcon"*/,
          (Il2CppObject *)v2,
          0);
        return;
      }
LABEL_13:
      sub_1C2D6EC(this, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
}


void CoinRoomCoinIconObject__OnDestroy(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2AEE1 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AEE1 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C2D434(p_dragObject, 0, v7, v8);
  }
}


void CoinRoomCoinIconObject__OnPressIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C2AEEE & 1) == 0 )
  {
    sub_1C2D490(&Method_CoinRoomCoinIconObject_OnPressIcon__);
    sub_1C2D490(&StringLiteral_9941/*"OnPressIcon"*/);
    byte_4C2AEEE = 1;
  }
  if ( this->fields.linkItem )
  {
    v3 = Method_CoinRoomCoinIconObject_OnPressIcon__;
    if ( (*((_BYTE *)Method_CoinRoomCoinIconObject_OnPressIcon__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CoinRoomCoinIconObject_OnPressIcon__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C2D6EC(0, v5);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9941/*"OnPressIcon"*/, (Il2CppObject *)this, 0);
  }
}


void CoinRoomCoinIconObject__ResetItem(CoinRoomCoinIconObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  CoinRoomCoinIconDraw_o *v6; // x0
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  CoinRoomCoinIconItem_c *v10; // x10
  CoinRoomCoinIconItem_o *v11; // x1

  if ( (byte_4C2AEE4 & 1) == 0 )
  {
    sub_1C2D490(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AEE4 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (CoinRoomCoinIconDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v10 = (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
        v11 = v10 == CoinRoomCoinIconItem_TypeInfo ? (CoinRoomCoinIconItem_o *)this->fields.linkItem : 0LL;
        if ( v10 == CoinRoomCoinIconItem_TypeInfo )
        {
          if ( !v11
            || (v11->fields._selectedNum_k__BackingField = 0,
                v11->fields.selectNum = -1,
                v11->fields._isTouchEnabled_k__BackingField = 1,
                (v6 = this->fields.itemDraw) == 0) )
          {
            sub_1C2D6EC(v6, v11);
          }
          CoinRoomCoinIconDraw__ResetItem(v6, v11, 0, v7);
        }
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
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CoinRoomCoinIconObject__SetupDisp(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  CoinRoomCoinIconDraw_o *v9; // x0

  if ( (byte_4C2AEE3 & 1) == 0 )
  {
    sub_1C2D490(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AEE3 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C2D6EC(0, v7);
    CoinRoomCoinIconDraw__SetItem(v9, (CoinRoomCoinIconItem_o *)linkItem, this->fields.dispMode, 0, v8);
  }
}


void CoinRoomCoinIconObject__UpdateItem(
        CoinRoomCoinIconObject_o *this,
        int32_t num,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x4
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  CoinRoomCoinIconItem_c *v11; // x10
  CoinRoomCoinIconItem_o *v12; // x1
  CoinRoomCoinIconDraw_o *v13; // x0

  if ( (byte_4C2AEE5 & 1) == 0 )
  {
    sub_1C2D490(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AEE5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v11 = (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
        v12 = v11 == CoinRoomCoinIconItem_TypeInfo ? (CoinRoomCoinIconItem_o *)this->fields.linkItem : 0LL;
        if ( v11 == CoinRoomCoinIconItem_TypeInfo )
        {
          v13 = this->fields.itemDraw;
          if ( !v13 )
            sub_1C2D6EC(0, v12);
          CoinRoomCoinIconDraw__UpdateItem(v13, v12, num, 0, v8);
        }
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
  __int64 v9; // x0
  bool v10; // zf
  CoinRoomCoinIconObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C2AEDE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2AEDE = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  CoinRoomCoinIconObject__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  CoinRoomCoinIconObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C2AEDF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2AEDF = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  CoinRoomCoinIconObject__Awake(v11, v12);
}