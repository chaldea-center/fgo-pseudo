void FriendOperationItemListViewObject___ctor(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C5193C & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    byte_4C5193C = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void FriendOperationItemListViewObject__Awake(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4C51915 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___);
    byte_4C51915 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3E7C0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___);
  this->fields.itemDraw = (struct FriendOperationItemListViewItemDraw_o *)Component_object;
  sub_1C3E508(&this->fields.itemDraw, Component_object);
}


UnityEngine_GameObject_o *FriendOperationItemListViewObject__CreateDragObject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4C51919 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    byte_4C51919 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0) )
  {
    sub_1C3E7C0(DragObject, v4);
  }
  FriendOperationItemListViewObject__Init_32803716((FriendOperationItemListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void FriendOperationItemListViewObject__EventEnterMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x20
  float v7; // s9
  float v8; // s10
  float v9; // s8
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C51920 & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    sub_1C3E564(&StringLiteral_6212/*"EventEnterMove2"*/);
    byte_4C51920 = 1;
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
  v14 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  v7 = v14.fields.x + 0.0;
  v8 = v14.fields.y + 980.0;
  v9 = v14.fields.z + 0.0;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v15.fields.x = v7;
  v15.fields.y = v8;
  v15.fields.z = v9;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v15, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C3E7C0(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = gameObject;
  sub_1C3E508(&v10[3].monitor, gameObject);
  v12 = StringLiteral_6212/*"EventEnterMove2"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_6212/*"EventEnterMove2"*/;
  sub_1C3E508(&v10[3].fields, v12);
}


void FriendOperationItemListViewObject__EventEnterMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4C51921 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C51921 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C3E508(&this->fields.dragObject, 0);
  FriendOperationItemListViewObject__EventMoveEnd(this, v4);
}


void FriendOperationItemListViewObject__EventEnterStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C5191F & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_1C3E564(&StringLiteral_6211/*"EventEnterMove"*/);
    byte_4C5191F = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C3E508(&this->fields.dragObject, v5);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0 )
  {
    sub_1C3E7C0(dragObject, v6);
  }
  FriendOperationItemListViewObject__Init_32803716((FriendOperationItemListViewObject_o *)dragObject, 2, v8);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6211/*"EventEnterMove"*/,
    delay,
    0);
}


void FriendOperationItemListViewObject__EventExitMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
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
  __int64 v14; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C51923 & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_6217/*"EventExitMove2"*/);
    byte_4C51923 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v4);
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
    v16 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v7 = this->fields.dragObject;
    v8 = ListViewObject_TypeInfo;
    v9 = v16.fields.x + 980.0;
    v10 = v16.fields.y + 0.0;
    v11 = v16.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v8 = ListViewObject_TypeInfo;
    }
    v17.fields.x = v9;
    v17.fields.y = v10;
    v17.fields.z = v11;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v7, v8->static_fields->BASE_MOVE_TIME, v17, 0);
    if ( !transform )
LABEL_15:
      sub_1C3E7C0(transform, v4);
    v12 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v12[3].monitor = gameObject;
    sub_1C3E508(&v12[3].monitor, gameObject);
    v14 = StringLiteral_6217/*"EventExitMove2"*/;
    v12[3].fields.m_CachedPtr = StringLiteral_6217/*"EventExitMove2"*/;
    sub_1C3E508(&v12[3].fields, v14);
  }
}


void FriendOperationItemListViewObject__EventExitMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4C51924 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C51924 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C3E508(&this->fields.dragObject, 0);
  FriendOperationItemListViewObject__EventMoveEnd(this, v4);
}


void FriendOperationItemListViewObject__EventExitStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4C51922 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_6216/*"EventExitMove"*/);
    byte_4C51922 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C3E508(&this->fields.dragObject, v5);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v6);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C3E7C0(dragObject, v6);
  FriendOperationItemListViewObject__Init_32803716((FriendOperationItemListViewObject_o *)Component_object, 2, v9);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6216/*"EventExitMove"*/,
    delay,
    0);
}


