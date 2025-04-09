void __fastcall MaterialCollectionServantListViewObject___ctor(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B6233 & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    byte_49B6233 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewObject__AttachedIconSetupDisp(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewObject_o *v2; // x19
  __int64 v3; // x1
  MaterialEventLogServantListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_49B6232 & 1) == 0 )
  {
    sub_1B4CF90(&MaterialEventLogServantListViewItem_TypeInfo, method);
    this = (MaterialCollectionServantListViewObject_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B6232 = 1;
  }
  linkItem = (MaterialEventLogServantListViewItem_o *)v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( !linkItem->fields.isDummy )
      ListViewObject__SetVisible((ListViewObject_o *)v2, v2->fields.dispMode != 0, 0LL);
    itemDraw = (UnityEngine_Object_o *)v2->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      this = (MaterialCollectionServantListViewObject_o *)v2->fields.itemDraw;
      if ( this )
      {
        MaterialCollectionServantListViewItemDraw__SetLastTimeIcon(
          (MaterialCollectionServantListViewItemDraw_o *)this,
          linkItem,
          v7);
        return;
      }
LABEL_14:
      sub_1B4D1EC(this, method);
    }
  }
}


void __fastcall MaterialCollectionServantListViewObject__Awake(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49B621F & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewItemDraw___, method);
    byte_49B621F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B4D1EC(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewItemDraw___);
  this->fields.itemDraw = (struct MaterialCollectionServantListViewItemDraw_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall MaterialCollectionServantListViewObject__ClearNewIcon(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct MaterialCollectionServantListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (MaterialCollectionServantListViewObject_o *)itemDraw->fields.servantFaceIcon) == 0LL )
    sub_1B4D1EC(this, method);
  ServantFaceIconComponent__ClearShiningIcon((ServantFaceIconComponent_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall MaterialCollectionServantListViewObject__CreateDragObject(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2
  MaterialCollectionServantListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_49B6223 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, method);
    byte_49B6223 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0LL) )
  {
    sub_1B4D1EC(DragObject, v4);
  }
  v7 = (MaterialCollectionServantListViewObject_o *)DragObject;
  MaterialCollectionServantListViewObject__Init_31298440((MaterialCollectionServantListViewObject_o *)DragObject, 2, v6);
  MaterialCollectionServantListViewObject__SetupDisp(v7, v8);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventEnterMove(
        MaterialCollectionServantListViewObject_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49B622A & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_6104/*"EventEnterMove2"*/, v3);
    byte_49B622A = 1;
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
  v12 = v21.fields.y + 1000.0;
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
    sub_1B4D1EC(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].monitor = gameObject;
  sub_1B4CF34((CGThumbnailListItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17);
  v18 = StringLiteral_6104/*"EventEnterMove2"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6104/*"EventEnterMove2"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v14[3].fields, v18, v19, v20);
}


void __fastcall MaterialCollectionServantListViewObject__EventEnterMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_49B622B & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    byte_49B622B = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v4, v5);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v6);
}


void __fastcall MaterialCollectionServantListViewObject__EventEnterStart(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_49B6229 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, method);
    sub_1B4CF90(&StringLiteral_6103/*"EventEnterMove"*/, v5);
    byte_49B6229 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0LL )
  {
    sub_1B4D1EC(dragObject, v9);
  }
  MaterialCollectionServantListViewObject__Init_31298440(
    (MaterialCollectionServantListViewObject_o *)dragObject,
    2,
    v11);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6103/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventExitMove(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_49B622D & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_6106/*"EventExitMove2"*/, v4);
    byte_49B622D = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MaterialCollectionServantListViewObject__EventMoveEnd(this, v6);
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
    v14 = v24.fields.x + 1000.0;
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
      sub_1B4D1EC(transform, v6);
    v17 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v17[3].monitor = gameObject;
    sub_1B4CF34((CGThumbnailListItem_o *)&v17[3].monitor, (int32_t)gameObject, v19, v20);
    v21 = StringLiteral_6106/*"EventExitMove2"*/;
    *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6106/*"EventExitMove2"*/;
    sub_1B4CF34((CGThumbnailListItem_o *)&v17[3].fields, v21, v22, v23);
  }
}


void __fastcall MaterialCollectionServantListViewObject__EventExitMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_49B622E & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    byte_49B622E = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v4, v5);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v6);
}


