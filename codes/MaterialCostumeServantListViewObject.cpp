void __fastcall MaterialCostumeServantListViewObject___ctor(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC2FC8 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    byte_4BC2FC8 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantListViewObject__Awake(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4BC2FB5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewItemDraw___, method);
    byte_4BC2FB5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C1AE30(0LL, v3);
  this->fields.itemDraw = (struct MaterialCostumeServantListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               dispObject,
                                                                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewItemDraw___);
  sub_1C1AB78(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall MaterialCostumeServantListViewObject__CreateDragObject(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2
  MaterialCostumeServantListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4BC2FB9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, method);
    byte_4BC2FB9 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0LL) )
  {
    sub_1C1AE30(DragObject, v4);
  }
  v7 = (MaterialCostumeServantListViewObject_o *)DragObject;
  MaterialCostumeServantListViewObject__Init_32108308((MaterialCostumeServantListViewObject_o *)DragObject, 2, v6);
  MaterialCostumeServantListViewObject__SetupDisp(v7, v8);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__EventEnterMove(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4BC2FC0 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_6332/*"EventEnterMove2"*/, v3);
    byte_4BC2FC0 = 1;
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
  v12 = v15.fields.y + 1000.0;
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
    sub_1C1AE30(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1C1AB78(&v14[3].monitor);
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6332/*"EventEnterMove2"*/;
  sub_1C1AB78(&v14[3].fields);
}


void __fastcall MaterialCostumeServantListViewObject__EventEnterMove2(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4BC2FC1 & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    byte_4BC2FC1 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C1AB78(&this->fields.dragObject);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v4);
}


void __fastcall MaterialCostumeServantListViewObject__EventEnterStart(
        MaterialCostumeServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4BC2FBF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, method);
    sub_1C1ABD4(&StringLiteral_6331/*"EventEnterMove"*/, v5);
    byte_4BC2FBF = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1C1AB78(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0LL )
  {
    sub_1C1AE30(dragObject, v6);
  }
  MaterialCostumeServantListViewObject__Init_32108308((MaterialCostumeServantListViewObject_o *)dragObject, 2, v8);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6331/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__EventExitMove(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4BC2FC3 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_6334/*"EventExitMove2"*/, v4);
    byte_4BC2FC3 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MaterialCostumeServantListViewObject__EventMoveEnd(this, v6);
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
    v14 = v18.fields.x + 1000.0;
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
      sub_1C1AE30(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    transform[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    sub_1C1AB78(&v17[3].monitor);
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6334/*"EventExitMove2"*/;
    sub_1C1AB78(&v17[3].fields);
  }
}


void __fastcall MaterialCostumeServantListViewObject__EventExitMove2(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4BC2FC4 & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    byte_4BC2FC4 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C1AB78(&this->fields.dragObject);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v4);
}


