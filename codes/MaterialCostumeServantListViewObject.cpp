void MaterialCostumeServantListViewObject___ctor(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2BAF1 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2BAF1 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MaterialCostumeServantListViewObject__Awake(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BADE & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewItemDraw___);
    byte_4D2BADE = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewItemDraw___);
  this->fields.itemDraw = (struct MaterialCostumeServantListViewItemDraw_o *)Component_object;
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


UnityEngine_GameObject_o *MaterialCostumeServantListViewObject__CreateDragObject(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2
  MaterialCostumeServantListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4D2BAE2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    byte_4D2BAE2 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0) )
  {
    sub_1C93D2C(DragObject, v4);
  }
  v7 = (MaterialCostumeServantListViewObject_o *)DragObject;
  MaterialCostumeServantListViewObject__Init_33902876((MaterialCostumeServantListViewObject_o *)DragObject, 2, v6);
  MaterialCostumeServantListViewObject__SetupDisp(v7, v8);
  return v5;
}


void MaterialCostumeServantListViewObject__EventEnterMove(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAE9 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_6243/*"EventEnterMove2"*/);
    byte_4D2BAE9 = 1;
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


void MaterialCostumeServantListViewObject__EventEnterMove2(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAEA & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D2BAEA = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v4, v5, v6, v7, v8, v9);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v10);
}


void MaterialCostumeServantListViewObject__EventEnterStart(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAE8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_1C93AD4(&StringLiteral_6242/*"EventEnterMove"*/);
    byte_4D2BAE8 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0 )
  {
    sub_1C93D2C(dragObject, v12);
  }
  MaterialCostumeServantListViewObject__Init_33902876((MaterialCostumeServantListViewObject_o *)dragObject, 2, v14);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6242/*"EventEnterMove"*/,
    delay,
    0);
}


void MaterialCostumeServantListViewObject__EventExitMove(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAEC & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_6248/*"EventExitMove2"*/);
    byte_4D2BAEC = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    MaterialCostumeServantListViewObject__EventMoveEnd(this, v4);
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


void MaterialCostumeServantListViewObject__EventExitMove2(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAED & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D2BAED = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v4, v5, v6, v7, v8, v9);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v10);
}


void MaterialCostumeServantListViewObject__EventExitStart(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAEB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_6247/*"EventExitMove"*/);
    byte_4D2BAEB = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MaterialCostumeServantListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C93D2C(dragObject, v12);
  MaterialCostumeServantListViewObject__Init_33902876(
    (MaterialCostumeServantListViewObject_o *)Component_object,
    2,
    v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6247/*"EventExitMove"*/,
    delay,
    0);
}


void MaterialCostumeServantListViewObject__EventIntoMove(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAE6 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_6259/*"EventIntoMove2"*/);
    byte_4D2BAE6 = 1;
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


void MaterialCostumeServantListViewObject__EventIntoMove2(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAE7 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D2BAE7 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  MaterialCostumeServantListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v11);
}


