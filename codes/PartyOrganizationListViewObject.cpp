void __fastcall PartyOrganizationListViewObject___ctor(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4070D & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    byte_4B4070D = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewObject__Awake(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B406FB & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, method);
    byte_4B406FB = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BDBAD4(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewObject__CreateDragObject(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4B406FF & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, method);
    byte_4B406FF = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___)) == 0LL) )
  {
    sub_1BDBAD4(DragObject, v4);
  }
  PartyOrganizationListViewObject__Init_33559580((PartyOrganizationListViewObject_o *)DragObject, 2, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewObject__CreateDragObject_33568236(
        PartyOrganizationListViewObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  PartyOrganizationListViewObject_o *v9; // x21
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v11; // x2

  if ( (byte_4B40700 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, *(_QWORD *)&addDepth);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B40700 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_11;
  v8 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             DragObject,
                                             (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
  if ( !DragObject )
    goto LABEL_11;
  v9 = (PartyOrganizationListViewObject_o *)DragObject;
  monitor = (UnityEngine_Object_o *)DragObject[5].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    DragObject = (UnityEngine_GameObject_o *)v9->fields.itemDraw;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1BDBAD4(DragObject, v7);
  }
LABEL_10:
  PartyOrganizationListViewObject__Init_33559580(v9, 2, v11);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventEnterMove(
        PartyOrganizationListViewObject_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B40707 & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    sub_1BDB878(&StringLiteral_6223/*"EventEnterMove2"*/, v3);
    byte_4B40707 = 1;
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
  v21 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = ListViewObject_TypeInfo;
  v10 = this->fields.dragObject;
  v11 = v21.fields.x + 0.0;
  v12 = v21.fields.y + 950.0;
  v13 = v21.fields.z + 0.0;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v22.fields.x = v11;
  v22.fields.y = v12;
  v22.fields.z = v13;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v9->static_fields->BASE_MOVE_TIME, v22, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1BDBAD4(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].monitor = gameObject;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17);
  v18 = StringLiteral_6223/*"EventEnterMove2"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6223/*"EventEnterMove2"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14[3].fields, v18, v19, v20);
}


void __fastcall PartyOrganizationListViewObject__EventEnterMove2(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B40708 & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, method);
    byte_4B40708 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v4, v5);
  PartyOrganizationListViewObject__EventMoveEnd(this, v6);
}


void __fastcall PartyOrganizationListViewObject__EventEnterStart(
        PartyOrganizationListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4B40706 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, method);
    sub_1BDB878(&StringLiteral_6222/*"EventEnterMove"*/, v5);
    byte_4B40706 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___)) == 0LL )
  {
    sub_1BDBAD4(dragObject, v9);
  }
  PartyOrganizationListViewObject__Init_33559580((PartyOrganizationListViewObject_o *)dragObject, 2, v11);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6222/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventExitMove(
        PartyOrganizationListViewObject_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B4070A & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_6225/*"EventExitMove2"*/, v4);
    byte_4B4070A = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    PartyOrganizationListViewObject__EventMoveEnd(this, v6);
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
    v24 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = this->fields.dragObject;
    v13 = ListViewObject_TypeInfo;
    v14 = v24.fields.x + 950.0;
    v15 = v24.fields.y + 0.0;
    v16 = v24.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v13 = ListViewObject_TypeInfo;
    }
    v25.fields.x = v14;
    v25.fields.y = v15;
    v25.fields.z = v16;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v13->static_fields->BASE_MOVE_TIME, v25, 0LL);
    if ( !transform )
LABEL_15:
      sub_1BDBAD4(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v17[3].monitor = gameObject;
    sub_1BDB81C((CGThumbnailListItem_o *)&v17[3].monitor, (int32_t)gameObject, v19, v20);
    v21 = StringLiteral_6225/*"EventExitMove2"*/;
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6225/*"EventExitMove2"*/;
    sub_1BDB81C((CGThumbnailListItem_o *)&v17[3].fields, v21, v22, v23);
  }
}


void __fastcall PartyOrganizationListViewObject__EventExitMove2(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B4070B & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, method);
    byte_4B4070B = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v4, v5);
  PartyOrganizationListViewObject__EventMoveEnd(this, v6);
}