void FriendOperationItemListViewObject__EventIntoMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C5191D & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    sub_1C3E564(&StringLiteral_6228/*"EventIntoMove2"*/);
    byte_4C5191D = 1;
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
  v14 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  x = v14.fields.x;
  y = v14.fields.y;
  z = v14.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v15, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C3E7C0(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = gameObject;
  sub_1C3E508(&v10[3].monitor, gameObject);
  v12 = StringLiteral_6228/*"EventIntoMove2"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_6228/*"EventIntoMove2"*/;
  sub_1C3E508(&v10[3].fields, v12);
}


void FriendOperationItemListViewObject__EventIntoMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4C5191E & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5191E = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  FriendOperationItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C3E508(&this->fields.dragObject, 0);
  FriendOperationItemListViewObject__EventMoveEnd(this, v5);
}


void FriendOperationItemListViewObject__EventIntoStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5191C & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_1C3E564(&StringLiteral_6227/*"EventIntoMove"*/);
    byte_4C5191C = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_1C3E508(&this->fields.dragObject, v5);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0
    || (FriendOperationItemListViewObject__Init_32803716((FriendOperationItemListViewObject_o *)dragObject, 2, v9),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v11 = UnityEngine_Transform__TransformPoint_71368164((UnityEngine_Transform_o *)dragObject, 980.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_1C3E7C0(dragObject, v7);
  }
  UnityEngine_Transform__set_position(transform, v11, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6227/*"EventIntoMove"*/,
    delay,
    0);
}


