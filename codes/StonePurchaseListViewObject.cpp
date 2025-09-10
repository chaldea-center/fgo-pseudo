void StonePurchaseListViewObject___ctor(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C25316 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C25316 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void StonePurchaseListViewObject__Awake(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C25304 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewItemDraw___);
    byte_4C25304 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewItemDraw___);
  this->fields.itemDraw = (struct StonePurchaseListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *StonePurchaseListViewObject__CreateDragObject(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4C25308 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    byte_4C25308 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0) )
  {
    sub_1C2D6EC(DragObject, v4);
  }
  StonePurchaseListViewObject__Init_38498360((StonePurchaseListViewObject_o *)DragObject, 2, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__EventEnterMove(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  float v5; // s4
  float v6; // s3
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C25310 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6203/*"EventEnterMove2"*/);
    byte_4C25310 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !parent)
    || (v15 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
        v5 = v15.fields.y + 1000.0,
        v6 = v15.fields.z + 0.0,
        v15.fields.y = v15.fields.x + 0.0,
        v15.fields.z = v5,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.0,
                                                    *(UnityEngine_Vector3_o *)&v15.fields.y,
                                                    0)) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(dragObject, method);
  }
  v7 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[3].monitor = gameObject;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[3].monitor, (int32_t)gameObject, v9, v10);
  v11 = StringLiteral_6203/*"EventEnterMove2"*/;
  v7[3].fields.m_CachedPtr = StringLiteral_6203/*"EventEnterMove2"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[3].fields, v11, v12, v13);
}


void StonePurchaseListViewObject__EventEnterMove2(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C25311 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C25311 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v4, v5);
  StonePurchaseListViewObject__EventMoveEnd(this, v6);
}


void StonePurchaseListViewObject__EventEnterStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4C2530F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_1C2D490(&StringLiteral_6202/*"EventEnterMove"*/);
    byte_4C2530F = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0 )
  {
    sub_1C2D6EC(dragObject, v8);
  }
  StonePurchaseListViewObject__Init_38498360((StonePurchaseListViewObject_o *)dragObject, 2, v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6202/*"EventEnterMove"*/,
    delay,
    0);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__EventExitMove(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  float v7; // s4
  float v8; // s3
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C25313 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6208/*"EventExitMove2"*/);
    byte_4C25313 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    StonePurchaseListViewObject__EventMoveEnd(this, v4);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_13;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_13;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0), !parent)
      || (v17 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
          v7 = v17.fields.y + 0.0,
          v8 = v17.fields.z + 0.0,
          v17.fields.y = v17.fields.x + 1000.0,
          v17.fields.z = v7,
          (transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                     this->fields.dragObject,
                                                     1.0,
                                                     *(UnityEngine_Vector3_o *)&v17.fields.y,
                                                     0)) == 0) )
    {
LABEL_13:
      sub_1C2D6EC(transform, v4);
    }
    v9 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v9[3].monitor = gameObject;
    sub_1C2D434((CGThumbnailListItem_o *)&v9[3].monitor, (int32_t)gameObject, v11, v12);
    v13 = StringLiteral_6208/*"EventExitMove2"*/;
    v9[3].fields.m_CachedPtr = StringLiteral_6208/*"EventExitMove2"*/;
    sub_1C2D434((CGThumbnailListItem_o *)&v9[3].fields, v13, v14, v15);
  }
}


void StonePurchaseListViewObject__EventExitMove2(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C25314 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C25314 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v4, v5);
  StonePurchaseListViewObject__EventMoveEnd(this, v6);
}


