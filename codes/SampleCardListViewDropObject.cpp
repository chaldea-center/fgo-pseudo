void SampleCardListViewDropObject___ctor(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0);
}


void SampleCardListViewDropObject__Awake(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C40744 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewItemDraw___);
    byte_4C40744 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C372B4(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewItemDraw___);
  this->fields.itemDraw = (struct SampleCardListViewItemDraw_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


void SampleCardListViewDropObject__CardDragDelete(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C40750 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40750 = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0);
    *p_dragObject = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v7, v8);
  }
  SampleCardListViewDropObject__CardMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewDropObject__CardDragMoveStart(
        SampleCardListViewDropObject_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dragObject; // x21
  void *Component_object; // x0
  const MethodInfo *v9; // x1
  struct UnityEngine_GameObject_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _QWORD *v13; // x21
  UnityEngine_Object_o *v14; // x22
  const MethodInfo *v15; // x2
  UnityEngine_GameObject_o *v16; // x20
  float v17; // s4
  float v18; // s5
  float v19; // s3
  char *v20; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4C4074F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewDropObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_4335/*"CardMoveEnd"*/);
    byte_4C4074F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(dragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    this->fields.dispMode = 0;
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
    SampleCardListViewDropObject__SetupDisp(this, v9);
    v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(SampleCardListViewDropObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                               this,
                                               this->klass->vtable._8_CreateDragObject.method);
    this->fields.dragObject = v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v10, v11, v12);
    Component_object = this->fields.dragObject;
    if ( !Component_object
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Component_object,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewDropObject___)) == 0 )
    {
LABEL_18:
      sub_1C372B4(Component_object);
    }
    v13 = Component_object;
    v14 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 16);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (void *)UnityEngine_Object__op_Inequality(v14, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      Component_object = (void *)v13[16];
      if ( !Component_object )
        goto LABEL_18;
      SampleCardListViewItemDraw__AddDepth((SampleCardListViewItemDraw_o *)Component_object, -1, v15);
    }
  }
  v16 = this->fields.dragObject;
  if ( !v16 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__get_transform(v16, 0);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_18;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v28 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v27, 0);
  v17 = v28.fields.y;
  v18 = v28.fields.z;
  v28.fields.y = v28.fields.x;
  v28.fields.z = v17;
  v19 = v18;
  Component_object = TweenPosition__Begin(v16, 0.2, *(UnityEngine_Vector3_o *)&v28.fields.y, 0);
  if ( !Component_object )
    goto LABEL_18;
  v20 = (char *)Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v20 + 10) = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 80), (int32_t)gameObject, v22, v23);
  v24 = StringLiteral_4335/*"CardMoveEnd"*/;
  *((_QWORD *)v20 + 11) = StringLiteral_4335/*"CardMoveEnd"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 88), v24, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewDropObject__CardIntoMove(SampleCardListViewDropObject_o *this, const MethodInfo *method)
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

  if ( (byte_4C4074B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4333/*"CardIntoMove2"*/);
    byte_4C4074B = 1;
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
    sub_1C372B4(dragObject);
  }
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11);
  v12 = StringLiteral_4333/*"CardIntoMove2"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_4333/*"CardIntoMove2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8[3].fields, v12, v13, v14);
}


void SampleCardListViewDropObject__CardIntoMove2(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4C4074C & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C4074C = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  SampleCardListViewDropObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v5, v6);
  SampleCardListViewDropObject__CardMoveEnd(this, v7);
}


void SampleCardListViewDropObject__CardIntoStart(
        SampleCardListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  SampleCardListViewDropObject_o *v4; // x19
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C4074A & 1) == 0 )
  {
    this = (SampleCardListViewDropObject_o *)sub_1C37058(&StringLiteral_4332/*"CardIntoMove"*/);
    byte_4C4074A = 1;
  }
  itemDraw = v4->fields.itemDraw;
  v4->fields.isBusy = 1;
  if ( !itemDraw )
    goto LABEL_8;
  itemDraw->fields.isFront = 0;
  v4->fields.dispMode = 0;
  ListViewObject__SetVisible((ListViewObject_o *)v4, 0, 0);
  SampleCardListViewDropObject__SetupDisp(v4, v6);
  v7 = ((__int64 (__fastcall *)(SampleCardListViewDropObject_o *, const MethodInfo *))v4->klass->vtable._8_CreateDragObject.methodPtr)(
         v4,
         v4->klass->vtable._8_CreateDragObject.method);
  v4->fields.dragObject = (struct UnityEngine_GameObject_o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.dragObject, v7, v8, v9);
  this = (SampleCardListViewDropObject_o *)v4->fields.dragObject;
  if ( !this
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
        (this = (SampleCardListViewDropObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0)) == 0)
    || (v11 = UnityEngine_Transform__TransformPoint_71293352((UnityEngine_Transform_o *)this, -3000.0, 0.0, 0.0, 0),
        !transform) )
  {
LABEL_8:
    sub_1C372B4(this);
  }
  UnityEngine_Transform__set_position(transform, v11, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_4332/*"CardIntoMove"*/, delay, 0);
}