void FriendOperationItemListViewObject__EventMoveEnd(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 8) = 0;
  *((_DWORD *)p_callbackFunc - 1) = 1;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C3E508(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


FriendOperationItemListViewItem_o *FriendOperationItemListViewObject__GetItem(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C51917 & 1) == 0 )
  {
    sub_1C3E564(&FriendOperationItemListViewItem_TypeInfo);
    byte_4C51917 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
    return (FriendOperationItemListViewItem_o *)this->fields.linkItem;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewObject__Init(
        FriendOperationItemListViewObject_o *this,
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
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w9
  int32_t v20; // w8
  struct System_Action_o *v21; // x19

  if ( (byte_4C5191A & 1) == 0 )
  {
    sub_1C3E564(&FriendOperationItemListViewItem_TypeInfo);
    byte_4C5191A = 1;
  }
  if ( initMode == 7 )
  {
    FriendOperationItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
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
    ((void (__fastcall *)(FriendOperationItemListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      v12 == 3,
      this->klass->vtable._9_SetInput.method);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C3E7C0(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C3E508(&this->fields.callbackFunc, callbackFunc);
    v19 = 1;
    v20 = v12;
    switch ( v12 )
    {
      case 0:
      case 2:
        goto LABEL_17;
      case 1:
        v20 = v12;
        goto LABEL_16;
      case 3:
        v20 = 2;
LABEL_16:
        v19 = v12;
LABEL_17:
        this->fields.dispMode = v20;
        this->fields.state = v19;
        goto LABEL_18;
      case 4:
        this->fields.dispMode = 0;
        this->fields.state = 2;
        FriendOperationItemListViewObject__EventIntoStart(this, delay, v18);
        return;
      case 6:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        FriendOperationItemListViewObject__EventExitStart(this, delay, v18);
        return;
      default:
LABEL_18:
        if ( !state || dispMode != this->fields.dispMode )
          FriendOperationItemListViewObject__SetupDisp(this, v18);
        v21 = *p_callbackFunc;
        if ( *p_callbackFunc )
        {
          *p_callbackFunc = 0;
          sub_1C3E508(p_callbackFunc, 0);
          ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(
            v21->fields.method_code,
            v21->fields.method);
        }
        break;
    }
  }
}


void FriendOperationItemListViewObject__InitItem(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewObject__Init_32803716(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  FriendOperationItemListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewObject__Init_32804788(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  FriendOperationItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewObject__Init_32805916(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  FriendOperationItemListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void FriendOperationItemListViewObject__OnClickAccept(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C51934 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9850/*"OnClickListViewAccept"*/);
    byte_4C51934 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C3E7C0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9850/*"OnClickListViewAccept"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickAppendSkill(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C5192D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9849/*"OnClickListView"*/);
    byte_4C5192D = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C3E7C0(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9849/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void FriendOperationItemListViewObject__OnClickCancel(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C51936 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9852/*"OnClickListViewCancel"*/);
    byte_4C51936 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C3E7C0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9852/*"OnClickListViewCancel"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.linkItem )
    ListViewObject__OnClick((ListViewObject_o *)this, 0);
}


void FriendOperationItemListViewObject__OnClickOffer(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C51933 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9857/*"OnClickListViewOffer"*/);
    byte_4C51933 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C3E7C0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9857/*"OnClickListViewOffer"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickReject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C51935 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9858/*"OnClickListViewReject"*/);
    byte_4C51935 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C3E7C0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9858/*"OnClickListViewReject"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickRemove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  FriendOperationItemListViewItem_c *v4; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *manager; // x8
  System_String_o *v7; // x1

  if ( (byte_4C51937 & 1) == 0 )
  {
    sub_1C3E564(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C3E564(&StringLiteral_9859/*"OnClickListViewRemove"*/);
    sub_1C3E564(&StringLiteral_22419/*"onClickListViewBlacklistRemove"*/);
    byte_4C51937 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = FriendOperationItemListViewItem_TypeInfo;
    naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
    {
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        if ( LODWORD(linkItem[1].klass) == 8 )
          v7 = (System_String_o *)StringLiteral_22419/*"onClickListViewBlacklistRemove"*/;
        else
          v7 = (System_String_o *)StringLiteral_9859/*"OnClickListViewRemove"*/;
        UnityEngine_Component__SendMessage(manager, v7, (Il2CppObject *)this, 0);
        return;
      }
    }
    else
    {
      linkItem = (struct ListViewItem_o *)sub_1C3EA80(linkItem);
    }
    sub_1C3E7C0(linkItem, v4);
  }
}


void FriendOperationItemListViewObject__OnClickSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C51926 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9849/*"OnClickListView"*/);
    byte_4C51926 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C3E7C0(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9849/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void FriendOperationItemListViewObject__OnClickSkill13(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C5192B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9849/*"OnClickListView"*/);
    byte_4C5192B = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C3E7C0(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9849/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void FriendOperationItemListViewObject__OnClickSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C51929 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9849/*"OnClickListView"*/);
    byte_4C51929 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C3E7C0(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9849/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void FriendOperationItemListViewObject__OnClickSupportClassBoardBuff(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C5193B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_10006/*"OpenSupportClassBoard"*/);
    byte_4C5193B = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C3E7C0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10006/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickSupportInfo(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  OtherUserGameEntity_o *monitor; // x21
  int32_t klass; // w22
  SupportInfoJump_o *v11; // x19
  const MethodInfo *v12; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  int32_t v14; // w20

  if ( (byte_4C5193A & 1) == 0 )
  {
    sub_1C3E564(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C3E564(&Method_FriendOperationItemListViewObject_OnClickSupportInfo__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&SupportInfoJump_TypeInfo);
    byte_4C5193A = 1;
  }
  if ( this->fields.linkItem )
  {
    v3 = Method_FriendOperationItemListViewObject_OnClickSupportInfo__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewObject_OnClickSupportInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_FriendOperationItemListViewObject_OnClickSupportInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_16;
    naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != FriendOperationItemListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    monitor = (OtherUserGameEntity_o *)linkItem[1].monitor;
    klass = (int32_t)linkItem[1].klass;
    v11 = (SupportInfoJump_o *)sub_1C3E7B0(SupportInfoJump_TypeInfo);
    SupportInfoJump___ctor(v11, monitor, klass, 0, 0);
    ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                      (FriendOperationItemListViewItem_o *)linkItem,
                      v12);
    v14 = 60;
    if ( ServantLeader )
    {
      if ( ServantLeaderInfo__get_IsGrandSvt(ServantLeader, 0) )
        v14 = 43;
      else
        v14 = 60;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
LABEL_16:
      sub_1C3E7C0(Instance, v6);
    AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, v14, 1, (Il2CppObject *)v11, 0);
  }
}


void FriendOperationItemListViewObject__OnDestroy(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4C51916 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51916 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0);
    *p_dragObject = 0;
    sub_1C3E508(p_dragObject, 0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C5192E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    sub_1C3E564(&StringLiteral_9923/*"OnLongPushAppendSkill1ListView"*/);
    byte_4C5192E = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9923/*"OnLongPushAppendSkill1ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C5192F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9924/*"OnLongPushAppendSkill2ListView"*/);
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C5192F = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9924/*"OnLongPushAppendSkill2ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C51930 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9925/*"OnLongPushAppendSkill3ListView"*/);
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C51930 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9925/*"OnLongPushAppendSkill3ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill4(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C51931 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    sub_1C3E564(&StringLiteral_9926/*"OnLongPushAppendSkill4ListView"*/);
    byte_4C51931 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9926/*"OnLongPushAppendSkill4ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill5(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C51932 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9927/*"OnLongPushAppendSkill5ListView"*/);
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C51932 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9927/*"OnLongPushAppendSkill5ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C51927 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9929/*"OnLongPushServantEquip"*/);
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C51927 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9929/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C51928 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9930/*"OnLongPushSkill1ListView"*/);
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C51928 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9930/*"OnLongPushSkill1ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C5192A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9931/*"OnLongPushSkill2ListView"*/);
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C5192A = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9931/*"OnLongPushSkill2ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C5192C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9932/*"OnLongPushSkill3ListView"*/);
    sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C5192C = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9932/*"OnLongPushSkill3ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__SetInput(
        FriendOperationItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  FriendOperationItemListViewItemDraw_o *v10; // x0

  if ( (byte_4C51918 & 1) == 0 )
  {
    sub_1C3E564(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51918 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C3E7C0(0, v9);
    FriendOperationItemListViewItemDraw__SetInput(v10, (FriendOperationItemListViewItem_o *)v9, isInput, v6);
  }
}


void FriendOperationItemListViewObject__SetItem(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43886976((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void FriendOperationItemListViewObject__SetItem_32813924(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void FriendOperationItemListViewObject__SetupDisp(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  FriendOperationItemListViewItemDraw_o *v9; // x0

  if ( (byte_4C5191B & 1) == 0 )
  {
    sub_1C3E564(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5191B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != FriendOperationItemListViewItem_TypeInfo )
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
      sub_1C3E7C0(0, v7);
    FriendOperationItemListViewItemDraw__SetItem(
      v9,
      (FriendOperationItemListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void FriendOperationItemListViewObject__UpdateLock(
        FriendOperationItemListViewObject_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C3E7C0(0, item);
  FriendOperationItemListViewItemDraw__UpdateLockUI(itemDraw, item, method);
}


void FriendOperationItemListViewObject__add_callbackFunc(
        FriendOperationItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C51913 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C51913 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationItemListViewObject_o *)sub_1C3EA80(v8);
  FriendOperationItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void FriendOperationItemListViewObject__onClickMessageDisp(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C51939 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22420/*"onClickListViewMessageDisp"*/);
    byte_4C51939 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C3E7C0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_22420/*"onClickListViewMessageDisp"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__onClickRegist(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C51938 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22418/*"onClickListViewBlacklistRegist"*/);
    byte_4C51938 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C3E7C0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_22418/*"onClickListViewBlacklistRegist"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__remove_callbackFunc(
        FriendOperationItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C51914 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C51914 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationItemListViewObject_o *)sub_1C3EA80(v8);
  FriendOperationItemListViewObject__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewObject__setMessageButtonUI(
        FriendOperationItemListViewObject_o *this,
        bool disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  FriendOperationItemListViewItemDraw_o *itemDraw; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1

  if ( (byte_4C51925 & 1) == 0 )
  {
    sub_1C3E564(&FriendOperationItemListViewItem_TypeInfo);
    byte_4C51925 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C3E7C0(0, disp);
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  FriendOperationItemListViewItemDraw__setMessageButtonUI(itemDraw, (FriendOperationItemListViewItem_o *)v9, disp, v3);
}