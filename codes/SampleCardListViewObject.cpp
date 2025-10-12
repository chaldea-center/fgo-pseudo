void SampleCardListViewObject___ctor(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C350EA & 1) == 0 )
  {
    sub_1C32C20(&ListViewObject_TypeInfo);
    byte_4C350EA = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SampleCardListViewObject__Awake(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C350DE & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewItemDraw___);
    byte_4C350DE = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewItemDraw___);
  this->fields.itemDraw = (struct SampleCardListViewItemDraw_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__CardIntoMove(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  float y; // s4
  float z; // s5
  float v7; // s3
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C350E5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4333/*"CardIntoMove2"*/);
    byte_4C350E5 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_9;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !parent
    || (v16 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
        y = v16.fields.y,
        z = v16.fields.z,
        v16.fields.y = v16.fields.x,
        v16.fields.z = y,
        v7 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v16.fields.y,
                                                    0)) == 0) )
  {
LABEL_9:
    sub_1C32E7C(dragObject);
  }
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11);
  v12 = StringLiteral_4333/*"CardIntoMove2"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_4333/*"CardIntoMove2"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[3].fields, v12, v13, v14);
}


void SampleCardListViewObject__CardIntoMove2(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  const MethodInfo *v5; // x1
  int32_t v6; // w8
  UnityEngine_Object_o *dragObject; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  __int64 v11; // x0

  if ( (byte_4C350E6 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&SampleCardListViewItem_TypeInfo);
    byte_4C350E6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewItem_TypeInfo )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
    sub_1C32E7C(v11);
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  if ( BYTE4(linkItem[1].klass) )
    v6 = 1;
  else
    v6 = 2;
  this->fields.dispMode = v6;
  SampleCardListViewObject__SetupDisp(this, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v8, v9);
  SampleCardListViewObject__CardMoveEnd(this, v10);
}


void SampleCardListViewObject__CardIntoStart(SampleCardListViewObject_o *this, float delay, const MethodInfo *method)
{
  SampleCardListViewObject_o *v4; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v7; // x21
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  __int64 v9; // x0
  SampleCardListViewObject_o **p_dragObject; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  int32_t v14; // w1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C350E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_1C32C20(&SampleCardListViewItem_TypeInfo);
    this = (SampleCardListViewObject_o *)sub_1C32C20(&StringLiteral_4332/*"CardIntoMove"*/);
    byte_4C350E4 = 1;
  }
  linkItem = v4->fields.linkItem;
  v4->fields.isBusy = 1;
  if ( linkItem
    && (naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SampleCardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewItem_TypeInfo )
      v7 = linkItem;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  itemDraw = v4->fields.itemDraw;
  if ( !itemDraw )
    goto LABEL_20;
  itemDraw->fields.isFront = 0;
  v4->fields.dispMode = 0;
  SampleCardListViewObject__SetupDisp(v4, method);
  ListViewObject__SetVisible((ListViewObject_o *)v4, 0, 0);
  v9 = ((__int64 (__fastcall *)(SampleCardListViewObject_o *, const MethodInfo *))v4->klass->vtable._8_CreateDragObject.methodPtr)(
         v4,
         v4->klass->vtable._8_CreateDragObject.method);
  v4->fields.dragObject = (struct UnityEngine_GameObject_o *)v9;
  p_dragObject = (SampleCardListViewObject_o **)&v4->fields.dragObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.dragObject, v9, v11, v12);
  this = (SampleCardListViewObject_o *)v4->fields.dragObject;
  if ( !this )
    goto LABEL_20;
  this = (SampleCardListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)this,
                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
  if ( !v7 || !this )
    goto LABEL_20;
  v14 = BYTE4(v7[1].klass) ? 1 : 2;
  SampleCardListViewObject__Init_37470832(this, v14, v13);
  this = *p_dragObject;
  if ( !*p_dragObject
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
        (this = (SampleCardListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0)) == 0)
    || (v16 = UnityEngine_Transform__TransformPoint_71250240((UnityEngine_Transform_o *)this, 5000.0, 0.0, 0.0, 0),
        !transform) )
  {
LABEL_20:
    sub_1C32E7C(this);
  }
  UnityEngine_Transform__set_position(transform, v16, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_4332/*"CardIntoMove"*/, delay, 0);
}


