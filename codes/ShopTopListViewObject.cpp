void __fastcall ShopTopListViewObject___ctor(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_49FACAB & 1) == 0 )
  {
    sub_1B64870(&ListViewObject_TypeInfo, method);
    byte_49FACAB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ShopTopListViewObject__Awake(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FACA1 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewItemDraw___, method);
    byte_49FACA1 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64ACC(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewItemDraw___);
  this->fields.itemDraw = (struct ShopTopListViewItemDraw_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall ShopTopListViewObject__CallOnMoveEnd(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd;
  v5 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_1B64814(p_onMoveEnd, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


UnityEngine_GameObject_o *__fastcall ShopTopListViewObject__CreateDragObject(
        ShopTopListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_49FACA5 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___, method);
    byte_49FACA5 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___)) == 0LL) )
  {
    sub_1B64ACC(DragObject, v4);
  }
  ShopTopListViewObject__Init((ShopTopListViewObject_o *)DragObject, 2, 0LL, 0.0, v6);
  return v5;
}


void __fastcall ShopTopListViewObject__EventMove(ShopTopListViewObject_o *this, const MethodInfo *method)
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49FACA9 & 1) == 0 )
  {
    sub_1B64870(&ListViewObject_TypeInfo, method);
    sub_1B64870(&StringLiteral_6168/*"EventMoveFinish"*/, v4);
    byte_49FACA9 = 1;
  }
  TargetPosition = ShopTopListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
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
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  v10 = TweenPosition__Begin(dragObject, v5->static_fields->BASE_MOVE_TIME, v20, 0LL);
  if ( !v10 )
    sub_1B64ACC(0LL, v11);
  v12 = v10;
  v10->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12->fields.eventReceiver = gameObject;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v12->fields.eventReceiver, (int32_t)gameObject, v14, v15);
  v16 = StringLiteral_6168/*"EventMoveFinish"*/;
  v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6168/*"EventMoveFinish"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v12->fields.callWhenFinished, v16, v17, v18);
}


void __fastcall ShopTopListViewObject__EventMoveFinish(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  int32_t initMode; // w8
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_49FACAA & 1) == 0 )
  {
    sub_1B64870(&NGUITools_TypeInfo, method);
    byte_49FACAA = 1;
  }
  initMode = this->fields.initMode;
  if ( initMode == 7 || initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
    this->fields.dispMode = 2;
    ShopTopListViewObject__SetupDisp(this, v4);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v6, v7);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopTopListViewObject__CallOnMoveEnd(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewObject__EventStart(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *v8; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v16; // x2
  int v17; // s0

  if ( (byte_49FACA8 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___, *(_QWORD *)&initMode);
    sub_1B64870(&StringLiteral_6166/*"EventMove"*/, v7);
    byte_49FACA8 = 1;
  }
  this->fields.isBusy = 1;
  ShopTopListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  if ( initMode != 8 )
  {
    v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopTopListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                              this,
                                              this->klass->vtable._9_SetInput.methodPtr);
    this->fields.dragObject = v8;
    p_dragObject = &this->fields.dragObject;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v8, v10, v11);
    dragObject = this->fields.dragObject;
    if ( !dragObject
      || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     dragObject,
                                                     (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___)) == 0LL
      || (ShopTopListViewObject__Init((ShopTopListViewObject_o *)dragObject, 2, 0LL, 0.0, v14),
          (dragObject = *p_dragObject) == 0LL)
      || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
          *(UnityEngine_Vector3_o *)&v17 = ShopTopListViewObject__GetStartPosition(this, initMode, v16),
          !transform) )
    {
      sub_1B64ACC(dragObject, v12);
    }
    UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6166/*"EventMove"*/,
      delay,
      0LL);
  }
}


int32_t __fastcall ShopTopListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 5 )
    return 0;
  else
    return initMode + 2;
}


ShopTopListViewItem_o *__fastcall ShopTopListViewObject__GetItem(
        ShopTopListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49FACA3 & 1) == 0 )
  {
    sub_1B64870(&ShopTopListViewItem_TypeInfo, method);
    byte_49FACA3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ShopTopListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopTopListViewItem_TypeInfo )
    return (ShopTopListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopTopListViewObject__GetStartPosition(
        ShopTopListViewObject_o *this,
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
      v5 = 1145569280;
      goto LABEL_7;
    }
LABEL_10:
    sub_1B64ACC(transform, v4);
  }
  if ( initMode != 4 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(transform, 0LL);
      goto ShopTopListViewObject$$GetStartPosition;
    }
    goto LABEL_10;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  v5 = 0;
  v6 = 1140457472;
LABEL_7:
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__TransformPoint_69160504(
                                    transform,
                                    *(float *)&v6,
                                    *(float *)&v5,
                                    0.0,
                                    0LL);
ShopTopListViewObject$$GetStartPosition:
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


