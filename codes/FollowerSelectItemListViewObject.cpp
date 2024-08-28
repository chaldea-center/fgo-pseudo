void __fastcall FollowerSelectItemListViewObject___ctor(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (qword_4A04000 & 0x100) == 0 )
  {
    sub_1B686D4(&ListViewObject_TypeInfo, method);
    BYTE1(qword_4A04000) = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewObject__Awake(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4A03FE1 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___, method);
    byte_4A03FE1 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B68930(0LL, v3);
  this->fields.itemDraw = (struct FollowerSelectItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                           dispObject,
                                                                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___);
  sub_1B68678(&this->fields.itemDraw);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__ChangeDisplaySkill(
        FollowerSelectItemListViewObject_o *this,
        int32_t displaySkill,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v11; // x2
  FollowerSelectItemListViewItemDraw_o *v12; // x0

  if ( (byte_4A03FFF & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&displaySkill);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A03FFF = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1B68930(0LL, v7);
    FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
      v12,
      displaySkill,
      (FollowerSelectItemListViewItem_o *)v11,
      v8);
  }
}


UnityEngine_GameObject_o *__fastcall FollowerSelectItemListViewObject__CreateDragObject(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A03FE7 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    byte_4A03FE7 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL) )
  {
    sub_1B68930(DragObject, v4);
  }
  FollowerSelectItemListViewObject__Init_30623056((FollowerSelectItemListViewObject_o *)DragObject, 2, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventEnterMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v6; // s0
  ListViewObject_c *v9; // x0
  UnityEngine_GameObject_o *v10; // x20
  float v11; // s10
  float v12; // s9
  float v13; // s8
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A03FEE & 1) == 0 )
  {
    sub_1B686D4(&ListViewObject_TypeInfo, method);
    sub_1B686D4(&StringLiteral_6149/*"EventEnterMove2"*/, v3);
    byte_4A03FEE = 1;
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
  v12 = v15.fields.y + 1100.0;
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
    sub_1B68930(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1B68678(&v14[3].monitor);
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6149/*"EventEnterMove2"*/;
  sub_1B68678(&v14[3].fields);
}


void __fastcall FollowerSelectItemListViewObject__EventEnterMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4A03FEF & 1) == 0 )
  {
    sub_1B686D4(&NGUITools_TypeInfo, method);
    byte_4A03FEF = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B68678(&this->fields.dragObject);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v4);
}


void __fastcall FollowerSelectItemListViewObject__EventEnterStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4A03FED & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_1B686D4(&StringLiteral_6148/*"EventEnterMove"*/, v5);
    byte_4A03FED = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1B68678(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL )
  {
    sub_1B68930(dragObject, v6);
  }
  FollowerSelectItemListViewObject__Init_30623056((FollowerSelectItemListViewObject_o *)dragObject, 2, v8);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6148/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventExitMove(
        FollowerSelectItemListViewObject_o *this,
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

  if ( (byte_4A03FF1 & 1) == 0 )
  {
    sub_1B686D4(&ListViewObject_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_6151/*"EventExitMove2"*/, v4);
    byte_4A03FF1 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v6);
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
    v14 = v18.fields.x + 1100.0;
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
      sub_1B68930(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    transform[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    sub_1B68678(&v17[3].monitor);
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6151/*"EventExitMove2"*/;
    sub_1B68678(&v17[3].fields);
  }
}


void __fastcall FollowerSelectItemListViewObject__EventExitMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4A03FF2 & 1) == 0 )
  {
    sub_1B686D4(&NGUITools_TypeInfo, method);
    byte_4A03FF2 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B68678(&this->fields.dragObject);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v4);
}