void SampleCardListViewDropObject__CardMoveEnd(SampleCardListViewDropObject_o *this, const MethodInfo *method)
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
    sub_1C36FFC(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void SampleCardListViewDropObject__CardTurnMove(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  SampleCardListViewDropObject_o *v2; // x19
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  SampleCardListViewDropObject_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v2 = this;
  if ( (byte_4C4074E & 1) == 0 )
  {
    this = (SampleCardListViewDropObject_o *)sub_1C37058(&StringLiteral_4341/*"CardTurnMove2"*/);
    byte_4C4074E = 1;
  }
  itemDraw = v2->fields.itemDraw;
  if ( !itemDraw
    || (itemDraw->fields.isFront ^= 1u,
        SampleCardListViewDropObject__SetupDisp(v2, method),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0),
        (this = (SampleCardListViewDropObject_o *)TweenScale__Begin(gameObject, 0.5, v2->fields.baseScale, 0)) == 0) )
  {
    sub_1C372B4(this);
  }
  v5 = this;
  LODWORD(this->fields.dispObject) = 3;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  v5->fields.baseParent = (struct UnityEngine_Transform_o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.baseParent, (int32_t)v6, v7, v8);
  v9 = StringLiteral_4341/*"CardTurnMove2"*/;
  *(_QWORD *)&v5->fields.basePosition.fields.x = StringLiteral_4341/*"CardTurnMove2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.basePosition, v9, v10, v11);
}


void SampleCardListViewDropObject__CardTurnStart(SampleCardListViewDropObject_o *this, const MethodInfo *method)
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

  if ( (byte_4C4074D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4340/*"CardTurnMove"*/);
    byte_4C4074D = 1;
  }
  this->fields.isBusy = 1;
  SampleCardListViewDropObject__SetupDisp(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12.fields.y = this->fields.baseScale.fields.y;
  v12.fields.z = this->fields.baseScale.fields.z;
  v12.fields.x = 0.0;
  v4 = TweenScale__Begin(gameObject, 0.5, v12, 0);
  if ( !v4 )
    sub_1C372B4(0);
  v5 = v4;
  v4->fields.method = 3;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5->fields.eventReceiver = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.eventReceiver, (int32_t)v6, v7, v8);
  v9 = StringLiteral_4340/*"CardTurnMove"*/;
  v5->fields.callWhenFinished = (struct System_String_o *)StringLiteral_4340/*"CardTurnMove"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.callWhenFinished, v9, v10, v11);
}


UnityEngine_GameObject_o *SampleCardListViewDropObject__CreateDragObject(
        SampleCardListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  Il2CppObject *Component_object; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4C40747 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewDropObject___);
    byte_4C40747 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject
    || (v4 = DragObject,
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             DragObject,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewDropObject___),
        DragObject = (UnityEngine_GameObject_o *)SampleCardListViewDropObject__get_IsFront(this, v6),
        !Component_object) )
  {
    sub_1C372B4(DragObject);
  }
  SampleCardListViewDropObject__set_IsFront(
    (SampleCardListViewDropObject_o *)Component_object,
    (unsigned __int8)DragObject & 1,
    v7);
  SampleCardListViewDropObject__Init_37635012((SampleCardListViewDropObject_o *)Component_object, 2, v8);
  return v4;
}


SampleCardListViewItem_o *SampleCardListViewDropObject__GetItem(
        SampleCardListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C40746 & 1) == 0 )
  {
    sub_1C37058(&SampleCardListViewItem_TypeInfo);
    byte_4C40746 = 1;
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


void SampleCardListViewDropObject__Init(
        SampleCardListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  SampleCardListViewDropObject_o *v12; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  int32_t *p_dispMode; // x23
  int32_t dispMode; // w24
  int32_t state; // w25
  int32_t *p_state; // x26
  struct SampleCardListViewItemDraw_o *v19; // x8
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  CGThumbnailListItem_o *p_callbackFunc; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int v27; // w8
  CGThumbnailListItem_c *klass; // x19
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  v12 = this;
  if ( (byte_4C40748 & 1) == 0 )
  {
    this = (SampleCardListViewDropObject_o *)sub_1C37058(&SampleCardListViewItem_TypeInfo);
    byte_4C40748 = 1;
  }
  linkItem = v12->fields.linkItem;
  if ( linkItem
    && (naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (SampleCardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewItem_TypeInfo )
  {
    p_dispMode = &v12->fields.dispMode;
    dispMode = v12->fields.dispMode;
    p_state = &v12->fields.state;
    state = v12->fields.state;
    if ( initMode == 6 )
    {
      if ( BYTE4(linkItem[1].klass) )
        initMode = 6;
      else
        initMode = 1;
    }
  }
  else
  {
    p_dispMode = &v12->fields.dispMode;
    dispMode = v12->fields.dispMode;
    p_state = &v12->fields.state;
    state = v12->fields.state;
    if ( initMode == 5 )
    {
      itemDraw = v12->fields.itemDraw;
      if ( !itemDraw )
        goto LABEL_32;
      initMode = 0;
      itemDraw->fields.isFront ^= 1u;
    }
    else if ( initMode == 4 )
    {
      v19 = v12->fields.itemDraw;
      if ( !v19 )
        goto LABEL_32;
      initMode = 0;
      v19->fields.isFront = 0;
    }
    else
    {
      initMode = 0;
    }
  }
  ListViewObject__SetVisible((ListViewObject_o *)v12, initMode != 0, 0);
  ((void (__fastcall *)(SampleCardListViewDropObject_o *, bool, const MethodInfo *))v12->klass->vtable._9_SetInput.methodPtr)(
    v12,
    initMode == 6,
    v12->klass->vtable._9_SetInput.method);
  this = (SampleCardListViewDropObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
  if ( !this
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v12->fields.basePosition, 0),
        (this = (SampleCardListViewDropObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)v12,
                                                    0)) == 0) )
  {
LABEL_32:
    sub_1C372B4(this);
  }
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v12->fields.baseScale, 0);
  v12->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&v12->fields.callbackFunc;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.callbackFunc, (int32_t)callbackFunc, v22, v23);
  v27 = 1;
  switch ( initMode )
  {
    case 0:
    case 1:
    case 2:
      goto LABEL_23;
    case 4:
      v12->fields.dispMode = 2;
      v12->fields.state = 2;
      SampleCardListViewDropObject__CardIntoStart(v12, delay, v24);
      return;
    case 5:
      v12->fields.state = 2;
      SampleCardListViewDropObject__CardTurnStart(v12, v24);
      return;
    case 6:
      v27 = 3;
      initMode = 2;
LABEL_23:
      *p_dispMode = initMode;
      *p_state = v27;
      goto LABEL_24;
    case 7:
      v12->fields.state = 2;
      v29.fields.y = y;
      v29.fields.z = z;
      v29.fields.x = x;
      SampleCardListViewDropObject__CardDragMoveStart(v12, v29, v24);
      return;
    case 8:
      SampleCardListViewDropObject__CardDragDelete(v12, v24);
      return;
    default:
LABEL_24:
      if ( !state || dispMode != *p_dispMode )
        SampleCardListViewDropObject__SetupDisp(v12, v24);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C36FFC(p_callbackFunc, 0, v25, v26);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void SampleCardListViewDropObject__Init_37635012(
        SampleCardListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  SampleCardListViewDropObject__Init(
    this,
    initMode,
    0,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    v3);
}


void SampleCardListViewDropObject__Init_37637696(
        SampleCardListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  SampleCardListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    method);
}


void SampleCardListViewDropObject__Init_37637820(
        SampleCardListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  SampleCardListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    method);
}


void SampleCardListViewDropObject__OnDestroy(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C40745 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40745 = 1;
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
    sub_1C36FFC(p_dragObject, 0, v7, v8);
  }
}


void SampleCardListViewDropObject__SetItem(
        SampleCardListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewDropObject__SetItem_43803460((ListViewDropObject_o *)this, item, seed, 0);
}


void SampleCardListViewDropObject__SetupDisp(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  SampleCardListViewItemDraw_o *v8; // x0

  if ( (byte_4C40749 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SampleCardListViewItem_TypeInfo);
    byte_4C40749 = 1;
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
      sub_1C372B4(0);
    SampleCardListViewItemDraw__SetItem(v8, (SampleCardListViewItem_o *)linkItem, this->fields.dispMode, v7);
  }
}


void SampleCardListViewDropObject__Start(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SampleCardListViewDropObject__Init_37635012(this, 2, v2);
}


System_String_o *SampleCardListViewDropObject__ToString(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4C40751 & 1) == 0 )
  {
    sub_1C37058(&SampleCardListViewItemDraw_DispMode_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    byte_4C40751 = 1;
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
  v6 = (System_String_o *)sub_1DF5F08(&v10, 0, 0, 0);
  return System_String__Concat_63599904(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


bool SampleCardListViewDropObject__get_IsFront(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  struct SampleCardListViewItemDraw_o *v5; // x8

  if ( (byte_4C40742 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40742 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( !v4 )
    return 0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_1C372B4(v4);
  return v5->fields.isFront;
}


void SampleCardListViewDropObject__set_IsFront(
        SampleCardListViewDropObject_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  _BOOL8 v6; // x0
  struct SampleCardListViewItemDraw_o *v7; // x8

  if ( (byte_4C40743 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40743 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1C372B4(v6);
    v7->fields.isFront = value;
  }
}