void __fastcall MaterialCollectionServantListViewObject__EventExitStart(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_49B622C & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_6105/*"EventExitMove"*/, v6);
    byte_49B622C = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MaterialCollectionServantListViewObject__EventMoveEnd(this, v10);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1B4D1EC(dragObject, v10);
  MaterialCollectionServantListViewObject__Init_31298440(
    (MaterialCollectionServantListViewObject_o *)Component_object,
    2,
    v13);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6105/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventIntoMove(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_49B6227 & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_6117/*"EventIntoMove2"*/, v3);
    byte_49B6227 = 1;
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
    sub_1B4D1EC(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].monitor = gameObject;
  sub_1B4CF34((CGThumbnailListItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17);
  v18 = StringLiteral_6117/*"EventIntoMove2"*/;
  *(_QWORD *)&v14[3].fields.m_CachedPtr = StringLiteral_6117/*"EventIntoMove2"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v14[3].fields, v18, v19, v20);
}


void __fastcall MaterialCollectionServantListViewObject__EventIntoMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_49B6228 & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    byte_49B6228 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MaterialCollectionServantListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v5, v6);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventIntoStart(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_49B6226 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, method);
    sub_1B4CF90(&StringLiteral_6116/*"EventIntoMove"*/, v5);
    byte_49B6226 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v6, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0LL
    || (MaterialCollectionServantListViewObject__Init_31298440(
          (MaterialCollectionServantListViewObject_o *)dragObject,
          2,
          v12),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__TransformPoint_68829204(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B4D1EC(dragObject, v10);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6116/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall MaterialCollectionServantListViewObject__EventMoveEnd(
        MaterialCollectionServantListViewObject_o *this,
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
    sub_1B4CF34(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


MaterialCollectionServantListViewItem_o *__fastcall MaterialCollectionServantListViewObject__GetItem(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49B6221 & 1) == 0 )
  {
    sub_1B4CF90(&MaterialCollectionServantListViewItem_TypeInfo, method);
    byte_49B6221 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(MaterialCollectionServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCollectionServantListViewItem_TypeInfo )
    return (MaterialCollectionServantListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__Init(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  __int64 v10; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v13; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  struct ListViewItem_o *v16; // x0
  __int64 v17; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w9
  int32_t v27; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_49B6224 & 1) == 0 )
  {
    sub_1B4CF90(&MaterialCollectionServantListViewItem_TypeInfo, *(_QWORD *)&initMode);
    sub_1B4CF90(&MaterialEventLogServantListViewItem_TypeInfo, v10);
    byte_49B6224 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(MaterialCollectionServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCollectionServantListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(MaterialCollectionServantListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  v16 = this->fields.linkItem;
  if ( v16 )
  {
    v17 = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v17
      && (MaterialEventLogServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
    {
      MaterialEventLogServantListViewItem__SetDummy((MaterialEventLogServantListViewItem_o *)v16, 0LL);
    }
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(transform, v19);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v21, v22);
  v26 = 1;
  v27 = v13;
  switch ( v13 )
  {
    case 0:
    case 2:
      goto LABEL_19;
    case 1:
      v27 = v13;
      goto LABEL_18;
    case 3:
      v27 = 2;
LABEL_18:
      v26 = v13;
LABEL_19:
      this->fields.dispMode = v27;
      this->fields.state = v26;
      goto LABEL_20;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_24;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      MaterialCollectionServantListViewObject__EventIntoStart(this, delay, v23);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      MaterialCollectionServantListViewObject__EventExitStart(this, delay, v23);
      return;
    default:
LABEL_20:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_24:
        MaterialCollectionServantListViewObject__SetupDisp(this, v23);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1B4CF34(p_callbackFunc, 0, v24, v25);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall MaterialCollectionServantListViewObject__InitItem(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__Init_31298440(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49B5361 = 1;
  }
  MaterialCollectionServantListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__Init_31299248(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49B5361 = 1;
  }
  MaterialCollectionServantListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&v5,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__Init_31299348(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49B5361 = 1;
  }
  MaterialCollectionServantListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    *(UnityEngine_Vector3_o *)&v4,
    method);
}


void __fastcall MaterialCollectionServantListViewObject__OnClickSelect(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MaterialCollectionServantListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ListViewItem_o *v10; // x8
  __int64 v11; // x11
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_49B6230 & 1) == 0 )
  {
    sub_1B4CF90(&MaterialCollectionServantListViewItem_TypeInfo, method);
    sub_1B4CF90(&Method_MaterialCollectionServantListViewObject_OnClickSelect__, v3);
    sub_1B4CF90(&MaterialEventLogServantListViewItem_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_9664/*"OnClickSelectListView"*/, v5);
    byte_49B6230 = 1;
  }
  linkItem = (MaterialCollectionServantListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(MaterialCollectionServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCollectionServantListViewItem_TypeInfo )
    {
      if ( MaterialCollectionServantListViewItem__get_IsCanNotSelect(linkItem, method) )
      {
        v8 = Method_MaterialCollectionServantListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_MaterialCollectionServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1B4CFA8(Method_MaterialCollectionServantListViewObject_OnClickSelect__);
        v9 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
        return;
      }
      v10 = this->fields.linkItem;
      if ( v10 )
      {
        v11 = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v10->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
          && (MaterialEventLogServantListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == MaterialEventLogServantListViewItem_TypeInfo
          && LOBYTE(v10[1].fields.sortValue2) )
        {
          return;
        }
      }
      v12 = Method_MaterialCollectionServantListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_MaterialCollectionServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B4CFA8(Method_MaterialCollectionServantListViewObject_OnClickSelect__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
      linkItem = (MaterialCollectionServantListViewItem_o *)this->fields.manager;
      if ( linkItem )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)linkItem,
          (System_String_o *)StringLiteral_9664/*"OnClickSelectListView"*/,
          (Il2CppObject *)this,
          0LL);
        return;
      }
    }
    sub_1B4D1EC(linkItem, method);
  }
}


void __fastcall MaterialCollectionServantListViewObject__OnDestroy(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B6220 & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B6220 = 1;
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
    sub_1B4CF34(p_dragObject, 0, v8, v9);
  }
}


void __fastcall MaterialCollectionServantListViewObject__OnLongPush(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_49B6231 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9723/*"OnLongPushListView"*/, method);
    sub_1B4CF90(&StringLiteral_9741/*"OnPressCancel"*/, v3);
    byte_49B6231 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_68785916(gameObject, (System_String_o *)StringLiteral_9741/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1B4D1EC(gameObject, v5);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9723/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__SetInput(
        MaterialCollectionServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  MaterialCollectionServantListViewItem_o *v7; // x1
  const MethodInfo *v8; // x3
  MaterialCollectionServantListViewItemDraw_o *v9; // x0

  if ( (byte_49B6222 & 1) == 0 )
  {
    sub_1B4CF90(&MaterialCollectionServantListViewItem_TypeInfo, isInput);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B6222 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B4D1EC(0LL, v7);
    MaterialCollectionServantListViewItemDraw__SetInput(v9, v7, 0, v8);
  }
}


void __fastcall MaterialCollectionServantListViewObject__SetItem(
        MaterialCollectionServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41356616((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialCollectionServantListViewObject__SetItem_31306652(
        MaterialCollectionServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialCollectionServantListViewObject__SetupDisp(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  ListViewItem_c *klass; // x9
  unsigned int methodPtr_low; // w10
  __int64 v8; // x13
  struct ListViewItem_o *v9; // x20
  MaterialEventLogServantListViewItem_o *v10; // x21
  struct ListViewItem_o *v11; // x23
  bool v12; // w1
  __int64 v13; // x12
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  MaterialCollectionServantListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_49B6225 & 1) == 0 )
  {
    sub_1B4CF90(&MaterialCollectionServantListViewItem_TypeInfo, method);
    sub_1B4CF90(&MaterialEventLogServantListViewItem_TypeInfo, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    byte_49B6225 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v10 = 0LL;
    v11 = 0LL;
    v9 = 0LL;
    v12 = 0;
    goto LABEL_19;
  }
  klass = linkItem->klass;
  methodPtr_low = LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr);
  v8 = LOBYTE(MaterialCollectionServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( methodPtr_low >= (unsigned int)v8 )
  {
    if ( (MaterialCollectionServantListViewItem_c *)klass->_2.typeHierarchy[v8 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v13 = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( methodPtr_low >= (unsigned int)v13 )
  {
    if ( (MaterialEventLogServantListViewItem_c *)klass->_2.typeHierarchy[v13 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
      v11 = this->fields.linkItem;
    else
      v11 = 0LL;
    if ( v9 )
      goto LABEL_12;
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  v11 = 0LL;
  if ( !v9 )
    goto LABEL_17;
LABEL_12:
  v12 = this->fields.dispMode != 0;
LABEL_18:
  v10 = (MaterialEventLogServantListViewItem_o *)v11;
LABEL_19:
  ListViewObject__SetVisible((ListViewObject_o *)this, v12, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    if ( v11 )
    {
      if ( LOBYTE(v11[1].fields.sortValue2) )
      {
LABEL_27:
        MaterialEventLogServantListViewItem__DummyVisible(v10, 0LL);
        return;
      }
      v17 = this->fields.itemDraw;
      if ( v17 )
      {
        MaterialCollectionServantListViewItemDraw__SetItem(
          v17,
          (MaterialCollectionServantListViewItem_o *)v9,
          this->fields.dispMode,
          v16);
        MaterialCollectionServantListViewObject__AttachedIconSetupDisp(this, v18);
        goto LABEL_27;
      }
LABEL_31:
      sub_1B4D1EC(v17, v15);
    }
    v17 = this->fields.itemDraw;
    if ( !v17 )
      goto LABEL_31;
    MaterialCollectionServantListViewItemDraw__SetItem(
      v17,
      (MaterialCollectionServantListViewItem_o *)v9,
      this->fields.dispMode,
      v16);
  }
  else if ( v11 )
  {
    goto LABEL_27;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewObject__ToString(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_49B622F & 1) == 0 )
  {
    sub_1B4CF90(&MaterialCollectionServantListViewItemDraw_DispMode_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_115/*" "*/, v3);
    byte_49B622F = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)MaterialCollectionServantListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D09D10(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_61131716(v6, (System_String_o *)StringLiteral_115/*" "*/, v7, 0LL);
}


void __fastcall MaterialCollectionServantListViewObject__add_callbackFunc(
        MaterialCollectionServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49B621D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49B621D = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewObject_o *)sub_1B4D4AC(v8);
  MaterialCollectionServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCollectionServantListViewObject__remove_callbackFunc(
        MaterialCollectionServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49B621E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49B621E = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewObject_o *)sub_1B4D4AC(v8);
  MaterialCollectionServantListViewObject__Awake(v11, v12);
}