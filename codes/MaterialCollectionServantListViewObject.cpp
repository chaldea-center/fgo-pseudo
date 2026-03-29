void MaterialCollectionServantListViewObject___ctor(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2BA8C & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2BA8C = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MaterialCollectionServantListViewObject__AttachedIconSetupDisp(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewObject_o *v2; // x19
  MaterialEventLogServantListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_4D2BA8B & 1) == 0 )
  {
    sub_1C93AD4(&MaterialEventLogServantListViewItem_TypeInfo);
    this = (MaterialCollectionServantListViewObject_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BA8B = 1;
  }
  linkItem = (MaterialEventLogServantListViewItem_o *)v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( !linkItem->fields.isDummy )
      ListViewObject__SetVisible((ListViewObject_o *)v2, v2->fields.dispMode != 0, 0);
    itemDraw = (UnityEngine_Object_o *)v2->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    {
      this = (MaterialCollectionServantListViewObject_o *)v2->fields.itemDraw;
      if ( this )
      {
        MaterialCollectionServantListViewItemDraw__SetLastTimeIcon(
          (MaterialCollectionServantListViewItemDraw_o *)this,
          linkItem,
          v6);
        return;
      }
LABEL_14:
      sub_1C93D2C(this, method);
    }
  }
}


void MaterialCollectionServantListViewObject__Awake(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4D2BA78 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewItemDraw___);
    byte_4D2BA78 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewItemDraw___);
  this->fields.itemDraw = (struct MaterialCollectionServantListViewItemDraw_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void MaterialCollectionServantListViewObject__ClearNewIcon(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct MaterialCollectionServantListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (MaterialCollectionServantListViewObject_o *)itemDraw->fields.servantFaceIcon) == 0 )
    sub_1C93D2C(this, method);
  ServantFaceIconComponent__ClearShiningIcon((ServantFaceIconComponent_o *)this, 0);
}


UnityEngine_GameObject_o *MaterialCollectionServantListViewObject__CreateDragObject(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2
  MaterialCollectionServantListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4D2BA7C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    byte_4D2BA7C = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0) )
  {
    sub_1C93D2C(DragObject, v4);
  }
  v7 = (MaterialCollectionServantListViewObject_o *)DragObject;
  MaterialCollectionServantListViewObject__Init_33872068((MaterialCollectionServantListViewObject_o *)DragObject, 2, v6);
  MaterialCollectionServantListViewObject__SetupDisp(v7, v8);
  return v5;
}


void MaterialCollectionServantListViewObject__EventEnterMove(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Vector3_o v22; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D2BA83 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_6243/*"EventEnterMove2"*/);
    byte_4D2BA83 = 1;
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
  v22 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v24.fields.x = v22.fields.x + 0.0;
  v24.fields.y = v22.fields.y + 1000.0;
  v24.fields.z = v22.fields.z + 0.0;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v24, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C93D2C(dragObject, method);
  v7 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[3].monitor = gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7[3].monitor, (int32_t)gameObject, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_6243/*"EventEnterMove2"*/;
  v7[3].fields.m_CachedPtr = StringLiteral_6243/*"EventEnterMove2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7[3].fields, v15, v16, v17, v18, v19, v20, v21);
}


void MaterialCollectionServantListViewObject__EventEnterMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4D2BA84 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D2BA84 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v4, v5, v6, v7, v8, v9);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v10);
}


void MaterialCollectionServantListViewObject__EventEnterStart(
        MaterialCollectionServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v14; // x2

  if ( (byte_4D2BA82 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_1C93AD4(&StringLiteral_6242/*"EventEnterMove"*/);
    byte_4D2BA82 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0 )
  {
    sub_1C93D2C(dragObject, v12);
  }
  MaterialCollectionServantListViewObject__Init_33872068(
    (MaterialCollectionServantListViewObject_o *)dragObject,
    2,
    v14);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6242/*"EventEnterMove"*/,
    delay,
    0);
}


