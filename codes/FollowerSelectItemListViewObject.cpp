void FollowerSelectItemListViewObject___ctor(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C21E86 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C21E86 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void FollowerSelectItemListViewObject__Awake(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C21E64 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___);
    byte_4C21E64 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  this->fields.itemDraw = (struct FollowerSelectItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                           dispObject,
                                                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___);
  sub_1C2D434(&this->fields.itemDraw);
}


void FollowerSelectItemListViewObject__ChangeDisplaySkill(
        FollowerSelectItemListViewObject_o *this,
        int32_t displaySkill,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x2
  FollowerSelectItemListViewItemDraw_o *v10; // x0

  if ( (byte_4C21E84 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E84 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
      sub_1C2D6EC(0, v6);
    FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(v10, displaySkill, (FollowerSelectItemListViewItem_o *)v9, 0);
  }
}


UnityEngine_GameObject_o *FollowerSelectItemListViewObject__CreateDragObject(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4C21E6A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    byte_4C21E6A = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0) )
  {
    sub_1C2D6EC(DragObject, v4);
  }
  FollowerSelectItemListViewObject__Init_32523228((FollowerSelectItemListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void FollowerSelectItemListViewObject__EventEnterMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x20
  float v7; // s10
  float v8; // s9
  float v9; // s8
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C21E71 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    sub_1C2D490(&StringLiteral_6203/*"EventEnterMove2"*/);
    byte_4C21E71 = 1;
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
  v12 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  v7 = v12.fields.x + 0.0;
  v8 = v12.fields.y + 1100.0;
  v9 = v12.fields.z + 0.0;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v13.fields.x = v7;
  v13.fields.y = v8;
  v13.fields.z = v9;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v13, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C2D6EC(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  sub_1C2D434(&v10[3].monitor);
  v10[3].fields.m_CachedPtr = StringLiteral_6203/*"EventEnterMove2"*/;
  sub_1C2D434(&v10[3].fields);
}


void FollowerSelectItemListViewObject__EventEnterMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4C21E72 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C21E72 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434(&this->fields.dragObject);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v4);
}


void FollowerSelectItemListViewObject__EventEnterStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C21E70 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C2D490(&StringLiteral_6202/*"EventEnterMove"*/);
    byte_4C21E70 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._8_CreateDragObject.method);
  sub_1C2D434(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0 )
  {
    sub_1C2D6EC(dragObject, v5);
  }
  FollowerSelectItemListViewObject__Init_32523228((FollowerSelectItemListViewObject_o *)dragObject, 2, v7);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6202/*"EventEnterMove"*/,
    delay,
    0);
}


void FollowerSelectItemListViewObject__EventExitMove(
        FollowerSelectItemListViewObject_o *this,
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C21E74 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6208/*"EventExitMove2"*/);
    byte_4C21E74 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v4);
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
    v14 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v7 = this->fields.dragObject;
    v8 = ListViewObject_TypeInfo;
    v9 = v14.fields.x + 1100.0;
    v10 = v14.fields.y + 0.0;
    v11 = v14.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v8 = ListViewObject_TypeInfo;
    }
    v15.fields.x = v9;
    v15.fields.y = v10;
    v15.fields.z = v11;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v7, v8->static_fields->BASE_MOVE_TIME, v15, 0);
    if ( !transform )
LABEL_15:
      sub_1C2D6EC(transform, v4);
    v12 = transform;
    LODWORD(transform[1].monitor) = 3;
    transform[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    sub_1C2D434(&v12[3].monitor);
    v12[3].fields.m_CachedPtr = StringLiteral_6208/*"EventExitMove2"*/;
    sub_1C2D434(&v12[3].fields);
  }
}


void FollowerSelectItemListViewObject__EventExitMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4C21E75 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C21E75 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434(&this->fields.dragObject);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v4);
}


void FollowerSelectItemListViewObject__EventExitStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4C21E73 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6207/*"EventExitMove"*/);
    byte_4C21E73 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._8_CreateDragObject.method);
  sub_1C2D434(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v5);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C2D6EC(dragObject, v5);
  FollowerSelectItemListViewObject__Init_32523228((FollowerSelectItemListViewObject_o *)Component_object, 2, v8);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6207/*"EventExitMove"*/,
    delay,
    0);
}


void FollowerSelectItemListViewObject__EventIntoMove(
        FollowerSelectItemListViewObject_o *this,
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C21E6E & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    sub_1C2D490(&StringLiteral_6219/*"EventIntoMove2"*/);
    byte_4C21E6E = 1;
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
  v12 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  x = v12.fields.x;
  y = v12.fields.y;
  z = v12.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v13, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C2D6EC(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  sub_1C2D434(&v10[3].monitor);
  v10[3].fields.m_CachedPtr = StringLiteral_6219/*"EventIntoMove2"*/;
  sub_1C2D434(&v10[3].fields);
}


void FollowerSelectItemListViewObject__EventIntoMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4C21E6F & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C21E6F = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  FollowerSelectItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C2D434(&this->fields.dragObject);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v5);
}


