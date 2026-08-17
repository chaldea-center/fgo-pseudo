void FollowerSelectItemListViewObject___ctor(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AFFB & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596AFFB = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void FollowerSelectItemListViewObject__Awake(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596AFD9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___);
    byte_596AFD9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___);
  this->fields.itemDraw = (struct FollowerSelectItemListViewItemDraw_o *)Component_object;
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596AFF9 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFF9 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&displaySkill, method);
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
      sub_2213CDC(0, v6);
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

  if ( (byte_596AFDF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    byte_596AFDF = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  FollowerSelectItemListViewObject__Init_39290824((FollowerSelectItemListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void FollowerSelectItemListViewObject__EventEnterMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewObject_c *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  float v9; // s9
  float v10; // s8
  float v11; // s10
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596AFE6 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6472/*"EventEnterMove2"*/);
    byte_596AFE6 = 1;
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
  v28 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v7 = ListViewObject_TypeInfo;
  v8 = this->fields.dragObject;
  v9 = v28.fields.y + 1100.0;
  v10 = v28.fields.x + 0.0;
  v11 = v28.fields.z + 0.0;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v5, v6);
    v7 = ListViewObject_TypeInfo;
  }
  v29.fields.x = v10;
  v29.fields.y = v9;
  v29.fields.z = v11;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v7->static_fields->BASE_MOVE_TIME, v29, 0);
  if ( !dragObject )
LABEL_11:
    sub_2213CDC(dragObject, method);
  v12 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_6472/*"EventEnterMove2"*/;
  v12[3].fields.m_CachedPtr = StringLiteral_6472/*"EventEnterMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].fields, v20, v21, v22, v23, v24, v25, v26);
}


void FollowerSelectItemListViewObject__EventEnterMove2(
        FollowerSelectItemListViewObject_o *this,
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

  if ( (byte_596AFE7 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596AFE7 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v11);
}


void FollowerSelectItemListViewObject__EventEnterStart(
        FollowerSelectItemListViewObject_o *this,
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

  if ( (byte_596AFE5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_2213A60(&StringLiteral_6471/*"EventEnterMove"*/);
    byte_596AFE5 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0 )
  {
    sub_2213CDC(dragObject, v12);
  }
  FollowerSelectItemListViewObject__Init_39290824((FollowerSelectItemListViewObject_o *)dragObject, 2, v14);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6471/*"EventEnterMove"*/,
    delay,
    0);
}


void FollowerSelectItemListViewObject__EventExitMove(
        FollowerSelectItemListViewObject_o *this,
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
  float v12; // s8
  float v13; // s9
  float v14; // s10
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596AFE9 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6477/*"EventExitMove2"*/);
    byte_596AFE9 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v5);
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
    v31 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    v10 = this->fields.dragObject;
    v11 = ListViewObject_TypeInfo;
    v12 = v31.fields.x + 1100.0;
    v13 = v31.fields.y + 0.0;
    v14 = v31.fields.z + 0.0;
    if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v8, v9);
      v11 = ListViewObject_TypeInfo;
    }
    v32.fields.x = v12;
    v32.fields.y = v13;
    v32.fields.z = v14;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v11->static_fields->BASE_MOVE_TIME, v32, 0);
    if ( !transform )
LABEL_15:
      sub_2213CDC(transform, v5);
    v15 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v15[3].monitor = gameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].monitor, (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
    v23 = StringLiteral_6477/*"EventExitMove2"*/;
    v15[3].fields.m_CachedPtr = StringLiteral_6477/*"EventExitMove2"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].fields, v23, v24, v25, v26, v27, v28, v29);
  }
}


void FollowerSelectItemListViewObject__EventExitMove2(
        FollowerSelectItemListViewObject_o *this,
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

  if ( (byte_596AFEA & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596AFEA = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v11);
}


void FollowerSelectItemListViewObject__EventExitStart(
        FollowerSelectItemListViewObject_o *this,
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
  const MethodInfo *v17; // x2

  if ( (byte_596AFE8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6476/*"EventExitMove"*/);
    byte_596AFE8 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_2213CDC(dragObject, v12);
  FollowerSelectItemListViewObject__Init_39290824((FollowerSelectItemListViewObject_o *)Component_object, 2, v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6476/*"EventExitMove"*/,
    delay,
    0);
}


void FollowerSelectItemListViewObject__EventIntoMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  float x; // s8
  float y; // s9
  ListViewObject_c *v9; // x0
  float z; // s10
  UnityEngine_GameObject_o *v11; // x20
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596AFE3 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6492/*"EventIntoMove2"*/);
    byte_596AFE3 = 1;
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
  v28 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  x = v28.fields.x;
  y = v28.fields.y;
  v9 = ListViewObject_TypeInfo;
  z = v28.fields.z;
  v11 = this->fields.dragObject;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v5, v6);
    v9 = ListViewObject_TypeInfo;
  }
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v11, v9->static_fields->BASE_MOVE_TIME, v29, 0);
  if ( !dragObject )
