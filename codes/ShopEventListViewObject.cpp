void ShopEventListViewObject___ctor(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C859 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596C859 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ShopEventListViewObject__Awake(ShopEventListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596C84F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewItemDraw___);
    byte_596C84F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewItemDraw___);
  this->fields.itemDraw = (struct ShopEventListViewItemDraw_o *)Component_object;
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


void ShopEventListViewObject__CallOnMoveEnd(ShopEventListViewObject_o *this, const MethodInfo *method)
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


UnityEngine_GameObject_o *ShopEventListViewObject__CreateDragObject(
        ShopEventListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_596C852 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    byte_596C852 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  ShopEventListViewObject__Init((ShopEventListViewObject_o *)DragObject, 2, 0, 0.0, v6);
  return v5;
}


void ShopEventListViewObject__EventMove(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewObject_c *v6; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  TweenPosition_o *v8; // x0
  __int64 v9; // x1
  TweenPosition_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Vector3_o TargetPosition; // 0:kr00_12.12

  if ( (byte_596C856 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6499/*"EventMoveFinish"*/);
    byte_596C856 = 1;
  }
  TargetPosition = ShopEventListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  v6 = ListViewObject_TypeInfo;
  dragObject = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v4, v5);
    v6 = ListViewObject_TypeInfo;
  }
  v8 = TweenPosition__Begin(dragObject, v6->static_fields->BASE_MOVE_TIME, TargetPosition, 0);
  if ( !v8 )
    sub_2213CDC(0, v9);
  v10 = v8;
  v8->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10->fields.eventReceiver = gameObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.eventReceiver,
    (int32_t)gameObject,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_6499/*"EventMoveFinish"*/;
  v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6499/*"EventMoveFinish"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.callWhenFinished, v18, v19, v20, v21, v22, v23, v24);
}


void ShopEventListViewObject__EventMoveFinish(ShopEventListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596C857 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596C857 = 1;
  }
  initMode = this->fields.initMode;
  if ( initMode == 7 || initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
    this->fields.dispMode = 2;
    ShopEventListViewObject__SetupDisp(this, v5);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopEventListViewObject__CallOnMoveEnd(this, v13);
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

  if ( (byte_596C855 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    sub_2213A60(&StringLiteral_6497/*"EventMove"*/);
    byte_596C855 = 1;
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    dragObject = this->fields.dragObject;
    if ( !dragObject
      || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     dragObject,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___)) == 0
      || (ShopEventListViewObject__Init((ShopEventListViewObject_o *)dragObject, 2, 0, 0.0, v17),
          (dragObject = *p_dragObject) == 0)
      || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
          StartPosition = ShopEventListViewObject__GetStartPosition(this, initMode, v19),
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


int32_t ShopEventListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 5 )
    return 0;
  else
    return dword_ED9480[initMode - 1];
}


ShopEventListViewItem_o *ShopEventListViewObject__GetItem(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596C851 & 1) == 0 )
  {
    sub_2213A60(&ShopEventListViewItem_TypeInfo);
    byte_596C851 = 1;
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
  __int64 v5; // x1
  float v6; // s1
  float v7; // s0
  UnityEngine_Vector3_o v11; // 0:kr00_12.12
  UnityEngine_Vector3_o position; // 0:kr14_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( initMode == 7 )
  {
    if ( transform )
    {
      v7 = 0.0;
      v6 = 1000.0;
      goto LABEL_7;
    }
LABEL_10:
    sub_2213CDC(transform, v5);
  }
  if ( initMode == 4 )
  {
    if ( transform )
    {
      v6 = 0.0;
      v7 = 1000.0;
LABEL_7:
      v11 = UnityEngine_Transform__TransformPoint_83496448(transform, v7, v6, 0.0, 0);
      result.fields.x = v11.fields.x;
      result.fields.y = v11.fields.y;
      result.fields.z = v11.fields.z;
      return result;
    }
    goto LABEL_10;
  }
  if ( !transform )
    goto LABEL_10;
  position = UnityEngine_Transform__get_position(transform, 0);
  result.fields.x = position.fields.x;
  result.fields.y = position.fields.y;
  result.fields.z = position.fields.z;
  return result;
}