int32_t __fastcall ShopTopListViewObject__GetState(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 8 )
    return 0;
  else
    return dword_BDC72C[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopTopListViewObject__GetTargetPosition(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v7; // s0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL)) == 0LL
    || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL),
        !parent) )
  {
    sub_1B64ACC(dragObject, *(_QWORD *)&initMode);
  }
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__InverseTransformPoint(
                                     parent,
                                     *(UnityEngine_Vector3_o *)&v7,
                                     0LL);
  if ( initMode == 5 )
  {
    v10 = v10 + 0.0;
    v11 = v11 + 800.0;
    v12 = v12 + 0.0;
  }
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewObject__Init(
        ShopTopListViewObject_o *this,
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
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  int32_t v20; // w10
  int32_t v21; // w9

  v7 = initMode;
  if ( (byte_49FACA6 & 1) == 0 )
  {
    sub_1B64870(&ShopTopListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_49FACA6 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = v7;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(ShopTopListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopTopListViewItem_TypeInfo )
  {
    v7 = 0;
    this->fields.initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(ShopTopListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64ACC(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v15, v16);
  v18 = (const MethodInfo *)(unsigned int)this->fields.initMode;
  v19 = (int)v18;
  if ( (_DWORD)v18 != 1 )
  {
    if ( (_DWORD)v18 == 3 )
    {
      v19 = 2;
      v21 = 3;
      this->fields.dispMode = 2;
LABEL_18:
      this->fields.state = v21;
      goto LABEL_19;
    }
    if ( (_DWORD)v18 != 2 )
    {
      v19 = 0;
      this->fields.dispMode = 0;
      v21 = 0;
      v20 = 0;
      switch ( (int)v18 )
      {
        case 0:
        case 8:
          goto LABEL_14;
        case 1:
        case 2:
        case 3:
          goto LABEL_15;
        case 4:
        case 5:
          this->fields.state = 2;
          goto LABEL_20;
        case 6:
          goto LABEL_18;
        case 7:
          v19 = 0;
          v21 = 2;
          goto LABEL_18;
        default:
          v20 = 0;
          goto LABEL_15;
      }
    }
    v19 = 2;
  }
  this->fields.dispMode = v19;
LABEL_14:
  v20 = 1;
LABEL_15:
  this->fields.state = v20;
  if ( ((unsigned int)v18 & 0xFFFFFFFE) == 4 )
    goto LABEL_20;
LABEL_19:
  if ( (unsigned int)((_DWORD)v18 - 7) <= 1 )
  {
LABEL_20:
    ShopTopListViewObject__EventStart(this, (int32_t)v18, delay, v17);
    return;
  }
  if ( !state || dispMode != v19 )
    ShopTopListViewObject__SetupDisp(this, v18);
  ShopTopListViewObject__CallOnMoveEnd(this, v18);
}


void __fastcall ShopTopListViewObject__OnDestroy(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FACA2 & 1) == 0 )
  {
    sub_1B64870(&NGUITools_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FACA2 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
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
    sub_1B64814(p_dragObject, 0, v8, v9);
  }
}


void __fastcall ShopTopListViewObject__OnMoveEnd(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopTopListViewObject__CallOnMoveEnd(this, method);
}


void __fastcall ShopTopListViewObject__ResetShopListNotice(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *itemDraw; // x19
  ShopTopListViewItem_o *Item; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  itemDraw = this->fields.itemDraw;
  Item = ShopTopListViewObject__GetItem(this, method);
  if ( !itemDraw )
    sub_1B64ACC(Item, v4);
  ShopTopListViewItemDraw__ResetShopListNotice(itemDraw, Item, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewObject__SetInput(ShopTopListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ShopTopListViewItemDraw_o *v9; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v12; // x1

  if ( (byte_49FACA4 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B64870(&ShopTopListViewItem_TypeInfo, v5);
    byte_49FACA4 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B64ACC(0LL, v7);
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(ShopTopListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopTopListViewItem_TypeInfo )
        v12 = this->fields.linkItem;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    ShopTopListViewItemDraw__SetInput(v9, (ShopTopListViewItem_o *)v12, v8);
  }
}


void __fastcall ShopTopListViewObject__SetItem(
        ShopTopListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40424228((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopTopListViewObject__SetupDisp(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  ShopTopListViewItemDraw_o *v11; // x0
  struct ListViewManager_o *manager; // x3
  __int64 v13; // x9

  if ( (byte_49FACA7 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&ShopTopListViewItem_TypeInfo, v3);
    sub_1B64870(&ShopTopListViewManager_TypeInfo, v4);
    byte_49FACA7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ShopTopListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopTopListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v11 = this->fields.itemDraw;
    if ( v11 )
    {
      manager = this->fields.manager;
      if ( !manager
        || (v13 = LOBYTE(ShopTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v13)
        && (ShopTopListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == ShopTopListViewManager_TypeInfo )
      {
        ShopTopListViewItemDraw__SetItem(
          v11,
          (ShopTopListViewItem_o *)linkItem,
          this->fields.dispMode,
          (ShopTopListViewManager_o *)manager,
          v10);
        return;
      }
      sub_1B64D8C(this->fields.manager);
    }
    sub_1B64ACC(v11, v9);
  }
}