LABEL_11:
    sub_2213CDC(dragObject, method);
  v12 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_6492/*"EventIntoMove2"*/;
  v12[3].fields.m_CachedPtr = StringLiteral_6492/*"EventIntoMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].fields, v20, v21, v22, v23, v24, v25, v26);
}


void FollowerSelectItemListViewObject__EventIntoMove2(
        FollowerSelectItemListViewObject_o *this,
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

  if ( (byte_596AFE4 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596AFE4 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  FollowerSelectItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v13);
}


void FollowerSelectItemListViewObject__EventIntoStart(
        FollowerSelectItemListViewObject_o *this,
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
  const MethodInfo *v15; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AFE2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_2213A60(&StringLiteral_6491/*"EventIntoMove"*/);
    byte_596AFE2 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0
    || (FollowerSelectItemListViewObject__Init_39290824((FollowerSelectItemListViewObject_o *)dragObject, 2, v15),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v17 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)dragObject, 1100.0, 0.0, 0.0, 0),
        !transform) )
  {
    sub_2213CDC(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, v17, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6491/*"EventIntoMove"*/,
    delay,
    0);
}


void FollowerSelectItemListViewObject__EventMoveEnd(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
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


FollowerSelectItemListViewItem_o *FollowerSelectItemListViewObject__GetItem(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596AFDC & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    byte_596AFDC = 1;
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
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int v13; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  MissionNaviTransitionBoardItem_c *v32; // x19

  if ( (byte_596AFE0 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    byte_596AFE0 = 1;
  }
  if ( initMode == 5 )
  {
    FollowerSelectItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
    return;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FollowerSelectItemListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( v13 <= 2 )
  {
    if ( (unsigned int)v13 < 3 )
    {
      this->fields.dispMode = v13;
      this->fields.state = 1;
    }
    goto LABEL_16;
  }
  if ( v13 != 3 )
  {
    if ( v13 != 6 )
    {
      if ( v13 == 4 )
      {
        this->fields.dispMode = 0;
        this->fields.state = 2;
        FollowerSelectItemListViewObject__EventIntoStart(this, delay, v25);
        return;
      }
LABEL_16:
      if ( state && dispMode == this->fields.dispMode )
        goto LABEL_26;
      goto LABEL_25;
    }
    v13 = 4;
  }
  this->fields.dispMode = v13;
  this->fields.state = v13;
LABEL_25:
  FollowerSelectItemListViewObject__SetupDisp(this, v25);
LABEL_26:
  v32 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v26, v27, v28, v29, v30, v31);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v32->_1.namespaze)(
      v32->_1.element_class,
      *(_QWORD *)&v32->_1.byval_arg.bits);
  }
}


void FollowerSelectItemListViewObject__InitItem(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewObject__Init_39290824(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  FollowerSelectItemListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewObject__Init_39293820(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  FollowerSelectItemListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewObject__Init_39294420(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  FollowerSelectItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void FollowerSelectItemListViewObject__OnClickSelect(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596AFEB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10267/*"OnClickSelectListView"*/);
    byte_596AFEB = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10267/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void FollowerSelectItemListViewObject__OnClickSupport(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596AFF8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10274/*"OnClickSupportListView"*/);
    byte_596AFF8 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10274/*"OnClickSupportListView"*/, (Il2CppObject *)this, 0);
  }
}


void FollowerSelectItemListViewObject__OnDestroy(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596AFDB & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFDB = 1;
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


void FollowerSelectItemListViewObject__OnLongPush(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596AFEC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFEC = 1;
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


void FollowerSelectItemListViewObject__OnLongPushAppendSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AFF3 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    sub_2213A60(&StringLiteral_10325/*"OnLongPushAppendSkill1ListView"*/);
    byte_596AFF3 = 1;
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
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10325/*"OnLongPushAppendSkill1ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AFF4 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10326/*"OnLongPushAppendSkill2ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFF4 = 1;
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
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10326/*"OnLongPushAppendSkill2ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AFF5 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10327/*"OnLongPushAppendSkill3ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFF5 = 1;
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
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10327/*"OnLongPushAppendSkill3ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill4(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AFF6 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    sub_2213A60(&StringLiteral_10328/*"OnLongPushAppendSkill4ListView"*/);
    byte_596AFF6 = 1;
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
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10328/*"OnLongPushAppendSkill4ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushAppendSkill5(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AFF7 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10329/*"OnLongPushAppendSkill5ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFF7 = 1;
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
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10329/*"OnLongPushAppendSkill5ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushEquip(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596AFED & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10331/*"OnLongPushServantEquip"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFED = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields._EquipIdx_k__BackingField = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_83438096(gameObject, (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_2213CDC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10331/*"OnLongPushServantEquip"*/,
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

  if ( (byte_596AFEE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10331/*"OnLongPushServantEquip"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFEE = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields._EquipIdx_k__BackingField = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_83438096(gameObject, (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_2213CDC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10331/*"OnLongPushServantEquip"*/,
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

  if ( (byte_596AFEF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10331/*"OnLongPushServantEquip"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFEF = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields._EquipIdx_k__BackingField = 2;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_83438096(gameObject, (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_2213CDC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10331/*"OnLongPushServantEquip"*/,
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

  if ( (byte_596AFF0 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10332/*"OnLongPushSkill1ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFF0 = 1;
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
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10332/*"OnLongPushSkill1ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AFF1 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10333/*"OnLongPushSkill2ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFF1 = 1;
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
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10333/*"OnLongPushSkill2ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OnLongPushSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AFF2 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10334/*"OnLongPushSkill3ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596AFF2 = 1;
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
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10334/*"OnLongPushSkill3ListView"*/,
              (Il2CppObject *)this,
              0);
            return;
          }
        }
      }
    }
    sub_2213CDC(linkItem, method);
  }
}


void FollowerSelectItemListViewObject__OpenSupportClassBoardBuff(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596AFFA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10409/*"OpenSupportClassBoard"*/);
    byte_596AFFA = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10409/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0);
  }
}