int32_t ShopEventListViewObject__GetState(ShopEventListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 8 )
    return 0;
  else
    return dword_ED9498[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o ShopEventListViewObject__GetTargetPosition(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v5; // x20
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v10; // x20
  float z; // s2
  UnityEngine_Vector3_o v12; // 0:kr14_12.12
  UnityEngine_Vector3_o v13; // 0:kr34_12.12
  UnityEngine_Vector3_o v14; // 0:kr54_12.12
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  dragObject = this->fields.dragObject;
  if ( initMode == 6 )
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
            v13 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
            z = v13.fields.z;
            result.fields.x = v13.fields.x + 1000.0;
            result.fields.y = v13.fields.y + 0.0;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_19:
    sub_2213CDC(dragObject, *(_QWORD *)&initMode);
  }
  if ( initMode == 5 )
  {
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
      if ( dragObject )
      {
        v5 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( dragObject )
        {
          v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
          if ( v5 )
          {
            v12 = UnityEngine_Transform__InverseTransformPoint(v5, v15, 0);
            z = v12.fields.z;
            result.fields.x = v12.fields.x + 0.0;
            result.fields.y = v12.fields.y + 1000.0;
LABEL_13:
            result.fields.z = z + 0.0;
            return result;
          }
        }
      }
    }
    goto LABEL_19;
  }
  if ( !dragObject )
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_19;
  v10 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_19;
  v17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v10 )
    goto LABEL_19;
  v14 = UnityEngine_Transform__InverseTransformPoint(v10, v17, 0);
  result.fields.x = v14.fields.x;
  result.fields.y = v14.fields.y;
  result.fields.z = v14.fields.z;
  return result;
}


void ShopEventListViewObject__Init(
        ShopEventListViewObject_o *this,
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
  ShopEventListViewObject_o *v22; // x0
  const MethodInfo *v23; // x2
  int32_t v24; // w20
  int32_t v25; // w24
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2

  if ( (byte_596C853 & 1) == 0 )
  {
    sub_2213A60(&ShopEventListViewItem_TypeInfo);
    byte_596C853 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        naturalAligment = ShopEventListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopEventListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != ShopEventListViewItem_TypeInfo )
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
  if ( (unsigned int)(v24 - 1) >= 3 )
    v25 = 0;
  else
    v25 = this->fields.initMode;
  this->fields.dispMode = v25;
  this->fields.state = ShopEventListViewObject__GetState(v22, v24, v23);
  if ( (unsigned int)(v24 - 4) > 4 )
  {
    if ( !state || dispMode != v25 )
      ShopEventListViewObject__SetupDisp(this, v26);
    ShopEventListViewObject__CallOnMoveEnd(this, v26);
  }
  else
  {
    ShopEventListViewObject__EventStart(this, v24, delay, v27);
  }
}


void ShopEventListViewObject__OnClickEvent(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596C858 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10255/*"OnClickListViewEvent"*/);
    byte_596C858 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10255/*"OnClickListViewEvent"*/, (Il2CppObject *)this, 0);
  }
}


void ShopEventListViewObject__OnDestroy(ShopEventListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596C850 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C850 = 1;
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
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void ShopEventListViewObject__SetupDisp(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  ShopEventListViewItemDraw_o *v11; // x0

  if ( (byte_596C854 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopEventListViewItem_TypeInfo);
    byte_596C854 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    ShopEventListViewItemDraw__SetItem(v11, (ShopEventListViewItem_o *)linkItem, this->fields.dispMode, v10);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ShopEventListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C84D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C84D = 1;
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
    v11 = sub_224B48C(p_onMoveEnd, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ShopEventListViewObject__remove_onMoveEnd(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ShopEventListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C84E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C84E = 1;
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
    v11 = sub_224B48C(p_onMoveEnd, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ShopEventListViewObject__Awake(v13, v14);
}