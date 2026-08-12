void MaterialCollectionServantListViewObject___ctor(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B6DA & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596B6DA = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MaterialCollectionServantListViewObject__AttachedIconSetupDisp(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCollectionServantListViewObject_o *v3; // x19
  MaterialEventLogServantListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x2

  v3 = this;
  if ( (byte_596B6D9 & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    this = (MaterialCollectionServantListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6D9 = 1;
  }
  linkItem = (MaterialEventLogServantListViewItem_o *)v3->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( !linkItem->fields.isDummy )
      ListViewObject__SetVisible((ListViewObject_o *)v3, v3->fields.dispMode != 0, 0);
    itemDraw = (UnityEngine_Object_o *)v3->fields.itemDraw;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    {
      this = (MaterialCollectionServantListViewObject_o *)v3->fields.itemDraw;
      if ( this )
      {
        MaterialCollectionServantListViewItemDraw__SetLastTimeIcon(
          (MaterialCollectionServantListViewItemDraw_o *)this,
          linkItem,
          v7);
        return;
      }
LABEL_14:
      sub_2213CDC(this, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596B6C6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewItemDraw___);
    byte_596B6C6 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewItemDraw___);
  this->fields.itemDraw = (struct MaterialCollectionServantListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
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
    sub_2213CDC(this, method);
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

  if ( (byte_596B6CA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    byte_596B6CA = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  v7 = (MaterialCollectionServantListViewObject_o *)DragObject;
  MaterialCollectionServantListViewObject__Init_39974116((MaterialCollectionServantListViewObject_o *)DragObject, 2, v6);
  MaterialCollectionServantListViewObject__SetupDisp(v7, v8);
  return v5;
}


void MaterialCollectionServantListViewObject__EventEnterMove(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewObject_c *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_Vector3_o v24; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596B6D1 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6472/*"EventEnterMove2"*/);
    byte_596B6D1 = 1;
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
  v24 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v7 = ListViewObject_TypeInfo;
  v8 = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v5, v6);
    v7 = ListViewObject_TypeInfo;
  }
  v26.fields.x = v24.fields.x + 0.0;
  v26.fields.y = v24.fields.y + 1000.0;
  v26.fields.z = v24.fields.z + 0.0;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v7->static_fields->BASE_MOVE_TIME, v26, 0);
  if ( !dragObject )
LABEL_11:
    sub_2213CDC(dragObject, method);
  v9 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[3].monitor, (int32_t)gameObject, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_6472/*"EventEnterMove2"*/;
  v9[3].fields.m_CachedPtr = StringLiteral_6472/*"EventEnterMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[3].fields, v17, v18, v19, v20, v21, v22, v23);
}


void MaterialCollectionServantListViewObject__EventEnterMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  if ( (byte_596B6D2 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596B6D2 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v11);
}


void MaterialCollectionServantListViewObject__EventEnterStart(
        MaterialCollectionServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v14; // x2

  if ( (byte_596B6D0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_2213A60(&StringLiteral_6471/*"EventEnterMove"*/);
    byte_596B6D0 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0 )
  {
    sub_2213CDC(dragObject, v12);
  }
  MaterialCollectionServantListViewObject__Init_39974116(
    (MaterialCollectionServantListViewObject_o *)dragObject,
    2,
    v14);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6471/*"EventEnterMove"*/,
    delay,
    0);
}


void MaterialCollectionServantListViewObject__EventExitMove(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x20
  ListViewObject_c *v11; // x0
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Vector3_o v27; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596B6D4 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6477/*"EventExitMove2"*/);
    byte_596B6D4 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    MaterialCollectionServantListViewObject__EventMoveEnd(this, v5);
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
    v27 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v10 = this->fields.dragObject;
    v11 = ListViewObject_TypeInfo;
    if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v8, v9);
      v11 = ListViewObject_TypeInfo;
    }
    v29.fields.x = v27.fields.x + 1000.0;
    v29.fields.y = v27.fields.y + 0.0;
    v29.fields.z = v27.fields.z + 0.0;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v11->static_fields->BASE_MOVE_TIME, v29, 0);
    if ( !transform )
LABEL_15:
      sub_2213CDC(transform, v5);
    v12 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v12[3].monitor = gameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15, v16, v17, v18, v19);
    v20 = StringLiteral_6477/*"EventExitMove2"*/;
    v12[3].fields.m_CachedPtr = StringLiteral_6477/*"EventExitMove2"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].fields, v20, v21, v22, v23, v24, v25, v26);
  }
}


void MaterialCollectionServantListViewObject__EventExitMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  if ( (byte_596B6D5 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596B6D5 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v11);
}


void MaterialCollectionServantListViewObject__EventExitStart(
        MaterialCollectionServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596B6D3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6476/*"EventExitMove"*/);
    byte_596B6D3 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
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
LABEL_12:
    sub_2213CDC(dragObject, v12);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  MaterialCollectionServantListViewObject__Init(
    (MaterialCollectionServantListViewObject_o *)Component_object,
    2,
    0,
    0.0,
    v20,
    v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6476/*"EventExitMove"*/,
    delay,
    0);
}


