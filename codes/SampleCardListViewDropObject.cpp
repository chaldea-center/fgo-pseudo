void SampleCardListViewDropObject___ctor(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0);
}


void SampleCardListViewDropObject__Awake(SampleCardListViewDropObject_o *this, const MethodInfo *method)
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

  if ( (byte_596DE11 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewItemDraw___);
    byte_596DE11 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewItemDraw___);
  this->fields.itemDraw = (struct SampleCardListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void SampleCardListViewDropObject__CardDragDelete(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596DE1D & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE1D = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    v8 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6, v7);
    NGUITools__Destroy(v8, 0);
    *p_dragObject = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v9, v10, v11, v12, v13, v14);
  }
  SampleCardListViewDropObject__CardMoveEnd(this, v6);
}


void SampleCardListViewDropObject__CardDragMoveStart(
        SampleCardListViewDropObject_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_c *v8; // x0
  UnityEngine_Object_o *dragObject; // x21
  void *Component_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  struct UnityEngine_GameObject_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  _QWORD *v21; // x21
  UnityEngine_Object_o *v22; // x22
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *v24; // x20
  char *v25; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s1.4,4:s2.4,8:s3.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_596DE1C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewDropObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_4501/*"CardMoveEnd"*/);
    byte_596DE1C = 1;
  }
  v8 = UnityEngine_Object_TypeInfo;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( !*(&v8->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v8, method, v3);
  Component_object = (void *)UnityEngine_Object__op_Equality(dragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    this->fields.dispMode = 0;
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
    SampleCardListViewDropObject__SetupDisp(this, v12);
    v13 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(SampleCardListViewDropObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                               this,
                                               this->klass->vtable._8_CreateDragObject.method);
    this->fields.dragObject = v13;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject,
      (int32_t)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    Component_object = this->fields.dragObject;
    if ( !Component_object
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Component_object,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewDropObject___)) == 0 )
    {
LABEL_18:
      sub_2213CDC(Component_object, v11);
    }
    v21 = Component_object;
    v22 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 16);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v20);
    Component_object = (void *)UnityEngine_Object__op_Inequality(v22, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      Component_object = (void *)v21[16];
      if ( !Component_object )
        goto LABEL_18;
      SampleCardListViewItemDraw__AddDepth((SampleCardListViewItemDraw_o *)Component_object, -1, v23);
    }
  }
  v24 = this->fields.dragObject;
  if ( !v24 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__get_transform(v24, 0);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_18;
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v41 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v40, 0);
  Component_object = TweenPosition__Begin(v24, 0.2, v41, 0);
  if ( !Component_object )
    goto LABEL_18;
  v25 = (char *)Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v25 + 10) = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 80), (int32_t)gameObject, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_4501/*"CardMoveEnd"*/;
  *((_QWORD *)v25 + 11) = StringLiteral_4501/*"CardMoveEnd"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 88), v33, v34, v35, v36, v37, v38, v39);
}


void SampleCardListViewDropObject__CardIntoMove(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_GameObject_o *v5; // x20
  UnityEngine_GameObject_o *gameObject; // x0
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596DE18 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4499/*"CardIntoMove2"*/);
    byte_596DE18 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0)) == 0
    || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !parent)
    || (v21 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(this->fields.dragObject, 1.5, v21, 0)) == 0) )
  {
    sub_2213CDC(dragObject, method);
  }
  v5 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5[3].monitor, (int32_t)gameObject, v7, v8, v9, v10, v11, v12);
  v13 = StringLiteral_4499/*"CardIntoMove2"*/;
  v5[3].fields.m_CachedPtr = StringLiteral_4499/*"CardIntoMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5[3].fields, v13, v14, v15, v16, v17, v18, v19);
}


void SampleCardListViewDropObject__CardIntoMove2(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1

  if ( (byte_596DE19 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596DE19 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  SampleCardListViewDropObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  SampleCardListViewDropObject__CardMoveEnd(this, v13);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596DE17 & 1) == 0 )
  {
    this = (SampleCardListViewDropObject_o *)sub_2213A60(&StringLiteral_4498/*"CardIntoMove"*/);
    byte_596DE17 = 1;
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.dragObject, v7, v8, v9, v10, v11, v12, v13);
  this = (SampleCardListViewDropObject_o *)v4->fields.dragObject;
  if ( !this
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
        (this = (SampleCardListViewDropObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0)) == 0)
    || (v15 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)this, -3000.0, 0.0, 0.0, 0),
        !transform) )
  {
LABEL_8:
    sub_2213CDC(this, method);
  }
  UnityEngine_Transform__set_position(transform, v15, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_4498/*"CardIntoMove"*/, delay, 0);
}


