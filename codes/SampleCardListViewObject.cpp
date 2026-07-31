void SampleCardListViewObject___ctor(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5935D8B & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5935D8B = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SampleCardListViewObject__Awake(SampleCardListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_5935D7F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewItemDraw___);
    byte_5935D7F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewItemDraw___);
  this->fields.itemDraw = (struct SampleCardListViewItemDraw_o *)Component_object;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_5935D86 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4494/*"CardIntoMove2"*/);
    byte_5935D86 = 1;
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
    || (v24 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
        y = v24.fields.y,
        z = v24.fields.z,
        v24.fields.y = v24.fields.x,
        v24.fields.z = y,
        v7 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v24.fields.y,
                                                    0)) == 0) )
  {
LABEL_9:
    sub_21FFECC(dragObject, method);
  }
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_4494/*"CardIntoMove2"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_4494/*"CardIntoMove2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8[3].fields, v16, v17, v18, v19, v20, v21, v22);
}


void SampleCardListViewObject__CardIntoMove2(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  const MethodInfo *v5; // x1
  int32_t v6; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_5935D87 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&SampleCardListViewItem_TypeInfo);
    byte_5935D87 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewItem_TypeInfo )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
    sub_21FFECC(v17, v18);
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  if ( BYTE4(linkItem[1].klass) )
    v6 = 1;
  else
    v6 = 2;
  this->fields.dispMode = v6;
  SampleCardListViewObject__SetupDisp(this, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v10, v11, v12, v13, v14, v15);
  SampleCardListViewObject__CardMoveEnd(this, v16);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  int32_t v18; // w1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_5935D85 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_21FFC50(&SampleCardListViewItem_TypeInfo);
    this = (SampleCardListViewObject_o *)sub_21FFC50(&StringLiteral_4493/*"CardIntoMove"*/);
    byte_5935D85 = 1;
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.dragObject, v9, v11, v12, v13, v14, v15, v16);
  this = (SampleCardListViewObject_o *)v4->fields.dragObject;
  if ( !this )
    goto LABEL_20;
  this = (SampleCardListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)this,
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
  if ( !v7 || !this )
    goto LABEL_20;
  v18 = BYTE4(v7[1].klass) ? 1 : 2;
  SampleCardListViewObject__Init_44527476(this, v18, v17);
  this = *p_dragObject;
  if ( !*p_dragObject
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
        (this = (SampleCardListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0)) == 0)
    || (v20 = UnityEngine_Transform__TransformPoint_83283144((UnityEngine_Transform_o *)this, 5000.0, 0.0, 0.0, 0),
        !transform) )
  {
LABEL_20:
    sub_21FFECC(this, method);
  }
  UnityEngine_Transform__set_position(transform, v20, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_4493/*"CardIntoMove"*/, delay, 0);
}


void SampleCardListViewObject__CardMoveEnd(SampleCardListViewObject_o *this, const MethodInfo *method)
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