void MaterialCostumeServantListViewObject__EventIntoStart(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAE5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_1C93AD4(&StringLiteral_6258/*"EventIntoMove"*/);
    byte_4D2BAE5 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0
    || (MaterialCostumeServantListViewObject__Init_33902876(
          (MaterialCostumeServantListViewObject_o *)dragObject,
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


void MaterialCostumeServantListViewObject__EventMoveEnd(
        MaterialCostumeServantListViewObject_o *this,
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


MaterialCostumeServantListViewItem_o *MaterialCostumeServantListViewObject__GetItem(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2BAE0 & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4D2BAE0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    return (MaterialCostumeServantListViewItem_o *)this->fields.linkItem;
  return 0;
}


void MaterialCostumeServantListViewObject__Init(
        MaterialCostumeServantListViewObject_o *this,
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
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w9
  int32_t v32; // w8
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4D2BAE3 & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4D2BAE3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCostumeServantListViewItem_TypeInfo )
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
  ((void (__fastcall *)(MaterialCostumeServantListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v31 = 1;
  v32 = v12;
  switch ( v12 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v32 = v12;
      goto LABEL_14;
    case 3:
      v32 = 2;
LABEL_14:
      v31 = v12;
LABEL_15:
      this->fields.dispMode = v32;
      this->fields.state = v31;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      MaterialCostumeServantListViewObject__EventIntoStart(this, delay, v24);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      MaterialCostumeServantListViewObject__EventExitStart(this, delay, v24);
      return;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        MaterialCostumeServantListViewObject__SetupDisp(this, v24);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C93A78(p_callbackFunc, 0, v25, v26, v27, v28, v29, v30);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void MaterialCostumeServantListViewObject__InitItem(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void MaterialCostumeServantListViewObject__Init_33902876(
        MaterialCostumeServantListViewObject_o *this,
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
  MaterialCostumeServantListViewObject__Init(this, initMode, 0, 0.0, v9, v3);
}


void MaterialCostumeServantListViewObject__Init_33903528(
        MaterialCostumeServantListViewObject_o *this,
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
  MaterialCostumeServantListViewObject__Init(this, initMode, callbackFunc, delay, v12, method);
}


void MaterialCostumeServantListViewObject__Init_33903628(
        MaterialCostumeServantListViewObject_o *this,
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
  MaterialCostumeServantListViewObject__Init(this, initMode, callbackFunc, 0.0, v10, method);
}


void MaterialCostumeServantListViewObject__OnClickSelect(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  _DWORD *monitor; // x10
  bool v6; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  v2 = this;
  if ( (byte_4D2BAEF & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCostumeServantListViewItem_TypeInfo);
    sub_1C93AD4(&Method_MaterialCostumeServantListViewObject_OnClickSelect__);
    this = (MaterialCostumeServantListViewObject_o *)sub_1C93AD4(&StringLiteral_9923/*"OnClickSelectListView"*/);
    byte_4D2BAEF = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialCostumeServantListViewItem_TypeInfo )
    {
      goto LABEL_18;
    }
    monitor = linkItem[1].monitor;
    v6 = !monitor || LOBYTE(linkItem[1].fields.loopIndex) || monitor[10] != 2 || linkItem[1].fields.selectNum == 0;
    v7 = Method_MaterialCostumeServantListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C93AEC(Method_MaterialCostumeServantListViewObject_OnClickSelect__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
    if ( v6 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (MaterialCostumeServantListViewObject_o *)v2->fields.manager;
    if ( !this )
LABEL_18:
      sub_1C93D2C(this, method);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)this,
      (System_String_o *)StringLiteral_9923/*"OnClickSelectListView"*/,
      (Il2CppObject *)v2,
      0);
  }
}


void MaterialCostumeServantListViewObject__OnDestroy(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BADF & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BADF = 1;
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


void MaterialCostumeServantListViewObject__OnLongPush(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4D2BAF0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9984/*"OnLongPushListView"*/);
    sub_1C93AD4(&StringLiteral_10002/*"OnPressCancel"*/);
    byte_4D2BAF0 = 1;
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


void MaterialCostumeServantListViewObject__SetInput(
        MaterialCostumeServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  MaterialCostumeServantListViewItemDraw_o *v8; // x0

  if ( (byte_4D2BAE1 & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCostumeServantListViewItem_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BAE1 = 1;
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
    MaterialCostumeServantListViewItemDraw__SetButtonState(v8, 1, v7);
  }
}


void MaterialCostumeServantListViewObject__SetItem(
        MaterialCostumeServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void MaterialCostumeServantListViewObject__SetItem_33907876(
        MaterialCostumeServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void MaterialCostumeServantListViewObject__SetupDisp(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  MaterialCostumeServantListViewItemDraw_o *v9; // x0

  if ( (byte_4D2BAE4 & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCostumeServantListViewItem_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BAE4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialCostumeServantListViewItem_TypeInfo )
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
      sub_1C93D2C(0, v7);
    MaterialCostumeServantListViewItemDraw__SetItem(
      v9,
      (MaterialCostumeServantListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


System_String_o *MaterialCostumeServantListViewObject__ToString(
        MaterialCostumeServantListViewObject_o *this,
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

  if ( (byte_4D2BAEE & 1) == 0 )
  {
    sub_1C93AD4(&MaterialCostumeServantListViewItemDraw_DispMode_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D2BAEE = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)MaterialCostumeServantListViewItemDraw_DispMode_TypeInfo;
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


void MaterialCostumeServantListViewObject__add_callbackFunc(
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

  if ( (byte_4D2BADC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2BADC = 1;
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
  v11 = (MaterialCostumeServantListViewObject_o *)sub_1C940C8(v8);
  MaterialCostumeServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void MaterialCostumeServantListViewObject__remove_callbackFunc(
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

  if ( (byte_4D2BADD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2BADD = 1;
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
  v11 = (MaterialCostumeServantListViewObject_o *)sub_1C940C8(v8);
  MaterialCostumeServantListViewObject__Awake(v11, v12);
}