void FollowerSelectItemListViewObject__SetInput(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v10; // x1
  FollowerSelectItemListViewItemDraw_o *v11; // x0

  if ( (byte_596AFDD & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFDD = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v10);
    FollowerSelectItemListViewItemDraw__SetInput(v11, (FollowerSelectItemListViewItem_o *)v10, isInput, 0, 0);
  }
}


void FollowerSelectItemListViewObject__SetInputTutorial(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v10; // x1
  FollowerSelectItemListViewItemDraw_o *v11; // x0

  if ( (byte_596AFDE & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFDE = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v10);
    FollowerSelectItemListViewItemDraw__SetInput(v11, (FollowerSelectItemListViewItem_o *)v10, isInput, 1, 0);
  }
}


void FollowerSelectItemListViewObject__SetItem(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void FollowerSelectItemListViewObject__SetItem_39304932(
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewManager_c *v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  int32_t *manager; // x0
  __int64 v13; // x9
  int32_t dispMode; // w8

  if ( (byte_596AFE1 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFE1 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    manager = (int32_t *)this->fields.manager;
    if ( manager )
    {
      v9 = FollowerSelectItemListViewManager_TypeInfo;
      v13 = FollowerSelectItemListViewManager_TypeInfo->_2.naturalAligment;
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
            0);
          goto LABEL_16;
        }
      }
      else
      {
        manager = (int32_t *)sub_221405C(manager, FollowerSelectItemListViewManager_TypeInfo, v10, v11);
      }
    }
    sub_2213CDC(manager, v9);
  }
LABEL_16:
  dispMode = this->fields.dispMode;
  if ( dispMode == 4 )
    FollowerSelectItemListViewObject__SetInputTutorial(this, 1, v10);
  else
    ((void (__fastcall *)(FollowerSelectItemListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      dispMode == 3,
      this->klass->vtable._9_SetInput.method);
}


void FollowerSelectItemListViewObject__Start(FollowerSelectItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *manager; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ListViewManager_o *v8; // x8
  int32_t v9; // w1

  if ( (byte_596AFDA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFDA = 1;
  }
  if ( !this->fields.state )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    v5 = UnityEngine_Object__op_Inequality(manager, 0, 0);
    if ( v5 )
    {
      v8 = this->fields.manager;
      if ( !v8 )
        sub_2213CDC(v5, v6);
      if ( v8->fields.isInput )
        v9 = 3;
      else
        v9 = 2;
    }
    else
    {
      v9 = 2;
    }
    FollowerSelectItemListViewObject__Init_39290824(this, v9, v7);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FollowerSelectItemListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596AFD7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596AFD7 = 1;
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
  v13 = (FollowerSelectItemListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  FollowerSelectItemListViewObject__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FollowerSelectItemListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596AFD8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596AFD8 = 1;
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
  v13 = (FollowerSelectItemListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  FollowerSelectItemListViewObject__get_EquipIdx(v13, v14);
}


void FollowerSelectItemListViewObject__set_EquipIdx(
        FollowerSelectItemListViewObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipIdx_k__BackingField = value;
}