void StonePurchaseListViewObject__EventExitStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4C25312 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6207/*"EventExitMove"*/);
    byte_4C25312 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    StonePurchaseListViewObject__EventMoveEnd(this, v8);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C2D6EC(dragObject, v8);
  StonePurchaseListViewObject__Init_38498360((StonePurchaseListViewObject_o *)Component_object, 2, v11);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6207/*"EventExitMove"*/,
    delay,
    0);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__EventIntoMove(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4C2530D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6219/*"EventIntoMove2"*/);
    byte_4C2530D = 1;
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
    sub_1C2D6EC(dragObject, method);
  }
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_1C2D434((CGThumbnailListItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11);
  v12 = StringLiteral_6219/*"EventIntoMove2"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_6219/*"EventIntoMove2"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8[3].fields, v12, v13, v14);
}


void StonePurchaseListViewObject__EventIntoMove2(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4C2530E & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C2530E = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  StonePurchaseListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v5, v6);
  StonePurchaseListViewObject__EventMoveEnd(this, v7);
}


void StonePurchaseListViewObject__EventIntoStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2530C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_1C2D490(&StringLiteral_6218/*"EventIntoMove"*/);
    byte_4C2530C = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0
    || (StonePurchaseListViewObject__Init_38498360((StonePurchaseListViewObject_o *)dragObject, 2, v11),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v13 = UnityEngine_Transform__TransformPoint_71190304((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_1C2D6EC(dragObject, v9);
  }
  UnityEngine_Transform__set_position(transform, v13, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6218/*"EventIntoMove"*/,
    delay,
    0);
}


void StonePurchaseListViewObject__EventMoveEnd(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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
    sub_1C2D434(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


StonePurchaseListViewItem_o *StonePurchaseListViewObject__GetItem(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C25306 & 1) == 0 )
  {
    sub_1C2D490(&StonePurchaseListViewItem_TypeInfo);
    byte_4C25306 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StonePurchaseListViewItem_TypeInfo )
    return (StonePurchaseListViewItem_o *)this->fields.linkItem;
  return 0;
}


void StonePurchaseListViewObject__Init(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w9
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4C25309 & 1) == 0 )
  {
    sub_1C2D490(&StonePurchaseListViewItem_TypeInfo);
    byte_4C25309 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StonePurchaseListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(StonePurchaseListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  if ( (unsigned int)v11 <= 3 )
  {
    v22 = dword_C08D30[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_C09A10 + v11);
    this->fields.state = v22;
  }
  if ( !state || dispMode != this->fields.dispMode )
    StonePurchaseListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__Init_38498360(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__Init_38499656(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__Init_38499740(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void StonePurchaseListViewObject__OnClickDetailBtn(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  StonePurchaseListViewItem_c *v7; // x10
  struct ListViewItem_o *v8; // x20
  void *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x19
  BankShopEntity_o *klass; // x20
  System_Action_o *v13; // x21
  Il2CppObject *v14; // x22
  struct StonePurchaseListViewObject___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C2530B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StonePurchaseListViewItem_TypeInfo);
    sub_1C2D490(&Method_StonePurchaseListViewObject_OnClickDetailBtn__);
    sub_1C2D490(&Method_StonePurchaseListViewObject___c__OnClickDetailBtn_b__20_0__);
    sub_1C2D490(&StonePurchaseListViewObject___c_TypeInfo);
    byte_4C2530B = 1;
  }
  v3 = Method_StonePurchaseListViewObject_OnClickDetailBtn__;
  if ( (*((_BYTE *)Method_StonePurchaseListViewObject_OnClickDetailBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_StonePurchaseListViewObject_OnClickDetailBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v7 = (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v8 = v7 == StonePurchaseListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v7 == StonePurchaseListViewItem_TypeInfo )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v8 )
          goto LABEL_21;
        v11 = (CommonUI_o *)Instance;
        klass = (BankShopEntity_o *)v8[1].klass;
        Instance = StonePurchaseListViewObject___c_TypeInfo;
        if ( !StonePurchaseListViewObject___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StonePurchaseListViewObject___c_TypeInfo);
          Instance = StonePurchaseListViewObject___c_TypeInfo;
        }
        v13 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
        if ( !v13 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = StonePurchaseListViewObject___c_TypeInfo;
          }
          v14 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v13, v14, Method_StonePurchaseListViewObject___c__OnClickDetailBtn_b__20_0__, 0);
          static_fields = StonePurchaseListViewObject___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = v13;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)v13, v16, v17);
        }
        if ( !v11 )
LABEL_21:
          sub_1C2D6EC(Instance, v10);
        CommonUI__OpenStoneShopDetailDialog(v11, klass, v13, 0);
      }
    }
  }
}


void StonePurchaseListViewObject__OnDestroy(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C25305 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25305 = 1;
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
    sub_1C2D434(p_dragObject, 0, v7, v8);
  }
}


void StonePurchaseListViewObject__SetInput(StonePurchaseListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  StonePurchaseListViewItem_o *v6; // x1
  const MethodInfo *v7; // x3
  StonePurchaseListViewItemDraw_o *v8; // x0

  if ( (byte_4C25307 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StonePurchaseListViewItem_TypeInfo);
    byte_4C25307 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C2D6EC(0, v6);
    StonePurchaseListViewItemDraw__SetInput(v8, v6, isInput, v7);
  }
}


void StonePurchaseListViewObject__SetItem(
        StonePurchaseListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
}


void StonePurchaseListViewObject__SetupDisp(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  StonePurchaseListViewItemDraw_o *v9; // x0

  if ( (byte_4C2530A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StonePurchaseListViewItem_TypeInfo);
    byte_4C2530A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != StonePurchaseListViewItem_TypeInfo )
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
      sub_1C2D6EC(0, v7);
    StonePurchaseListViewItemDraw__SetItem(v9, (StonePurchaseListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


System_String_o *StonePurchaseListViewObject__ToString(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4C25315 & 1) == 0 )
  {
    sub_1C2D490(&StonePurchaseListViewItemDraw_DispMode_TypeInfo);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    byte_4C25315 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)StonePurchaseListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DEBAB4(&v10, 0, 0, 0);
  return System_String__Concat_63496112(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void StonePurchaseListViewObject__add_callbackFunc(
        StonePurchaseListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C25302 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C25302 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  StonePurchaseListViewObject__remove_callbackFunc(v11, v12, v13);
}


void StonePurchaseListViewObject__remove_callbackFunc(
        StonePurchaseListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C25303 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C25303 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  StonePurchaseListViewObject__Awake(v11, v12);
}


void StonePurchaseListViewObject___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C25317 & 1) == 0 )
  {
    sub_1C2D490(&StonePurchaseListViewObject___c_TypeInfo);
    byte_4C25317 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(StonePurchaseListViewObject___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StonePurchaseListViewObject___c_TypeInfo->static_fields->__9 = (struct StonePurchaseListViewObject___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)StonePurchaseListViewObject___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void StonePurchaseListViewObject___c___ctor(StonePurchaseListViewObject___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseListViewObject___c___OnClickDetailBtn_b__20_0(
        StonePurchaseListViewObject___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C25318 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C25318 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__CloseStoneShopDetailDialog((CommonUI_o *)Instance, 0, 0);
}