void FollowerSelectItemListViewObject__EventIntoStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21E6D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C2D490(&StringLiteral_6218/*"EventIntoMove"*/);
    byte_4C21E6D = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._8_CreateDragObject.method);
  p_dragObject = &this->fields.dragObject;
  sub_1C2D434(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0
    || (FollowerSelectItemListViewObject__Init_32523228((FollowerSelectItemListViewObject_o *)dragObject, 2, v8),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v10 = UnityEngine_Transform__TransformPoint_71190304((UnityEngine_Transform_o *)dragObject, 1100.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_1C2D6EC(dragObject, v6);
  }
  UnityEngine_Transform__set_position(transform, v10, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6218/*"EventIntoMove"*/,
    delay,
    0);
}


void FollowerSelectItemListViewObject__EventMoveEnd(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
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
    sub_1C2D434(p_callbackFunc);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


FollowerSelectItemListViewItem_o *FollowerSelectItemListViewObject__GetItem(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C21E67 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    byte_4C21E67 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    return (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewObject__Init(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v12; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  struct System_Action_o *v20; // x19

  if ( (byte_4C21E6B & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    byte_4C21E6B = 1;
  }
  if ( initMode == 5 )
  {
    FollowerSelectItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C2D6EC(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C2D434(&this->fields.callbackFunc);
    switch ( v12 )
    {
      case 0:
      case 1:
      case 2:
        this->fields.dispMode = v12;
        this->fields.state = 1;
        goto LABEL_15;
      case 3:
        v19 = 3;
        goto LABEL_21;
      case 4:
        this->fields.dispMode = 0;
        this->fields.state = 2;
        FollowerSelectItemListViewObject__EventIntoStart(this, delay, v18);
        return;
      case 6:
        v19 = 4;
LABEL_21:
        this->fields.dispMode = v19;
        this->fields.state = v19;
        goto LABEL_22;
      default:
LABEL_15:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_23;
LABEL_22:
        FollowerSelectItemListViewObject__SetupDisp(this, v18);
LABEL_23:
        v20 = *p_callbackFunc;
        if ( *p_callbackFunc )
        {
          *p_callbackFunc = 0;
          sub_1C2D434(p_callbackFunc);
          ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(
            v20->fields.method_code,
            v20->fields.method);
        }
        break;
    }
  }
}


void FollowerSelectItemListViewObject__InitItem(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewObject__Init_32523228(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  FollowerSelectItemListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewObject__Init_32525448(
        FollowerSelectItemListViewObject_o *this,
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
  FollowerSelectItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewObject__Init_32525548(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  FollowerSelectItemListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void FollowerSelectItemListViewObject__OnClickSelect(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C21E76 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9862/*"OnClickSelectListView"*/);
    byte_4C21E76 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C2D6EC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9862/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void FollowerSelectItemListViewObject__OnClickSupport(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C21E83 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9869/*"OnClickSupportListView"*/);
    byte_4C21E83 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C2D6EC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9869/*"OnClickSupportListView"*/, (Il2CppObject *)this, 0);
  }
}


void FollowerSelectItemListViewObject__OnDestroy(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4C21E66 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E66 = 1;
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
    sub_1C2D434(p_dragObject);
  }
}


void FollowerSelectItemListViewObject__OnLongPush(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C21E77 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9922/*"OnLongPushListView"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E77 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71145580(gameObject, (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C2D6EC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9922/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C21E7E & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    sub_1C2D490(&StringLiteral_9917/*"OnLongPushAppendSkill1ListView"*/);
    byte_4C21E7E = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, 0);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_71145580(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9917/*"OnLongPushAppendSkill1ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C21E7F & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&StringLiteral_9918/*"OnLongPushAppendSkill2ListView"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E7F = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, 0);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_71145580(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9918/*"OnLongPushAppendSkill2ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C21E80 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&StringLiteral_9919/*"OnLongPushAppendSkill3ListView"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E80 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, 0);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_71145580(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9919/*"OnLongPushAppendSkill3ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill4(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C21E81 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    sub_1C2D490(&StringLiteral_9920/*"OnLongPushAppendSkill4ListView"*/);
    byte_4C21E81 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, 0);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_71145580(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9920/*"OnLongPushAppendSkill4ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill5(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C21E82 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&StringLiteral_9921/*"OnLongPushAppendSkill5ListView"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E82 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, 0);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_71145580(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9921/*"OnLongPushAppendSkill5ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushEquip(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C21E78 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9923/*"OnLongPushServantEquip"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E78 = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields._EquipIdx_k__BackingField = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71145580(gameObject, (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C2D6EC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9923/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FollowerSelectItemListViewObject__OnLongPushEquip2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C21E79 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9923/*"OnLongPushServantEquip"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E79 = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields._EquipIdx_k__BackingField = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71145580(gameObject, (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C2D6EC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9923/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FollowerSelectItemListViewObject__OnLongPushEquip3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C21E7A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9923/*"OnLongPushServantEquip"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E7A = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields._EquipIdx_k__BackingField = 2;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71145580(gameObject, (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C2D6EC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9923/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FollowerSelectItemListViewObject__OnLongPushSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C21E7B & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&StringLiteral_9924/*"OnLongPushSkill1ListView"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E7B = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, 0);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_71145580(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9924/*"OnLongPushSkill1ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C21E7C & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&StringLiteral_9925/*"OnLongPushSkill2ListView"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E7C = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, 0);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_71145580(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9925/*"OnLongPushSkill2ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C21E7D & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&StringLiteral_9926/*"OnLongPushSkill3ListView"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C21E7D = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, 0);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_71145580(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9926/*"OnLongPushSkill3ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OpenSupportClassBoardBuff(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C21E85 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9998/*"OpenSupportClassBoard"*/);
    byte_4C21E85 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C2D6EC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9998/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0);
  }
}


void FollowerSelectItemListViewObject__SetInput(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v8; // x1
  FollowerSelectItemListViewItemDraw_o *v9; // x0

  if ( (byte_4C21E68 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E68 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v8 = this->fields.linkItem;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C2D6EC(0, v8);
    FollowerSelectItemListViewItemDraw__SetInput(v9, (FollowerSelectItemListViewItem_o *)v8, isInput, 0, 0);
  }
}


void FollowerSelectItemListViewObject__SetInputTutorial(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v8; // x1
  FollowerSelectItemListViewItemDraw_o *v9; // x0

  if ( (byte_4C21E69 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E69 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v8 = this->fields.linkItem;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C2D6EC(0, v8);
    FollowerSelectItemListViewItemDraw__SetInput(v9, (FollowerSelectItemListViewItem_o *)v8, isInput, 1, 0);
  }
}


void FollowerSelectItemListViewObject__SetItem(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void FollowerSelectItemListViewObject__SetItem_32523644(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void FollowerSelectItemListViewObject__SetupDisp(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewManager_c *v7; // x1
  const MethodInfo *v8; // x2
  int32_t *manager; // x0
  __int64 v10; // x9
  int32_t dispMode; // w8

  if ( (byte_4C21E6C & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E6C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != FollowerSelectItemListViewItem_TypeInfo )
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
    manager = (int32_t *)this->fields.manager;
    if ( manager )
    {
      v7 = FollowerSelectItemListViewManager_TypeInfo;
      v10 = FollowerSelectItemListViewManager_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) >= (unsigned int)v10
        && *(FollowerSelectItemListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v10 - 8) == FollowerSelectItemListViewManager_TypeInfo )
      {
        if ( this->fields.itemDraw )
        {
          FollowerSelectItemListViewItemDraw__SetItem(
            this->fields.itemDraw,
            (FollowerSelectItemListViewItem_o *)linkItem,
            this->fields.dispMode,
            manager[115],
            0);
          goto LABEL_16;
        }
      }
      else
      {
        manager = (int32_t *)sub_1C2D9AC(manager);
      }
    }
    sub_1C2D6EC(manager, v7);
  }
LABEL_16:
  dispMode = this->fields.dispMode;
  if ( dispMode == 4 )
    FollowerSelectItemListViewObject__SetInputTutorial(this, 1, v8);
  else
    ((void (__fastcall *)(FollowerSelectItemListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      dispMode == 3,
      this->klass->vtable._9_SetInput.method);
}


void FollowerSelectItemListViewObject__Start(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct ListViewManager_o *v7; // x8

  if ( (byte_4C21E65 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E65 = 1;
  }
  if ( !this->fields.state )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(manager, 0, 0);
    if ( v4 )
    {
      v7 = this->fields.manager;
      if ( !v7 || (!v7->fields.isInput ? (v5 = 2) : (v5 = 3), !this || !v4) )
        sub_1C2D6EC(v4, v5);
    }
    else
    {
      LODWORD(v5) = 2;
    }
    FollowerSelectItemListViewObject__Init_32523228(this, v5, v6);
  }
}


void FollowerSelectItemListViewObject__add_callbackFunc(
        FollowerSelectItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C21E62 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21E62 = 1;
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
  v11 = (FollowerSelectItemListViewObject_o *)sub_1C2D9AC(v8);
  FollowerSelectItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


int32_t FollowerSelectItemListViewObject__get_EquipIdx(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipIdx_k__BackingField;
}


void FollowerSelectItemListViewObject__remove_callbackFunc(
        FollowerSelectItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C21E63 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21E63 = 1;
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
  v11 = (FollowerSelectItemListViewObject_o *)sub_1C2D9AC(v8);
  FollowerSelectItemListViewObject__get_EquipIdx(v11, v12);
}


void FollowerSelectItemListViewObject__set_EquipIdx(
        FollowerSelectItemListViewObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipIdx_k__BackingField = value;
}