void __fastcall PartyOrganizationListViewObject__EventExitStart(
        PartyOrganizationListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4B40709 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_6224/*"EventExitMove"*/, v6);
    byte_4B40709 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    PartyOrganizationListViewObject__EventMoveEnd(this, v10);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1BDBAD4(dragObject, v10);
  PartyOrganizationListViewObject__Init_33559580((PartyOrganizationListViewObject_o *)Component_object, 2, v13);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6224/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventIntoMove(
        PartyOrganizationListViewObject_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B40704 & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    sub_1BDB878(&StringLiteral_6236/*"EventIntoMove2"*/, v3);
    byte_4B40704 = 1;
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
  v21 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = ListViewObject_TypeInfo;
  v10 = this->fields.dragObject;
  x = v21.fields.x;
  y = v21.fields.y;
  z = v21.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v9->static_fields->BASE_MOVE_TIME, v22, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1BDBAD4(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].monitor = gameObject;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17);
  v18 = StringLiteral_6236/*"EventIntoMove2"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6236/*"EventIntoMove2"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14[3].fields, v18, v19, v20);
}


void __fastcall PartyOrganizationListViewObject__EventIntoMove2(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4B40705 & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, method);
    byte_4B40705 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  PartyOrganizationListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v5, v6);
  PartyOrganizationListViewObject__EventMoveEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventIntoStart(
        PartyOrganizationListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0

  if ( (byte_4B40703 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, method);
    sub_1BDB878(&StringLiteral_6235/*"EventIntoMove"*/, v5);
    byte_4B40703 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v6, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___)) == 0LL
    || (PartyOrganizationListViewObject__Init_33559580((PartyOrganizationListViewObject_o *)dragObject, 2, v12),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__TransformPoint_70311200(
                                           (UnityEngine_Transform_o *)dragObject,
                                           950.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1BDBAD4(dragObject, v10);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6235/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall PartyOrganizationListViewObject__EventMoveEnd(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
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
    p_callbackFunc->klass = 0LL;
    sub_1BDB81C(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewObject__GetItem(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B406FD & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationListViewItem_TypeInfo, method);
    byte_4B406FD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__Init(
        PartyOrganizationListViewObject_o *this,
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
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w9
  int32_t v24; // w8
  int32_t v25; // w9
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4B40701 & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B40701 = 1;
  }
  if ( initMode == 9 )
  {
    PartyOrganizationListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
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
    ((void (__fastcall *)(PartyOrganizationListViewObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      (v12 == 3) | (unsigned int)(v12 == 8),
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1BDBAD4(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v18, v19);
    v23 = 1;
    v24 = v12;
    switch ( v12 )
    {
      case 0:
      case 2:
        goto LABEL_17;
      case 1:
        v24 = v12;
        goto LABEL_16;
      case 3:
        v24 = 2;
LABEL_16:
        v23 = v12;
LABEL_17:
        this->fields.dispMode = v24;
        this->fields.state = v23;
        goto LABEL_18;
      case 4:
        this->fields.dispMode = 0;
        this->fields.state = 2;
        PartyOrganizationListViewObject__EventIntoStart(this, delay, v20);
        return;
      case 6:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        PartyOrganizationListViewObject__EventExitStart(this, delay, v20);
        return;
      case 7:
        v25 = 1;
        goto LABEL_25;
      case 8:
        v25 = 3;
LABEL_25:
        this->fields.dispMode = 2;
        this->fields.state = v25;
        goto LABEL_26;
      default:
LABEL_18:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_27;
LABEL_26:
        PartyOrganizationListViewObject__SetupDisp(this, v20);
LABEL_27:
        klass = p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0LL;
          sub_1BDB81C(p_callbackFunc, 0, v21, v22);
          ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
            klass->_1.element_class,
            *(_QWORD *)&klass->_1.byval_arg.bits);
        }
        break;
    }
  }
}


void __fastcall PartyOrganizationListViewObject__InitItem(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__Init_33559580(
        PartyOrganizationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B3E911 = 1;
  }
  PartyOrganizationListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__Init_33561216(
        PartyOrganizationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B3E911 = 1;
  }
  PartyOrganizationListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__Init_33561788(
        PartyOrganizationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B3E911 = 1;
  }
  PartyOrganizationListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void __fastcall PartyOrganizationListViewObject__OnDestroy(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B406FC & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B406FC = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BDB81C(p_dragObject, 0, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__SetInput(
        PartyOrganizationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v9; // x1
  PartyOrganizationListViewItemDraw_o *v10; // x0

  if ( (byte_4B406FE & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, isInput);
    sub_1BDB878(&PartyOrganizationListViewItem_TypeInfo, v5);
    byte_4B406FE = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
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
      sub_1BDBAD4(0LL, v9);
    PartyOrganizationListViewItemDraw__SetInput(v10, (PartyOrganizationListViewItem_o *)v9, isInput, 0LL);
  }
}


void __fastcall PartyOrganizationListViewObject__SetItem(
        PartyOrganizationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42764972((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyOrganizationListViewObject__SetItem_33567848(
        PartyOrganizationListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyOrganizationListViewObject__SetupDisp(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_4B40702 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&PartyOrganizationListViewItem_TypeInfo, v3);
    byte_4B40702 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
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
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1BDBAD4(0LL, v8);
    PartyOrganizationListViewItemDraw__SetItem(
      v9,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      1,
      0LL);
  }
}


void __fastcall PartyOrganizationListViewObject__UpdateStartingMemberFriendshipUp(
        PartyOrganizationListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  PartyOrganizationListViewItemDraw_o *v7; // x0

  if ( (byte_4B4070C & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, item);
    byte_4B4070C = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1BDBAD4(0LL, v6);
    PartyOrganizationListViewItemDraw__SetItem(v7, item, 2, 1, 0LL);
  }
}


void __fastcall PartyOrganizationListViewObject__add_callbackFunc(
        PartyOrganizationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B406F9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B406F9 = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewObject_o *)sub_1BDBD94(v8);
  PartyOrganizationListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationListViewObject__remove_callbackFunc(
        PartyOrganizationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B406FA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B406FA = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewObject_o *)sub_1BDBD94(v8);
  PartyOrganizationListViewObject__Awake(v11, v12);
}