void ShopEventListViewObject___ctor(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC362B & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC362B = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ShopEventListViewObject__Awake(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC3621 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewItemDraw___);
    byte_4CC3621 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewItemDraw___);
  this->fields.itemDraw = (struct ShopEventListViewItemDraw_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void ShopEventListViewObject__CallOnMoveEnd(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_1C71354(p_onMoveEnd, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


UnityEngine_GameObject_o *ShopEventListViewObject__CreateDragObject(
        ShopEventListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4CC3624 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    byte_4CC3624 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___)) == 0) )
  {
    sub_1C71608(DragObject, v4);
  }
  ShopEventListViewObject__Init((ShopEventListViewObject_o *)DragObject, 2, 0, 0.0, v6);
  return v5;
}


void ShopEventListViewObject__EventMove(ShopEventListViewObject_o *this, const MethodInfo *method)
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CC3628 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    sub_1C713B0(&StringLiteral_6227/*"EventMoveFinish"*/);
    byte_4CC3628 = 1;
  }
  TargetPosition = ShopEventListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
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
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v9 = TweenPosition__Begin(dragObject, v4->static_fields->BASE_MOVE_TIME, v27, 0);
  if ( !v9 )
    sub_1C71608(0, v10);
  v11 = v9;
  v9->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11->fields.eventReceiver = gameObject;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.eventReceiver,
    (int32_t)gameObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_6227/*"EventMoveFinish"*/;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6227/*"EventMoveFinish"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.callWhenFinished, v19, v20, v21, v22, v23, v24, v25);
}


void ShopEventListViewObject__EventMoveFinish(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  int32_t initMode; // w8
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4CC3629 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    byte_4CC3629 = 1;
  }
  initMode = this->fields.initMode;
  if ( initMode == 7 || initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
    this->fields.dispMode = 2;
    ShopEventListViewObject__SetupDisp(this, v4);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v6, v7, v8, v9, v10, v11);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopEventListViewObject__CallOnMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void ShopEventListViewObject__EventStart(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Vector3_o StartPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC3627 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    sub_1C713B0(&StringLiteral_6225/*"EventMove"*/);
    byte_4CC3627 = 1;
  }
  this->fields.isBusy = 1;
  ShopEventListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  if ( initMode != 8 )
  {
    v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopEventListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                              this,
                                              this->klass->vtable._8_CreateDragObject.method);
    this->fields.dragObject = v7;
    p_dragObject = &this->fields.dragObject;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    dragObject = this->fields.dragObject;
    if ( !dragObject
      || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     dragObject,
                                                     (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___)) == 0
      || (ShopEventListViewObject__Init((ShopEventListViewObject_o *)dragObject, 2, 0, 0.0, v17),
          (dragObject = *p_dragObject) == 0)
      || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
          StartPosition = ShopEventListViewObject__GetStartPosition(this, initMode, v19),
          !transform) )
    {
      sub_1C71608(dragObject, v15);
    }
    UnityEngine_Transform__set_position(transform, StartPosition, 0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6225/*"EventMove"*/,
      delay,
      0);
  }
}


int32_t ShopEventListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 5 )
    return 0;
  else
    return dword_D226DC[initMode - 1];
}


ShopEventListViewItem_o *ShopEventListViewObject__GetItem(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC3623 & 1) == 0 )
  {
    sub_1C713B0(&ShopEventListViewItem_TypeInfo);
    byte_4CC3623 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ShopEventListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ShopEventListViewItem_TypeInfo )
    return (ShopEventListViewItem_o *)this->fields.linkItem;
  return 0;
}


UnityEngine_Vector3_o ShopEventListViewObject__GetStartPosition(
        ShopEventListViewObject_o *this,
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
      v5 = 1000.0;
      return UnityEngine_Transform__TransformPoint_71751388(transform, v6, v5, 0.0, 0);
    }
LABEL_10:
    sub_1C71608(transform, v4);
  }
  if ( initMode == 4 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      v5 = 0.0;
      v6 = 1000.0;
      return UnityEngine_Transform__TransformPoint_71751388(transform, v6, v5, 0.0, 0);
    }
    goto LABEL_10;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_10;
  return UnityEngine_Transform__get_position(transform, 0);
}


int32_t ShopEventListViewObject__GetState(ShopEventListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 8 )
    return 0;
  else
    return dword_D226F4[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o ShopEventListViewObject__GetTargetPosition(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v5; // x20
  float v6; // s0 OVERLAPPED
  float v7; // s1
  UnityEngine_Transform_o *parent; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( initMode == 6 )
  {
    dragObject = this->fields.dragObject;
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
            v14 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
            v6 = v9 + 1000.0;
            v7 = v10 + 0.0;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_19:
    sub_1C71608(dragObject, *(_QWORD *)&initMode);
  }
  if ( initMode != 5 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
      if ( dragObject )
      {
        v12 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( dragObject )
        {
          v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
          if ( v12 )
          {
            *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__InverseTransformPoint(v12, v16, 0);
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
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_19;
  v5 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_19;
  v13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v5 )
    goto LABEL_19;
  v14 = UnityEngine_Transform__InverseTransformPoint(v5, v13, 0);
  v6 = v14.fields.x + 0.0;
  v7 = v14.fields.y + 1000.0;
LABEL_13:
  v11 = v14.fields.z + 0.0;
LABEL_20:
  result.fields.z = v11;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


void ShopEventListViewObject__Init(
        ShopEventListViewObject_o *this,
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int32_t v23; // w8
  int32_t v24; // w9

  if ( (byte_4CC3625 & 1) == 0 )
  {
    sub_1C713B0(&ShopEventListViewItem_TypeInfo);
    byte_4CC3625 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (naturalAligment = ShopEventListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ShopEventListViewItem_TypeInfo )
  {
    initMode = 0;
    this->fields.initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(ShopEventListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v15, v16, v17, v18, v19, v20);
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
      v24 = (_DWORD)v22 == 8;
    this->fields.state = v24;
    if ( (unsigned int)((_DWORD)v22 - 4) > 4 )
    {
      v22 = 0;
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


void ShopEventListViewObject__OnClickEvent(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CC362A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9857/*"OnClickListViewEvent"*/);
    byte_4CC362A = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C71608(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9857/*"OnClickListViewEvent"*/, (Il2CppObject *)this, 0);
  }
}


void ShopEventListViewObject__OnDestroy(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC3622 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3622 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
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
    sub_1C71354(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void ShopEventListViewObject__OnMoveEnd(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopEventListViewObject__CallOnMoveEnd(this, method);
}


void ShopEventListViewObject__SetItem(
        ShopEventListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
}


void ShopEventListViewObject__SetupDisp(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ShopEventListViewItemDraw_o *v9; // x0

  if ( (byte_4CC3626 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ShopEventListViewItem_TypeInfo);
    byte_4CC3626 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ShopEventListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ShopEventListViewItem_TypeInfo )
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
    if ( !v9 )
      sub_1C71608(0, v7);
    ShopEventListViewItemDraw__SetItem(v9, (ShopEventListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void ShopEventListViewObject__add_onMoveEnd(
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

  if ( (byte_4CC361F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC361F = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  ShopEventListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void ShopEventListViewObject__remove_onMoveEnd(
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

  if ( (byte_4CC3620 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC3620 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  ShopEventListViewObject__Awake(v11, v12);
}