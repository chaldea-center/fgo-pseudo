void ShopTopListViewObject___ctor(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C947 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596C947 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ShopTopListViewObject__Awake(ShopTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596C93D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewItemDraw___);
    byte_596C93D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewItemDraw___);
  this->fields.itemDraw = (struct ShopTopListViewItemDraw_o *)Component_object;
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


void ShopTopListViewObject__CallOnMoveEnd(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_2213A04(p_onMoveEnd, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
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

  if ( (byte_596C941 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
    byte_596C941 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  ShopTopListViewObject__Init((ShopTopListViewObject_o *)DragObject, 2, 0, 0.0, v6);
  return v5;
}


void ShopTopListViewObject__EventMove(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float x; // s8
  float y; // s9
  ListViewObject_c *v8; // x0
  float z; // s10
  UnityEngine_GameObject_o *dragObject; // x20
  TweenPosition_o *v11; // x0
  __int64 v12; // x1
  TweenPosition_o *v13; // x20
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
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596C945 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6499/*"EventMoveFinish"*/);
    byte_596C945 = 1;
  }
  TargetPosition = ShopTopListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  v8 = ListViewObject_TypeInfo;
  z = TargetPosition.fields.z;
  dragObject = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v4, v5);
    v8 = ListViewObject_TypeInfo;
  }
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  v11 = TweenPosition__Begin(dragObject, v8->static_fields->BASE_MOVE_TIME, v29, 0);
  if ( !v11 )
    sub_2213CDC(0, v12);
  v13 = v11;
  v11->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13->fields.eventReceiver = gameObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.eventReceiver,
    (int32_t)gameObject,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = StringLiteral_6499/*"EventMoveFinish"*/;
  v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6499/*"EventMoveFinish"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
}


void ShopTopListViewObject__EventMoveFinish(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t initMode; // w8
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1

  if ( (byte_596C946 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596C946 = 1;
  }
  initMode = this->fields.initMode;
  if ( initMode == 7 || initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
    this->fields.dispMode = 2;
    ShopTopListViewObject__SetupDisp(this, v5);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopTopListViewObject__CallOnMoveEnd(this, v13);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Vector3_o StartPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C944 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
    sub_2213A60(&StringLiteral_6497/*"EventMove"*/);
    byte_596C944 = 1;
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    dragObject = this->fields.dragObject;
    if ( !dragObject
      || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     dragObject,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___)) == 0
      || (ShopTopListViewObject__Init((ShopTopListViewObject_o *)dragObject, 2, 0, 0.0, v17),
          (dragObject = *p_dragObject) == 0)
      || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
          StartPosition = ShopTopListViewObject__GetStartPosition(this, initMode, v19),
          !transform) )
    {
      sub_2213CDC(dragObject, v15);
    }
    UnityEngine_Transform__set_position(transform, StartPosition, 0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6497/*"EventMove"*/,
      delay,
      0);
  }
}


int32_t ShopTopListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 6 )
    return 0;
  else
    return initMode + 2;
}


ShopTopListViewItem_o *ShopTopListViewObject__GetItem(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596C93F & 1) == 0 )
  {
    sub_2213A60(&ShopTopListViewItem_TypeInfo);
    byte_596C93F = 1;
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
  __int64 v5; // x1
  float v6; // s1
  float v7; // s0

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( initMode == 7 )
  {
    if ( transform )
    {
      v7 = 0.0;
      v6 = 800.0;
      return UnityEngine_Transform__TransformPoint_83496448(transform, v7, v6, 0.0, 0);
    }
LABEL_10:
    sub_2213CDC(transform, v5);
  }
  if ( initMode == 4 )
  {
    if ( transform )
    {
      v6 = 0.0;
      v7 = 500.0;
      return UnityEngine_Transform__TransformPoint_83496448(transform, v7, v6, 0.0, 0);
    }
    goto LABEL_10;
  }
  if ( !transform )
    goto LABEL_10;
  return UnityEngine_Transform__get_position(transform, 0);
}