void SampleCardListViewDropObject__CardMoveEnd(SampleCardListViewDropObject_o *this, const MethodInfo *method)
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
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void SampleCardListViewDropObject__CardTurnMove(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  SampleCardListViewDropObject_o *v2; // x19
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  SampleCardListViewDropObject_o *v5; // x20
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
  if ( (byte_596DE1B & 1) == 0 )
  {
    this = (SampleCardListViewDropObject_o *)sub_2213A60(&StringLiteral_4507/*"CardTurnMove2"*/);
    byte_596DE1B = 1;
  }
  itemDraw = v2->fields.itemDraw;
  if ( !itemDraw
    || (itemDraw->fields.isFront ^= 1u,
        SampleCardListViewDropObject__SetupDisp(v2, method),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0),
        (this = (SampleCardListViewDropObject_o *)TweenScale__Begin(gameObject, 0.5, v2->fields.baseScale, 0)) == 0) )
  {
    sub_2213CDC(this, method);
  }
  v5 = this;
  LODWORD(this->fields.dispObject) = 3;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  v5->fields.baseParent = (struct UnityEngine_Transform_o *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.baseParent, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = StringLiteral_4507/*"CardTurnMove2"*/;
  *(_QWORD *)&v5->fields.basePosition.fields.x = StringLiteral_4507/*"CardTurnMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.basePosition, v13, v14, v15, v16, v17, v18, v19);
}


void SampleCardListViewDropObject__CardTurnStart(SampleCardListViewDropObject_o *this, const MethodInfo *method)
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

  if ( (byte_596DE1A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4506/*"CardTurnMove"*/);
    byte_596DE1A = 1;
  }
  this->fields.isBusy = 1;
  SampleCardListViewDropObject__SetupDisp(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v21.fields.x = 0.0;
  v21.fields.y = this->fields.baseScale.fields.y;
  v21.fields.z = this->fields.baseScale.fields.z;
  v4 = TweenScale__Begin(gameObject, 0.5, v21, 0);
  if ( !v4 )
    sub_2213CDC(0, v5);
  v6 = v4;
  v4->fields.method = 3;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6->fields.eventReceiver = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.eventReceiver, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = StringLiteral_4506/*"CardTurnMove"*/;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_4506/*"CardTurnMove"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.callWhenFinished, v14, v15, v16, v17, v18, v19, v20);
}


UnityEngine_GameObject_o *SampleCardListViewDropObject__CreateDragObject(
        SampleCardListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  Il2CppObject *Component_object; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_596DE14 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewDropObject___);
    byte_596DE14 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             DragObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewDropObject___),
        DragObject = (UnityEngine_GameObject_o *)SampleCardListViewDropObject__get_IsFront(this, v7),
        !Component_object) )
  {
    sub_2213CDC(DragObject, v4);
  }
  SampleCardListViewDropObject__set_IsFront(
    (SampleCardListViewDropObject_o *)Component_object,
    (unsigned __int8)DragObject & 1,
    v8);
  SampleCardListViewDropObject__Init_44461768((SampleCardListViewDropObject_o *)Component_object, 2, v9);
  return v5;
}


SampleCardListViewItem_o *SampleCardListViewDropObject__GetItem(
        SampleCardListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596DE13 & 1) == 0 )
  {
    sub_2213A60(&SampleCardListViewItem_TypeInfo);
    byte_596DE13 = 1;
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
  int32_t v11; // w20
  SampleCardListViewDropObject_o *v12; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  int32_t *p_dispMode; // x23
  int32_t dispMode; // w24
  int32_t state; // w25
  int32_t *p_state; // x26
  struct SampleCardListViewItemDraw_o *v19; // x8
  struct SampleCardListViewItemDraw_o *itemDraw; // x8
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int v35; // w8
  MissionNaviTransitionBoardItem_c *klass; // x19
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  v11 = initMode;
  v12 = this;
  if ( (byte_596DE15 & 1) == 0 )
  {
    this = (SampleCardListViewDropObject_o *)sub_2213A60(&SampleCardListViewItem_TypeInfo);
    byte_596DE15 = 1;
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
    if ( v11 == 6 )
    {
      if ( BYTE4(linkItem[1].klass) )
        v11 = 6;
      else
        v11 = 1;
    }
  }
  else
  {
    p_dispMode = &v12->fields.dispMode;
    dispMode = v12->fields.dispMode;
    p_state = &v12->fields.state;
    state = v12->fields.state;
    if ( v11 == 5 )
    {
      itemDraw = v12->fields.itemDraw;
      if ( !itemDraw )
        goto LABEL_39;
      v11 = 0;
      itemDraw->fields.isFront ^= 1u;
    }
    else if ( v11 == 4 )
    {
      v19 = v12->fields.itemDraw;
      if ( !v19 )
        goto LABEL_39;
      v11 = 0;
      v19->fields.isFront = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  ListViewObject__SetVisible((ListViewObject_o *)v12, v11 != 0, 0);
  ((void (__fastcall *)(SampleCardListViewDropObject_o *, bool, const MethodInfo *))v12->klass->vtable._9_SetInput.methodPtr)(
    v12,
    v11 == 6,
    v12->klass->vtable._9_SetInput.method);
  this = (SampleCardListViewDropObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
  if ( !this
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v12->fields.basePosition, 0),
        (this = (SampleCardListViewDropObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)v12,
                                                    0)) == 0) )
  {
LABEL_39:
    sub_2213CDC(this, *(_QWORD *)&initMode);
  }
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v12->fields.baseScale, 0);
  v12->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc,
    (int32_t)callbackFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( v11 <= 4 )
  {
    if ( (unsigned int)v11 >= 3 )
    {
      if ( v11 == 4 )
      {
        v12->fields.dispMode = 2;
        v12->fields.state = 2;
        SampleCardListViewDropObject__CardIntoStart(v12, delay, v28);
        return;
      }
      goto LABEL_22;
    }
    v35 = 1;
    goto LABEL_21;
  }
  if ( v11 <= 6 )
  {
    if ( v11 == 5 )
    {
      v12->fields.state = 2;
      SampleCardListViewDropObject__CardTurnStart(v12, v28);
      return;
    }
    v35 = 3;
    v11 = 2;
LABEL_21:
    *p_dispMode = v11;
    *p_state = v35;
    goto LABEL_22;
  }
  if ( v11 == 7 )
  {
    v37.fields.y = y;
    v37.fields.z = z;
    v12->fields.state = 2;
    v37.fields.x = x;
    SampleCardListViewDropObject__CardDragMoveStart(v12, v37, v28);
    return;
  }
  if ( v11 == 8 )
  {
    SampleCardListViewDropObject__CardDragDelete(v12, v28);
    return;
  }
LABEL_22:
  if ( !state || dispMode != *p_dispMode )
    SampleCardListViewDropObject__SetupDisp(v12, v28);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v29, v30, v31, v32, v33, v34);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void SampleCardListViewDropObject__Init_44461768(
        SampleCardListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  SampleCardListViewDropObject__Init(
    this,
    initMode,
    0,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    v3);
}


void SampleCardListViewDropObject__Init_44464476(
        SampleCardListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  SampleCardListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    method);
}


void SampleCardListViewDropObject__Init_44464600(
        SampleCardListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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

  if ( (byte_596DE12 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE12 = 1;
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
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void SampleCardListViewDropObject__SetItem(
        SampleCardListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewDropObject__SetItem_50818104((ListViewDropObject_o *)this, item, seed, 0);
}


void SampleCardListViewDropObject__SetupDisp(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  SampleCardListViewItemDraw_o *v11; // x0

  if ( (byte_596DE16 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SampleCardListViewItem_TypeInfo);
    byte_596DE16 = 1;
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
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    SampleCardListViewItemDraw__SetItem(v11, (SampleCardListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


void SampleCardListViewDropObject__Start(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SampleCardListViewDropObject__Init_44461768(this, 2, v2);
}


System_String_o *SampleCardListViewDropObject__ToString(SampleCardListViewDropObject_o *this, const MethodInfo *method)
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

  if ( (byte_596DE1E & 1) == 0 )
  {
    sub_2213A60(&SampleCardListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_596DE1E = 1;
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
  v7 = (System_String_o *)sub_2402C74(&v11, 0, 0, 0);
  return System_String__Concat_75694928(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
}


bool SampleCardListViewDropObject__get_IsFront(SampleCardListViewDropObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct SampleCardListViewItemDraw_o *v7; // x8

  if ( (byte_596DE0F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE0F = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( !v5 )
    return 0;
  v7 = this->fields.itemDraw;
  if ( !v7 )
    sub_2213CDC(v5, v6);
  return v7->fields.isFront;
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewDropObject__set_IsFront(
        SampleCardListViewDropObject_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct SampleCardListViewItemDraw_o *v8; // x8

  if ( (byte_596DE10 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE10 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_2213CDC(v6, v7);
    v8->fields.isFront = value;
  }
}