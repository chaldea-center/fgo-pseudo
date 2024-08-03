void __fastcall FriendOperationItemListViewObject___ctor(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F787C & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    byte_49F787C = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__Awake(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_49F7855 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___, method);
    byte_49F7855 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  this->fields.itemDraw = (struct FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            dispObject,
                                                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___);
  sub_1B6406C(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall FriendOperationItemListViewObject__CreateDragObject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  const MethodInfo *v5; // x2

  if ( (byte_49F7859 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, method);
    byte_49F7859 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0LL) )
  {
    sub_1B64324(DragObject);
  }
  FriendOperationItemListViewObject__Init_30645388((FriendOperationItemListViewObject_o *)DragObject, 2, v5);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventEnterMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v6; // s0
  ListViewObject_c *v9; // x0
  UnityEngine_GameObject_o *v10; // x20
  float v11; // s9
  float v12; // s10
  float v13; // s8
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49F7860 & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6148/*"EventEnterMove2"*/, v3);
    byte_49F7860 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_11;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_11;
  v15 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = ListViewObject_TypeInfo;
  v10 = this->fields.dragObject;
  v11 = v15.fields.x + 0.0;
  v12 = v15.fields.y + 980.0;
  v13 = v15.fields.z + 0.0;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v16.fields.x = v11;
  v16.fields.y = v12;
  v16.fields.z = v13;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v9->static_fields->BASE_MOVE_TIME, v16, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1B64324(dragObject);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1B6406C(&v14[3].monitor);
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6148/*"EventEnterMove2"*/;
  sub_1B6406C(&v14[3].fields);
}


void __fastcall FriendOperationItemListViewObject__EventEnterMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_49F7861 & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    byte_49F7861 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B6406C(&this->fields.dragObject);
  FriendOperationItemListViewObject__EventMoveEnd(this, v4);
}


void __fastcall FriendOperationItemListViewObject__EventEnterStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v7; // x2

  if ( (byte_49F785F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, method);
    sub_1B640C8(&StringLiteral_6147/*"EventEnterMove"*/, v5);
    byte_49F785F = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1B6406C(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0LL )
  {
    sub_1B64324(dragObject);
  }
  FriendOperationItemListViewObject__Init_30645388((FriendOperationItemListViewObject_o *)dragObject, 2, v7);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6147/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventExitMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x20
  ListViewObject_c *v13; // x0
  float v14; // s8
  float v15; // s10
  float v16; // s9
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49F7863 & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_6150/*"EventExitMove2"*/, v4);
    byte_49F7863 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v6);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_15;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_15;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_15;
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_15;
    v18 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = this->fields.dragObject;
    v13 = ListViewObject_TypeInfo;
    v14 = v18.fields.x + 980.0;
    v15 = v18.fields.y + 0.0;
    v16 = v18.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v13 = ListViewObject_TypeInfo;
    }
    v19.fields.x = v14;
    v19.fields.y = v15;
    v19.fields.z = v16;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v13->static_fields->BASE_MOVE_TIME, v19, 0LL);
    if ( !transform )
LABEL_15:
      sub_1B64324(transform);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    transform[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    sub_1B6406C(&v17[3].monitor);
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6150/*"EventExitMove2"*/;
    sub_1B6406C(&v17[3].fields);
  }
}


void __fastcall FriendOperationItemListViewObject__EventExitMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_49F7864 & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    byte_49F7864 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B6406C(&this->fields.dragObject);
  FriendOperationItemListViewObject__EventMoveEnd(this, v4);
}


void __fastcall FriendOperationItemListViewObject__EventExitStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_49F7862 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6149/*"EventExitMove"*/, v6);
    byte_49F7862 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1B6406C(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v9);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1B64324(dragObject);
  FriendOperationItemListViewObject__Init_30645388((FriendOperationItemListViewObject_o *)Component_object, 2, v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6149/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventIntoMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v6; // s0
  ListViewObject_c *v9; // x0
  UnityEngine_GameObject_o *v10; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49F785D & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6160/*"EventIntoMove2"*/, v3);
    byte_49F785D = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_11;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_11;
  v15 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = ListViewObject_TypeInfo;
  v10 = this->fields.dragObject;
  x = v15.fields.x;
  y = v15.fields.y;
  z = v15.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v9->static_fields->BASE_MOVE_TIME, v16, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1B64324(dragObject);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1B6406C(&v14[3].monitor);
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6160/*"EventIntoMove2"*/;
  sub_1B6406C(&v14[3].fields);
}