int32_t ShopTopListViewObject__GetState(ShopTopListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 8 )
    return 0;
  else
    return dword_ED9638[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o ShopTopListViewObject__GetTargetPosition(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v5; // x20
  float v6; // s0 OVERLAPPED
  float v7; // s1
  float v8; // s2
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  dragObject = this->fields.dragObject;
  if ( initMode != 5 )
  {
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
      if ( dragObject )
      {
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( dragObject )
        {
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
          if ( parent )
          {
            *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_12:
    sub_2213CDC(dragObject, *(_QWORD *)&initMode);
  }
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_12;
  v5 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_12;
  v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v5 )
    goto LABEL_12;
  v11 = UnityEngine_Transform__InverseTransformPoint(v5, v10, 0);
  v6 = v11.fields.x + 0.0;
  v7 = v11.fields.y + 800.0;
  v8 = v11.fields.z + 0.0;
LABEL_13:
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


void ShopTopListViewObject__Init(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  ShopTopListViewObject_o *v22; // x0
  const MethodInfo *v23; // x2
  unsigned int v24; // w20
  int32_t v25; // w21
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2

  if ( (byte_596C942 & 1) == 0 )
  {
    sub_2213A60(&ShopTopListViewItem_TypeInfo);
    byte_596C942 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        naturalAligment = ShopTopListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopTopListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != ShopTopListViewItem_TypeInfo )
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
    sub_2213CDC(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = this->fields.initMode;
  if ( v24 - 1 > 2 )
  {
    this->fields.dispMode = 0;
    v25 = 0;
    this->fields.state = ShopTopListViewObject__GetState(v22, v24, v23);
    if ( v24 <= 8 && ((1 << v24) & 0x1B0) != 0 )
    {
      ShopTopListViewObject__EventStart(this, v24, delay, v27);
      return;
    }
  }
  else
  {
    v25 = dword_ED8B08[v24 - 1];
    this->fields.dispMode = v25;
    this->fields.state = ShopTopListViewObject__GetState(v22, v24, v23);
  }
  if ( !state || dispMode != v25 )
    ShopTopListViewObject__SetupDisp(this, v26);
  ShopTopListViewObject__CallOnMoveEnd(this, v26);
}


void ShopTopListViewObject__OnDestroy(ShopTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596C93E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C93E = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
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
    sub_2213CDC(Item, v4);
  ShopTopListViewItemDraw__ResetShopListNotice(itemDraw, Item, v5);
}


void ShopTopListViewObject__SetInput(ShopTopListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ShopTopListViewItemDraw_o *v10; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  int32_t v13; // w1

  if ( (byte_596C940 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopTopListViewItem_TypeInfo);
    byte_596C940 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_2213CDC(0, v8);
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = ShopTopListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ShopTopListViewItem_TypeInfo )
      {
        if ( LOBYTE(linkItem[1].fields.sortIndex) )
          v13 = 0;
        else
          v13 = 3;
        ShopTopListViewItemDraw__SetBaseButtonState(v10, v13, v9);
      }
    }
  }
}


void ShopTopListViewObject__SetItem(
        ShopTopListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void ShopTopListViewObject__SetupDisp(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  ShopTopListViewItemDraw_o *v11; // x0
  struct ListViewManager_o *manager; // x3
  __int64 dispMode; // x2
  __int64 v14; // x9

  if ( (byte_596C943 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopTopListViewItem_TypeInfo);
    sub_2213A60(&ShopTopListViewManager_TypeInfo);
    byte_596C943 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( v11 )
    {
      manager = this->fields.manager;
      dispMode = (unsigned int)this->fields.dispMode;
      if ( !manager
        || (v14 = ShopTopListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)v14)
        && (ShopTopListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] == ShopTopListViewManager_TypeInfo )
      {
        ShopTopListViewItemDraw__SetItem(
          v11,
          (ShopTopListViewItem_o *)linkItem,
          dispMode,
          (ShopTopListViewManager_o *)manager,
          v10);
        return;
      }
      sub_221405C(this->fields.manager, ShopTopListViewManager_TypeInfo, dispMode, manager);
    }
    sub_2213CDC(v11, v9);
  }
}