void SampleCardListViewObject__CardTurnMove(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  SampleCardListViewObject_o *v2; // x19
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  SampleCardListViewObject_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  v2 = this;
  if ( (byte_5935D89 & 1) == 0 )
  {
    this = (SampleCardListViewObject_o *)sub_21FFC50(&StringLiteral_4502/*"CardTurnMove2"*/);
    byte_5935D89 = 1;
  }
  itemDraw = v2->fields.itemDraw;
  if ( !itemDraw
    || (itemDraw->fields.isFront ^= 1u,
        SampleCardListViewObject__SetupDisp(v2, method),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0),
        (this = (SampleCardListViewObject_o *)TweenScale__Begin(gameObject, 0.5, v2->fields.baseScale, 0)) == 0) )
  {
    sub_21FFECC(this, method);
  }
  v5 = this;
  LODWORD(this->fields.dispObject) = 3;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  v5->fields.baseParent = (struct UnityEngine_Transform_o *)v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.baseParent, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = StringLiteral_4502/*"CardTurnMove2"*/;
  *(_QWORD *)&v5->fields.basePosition.fields.x = StringLiteral_4502/*"CardTurnMove2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.basePosition, v13, v14, v15, v16, v17, v18, v19);
}


void SampleCardListViewObject__CardTurnStart(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TweenScale_o *v4; // x0
  __int64 v5; // x1
  TweenScale_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5935D88 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4501/*"CardTurnMove"*/);
    byte_5935D88 = 1;
  }
  this->fields.isBusy = 1;
  SampleCardListViewObject__SetupDisp(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v21.fields.x = 0.0;
  v21.fields.y = this->fields.baseScale.fields.y;
  v21.fields.z = this->fields.baseScale.fields.z;
  v4 = TweenScale__Begin(gameObject, 0.5, v21, 0);
  if ( !v4 )
    sub_21FFECC(0, v5);
  v6 = v4;
  v4->fields.method = 3;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6->fields.eventReceiver = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.eventReceiver, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = StringLiteral_4501/*"CardTurnMove"*/;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_4501/*"CardTurnMove"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.callWhenFinished, v14, v15, v16, v17, v18, v19, v20);
}


UnityEngine_GameObject_o *SampleCardListViewObject__CreateDragObject(
        SampleCardListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  Il2CppObject *Component_object; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_5935D82 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    byte_5935D82 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             DragObject,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___),
        DragObject = (UnityEngine_GameObject_o *)SampleCardListViewObject__get_IsFront(this, v7),
        !Component_object) )
  {
    sub_21FFECC(DragObject, v4);
  }
  SampleCardListViewObject__set_IsFront(
    (SampleCardListViewObject_o *)Component_object,
    (unsigned __int8)DragObject & 1,
    v8);
  SampleCardListViewObject__Init_44527476((SampleCardListViewObject_o *)Component_object, 2, v9);
  return v5;
}


SampleCardListViewItem_o *SampleCardListViewObject__GetItem(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5935D81 & 1) == 0 )
  {
    sub_21FFC50(&SampleCardListViewItem_TypeInfo);
    byte_5935D81 = 1;
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


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__Init(
        SampleCardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  int32_t v8; // w20
  SampleCardListViewObject_o *v9; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  int32_t *p_dispMode; // x23
  int32_t dispMode; // w24
  int32_t state; // w25
  int32_t *p_state; // x26
  struct SampleCardListViewItemDraw_o *v16; // x8
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x22
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
  int v32; // w8
  MissionNaviTransitionBoardItem_c *klass; // x19

  v8 = initMode;
  v9 = this;
  if ( (byte_5935D83 & 1) == 0 )
  {
    this = (SampleCardListViewObject_o *)sub_21FFC50(&SampleCardListViewItem_TypeInfo);
    byte_5935D83 = 1;
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
    if ( v8 == 6 )
    {
      if ( BYTE4(linkItem[1].klass) )
        v8 = 1;
      else
        v8 = 6;
    }
  }
  else
  {
    p_dispMode = &v9->fields.dispMode;
    dispMode = v9->fields.dispMode;
    p_state = &v9->fields.state;
    state = v9->fields.state;
    if ( v8 == 5 )
    {
      itemDraw = v9->fields.itemDraw;
      if ( !itemDraw )
        goto LABEL_35;
      v8 = 0;
      itemDraw->fields.isFront ^= 1u;
    }
    else if ( v8 == 4 )
    {
      v16 = v9->fields.itemDraw;
      if ( !v16 )
        goto LABEL_35;
      v8 = 0;
      v16->fields.isFront = 0;
    }
    else
    {
      v8 = 0;
    }
  }
  ListViewObject__SetVisible((ListViewObject_o *)v9, v8 != 0, 0);
  ((void (__fastcall *)(SampleCardListViewObject_o *, bool, const MethodInfo *))v9->klass->vtable._9_SetInput.methodPtr)(
    v9,
    v8 == 6,
    v9->klass->vtable._9_SetInput.method);
  this = (SampleCardListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v9, 0);
  if ( !this
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9->fields.basePosition, 0),
        (this = (SampleCardListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v9, 0)) == 0) )
  {
LABEL_35:
    sub_21FFECC(this, *(_QWORD *)&initMode);
  }
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v9->fields.baseScale, 0);
  v9->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&v9->fields.callbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.callbackFunc,
    (int32_t)callbackFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( v8 <= 3 )
  {
    if ( (unsigned int)v8 >= 3 )
      goto LABEL_23;
    v32 = 1;
    goto LABEL_22;
  }
  switch ( v8 )
  {
    case 4:
      v9->fields.dispMode = 0;
      v9->fields.state = 2;
      SampleCardListViewObject__CardIntoStart(v9, delay, v25);
      return;
    case 5:
      v9->fields.state = 2;
      SampleCardListViewObject__CardTurnStart(v9, v25);
      return;
    case 6:
      v32 = 3;
      v8 = 2;
LABEL_22:
      *p_dispMode = v8;
      *p_state = v32;
      break;
  }
LABEL_23:
  if ( !state || dispMode != *p_dispMode )
    SampleCardListViewObject__SetupDisp(v9, v25);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v26, v27, v28, v29, v30, v31);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__Init_44527476(
        SampleCardListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  SampleCardListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__Init_44529484(
        SampleCardListViewObject_o *this,
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
  SampleCardListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__Init_44529584(
        SampleCardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  SampleCardListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void SampleCardListViewObject__OnDestroy(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5935D80 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935D80 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void SampleCardListViewObject__SetItem(
        SampleCardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
}


void SampleCardListViewObject__SetupDisp(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  SampleCardListViewItemDraw_o *v10; // x0

  if ( (byte_5935D84 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SampleCardListViewItem_TypeInfo);
    byte_5935D84 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_21FFECC(0, v9);
    SampleCardListViewItemDraw__SetItem(v10, (SampleCardListViewItem_o *)linkItem, this->fields.dispMode, 0);
  }
}


void SampleCardListViewObject__Start(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SampleCardListViewObject__Init_44527476(this, 2, v2);
}


System_String_o *SampleCardListViewObject__ToString(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  int32_t dispMode; // w10
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t v10; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_5935D8A & 1) == 0 )
  {
    sub_21FFC50(&SampleCardListViewItemDraw_DispMode_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    byte_5935D8A = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)SampleCardListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_240362C(&v11, 0, 0, 0);
  return System_String__Concat_75481624(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SampleCardListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5935D7B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5935D7B = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  SampleCardListViewObject__remove_callbackFunc(v13, v14, v15);
}


bool SampleCardListViewObject__get_IsFront(SampleCardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct SampleCardListViewItemDraw_o *v7; // x8

  if ( (byte_5935D7D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935D7D = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( !v5 )
    return 0;
  v7 = this->fields.itemDraw;
  if ( !v7 )
    sub_21FFECC(v5, v6);
  return v7->fields.isFront;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SampleCardListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5935D7C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5935D7C = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  SampleCardListViewObject__get_IsFront(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewObject__set_IsFront(SampleCardListViewObject_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct SampleCardListViewItemDraw_o *v8; // x8

  if ( (byte_5935D7E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935D7E = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_21FFECC(v6, v7);
    v8->fields.isFront = value;
  }
}