void __fastcall FriendOperationItemListViewObject__EventIntoMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_49F785E & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    byte_49F785E = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  FriendOperationItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B6406C(&this->fields.dragObject);
  FriendOperationItemListViewObject__EventMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventIntoStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0

  if ( (byte_49F785C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, method);
    sub_1B640C8(&StringLiteral_6159/*"EventIntoMove"*/, v5);
    byte_49F785C = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  sub_1B6406C(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0LL
    || (FriendOperationItemListViewObject__Init_30645388((FriendOperationItemListViewObject_o *)dragObject, 2, v8),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__TransformPoint_69152324(
                                           (UnityEngine_Transform_o *)dragObject,
                                           980.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B64324(dragObject);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6159/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall FriendOperationItemListViewObject__EventMoveEnd(
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
    *p_callbackFunc = 0LL;
    sub_1B6406C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


FriendOperationItemListViewItem_o *__fastcall FriendOperationItemListViewObject__GetItem(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49F7857 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, method);
    byte_49F7857 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewItem_TypeInfo )
    return (FriendOperationItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__Init(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v12; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // w9
  int32_t v19; // w8
  struct System_Action_o *v20; // x19

  if ( (byte_49F785A & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_49F785A = 1;
  }
  if ( initMode == 7 )
  {
    FriendOperationItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewItem_TypeInfo )
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
    ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0LL);
    ((void (__fastcall *)(FriendOperationItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      v12 == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1B64324(transform);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1B6406C(&this->fields.callbackFunc);
    v18 = 1;
    v19 = v12;
    switch ( v12 )
    {
      case 0:
      case 2:
        goto LABEL_17;
      case 1:
        v19 = v12;
        goto LABEL_16;
      case 3:
        v19 = 2;
LABEL_16:
        v18 = v12;
LABEL_17:
        this->fields.dispMode = v19;
        this->fields.state = v18;
        goto LABEL_18;
      case 4:
        this->fields.dispMode = 0;
        this->fields.state = 2;
        FriendOperationItemListViewObject__EventIntoStart(this, delay, v17);
        return;
      case 6:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        FriendOperationItemListViewObject__EventExitStart(this, delay, v17);
        return;
      default:
LABEL_18:
        if ( !state || dispMode != this->fields.dispMode )
          FriendOperationItemListViewObject__SetupDisp(this, v17);
        v20 = *p_callbackFunc;
        if ( *p_callbackFunc )
        {
          *p_callbackFunc = 0LL;
          sub_1B6406C(p_callbackFunc);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
            v20->fields.original_method_info,
            *(_QWORD *)&v20->fields.extra_arg);
        }
        break;
    }
  }
}


void __fastcall FriendOperationItemListViewObject__InitItem(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__Init_30645388(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  FriendOperationItemListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__Init_30646460(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  FriendOperationItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__Init_30647588(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  FriendOperationItemListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void __fastcall FriendOperationItemListViewObject__OnClickAccept(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F7874 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9803/*"OnClickListViewAccept"*/, method);
    byte_49F7874 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64324(0LL);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9803/*"OnClickListViewAccept"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickAppendSkill(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F786D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9802/*"OnClickListView"*/, method);
    byte_49F786D = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B64324(0LL);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9802/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickCancel(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F7876 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9805/*"OnClickListViewCancel"*/, method);
    byte_49F7876 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64324(0LL);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9805/*"OnClickListViewCancel"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.linkItem )
    ListViewObject__OnClick((ListViewObject_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickOffer(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F7873 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9810/*"OnClickListViewOffer"*/, method);
    byte_49F7873 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64324(0LL);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9810/*"OnClickListViewOffer"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickReject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F7875 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9811/*"OnClickListViewReject"*/, method);
    byte_49F7875 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64324(0LL);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9811/*"OnClickListViewReject"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickRemove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *manager; // x8
  System_String_o *v8; // x1

  if ( (byte_49F7877 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9812/*"OnClickListViewRemove"*/, v3);
    sub_1B640C8(&StringLiteral_22156/*"onClickListViewBlacklistRemove"*/, v4);
    byte_49F7877 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewItem_TypeInfo )
    {
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        if ( LODWORD(linkItem[1].klass) == 8 )
          v8 = (System_String_o *)StringLiteral_22156/*"onClickListViewBlacklistRemove"*/;
        else
          v8 = (System_String_o *)StringLiteral_9812/*"OnClickListViewRemove"*/;
        UnityEngine_Component__SendMessage(manager, v8, (Il2CppObject *)this, 0LL);
        return;
      }
    }
    else
    {
      linkItem = (struct ListViewItem_o *)sub_1B645E4(linkItem);
    }
    sub_1B64324(linkItem);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F7866 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9802/*"OnClickListView"*/, method);
    byte_49F7866 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B64324(0LL);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9802/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill13(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F786B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9802/*"OnClickListView"*/, method);
    byte_49F786B = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B64324(0LL);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9802/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F7869 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9802/*"OnClickListView"*/, method);
    byte_49F7869 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B64324(0LL);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9802/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSupportClassBoardBuff(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F787B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9958/*"OpenSupportClassBoard"*/, method);
    byte_49F787B = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64324(0LL);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9958/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickSupportInfo(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  OtherUserGameEntity_o *monitor; // x20
  int32_t klass; // w21
  SupportInfoJump_o *v15; // x19

  if ( (byte_49F787A & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, method);
    sub_1B640C8(&Method_FriendOperationItemListViewObject_OnClickSupportInfo__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B640C8(&SupportInfoJump_TypeInfo, v5);
    byte_49F787A = 1;
  }
  if ( this->fields.linkItem )
  {
    v6 = Method_FriendOperationItemListViewObject_OnClickSupportInfo__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewObject_OnClickSupportInfo__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0();
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    linkItem = this->fields.linkItem;
    if ( !linkItem
      || (methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewItem_TypeInfo
      || (monitor = (OtherUserGameEntity_o *)linkItem[1].monitor,
          klass = (int32_t)linkItem[1].klass,
          v15 = (SupportInfoJump_o *)sub_1B64314(SupportInfoJump_TypeInfo, v9, v10),
          SupportInfoJump___ctor(v15, monitor, klass, 0, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_1B64324(Instance);
    }
    AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 60, 1, (Il2CppObject *)v15, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnDestroy(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_49F7856 & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F7856 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_1B6406C(p_dragObject);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F786E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, method);
    sub_1B640C8(&StringLiteral_9871/*"OnLongPushAppendSkill1ListView"*/, v3);
    byte_49F786E = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9871/*"OnLongPushAppendSkill1ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F786F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9872/*"OnLongPushAppendSkill2ListView"*/, method);
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, v3);
    byte_49F786F = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9872/*"OnLongPushAppendSkill2ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F7870 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9873/*"OnLongPushAppendSkill3ListView"*/, method);
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, v3);
    byte_49F7870 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9873/*"OnLongPushAppendSkill3ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill4(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F7871 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, method);
    sub_1B640C8(&StringLiteral_9874/*"OnLongPushAppendSkill4ListView"*/, v3);
    byte_49F7871 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9874/*"OnLongPushAppendSkill4ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill5(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F7872 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9875/*"OnLongPushAppendSkill5ListView"*/, method);
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, v3);
    byte_49F7872 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9875/*"OnLongPushAppendSkill5ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F7867 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9877/*"OnLongPushServantEquip"*/, method);
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, v3);
    byte_49F7867 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9877/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F7868 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9878/*"OnLongPushSkill1ListView"*/, method);
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, v3);
    byte_49F7868 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9878/*"OnLongPushSkill1ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F786A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9879/*"OnLongPushSkill2ListView"*/, method);
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, v3);
    byte_49F786A = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9879/*"OnLongPushSkill2ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F786C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9880/*"OnLongPushSkill3ListView"*/, method);
    sub_1B640C8(&StringLiteral_9895/*"OnPressCancel"*/, v3);
    byte_49F786C = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69109196(gameObject, (System_String_o *)StringLiteral_9895/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9880/*"OnLongPushSkill3ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__SetInput(
        FriendOperationItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v9; // x1
  FriendOperationItemListViewItemDraw_o *v10; // x0

  if ( (byte_49F7858 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, isInput);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F7858 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1B64324(0LL);
    FriendOperationItemListViewItemDraw__SetInput(v10, (FriendOperationItemListViewItem_o *)v9, isInput, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__SetItem(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40419096((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall FriendOperationItemListViewObject__SetItem_30655636(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall FriendOperationItemListViewObject__SetupDisp(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  FriendOperationItemListViewItemDraw_o *v8; // x0

  if ( (byte_49F785B & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F785B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1B64324(0LL);
    FriendOperationItemListViewItemDraw__SetItem(
      v8,
      (FriendOperationItemListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__UpdateLock(
        FriendOperationItemListViewObject_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B64324(0LL);
  FriendOperationItemListViewItemDraw__UpdateLockUI(itemDraw, item, 0LL);
}


void __fastcall FriendOperationItemListViewObject__add_callbackFunc(
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

  if ( (byte_49F7853 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F7853 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationItemListViewObject_o *)sub_1B645E4(v8);
  FriendOperationItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FriendOperationItemListViewObject__onClickMessageDisp(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F7879 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22157/*"onClickListViewMessageDisp"*/, method);
    byte_49F7879 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64324(0LL);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_22157/*"onClickListViewMessageDisp"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__onClickRegist(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49F7878 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22155/*"onClickListViewBlacklistRegist"*/, method);
    byte_49F7878 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64324(0LL);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_22155/*"onClickListViewBlacklistRegist"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__remove_callbackFunc(
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

  if ( (byte_49F7854 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F7854 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationItemListViewObject_o *)sub_1B645E4(v8);
  FriendOperationItemListViewObject__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__setMessageButtonUI(
        FriendOperationItemListViewObject_o *this,
        bool disp,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *itemDraw; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v8; // x1

  if ( (byte_49F7865 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, disp);
    byte_49F7865 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B64324(0LL);
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewItem_TypeInfo )
      v8 = this->fields.linkItem;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  FriendOperationItemListViewItemDraw__setMessageButtonUI(itemDraw, (FriendOperationItemListViewItem_o *)v8, disp, 0LL);
}