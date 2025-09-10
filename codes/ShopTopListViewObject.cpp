void ShopTopListViewObject___ctor(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C23666 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C23666 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ShopTopListViewObject__Awake(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2365C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewItemDraw___);
    byte_4C2365C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewItemDraw___);
  this->fields.itemDraw = (struct ShopTopListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void ShopTopListViewObject__CallOnMoveEnd(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (CGThumbnailListItem_o *)&this->fields.onMoveEnd;
  v5 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_1C2D434(p_onMoveEnd, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


UnityEngine_GameObject_o *ShopTopListViewObject__CreateDragObject(
        ShopTopListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4C23660 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
    byte_4C23660 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___)) == 0) )
  {
    sub_1C2D6EC(DragObject, v4);
  }
  ShopTopListViewObject__Init((ShopTopListViewObject_o *)DragObject, 2, 0, 0.0, v6);
  return v5;
}


void ShopTopListViewObject__EventMove(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ListViewObject_c *v4; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  TweenPosition_o *v9; // x0
  __int64 v10; // x1
  TweenPosition_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C23664 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    sub_1C2D490(&StringLiteral_6226/*"EventMoveFinish"*/);
    byte_4C23664 = 1;
  }
  TargetPosition = ShopTopListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  v4 = ListViewObject_TypeInfo;
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  z = TargetPosition.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v4 = ListViewObject_TypeInfo;
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  v9 = TweenPosition__Begin(dragObject, v4->static_fields->BASE_MOVE_TIME, v19, 0);
  if ( !v9 )
    sub_1C2D6EC(0, v10);
  v11 = v9;
  v9->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11->fields.eventReceiver = gameObject;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.eventReceiver, (int32_t)gameObject, v13, v14);
  v15 = StringLiteral_6226/*"EventMoveFinish"*/;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6226/*"EventMoveFinish"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.callWhenFinished, v15, v16, v17);
}


void ShopTopListViewObject__EventMoveFinish(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  int32_t initMode; // w8
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4C23665 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C23665 = 1;
  }
  initMode = this->fields.initMode;
  if ( initMode == 7 || initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
    this->fields.dispMode = 2;
    ShopTopListViewObject__SetupDisp(this, v4);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v6, v7);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopTopListViewObject__CallOnMoveEnd(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void ShopTopListViewObject__EventStart(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v13; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Vector3_o StartPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23663 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
    sub_1C2D490(&StringLiteral_6224/*"EventMove"*/);
    byte_4C23663 = 1;
  }
  this->fields.isBusy = 1;
  ShopTopListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  if ( initMode != 8 )
  {
    v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopTopListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                              this,
                                              this->klass->vtable._8_CreateDragObject.method);
    this->fields.dragObject = v7;
    p_dragObject = &this->fields.dragObject;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v7, v9, v10);
    dragObject = this->fields.dragObject;
    if ( !dragObject
      || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     dragObject,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___)) == 0
      || (ShopTopListViewObject__Init((ShopTopListViewObject_o *)dragObject, 2, 0, 0.0, v13),
          (dragObject = *p_dragObject) == 0)
      || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
          StartPosition = ShopTopListViewObject__GetStartPosition(this, initMode, v15),
          !transform) )
    {
      sub_1C2D6EC(dragObject, v11);
    }
    UnityEngine_Transform__set_position(transform, StartPosition, 0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6224/*"EventMove"*/,
      delay,
      0);
  }
}


int32_t ShopTopListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 5 )
    return 0;
  else
    return initMode + 2;
}


ShopTopListViewItem_o *ShopTopListViewObject__GetItem(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C2365E & 1) == 0 )
  {
    sub_1C2D490(&ShopTopListViewItem_TypeInfo);
    byte_4C2365E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ShopTopListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ShopTopListViewItem_TypeInfo )
    return (ShopTopListViewItem_o *)this->fields.linkItem;
  return 0;
}


UnityEngine_Vector3_o ShopTopListViewObject__GetStartPosition(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s1
  float v6; // s0

  if ( initMode == 7 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      v6 = 0.0;
      v5 = 800.0;
      return UnityEngine_Transform__TransformPoint_71190304(transform, v6, v5, 0.0, 0);
    }
LABEL_10:
    sub_1C2D6EC(transform, v4);
  }
  if ( initMode == 4 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      v5 = 0.0;
      v6 = 500.0;
      return UnityEngine_Transform__TransformPoint_71190304(transform, v6, v5, 0.0, 0);
    }
    goto LABEL_10;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_10;
  return UnityEngine_Transform__get_position(transform, 0);
}


int32_t ShopTopListViewObject__GetState(ShopTopListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 8 )
    return 0;
  else
    return dword_C4242C[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o ShopTopListViewObject__GetTargetPosition(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0)) == 0
    || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !parent) )
  {
    sub_1C2D6EC(dragObject, *(_QWORD *)&initMode);
  }
  result = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  if ( initMode == 5 )
  {
    result.fields.x = result.fields.x + 0.0;
    result.fields.y = result.fields.y + 800.0;
    result.fields.z = result.fields.z + 0.0;
  }
  return result;
}


void ShopTopListViewObject__Init(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  int32_t v20; // w10
  int32_t v21; // w9

  if ( (byte_4C23661 & 1) == 0 )
  {
    sub_1C2D490(&ShopTopListViewItem_TypeInfo);
    byte_4C23661 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (naturalAligment = ShopTopListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ShopTopListViewItem_TypeInfo )
  {
    initMode = 0;
    this->fields.initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(ShopTopListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v15, v16);
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


void ShopTopListViewObject__OnDestroy(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2365D & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2365D = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C2D434(p_dragObject, 0, v7, v8);
  }
}


void ShopTopListViewObject__OnMoveEnd(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopTopListViewObject__CallOnMoveEnd(this, method);
}


void ShopTopListViewObject__ResetShopListNotice(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *itemDraw; // x19
  ShopTopListViewItem_o *Item; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  itemDraw = this->fields.itemDraw;
  Item = ShopTopListViewObject__GetItem(this, method);
  if ( !itemDraw )
    sub_1C2D6EC(Item, v4);
  ShopTopListViewItemDraw__ResetShopListNotice(itemDraw, Item, v5);
}


void ShopTopListViewObject__SetInput(ShopTopListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ShopTopListViewItemDraw_o *v8; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x1

  if ( (byte_4C2365F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopTopListViewItem_TypeInfo);
    byte_4C2365F = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C2D6EC(0, v6);
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = ShopTopListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ShopTopListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    ShopTopListViewItemDraw__SetInput(v8, (ShopTopListViewItem_o *)v11, v7);
  }
}


void ShopTopListViewObject__SetItem(
        ShopTopListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
}


void ShopTopListViewObject__SetupDisp(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  ShopTopListViewItemDraw_o *v9; // x0
  struct ListViewManager_o *manager; // x3
  __int64 v11; // x9

  if ( (byte_4C23662 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopTopListViewItem_TypeInfo);
    sub_1C2D490(&ShopTopListViewManager_TypeInfo);
    byte_4C23662 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ShopTopListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ShopTopListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( v9 )
    {
      manager = this->fields.manager;
      if ( !manager
        || (v11 = ShopTopListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)v11)
        && (ShopTopListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] == ShopTopListViewManager_TypeInfo )
      {
        ShopTopListViewItemDraw__SetItem(
          v9,
          (ShopTopListViewItem_o *)linkItem,
          this->fields.dispMode,
          (ShopTopListViewManager_o *)manager,
          v8);
        return;
      }
      sub_1C2D9AC(this->fields.manager);
    }
    sub_1C2D6EC(v9, v7);
  }
}