void MaterialCollectionServantListViewObject__EventExitMove(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_GameObject_o *v7; // x20
  ListViewObject_c *v8; // x0
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Vector3_o v24; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D2BA86 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_6248/*"EventExitMove2"*/);
    byte_4D2BA86 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    MaterialCollectionServantListViewObject__EventMoveEnd(this, v4);
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
    v24 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v7 = this->fields.dragObject;
    v8 = ListViewObject_TypeInfo;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v8 = ListViewObject_TypeInfo;
    }
    v26.fields.x = v24.fields.x + 1000.0;
    v26.fields.y = v24.fields.y + 0.0;
    v26.fields.z = v24.fields.z + 0.0;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v7, v8->static_fields->BASE_MOVE_TIME, v26, 0);
    if ( !transform )
LABEL_15:
      sub_1C93D2C(transform, v4);
    v9 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v9[3].monitor = gameObject;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9[3].monitor, (int32_t)gameObject, v11, v12, v13, v14, v15, v16);
    v17 = StringLiteral_6248/*"EventExitMove2"*/;
    v9[3].fields.m_CachedPtr = StringLiteral_6248/*"EventExitMove2"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9[3].fields, v17, v18, v19, v20, v21, v22, v23);
  }
}


void MaterialCollectionServantListViewObject__EventExitMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4D2BA87 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D2BA87 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v4, v5, v6, v7, v8, v9);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v10);
}


void MaterialCollectionServantListViewObject__EventExitStart(
        MaterialCollectionServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4D2BA85 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_6247/*"EventExitMove"*/);
    byte_4D2BA85 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MaterialCollectionServantListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C93D2C(dragObject, v12);
  MaterialCollectionServantListViewObject__Init_33872068(
    (MaterialCollectionServantListViewObject_o *)Component_object,
    2,
    v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6247/*"EventExitMove"*/,
    delay,
    0);
}


void MaterialCollectionServantListViewObject__EventIntoMove(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Vector3_o v22; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2BA80 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_6259/*"EventIntoMove2"*/);
    byte_4D2BA80 = 1;
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
  v22 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v5 = ListViewObject_TypeInfo;
  v6 = this->fields.dragObject;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v6, v5->static_fields->BASE_MOVE_TIME, v22, 0);
  if ( !dragObject )