void MaterialCollectionServantListViewObject__EventIntoMove(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewObject_c *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_Vector3_o v24; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B6CE & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6492/*"EventIntoMove2"*/);
    byte_596B6CE = 1;
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
  v24 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v7 = ListViewObject_TypeInfo;
  v8 = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v5, v6);
    v7 = ListViewObject_TypeInfo;
  }
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v7->static_fields->BASE_MOVE_TIME, v24, 0);
  if ( !dragObject )
LABEL_11:
    sub_2213CDC(dragObject, method);
  v9 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[3].monitor, (int32_t)gameObject, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_6492/*"EventIntoMove2"*/;
  v9[3].fields.m_CachedPtr = StringLiteral_6492/*"EventIntoMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[3].fields, v17, v18, v19, v20, v21, v22, v23);
}


void MaterialCollectionServantListViewObject__EventIntoMove2(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1

  if ( (byte_596B6CF & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596B6CF = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  MaterialCollectionServantListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v13);
}


void MaterialCollectionServantListViewObject__EventIntoStart(
        MaterialCollectionServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v15; // x3
  MaterialCollectionServantListViewObject_o *v18; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596B6CD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_2213A60(&StringLiteral_6491/*"EventIntoMove"*/);
    byte_596B6CD = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             dragObject,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
  if ( !dragObject )
    goto LABEL_11;
  v18 = (MaterialCollectionServantListViewObject_o *)dragObject;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  MaterialCollectionServantListViewObject__Init(v18, 2, 0, 0.0, v21, v15);
  dragObject = *p_dragObject;
  if ( !*p_dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v20 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
        !transform) )
  {
LABEL_11:
    sub_2213CDC(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, v20, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6491/*"EventIntoMove"*/,
    delay,
    0);
}