void SampleCardListViewObject__CardMoveEnd(SampleCardListViewObject_o *this, const MethodInfo *method)
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
    sub_1C32BC4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void SampleCardListViewObject__CardTurnMove(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  SampleCardListViewObject_o *v2; // x19
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  SampleCardListViewObject_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v2 = this;
  if ( (byte_4C350E8 & 1) == 0 )
  {
    this = (SampleCardListViewObject_o *)sub_1C32C20(&StringLiteral_4341/*"CardTurnMove2"*/);
    byte_4C350E8 = 1;
  }
  itemDraw = v2->fields.itemDraw;
  if ( !itemDraw
    || (itemDraw->fields.isFront ^= 1u,
        SampleCardListViewObject__SetupDisp(v2, method),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0),
        (this = (SampleCardListViewObject_o *)TweenScale__Begin(gameObject, 0.5, v2->fields.baseScale, 0)) == 0) )
  {
    sub_1C32E7C(this);
  }
  v5 = this;
  LODWORD(this->fields.dispObject) = 3;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  v5->fields.baseParent = (struct UnityEngine_Transform_o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.baseParent, (int32_t)v6, v7, v8);
  v9 = StringLiteral_4341/*"CardTurnMove2"*/;
  *(_QWORD *)&v5->fields.basePosition.fields.x = StringLiteral_4341/*"CardTurnMove2"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.basePosition, v9, v10, v11);
}


void SampleCardListViewObject__CardTurnStart(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TweenScale_o *v4; // x0
  TweenScale_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Vector3_o v12; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C350E7 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4340/*"CardTurnMove"*/);
    byte_4C350E7 = 1;
  }
  this->fields.isBusy = 1;
  SampleCardListViewObject__SetupDisp(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12.fields.y = this->fields.baseScale.fields.y;
  v12.fields.z = this->fields.baseScale.fields.z;
  v12.fields.x = 0.0;
  v4 = TweenScale__Begin(gameObject, 0.5, v12, 0);
  if ( !v4 )
    sub_1C32E7C(0);
  v5 = v4;
  v4->fields.method = 3;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5->fields.eventReceiver = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.eventReceiver, (int32_t)v6, v7, v8);
  v9 = StringLiteral_4340/*"CardTurnMove"*/;
  v5->fields.callWhenFinished = (struct System_String_o *)StringLiteral_4340/*"CardTurnMove"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.callWhenFinished, v9, v10, v11);
}


UnityEngine_GameObject_o *SampleCardListViewObject__CreateDragObject(
        SampleCardListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  Il2CppObject *Component_object; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4C350E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    byte_4C350E1 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v4 = DragObject,
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             DragObject,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___),
        DragObject = (UnityEngine_GameObject_o *)SampleCardListViewObject__get_IsFront(this, v6),
        !Component_object) )
  {
    sub_1C32E7C(DragObject);
  }
  SampleCardListViewObject__set_IsFront(
    (SampleCardListViewObject_o *)Component_object,
    (unsigned __int8)DragObject & 1,
    v7);
  SampleCardListViewObject__Init_37470832((SampleCardListViewObject_o *)Component_object, 2, v8);
  return v4;
}


SampleCardListViewItem_o *SampleCardListViewObject__GetItem(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C350E0 & 1) == 0 )
  {
    sub_1C32C20(&SampleCardListViewItem_TypeInfo);
    byte_4C350E0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (SampleCardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewItem_TypeInfo )
    return (SampleCardListViewItem_o *)this->fields.linkItem;
  return 0;
}


void SampleCardListViewObject__Init(
        SampleCardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  SampleCardListViewObject_o *v9; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  int32_t *p_dispMode; // x23
  int32_t dispMode; // w24
  int32_t state; // w25
  int32_t *p_state; // x26
  struct SampleCardListViewItemDraw_o *v16; // x8
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  CGThumbnailListItem_o *p_callbackFunc; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w8
  CGThumbnailListItem_c *klass; // x19

  v9 = this;
  if ( (byte_4C350E2 & 1) == 0 )
  {
    this = (SampleCardListViewObject_o *)sub_1C32C20(&SampleCardListViewItem_TypeInfo);
    byte_4C350E2 = 1;
  }
  linkItem = v9->fields.linkItem;
  if ( linkItem
    && (naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (SampleCardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewItem_TypeInfo )
  {
    p_dispMode = &v9->fields.dispMode;
    dispMode = v9->fields.dispMode;
    p_state = &v9->fields.state;
    state = v9->fields.state;
    if ( initMode == 6 )
    {
      if ( BYTE4(linkItem[1].klass) )
        initMode = 1;
      else
        initMode = 6;
    }
  }
  else
  {
    p_dispMode = &v9->fields.dispMode;
    dispMode = v9->fields.dispMode;
    p_state = &v9->fields.state;
    state = v9->fields.state;
    if ( initMode == 5 )
    {
      itemDraw = v9->fields.itemDraw;
      if ( !itemDraw )
        goto LABEL_30;
      initMode = 0;
      itemDraw->fields.isFront ^= 1u;
    }
    else if ( initMode == 4 )
    {
      v16 = v9->fields.itemDraw;
      if ( !v16 )
        goto LABEL_30;
      initMode = 0;
      v16->fields.isFront = 0;
    }
    else
    {
      initMode = 0;
    }
  }
  ListViewObject__SetVisible((ListViewObject_o *)v9, initMode != 0, 0);
  ((void (__fastcall *)(SampleCardListViewObject_o *, bool, const MethodInfo *))v9->klass->vtable._9_SetInput.methodPtr)(
    v9,
    initMode == 6,
    v9->klass->vtable._9_SetInput.method);
  this = (SampleCardListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v9, 0);
  if ( !this
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9->fields.basePosition, 0),
        (this = (SampleCardListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v9, 0)) == 0) )
  {
LABEL_30:
    sub_1C32E7C(this);
  }
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v9->fields.baseScale, 0);
  v9->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&v9->fields.callbackFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.callbackFunc, (int32_t)callbackFunc, v19, v20);
  v24 = 1;
  switch ( initMode )
  {
    case 0:
    case 1:
    case 2:
      goto LABEL_19;
    case 4:
      v9->fields.dispMode = 0;
      v9->fields.state = 2;
      SampleCardListViewObject__CardIntoStart(v9, delay, v21);
      return;
    case 5:
      v9->fields.state = 2;
      SampleCardListViewObject__CardTurnStart(v9, v21);
      return;
    case 6:
      v24 = 3;
      initMode = 2;
LABEL_19:
      *p_dispMode = initMode;
      *p_state = v24;
      goto LABEL_20;
    default:
LABEL_20:
      if ( !state || dispMode != *p_dispMode )
        SampleCardListViewObject__SetupDisp(v9, v21);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C32BC4(p_callbackFunc, 0, v22, v23);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__Init_37470832(
        SampleCardListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  SampleCardListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__Init_37471796(
        SampleCardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  SampleCardListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__Init_37473508(
        SampleCardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  SampleCardListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void SampleCardListViewObject__OnDestroy(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C350DF & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C350DF = 1;
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
    sub_1C32BC4(p_dragObject, 0, v7, v8);
  }
}


void SampleCardListViewObject__SetItem(
        SampleCardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_43729388((ListViewObject_o *)this, item, seed, 0);
}


void SampleCardListViewObject__SetupDisp(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  SampleCardListViewItemDraw_o *v8; // x0

  if ( (byte_4C350E3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SampleCardListViewItem_TypeInfo);
    byte_4C350E3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SampleCardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewItem_TypeInfo )
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
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C32E7C(0);
    SampleCardListViewItemDraw__SetItem(v8, (SampleCardListViewItem_o *)linkItem, this->fields.dispMode, v7);
  }
}


void SampleCardListViewObject__Start(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SampleCardListViewObject__Init_37470832(this, 2, v2);
}


System_String_o *SampleCardListViewObject__ToString(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4C350E9 & 1) == 0 )
  {
    sub_1C32C20(&SampleCardListViewItemDraw_DispMode_TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    byte_4C350E9 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)SampleCardListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DF1AD0(&v10, 0, 0, 0);
  return System_String__Concat_63556792(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void SampleCardListViewObject__add_callbackFunc(
        SampleCardListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SampleCardListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C350DA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C350DA = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  SampleCardListViewObject__remove_callbackFunc(v11, v12, v13);
}


bool SampleCardListViewObject__get_IsFront(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  struct SampleCardListViewItemDraw_o *v5; // x8

  if ( (byte_4C350DC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C350DC = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( !v4 )
    return 0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_1C32E7C(v4);
  return v5->fields.isFront;
}


void SampleCardListViewObject__remove_callbackFunc(
        SampleCardListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SampleCardListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C350DB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C350DB = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  SampleCardListViewObject__get_IsFront(v11, v12);
}


void SampleCardListViewObject__set_IsFront(SampleCardListViewObject_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  _BOOL8 v6; // x0
  struct SampleCardListViewItemDraw_o *v7; // x8

  if ( (byte_4C350DD & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C350DD = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1C32E7C(v6);
    v7->fields.isFront = value;
  }
}