LABEL_11:
    sub_1C93D2C(dragObject, method);
  v7 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[3].monitor = gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7[3].monitor, (int32_t)gameObject, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_6259/*"EventIntoMove2"*/;
  v7[3].fields.m_CachedPtr = StringLiteral_6259/*"EventIntoMove2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7[3].fields, v15, v16, v17, v18, v19, v20, v21);
}


void MaterialCollectionServantListViewObject__EventIntoMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4D2BA81 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D2BA81 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  MaterialCollectionServantListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v11);
}


void MaterialCollectionServantListViewObject__EventIntoStart(
        MaterialCollectionServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2BA7F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_1C93AD4(&StringLiteral_6258/*"EventIntoMove"*/);
    byte_4D2BA7F = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0
    || (MaterialCollectionServantListViewObject__Init_33872068(
          (MaterialCollectionServantListViewObject_o *)dragObject,
          2,
          v15),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v17 = UnityEngine_Transform__TransformPoint_72146688((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_1C93D2C(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, v17, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6258/*"EventIntoMove"*/,
    delay,
    0);
}


void MaterialCollectionServantListViewObject__EventMoveEnd(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


MaterialCollectionServantListViewItem_o *MaterialCollectionServantListViewObject__GetItem(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2BA7A & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCollectionServantListViewItem_TypeInfo);
    byte_4D2BA7A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = MaterialCollectionServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCollectionServantListViewItem_TypeInfo )
    return (MaterialCollectionServantListViewItem_o *)this->fields.linkItem;
  return 0;
}


void MaterialCollectionServantListViewObject__Init(
        MaterialCollectionServantListViewObject_o *this,
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
  struct ListViewItem_o *v15; // x0
  __int64 v16; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w9
  int32_t v34; // w8
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4D2BA7D & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_1C93AD4(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_4D2BA7D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = MaterialCollectionServantListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCollectionServantListViewItem_TypeInfo )
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
  ((void (__fastcall *)(MaterialCollectionServantListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  v15 = this->fields.linkItem;
  if ( v15 )
  {
    v16 = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v15->klass->_2.naturalAligment >= (unsigned int)v16
      && (MaterialEventLogServantListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
    {
      MaterialEventLogServantListViewItem__SetDummy((MaterialEventLogServantListViewItem_o *)v15, 0);
    }
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v18);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v33 = 1;
  v34 = v12;
  switch ( v12 )
  {
    case 0:
    case 2:
      goto LABEL_19;
    case 1:
      v34 = v12;
      goto LABEL_18;
    case 3:
      v34 = 2;
LABEL_18:
      v33 = v12;
LABEL_19:
      this->fields.dispMode = v34;
      this->fields.state = v33;
      goto LABEL_20;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_24;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      MaterialCollectionServantListViewObject__EventIntoStart(this, delay, v26);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      MaterialCollectionServantListViewObject__EventExitStart(this, delay, v26);
      return;
    default:
LABEL_20:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_24:
        MaterialCollectionServantListViewObject__SetupDisp(this, v26);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C93A78(p_callbackFunc, 0, v27, v28, v29, v30, v31, v32);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void MaterialCollectionServantListViewObject__InitItem(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void MaterialCollectionServantListViewObject__Init_33872068(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Vector3_o v9; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v9.fields.x = v4;
  v9.fields.y = v5;
  v9.fields.z = v6;
  MaterialCollectionServantListViewObject__Init(this, initMode, 0, 0.0, v9, v3);
}


void MaterialCollectionServantListViewObject__Init_33872720(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v12; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v12.fields.x = v5;
  v12.fields.y = v6;
  v12.fields.z = v7;
  MaterialCollectionServantListViewObject__Init(this, initMode, callbackFunc, delay, v12, method);
}


void MaterialCollectionServantListViewObject__Init_33872820(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v10.fields.x = v4;
  v10.fields.y = v5;
  v10.fields.z = v6;
  MaterialCollectionServantListViewObject__Init(this, initMode, callbackFunc, 0.0, v10, method);
}


void MaterialCollectionServantListViewObject__OnClickSelect(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct ListViewItem_o *v7; // x8
  __int64 v8; // x11
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4D2BA89 & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_1C93AD4(&Method_MaterialCollectionServantListViewObject_OnClickSelect__);
    sub_1C93AD4(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_9923/*"OnClickSelectListView"*/);
    byte_4D2BA89 = 1;
  }
  linkItem = (MaterialCollectionServantListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = MaterialCollectionServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCollectionServantListViewItem_TypeInfo )
    {
      if ( MaterialCollectionServantListViewItem__get_IsCanNotSelect(linkItem, method) )
      {
        v5 = Method_MaterialCollectionServantListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_MaterialCollectionServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1C93AEC(Method_MaterialCollectionServantListViewObject_OnClickSelect__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
        return;
      }
      v7 = this->fields.linkItem;
      if ( v7 )
      {
        v8 = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( v7->klass->_2.naturalAligment >= (unsigned int)v8
          && (MaterialEventLogServantListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == MaterialEventLogServantListViewItem_TypeInfo
          && LOBYTE(v7[1].fields.sortValue2B) )
        {
          return;
        }
      }
      v9 = Method_MaterialCollectionServantListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_MaterialCollectionServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C93AEC(Method_MaterialCollectionServantListViewObject_OnClickSelect__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      linkItem = (MaterialCollectionServantListViewItem_o *)this->fields.manager;
      if ( linkItem )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)linkItem,
          (System_String_o *)StringLiteral_9923/*"OnClickSelectListView"*/,
          (Il2CppObject *)this,
          0);
        return;
      }
    }
    sub_1C93D2C(linkItem, method);
  }
}


void MaterialCollectionServantListViewObject__OnDestroy(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4D2BA79 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BA79 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
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
    sub_1C93A78(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void MaterialCollectionServantListViewObject__OnLongPush(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4D2BA8A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9984/*"OnLongPushListView"*/);
    sub_1C93AD4(&StringLiteral_10002/*"OnPressCancel"*/);
    byte_4D2BA8A = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_72101276(gameObject, (System_String_o *)StringLiteral_10002/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C93D2C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9984/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void MaterialCollectionServantListViewObject__SetInput(
        MaterialCollectionServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  MaterialCollectionServantListViewItem_o *v6; // x1
  const MethodInfo *v7; // x3
  MaterialCollectionServantListViewItemDraw_o *v8; // x0

  if ( (byte_4D2BA7B & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BA7B = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C93D2C(0, v6);
    MaterialCollectionServantListViewItemDraw__SetInput(v8, v6, 0, v7);
  }
}


void MaterialCollectionServantListViewObject__SetItem(
        MaterialCollectionServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void MaterialCollectionServantListViewObject__SetItem_33878664(
        MaterialCollectionServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void MaterialCollectionServantListViewObject__SetupDisp(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  ListViewItem_c *klass; // x9
  unsigned int naturalAligment; // w10
  __int64 v6; // x13
  struct ListViewItem_o *v7; // x20
  MaterialEventLogServantListViewItem_o *v8; // x21
  struct ListViewItem_o *v9; // x23
  bool v10; // w1
  __int64 v11; // x12
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  MaterialCollectionServantListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4D2BA7E & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_1C93AD4(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BA7E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v8 = 0;
    v9 = 0;
    v7 = 0;
    v10 = 0;
    goto LABEL_19;
  }
  klass = linkItem->klass;
  naturalAligment = linkItem->klass->_2.naturalAligment;
  v6 = MaterialCollectionServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( naturalAligment >= (unsigned int)v6 )
  {
    if ( (MaterialCollectionServantListViewItem_c *)klass->_2.typeHierarchy[v6 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
      v7 = this->fields.linkItem;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  v11 = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( naturalAligment >= (unsigned int)v11 )
  {
    if ( (MaterialEventLogServantListViewItem_c *)klass->_2.typeHierarchy[v11 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0;
    if ( v7 )
      goto LABEL_12;
LABEL_17:
    v10 = 0;
    goto LABEL_18;
  }
  v9 = 0;
  if ( !v7 )
    goto LABEL_17;
LABEL_12:
  v10 = this->fields.dispMode != 0;
LABEL_18:
  v8 = (MaterialEventLogServantListViewItem_o *)v9;
LABEL_19:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    if ( v9 )
    {
      if ( LOBYTE(v9[1].fields.sortValue2B) )
      {
LABEL_27:
        MaterialEventLogServantListViewItem__DummyVisible(v8, 0);
        return;
      }
      v15 = this->fields.itemDraw;
      if ( v15 )
      {
        MaterialCollectionServantListViewItemDraw__SetItem(
          v15,
          (MaterialCollectionServantListViewItem_o *)v7,
          this->fields.dispMode,
          v14);
        MaterialCollectionServantListViewObject__AttachedIconSetupDisp(this, v16);
        goto LABEL_27;
      }
LABEL_31:
      sub_1C93D2C(v15, v13);
    }
    v15 = this->fields.itemDraw;
    if ( !v15 )
      goto LABEL_31;
    MaterialCollectionServantListViewItemDraw__SetItem(
      v15,
      (MaterialCollectionServantListViewItem_o *)v7,
      this->fields.dispMode,
      v14);
  }
  else if ( v9 )
  {
    goto LABEL_27;
  }
}


System_String_o *MaterialCollectionServantListViewObject__ToString(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4D2BA88 & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCollectionServantListViewItemDraw_DispMode_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D2BA88 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)MaterialCollectionServantListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E502DC(&v10, 0, 0, 0);
  return System_String__Concat_64463988(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void MaterialCollectionServantListViewObject__add_callbackFunc(
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

  if ( (byte_4D2BA76 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2BA76 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewObject_o *)sub_1C940C8(v8);
  MaterialCollectionServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void MaterialCollectionServantListViewObject__remove_callbackFunc(
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

  if ( (byte_4D2BA77 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2BA77 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewObject_o *)sub_1C940C8(v8);
  MaterialCollectionServantListViewObject__Awake(v11, v12);
}