void MaterialCollectionServantListViewObject__EventMoveEnd(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._BoardType_k__BackingField) = 0;
  *(&p_callbackFunc[-1].fields._BoardType_k__BackingField + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


MaterialCollectionServantListViewItem_o *MaterialCollectionServantListViewObject__GetItem(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596B6C8 & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewItem_TypeInfo);
    byte_596B6C8 = 1;
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
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int32_t v13; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  struct ListViewItem_o *v16; // x0
  __int64 v17; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w8
  int32_t v35; // w9
  MissionNaviTransitionBoardItem_c *v36; // x19

  if ( (byte_596B6CB & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_596B6CB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = MaterialCollectionServantListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MaterialCollectionServantListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCollectionServantListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(MaterialCollectionServantListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  v16 = this->fields.linkItem;
  if ( v16 )
  {
    v17 = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v16->klass->_2.naturalAligment >= (unsigned int)v17
      && (MaterialEventLogServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
    {
      MaterialEventLogServantListViewItem__SetDummy((MaterialEventLogServantListViewItem_o *)v16, 0);
    }
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v19);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( v13 <= 2 )
  {
    v34 = 1;
    if ( !v13 )
    {
      v35 = 0;
LABEL_31:
      this->fields.dispMode = v35;
      this->fields.state = v34;
      goto LABEL_32;
    }
    if ( v13 != 1 )
    {
      v35 = v13;
      if ( v13 != 2 )
        goto LABEL_32;
      goto LABEL_31;
    }
    v35 = 1;
LABEL_30:
    v34 = v13;
    goto LABEL_31;
  }
  if ( v13 > 4 )
  {
    if ( v13 == 5 )
    {
      this->fields.dispMode = 0;
      this->fields.state = 2;
      MaterialCollectionServantListViewObject__EventIntoStart(this, delay, v27);
      return;
    }
    if ( v13 == 7 )
    {
      this->fields.dispMode = 2;
      this->fields.state = 2;
      MaterialCollectionServantListViewObject__EventExitStart(this, delay, v27);
      return;
    }
LABEL_32:
    if ( state && dispMode == this->fields.dispMode )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( v13 == 3 )
  {
    v35 = 2;
    goto LABEL_30;
  }
  this->fields.dispMode = 2;
  this->fields.state = 1;
LABEL_34:
  MaterialCollectionServantListViewObject__SetupDisp(this, v27);
LABEL_35:
  v36 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v28, v29, v30, v31, v32, v33);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v36->_1.namespaze)(
      v36->_1.element_class,
      *(_QWORD *)&v36->_1.byval_arg.bits);
  }
}


void MaterialCollectionServantListViewObject__InitItem(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void MaterialCollectionServantListViewObject__Init_39974116(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Vector3_o v9; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v9.fields.x = v4;
  v9.fields.y = v5;
  v9.fields.z = v6;
  MaterialCollectionServantListViewObject__Init(this, initMode, 0, 0.0, v9, v3);
}


void MaterialCollectionServantListViewObject__Init_39974756(
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

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v12.fields.x = v5;
  v12.fields.y = v6;
  v12.fields.z = v7;
  MaterialCollectionServantListViewObject__Init(this, initMode, callbackFunc, delay, v12, method);
}


void MaterialCollectionServantListViewObject__Init_39974856(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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

  if ( (byte_596B6D7 & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_2213A60(&Method_MaterialCollectionServantListViewObject_OnClickSelect__);
    sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10267/*"OnClickSelectListView"*/);
    byte_596B6D7 = 1;
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
          v5 = (_QWORD *)sub_2213A78(Method_MaterialCollectionServantListViewObject_OnClickSelect__);
        v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
        v9 = (_QWORD *)sub_2213A78(Method_MaterialCollectionServantListViewObject_OnClickSelect__);
      v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      linkItem = (MaterialCollectionServantListViewItem_o *)this->fields.manager;
      if ( linkItem )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)linkItem,
          (System_String_o *)StringLiteral_10267/*"OnClickSelectListView"*/,
          (Il2CppObject *)this,
          0);
        return;
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void MaterialCollectionServantListViewObject__OnDestroy(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596B6C7 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6C7 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void MaterialCollectionServantListViewObject__OnLongPush(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B6D8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596B6D8 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_83438096(gameObject, (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_2213CDC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10330/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void MaterialCollectionServantListViewObject__SetInput(
        MaterialCollectionServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  MaterialCollectionServantListViewItem_o *v8; // x1
  const MethodInfo *v9; // x3
  MaterialCollectionServantListViewItemDraw_o *v10; // x0

  if ( (byte_596B6C9 & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6C9 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_2213CDC(0, v8);
    MaterialCollectionServantListViewItemDraw__SetInput(v10, v8, 0, v9);
  }
}


void MaterialCollectionServantListViewObject__SetItem(
        MaterialCollectionServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void MaterialCollectionServantListViewObject__SetItem_39980636(
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
  bool v8; // w1
  MaterialEventLogServantListViewItem_o *v9; // x21
  __int64 v10; // x12
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  MaterialCollectionServantListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_596B6CC & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6CC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v8 = 0;
    v7 = 0;
    v9 = 0;
    goto LABEL_18;
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
  v10 = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( naturalAligment >= (unsigned int)v10 )
  {
    if ( (MaterialEventLogServantListViewItem_c *)klass->_2.typeHierarchy[v10 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
      v9 = (MaterialEventLogServantListViewItem_o *)this->fields.linkItem;
    else
      v9 = 0;
    if ( v7 )
      goto LABEL_12;
  }
  else
  {
    v9 = 0;
    if ( v7 )
    {
LABEL_12:
      v8 = this->fields.dispMode != 0;
      goto LABEL_18;
    }
  }
  v8 = 0;
LABEL_18:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    if ( v9 )
    {
      if ( v9->fields.isDummy )
      {
LABEL_26:
        MaterialEventLogServantListViewItem__DummyVisible(v9, 0);
        return;
      }
      v16 = this->fields.itemDraw;
      if ( v16 )
      {
        MaterialCollectionServantListViewItemDraw__SetItem(
          v16,
          (MaterialCollectionServantListViewItem_o *)v7,
          this->fields.dispMode,
          v15);
        MaterialCollectionServantListViewObject__AttachedIconSetupDisp(this, v17);
        goto LABEL_26;
      }
LABEL_30:
      sub_2213CDC(v16, v14);
    }
    v16 = this->fields.itemDraw;
    if ( !v16 )
      goto LABEL_30;
    MaterialCollectionServantListViewItemDraw__SetItem(
      v16,
      (MaterialCollectionServantListViewItem_o *)v7,
      this->fields.dispMode,
      v15);
  }
  else if ( v9 )
  {
    goto LABEL_26;
  }
}


System_String_o *MaterialCollectionServantListViewObject__ToString(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t dispMode; // w10
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t v10; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_596B6D6 & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_596B6D6 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)MaterialCollectionServantListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_2402C74(&v11, 0, 0, 0);
  return System_String__Concat_75694928(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MaterialCollectionServantListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B6C4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B6C4 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MaterialCollectionServantListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  MaterialCollectionServantListViewObject__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MaterialCollectionServantListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B6C5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B6C5 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MaterialCollectionServantListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  MaterialCollectionServantListViewObject__Awake(v13, v14);
}