void __fastcall FollowerSelectItemListViewObject__EventExitStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4A03FF0 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_6150/*"EventExitMove"*/, v6);
    byte_4A03FF0 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1B68678(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v7);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1B68930(dragObject, v7);
  FollowerSelectItemListViewObject__Init_30623056((FollowerSelectItemListViewObject_o *)Component_object, 2, v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6150/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventIntoMove(
        FollowerSelectItemListViewObject_o *this,
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

  if ( (byte_4A03FEB & 1) == 0 )
  {
    sub_1B686D4(&ListViewObject_TypeInfo, method);
    sub_1B686D4(&StringLiteral_6161/*"EventIntoMove2"*/, v3);
    byte_4A03FEB = 1;
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
    sub_1B68930(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1B68678(&v14[3].monitor);
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6161/*"EventIntoMove2"*/;
  sub_1B68678(&v14[3].fields);
}


void __fastcall FollowerSelectItemListViewObject__EventIntoMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4A03FEC & 1) == 0 )
  {
    sub_1B686D4(&NGUITools_TypeInfo, method);
    byte_4A03FEC = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  FollowerSelectItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B68678(&this->fields.dragObject);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventIntoStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0

  if ( (byte_4A03FEA & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_1B686D4(&StringLiteral_6160/*"EventIntoMove"*/, v5);
    byte_4A03FEA = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  sub_1B68678(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL
    || (FollowerSelectItemListViewObject__Init_30623056((FollowerSelectItemListViewObject_o *)dragObject, 2, v9),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__TransformPoint_69196404(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1100.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B68930(dragObject, v7);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6160/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall FollowerSelectItemListViewObject__EventMoveEnd(
        FollowerSelectItemListViewObject_o *this,
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
    sub_1B68678(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


FollowerSelectItemListViewItem_o *__fastcall FollowerSelectItemListViewObject__GetItem(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A03FE4 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    byte_4A03FE4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    return (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Init(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v12; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  struct System_Action_o *v20; // x19

  if ( (byte_4A03FE8 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A03FE8 = 1;
  }
  if ( initMode == 5 )
  {
    FollowerSelectItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1B68930(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1B68678(&this->fields.callbackFunc);
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
          *p_callbackFunc = 0LL;
          sub_1B68678(p_callbackFunc);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
            v20->fields.original_method_info,
            *(_QWORD *)&v20->fields.extra_arg);
        }
        break;
    }
  }
}


void __fastcall FollowerSelectItemListViewObject__InitItem(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Init_30623056(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4A03901 )
  {
    sub_1B686D4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A03901 = 1;
  }
  FollowerSelectItemListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Init_30625784(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4A03901 )
  {
    sub_1B686D4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A03901 = 1;
  }
  FollowerSelectItemListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Init_30626396(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A03901 )
  {
    sub_1B686D4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A03901 = 1;
  }
  FollowerSelectItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall FollowerSelectItemListViewObject__OnClickSelect(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A03FF3 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_9823/*"OnClickSelectListView"*/, method);
    byte_4A03FF3 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B68930(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9823/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnClickSupport(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A03FFE & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_9829/*"OnClickSupportListView"*/, method);
    byte_4A03FFE = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B68930(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9829/*"OnClickSupportListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnDestroy(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4A03FE3 & 1) == 0 )
  {
    sub_1B686D4(&NGUITools_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A03FE3 = 1;
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
    sub_1B68678(p_dragObject);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPush(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4A03FF4 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_9880/*"OnLongPushListView"*/, method);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v3);
    byte_4A03FF4 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69153276(gameObject, (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B68930(gameObject, v5);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9880/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A03FF9 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v3);
    sub_1B686D4(&StringLiteral_9875/*"OnLongPushAppendSkill1ListView"*/, v4);
    byte_4A03FF9 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_69153276(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9875/*"OnLongPushAppendSkill1ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A03FFA & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9876/*"OnLongPushAppendSkill2ListView"*/, v3);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v4);
    byte_4A03FFA = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_69153276(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9876/*"OnLongPushAppendSkill2ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A03FFB & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9877/*"OnLongPushAppendSkill3ListView"*/, v3);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v4);
    byte_4A03FFB = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_69153276(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9877/*"OnLongPushAppendSkill3ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill4(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A03FFC & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v3);
    sub_1B686D4(&StringLiteral_9878/*"OnLongPushAppendSkill4ListView"*/, v4);
    byte_4A03FFC = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_69153276(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9878/*"OnLongPushAppendSkill4ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill5(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A03FFD & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9879/*"OnLongPushAppendSkill5ListView"*/, v3);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v4);
    byte_4A03FFD = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_69153276(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9879/*"OnLongPushAppendSkill5ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushEquip(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4A03FF5 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_9881/*"OnLongPushServantEquip"*/, method);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v3);
    byte_4A03FF5 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_69153276(gameObject, (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B68930(gameObject, v5);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9881/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A03FF6 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9882/*"OnLongPushSkill1ListView"*/, v3);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v4);
    byte_4A03FF6 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_69153276(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9882/*"OnLongPushSkill1ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A03FF7 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9883/*"OnLongPushSkill2ListView"*/, v3);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v4);
    byte_4A03FF7 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_69153276(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9883/*"OnLongPushSkill2ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A03FF8 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9884/*"OnLongPushSkill3ListView"*/, v3);
    sub_1B686D4(&StringLiteral_9899/*"OnPressCancel"*/, v4);
    byte_4A03FF8 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_69153276(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_9899/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_9884/*"OnLongPushSkill3ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_1B68930(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OpenSupportClassBoardBuff(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (qword_4A04000 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_9962/*"OpenSupportClassBoard"*/, method);
    LOBYTE(qword_4A04000) = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B68930(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9962/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__SetInput(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewItem_o *v7; // x1
  const MethodInfo *v8; // x4
  FollowerSelectItemListViewItemDraw_o *v9; // x0

  if ( (byte_4A03FE5 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, isInput);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A03FE5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B68930(0LL, v7);
    FollowerSelectItemListViewItemDraw__SetInput(v9, v7, isInput, 0, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__SetInputTutorial(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewItem_o *v7; // x1
  const MethodInfo *v8; // x4
  FollowerSelectItemListViewItemDraw_o *v9; // x0

  if ( (byte_4A03FE6 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, isInput);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A03FE6 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B68930(0LL, v7);
    FollowerSelectItemListViewItemDraw__SetInput(v9, v7, isInput, 0, v8);
  }
}


void __fastcall FollowerSelectItemListViewObject__SetItem(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40489024((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerSelectItemListViewObject__SetItem_30636420(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerSelectItemListViewObject__SetupDisp(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewManager_c *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x4
  int32_t *manager; // x0
  __int64 v13; // x9
  int32_t dispMode; // w8

  if ( (byte_4A03FE9 & 1) == 0 )
  {
    sub_1B686D4(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_1B686D4(&FollowerSelectItemListViewManager_TypeInfo, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    byte_4A03FE9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    manager = (int32_t *)this->fields.manager;
    if ( manager )
    {
      v9 = FollowerSelectItemListViewManager_TypeInfo;
      v13 = LOBYTE(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) >= (unsigned int)v13
        && *(FollowerSelectItemListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v13 - 8) == FollowerSelectItemListViewManager_TypeInfo )
      {
        if ( this->fields.itemDraw )
        {
          FollowerSelectItemListViewItemDraw__SetItem(
            this->fields.itemDraw,
            (FollowerSelectItemListViewItem_o *)linkItem,
            this->fields.dispMode,
            manager[115],
            v11);
          goto LABEL_16;
        }
      }
      else
      {
        manager = (int32_t *)sub_1B68BF0(manager);
      }
    }
    sub_1B68930(manager, v9);
  }
LABEL_16:
  dispMode = this->fields.dispMode;
  if ( dispMode == 4 )
    FollowerSelectItemListViewObject__SetInputTutorial(this, 1, v10);
  else
    ((void (__fastcall *)(FollowerSelectItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      dispMode == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall FollowerSelectItemListViewObject__Start(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct ListViewManager_o *v7; // x8

  if ( (byte_4A03FE2 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A03FE2 = 1;
  }
  if ( !this->fields.state )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(manager, 0LL, 0LL);
    if ( v4 )
    {
      v7 = this->fields.manager;
      if ( !v7 || (!v7->fields.isInput ? (v5 = 2LL) : (v5 = 3LL), !this || !v4) )
        sub_1B68930(v4, v5);
    }
    else
    {
      LODWORD(v5) = 2;
    }
    FollowerSelectItemListViewObject__Init_30623056(this, v5, v6);
  }
}


void __fastcall FollowerSelectItemListViewObject__add_callbackFunc(
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

  if ( (byte_4A03FDF & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, value);
    byte_4A03FDF = 1;
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
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FollowerSelectItemListViewObject_o *)sub_1B68BF0(v8);
  FollowerSelectItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FollowerSelectItemListViewObject__remove_callbackFunc(
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

  if ( (byte_4A03FE0 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, value);
    byte_4A03FE0 = 1;
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
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FollowerSelectItemListViewObject_o *)sub_1B68BF0(v8);
  FollowerSelectItemListViewObject__Awake(v11, v12);
}