void __fastcall MaterialCostumeServantListViewObject__EventExitStart(
        MaterialCostumeServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4BC2FC2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_6333/*"EventExitMove"*/, v6);
    byte_4BC2FC2 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1C1AB78(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MaterialCostumeServantListViewObject__EventMoveEnd(this, v7);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C1AE30(dragObject, v7);
  MaterialCostumeServantListViewObject__Init_32108308(
    (MaterialCostumeServantListViewObject_o *)Component_object,
    2,
    v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6333/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__EventIntoMove(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4BC2FBD & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_6345/*"EventIntoMove2"*/, v3);
    byte_4BC2FBD = 1;
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
    sub_1C1AE30(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1C1AB78(&v14[3].monitor);
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6345/*"EventIntoMove2"*/;
  sub_1C1AB78(&v14[3].fields);
}


void __fastcall MaterialCostumeServantListViewObject__EventIntoMove2(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4BC2FBE & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    byte_4BC2FBE = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MaterialCostumeServantListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C1AB78(&this->fields.dragObject);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__EventIntoStart(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4BC2FBC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, method);
    sub_1C1ABD4(&StringLiteral_6344/*"EventIntoMove"*/, v5);
    byte_4BC2FBC = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  sub_1C1AB78(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0LL
    || (MaterialCostumeServantListViewObject__Init_32108308((MaterialCostumeServantListViewObject_o *)dragObject, 2, v9),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__TransformPoint_70819160(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1C1AE30(dragObject, v7);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6344/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall MaterialCostumeServantListViewObject__EventMoveEnd(
        MaterialCostumeServantListViewObject_o *this,
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
    sub_1C1AB78(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


MaterialCostumeServantListViewItem_o *__fastcall MaterialCostumeServantListViewObject__GetItem(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BC2FB7 & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantListViewItem_TypeInfo, method);
    byte_4BC2FB7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    return (MaterialCostumeServantListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__Init(
        MaterialCostumeServantListViewObject_o *this,
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
  __int64 v16; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w9
  int32_t v20; // w8
  struct System_Action_o *v21; // x19

  if ( (byte_4BC2FBA & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2FBA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCostumeServantListViewItem_TypeInfo )
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
  ((void (__fastcall *)(MaterialCostumeServantListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v12 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C1AE30(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C1AB78(&this->fields.callbackFunc);
  v19 = 1;
  v20 = v12;
  switch ( v12 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v20 = v12;
      goto LABEL_14;
    case 3:
      v20 = 2;
LABEL_14:
      v19 = v12;
LABEL_15:
      this->fields.dispMode = v20;
      this->fields.state = v19;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      MaterialCostumeServantListViewObject__EventIntoStart(this, delay, v18);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      MaterialCostumeServantListViewObject__EventExitStart(this, delay, v18);
      return;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        MaterialCostumeServantListViewObject__SetupDisp(this, v18);
      v21 = *p_callbackFunc;
      if ( *p_callbackFunc )
      {
        *p_callbackFunc = 0LL;
        sub_1C1AB78(p_callbackFunc);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v21->fields.m_target)(
          v21->fields.original_method_info,
          *(_QWORD *)&v21->fields.extra_arg);
      }
      return;
  }
}


void __fastcall MaterialCostumeServantListViewObject__InitItem(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__Init_32108308(
        MaterialCostumeServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  MaterialCostumeServantListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__Init_32108960(
        MaterialCostumeServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  MaterialCostumeServantListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__Init_32109060(
        MaterialCostumeServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  MaterialCostumeServantListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void __fastcall MaterialCostumeServantListViewObject__OnClickSelect(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  _DWORD *monitor; // x10
  bool v8; // w20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  v2 = this;
  if ( (byte_4BC2FC6 & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantListViewItem_TypeInfo, method);
    sub_1C1ABD4(&Method_MaterialCostumeServantListViewObject_OnClickSelect__, v3);
    this = (MaterialCostumeServantListViewObject_o *)sub_1C1ABD4(&StringLiteral_10051/*"OnClickSelectListView"*/, v4);
    byte_4BC2FC6 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCostumeServantListViewItem_TypeInfo )
    {
      goto LABEL_18;
    }
    monitor = linkItem[1].monitor;
    v8 = !monitor || LOBYTE(linkItem[1].fields.loopIndex) || monitor[10] != 2 || linkItem[1].fields.selectNum == 0;
    v9 = Method_MaterialCostumeServantListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeServantListViewObject_OnClickSelect__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v9, v9[4]);
    if ( v8 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0LL);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    this = (MaterialCostumeServantListViewObject_o *)v2->fields.manager;
    if ( !this )
LABEL_18:
      sub_1C1AE30(this, method);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)this,
      (System_String_o *)StringLiteral_10051/*"OnClickSelectListView"*/,
      (Il2CppObject *)v2,
      0LL);
  }
}


void __fastcall MaterialCostumeServantListViewObject__OnDestroy(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4BC2FB6 & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BC2FB6 = 1;
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
    sub_1C1AB78(p_dragObject);
  }
}


void __fastcall MaterialCostumeServantListViewObject__OnLongPush(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4BC2FC7 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10109/*"OnLongPushListView"*/, method);
    sub_1C1ABD4(&StringLiteral_10127/*"OnPressCancel"*/, v3);
    byte_4BC2FC7 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_70775872(gameObject, (System_String_o *)StringLiteral_10127/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1C1AE30(gameObject, v5);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10109/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__SetInput(
        MaterialCostumeServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  MaterialCostumeServantListViewItemDraw_o *v9; // x0

  if ( (byte_4BC2FB8 & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantListViewItem_TypeInfo, isInput);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    byte_4BC2FB8 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C1AE30(0LL, v7);
    MaterialCostumeServantListViewItemDraw__SetButtonState(v9, 1, v8);
  }
}


void __fastcall MaterialCostumeServantListViewObject__SetItem(
        MaterialCostumeServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41974544((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialCostumeServantListViewObject__SetItem_32113304(
        MaterialCostumeServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialCostumeServantListViewObject__SetupDisp(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  MaterialCostumeServantListViewItemDraw_o *v10; // x0

  if ( (byte_4BC2FBB & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantListViewItem_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BC2FBB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCostumeServantListViewItem_TypeInfo )
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
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C1AE30(0LL, v8);
    MaterialCostumeServantListViewItemDraw__SetItem(
      v10,
      (MaterialCostumeServantListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


System_String_o *__fastcall MaterialCostumeServantListViewObject__ToString(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_4BC2FC5 & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantListViewItemDraw_DispMode_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_117/*" "*/, v3);
    byte_4BC2FC5 = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)MaterialCostumeServantListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1DD9840(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_63051628(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
}


void __fastcall MaterialCostumeServantListViewObject__add_callbackFunc(
        MaterialCostumeServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCostumeServantListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BC2FB3 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC2FB3 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantListViewObject_o *)sub_1C1B0F0(v8);
  MaterialCostumeServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCostumeServantListViewObject__remove_callbackFunc(
        MaterialCostumeServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCostumeServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BC2FB4 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC2FB4 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantListViewObject_o *)sub_1C1B0F0(v8);
  MaterialCostumeServantListViewObject__Awake(v11, v12);
}