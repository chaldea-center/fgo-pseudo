void FriendOperationItemListViewObject___ctor(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B076 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596B076 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void FriendOperationItemListViewObject__Awake(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596B04F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___);
    byte_596B04F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___);
  this->fields.itemDraw = (struct FriendOperationItemListViewItemDraw_o *)Component_object;
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


UnityEngine_GameObject_o *FriendOperationItemListViewObject__CreateDragObject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_596B053 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    byte_596B053 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  FriendOperationItemListViewObject__Init_39354628((FriendOperationItemListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void FriendOperationItemListViewObject__EventEnterMove(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B05A & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6472/*"EventEnterMove2"*/);
    byte_596B05A = 1;
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
  v26.fields.y = v24.fields.y + 980.0;
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


void FriendOperationItemListViewObject__EventEnterMove2(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B05B & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596B05B = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  FriendOperationItemListViewObject__EventMoveEnd(this, v11);
}


void FriendOperationItemListViewObject__EventEnterStart(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B059 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_2213A60(&StringLiteral_6471/*"EventEnterMove"*/);
    byte_596B059 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0 )
  {
    sub_2213CDC(dragObject, v12);
  }
  FriendOperationItemListViewObject__Init_39354628((FriendOperationItemListViewObject_o *)dragObject, 2, v14);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6471/*"EventEnterMove"*/,
    delay,
    0);
}


void FriendOperationItemListViewObject__EventExitMove(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B05D & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6477/*"EventExitMove2"*/);
    byte_596B05D = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v5);
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
    v29.fields.x = v27.fields.x + 980.0;
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


void FriendOperationItemListViewObject__EventExitMove2(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B05E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596B05E = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  FriendOperationItemListViewObject__EventMoveEnd(this, v11);
}


void FriendOperationItemListViewObject__EventExitStart(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B05C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6476/*"EventExitMove"*/);
    byte_596B05C = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_2213CDC(dragObject, v12);
  FriendOperationItemListViewObject__Init_39354628((FriendOperationItemListViewObject_o *)Component_object, 2, v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6476/*"EventExitMove"*/,
    delay,
    0);
}


void FriendOperationItemListViewObject__EventIntoMove(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B057 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6492/*"EventIntoMove2"*/);
    byte_596B057 = 1;
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


void FriendOperationItemListViewObject__EventIntoMove2(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B058 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596B058 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  FriendOperationItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  FriendOperationItemListViewObject__EventMoveEnd(this, v13);
}


void FriendOperationItemListViewObject__EventIntoStart(
        FriendOperationItemListViewObject_o *this,
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

  if ( (byte_596B056 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_2213A60(&StringLiteral_6491/*"EventIntoMove"*/);
    byte_596B056 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0
    || (FriendOperationItemListViewObject__Init_39354628((FriendOperationItemListViewObject_o *)dragObject, 2, v15),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v17 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)dragObject, 980.0, 0.0, 0.0, 0),
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


void FriendOperationItemListViewObject__EventMoveEnd(
        FriendOperationItemListViewObject_o *this,
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


FriendOperationItemListViewItem_o *FriendOperationItemListViewObject__GetItem(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596B051 & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewItem_TypeInfo);
    byte_596B051 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
    return (FriendOperationItemListViewItem_o *)this->fields.linkItem;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewObject__Init(
        FriendOperationItemListViewObject_o *this,
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
  int32_t v32; // w8
  int32_t v33; // w9
  MissionNaviTransitionBoardItem_c *v34; // x19

  if ( (byte_596B054 & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewItem_TypeInfo);
    byte_596B054 = 1;
  }
  if ( initMode == 7 )
  {
    FriendOperationItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
    return;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FriendOperationItemListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
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
  ((void (__fastcall *)(FriendOperationItemListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
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
    v32 = 1;
    if ( !v13 )
    {
      v33 = 0;
      goto LABEL_26;
    }
    if ( v13 != 1 )
    {
      v33 = v13;
      if ( v13 != 2 )
        goto LABEL_27;
LABEL_26:
      this->fields.dispMode = v33;
      this->fields.state = v32;
      goto LABEL_27;
    }
    v33 = 1;
LABEL_25:
    v32 = v13;
    goto LABEL_26;
  }
  switch ( v13 )
  {
    case 3:
      v33 = 2;
      goto LABEL_25;
    case 4:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      FriendOperationItemListViewObject__EventIntoStart(this, delay, v25);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      FriendOperationItemListViewObject__EventExitStart(this, delay, v25);
      return;
  }
LABEL_27:
  if ( !state || dispMode != this->fields.dispMode )
    FriendOperationItemListViewObject__SetupDisp(this, v25);
  v34 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v26, v27, v28, v29, v30, v31);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v34->_1.namespaze)(
      v34->_1.element_class,
      *(_QWORD *)&v34->_1.byval_arg.bits);
  }
}


void FriendOperationItemListViewObject__InitItem(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void FriendOperationItemListViewObject__Init_39354628(
        FriendOperationItemListViewObject_o *this,
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
  FriendOperationItemListViewObject__Init(this, initMode, 0, 0.0, v9, v3);
}


void FriendOperationItemListViewObject__Init_39356152(
        FriendOperationItemListViewObject_o *this,
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
  FriendOperationItemListViewObject__Init(this, initMode, callbackFunc, delay, v12, method);
}


void FriendOperationItemListViewObject__Init_39356252(
        FriendOperationItemListViewObject_o *this,
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
  FriendOperationItemListViewObject__Init(this, initMode, callbackFunc, 0.0, v10, method);
}


void FriendOperationItemListViewObject__OnClickAccept(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B06E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10249/*"OnClickListViewAccept"*/);
    byte_596B06E = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10249/*"OnClickListViewAccept"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickAppendSkill(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B067 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596B067 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void FriendOperationItemListViewObject__OnClickCancel(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B070 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10251/*"OnClickListViewCancel"*/);
    byte_596B070 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10251/*"OnClickListViewCancel"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.linkItem )
    ListViewObject__OnClick((ListViewObject_o *)this, 0);
}


void FriendOperationItemListViewObject__OnClickOffer(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B06D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10256/*"OnClickListViewOffer"*/);
    byte_596B06D = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10256/*"OnClickListViewOffer"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickReject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B06F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10257/*"OnClickListViewReject"*/);
    byte_596B06F = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10257/*"OnClickListViewReject"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickRemove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x0
  FriendOperationItemListViewItem_c *v6; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *manager; // x8
  System_String_o *v9; // x1

  if ( (byte_596B071 & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10258/*"OnClickListViewRemove"*/);
    sub_2213A60(&StringLiteral_23535/*"onClickListViewBlacklistRemove"*/);
    byte_596B071 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = FriendOperationItemListViewItem_TypeInfo;
    naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
    {
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        if ( LODWORD(linkItem[1].klass) == 8 )
          v9 = (System_String_o *)StringLiteral_23535/*"onClickListViewBlacklistRemove"*/;
        else
          v9 = (System_String_o *)StringLiteral_10258/*"OnClickListViewRemove"*/;
        UnityEngine_Component__SendMessage(manager, v9, (Il2CppObject *)this, 0);
        return;
      }
    }
    else
    {
      linkItem = (struct ListViewItem_o *)sub_221405C(linkItem, FriendOperationItemListViewItem_TypeInfo, v2, v3);
    }
    sub_2213CDC(linkItem, v6);
  }
}


void FriendOperationItemListViewObject__OnClickSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B060 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596B060 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void FriendOperationItemListViewObject__OnClickSkill13(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B065 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596B065 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void FriendOperationItemListViewObject__OnClickSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B063 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596B063 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void FriendOperationItemListViewObject__OnClickSupportClassBoardBuff(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B075 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10409/*"OpenSupportClassBoard"*/);
    byte_596B075 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10409/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__OnClickSupportInfo(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  OtherUserGameEntity_o *monitor; // x21
  int32_t klass; // w22
  SupportInfoJump_o *v11; // x19
  ServantLeaderInfo_o *ServantLeader; // x0
  int32_t v13; // w20

  if ( (byte_596B074 & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewItem_TypeInfo);
    sub_2213A60(&Method_FriendOperationItemListViewObject_OnClickSupportInfo__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&SupportInfoJump_TypeInfo);
    byte_596B074 = 1;
  }
  if ( this->fields.linkItem )
  {
    v3 = Method_FriendOperationItemListViewObject_OnClickSupportInfo__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewObject_OnClickSupportInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FriendOperationItemListViewObject_OnClickSupportInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    linkItem = this->fields.linkItem;
    if ( !linkItem )
      goto LABEL_16;
    naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != FriendOperationItemListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    monitor = (OtherUserGameEntity_o *)linkItem[1].monitor;
    klass = (int32_t)linkItem[1].klass;
    v11 = (SupportInfoJump_o *)sub_2213CCC(SupportInfoJump_TypeInfo);
    SupportInfoJump___ctor(v11, monitor, klass, 0, 0);
    ServantLeader = FriendOperationItemListViewItem__get_ServantLeader((FriendOperationItemListViewItem_o *)linkItem, 0);
    v13 = 60;
    if ( ServantLeader )
    {
      if ( ServantLeaderInfo__get_IsGrandSvt(ServantLeader, 0) )
        v13 = 43;
      else
        v13 = 60;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
LABEL_16:
      sub_2213CDC(Instance, v6);
    AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, v13, 1, (Il2CppObject *)v11, 0);
  }
}


void FriendOperationItemListViewObject__OnDestroy(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596B050 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B050 = 1;
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


void FriendOperationItemListViewObject__OnLongPushAppendSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B068 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    sub_2213A60(&StringLiteral_10325/*"OnLongPushAppendSkill1ListView"*/);
    byte_596B068 = 1;
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
      (System_String_o *)StringLiteral_10325/*"OnLongPushAppendSkill1ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B069 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10326/*"OnLongPushAppendSkill2ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596B069 = 1;
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
      (System_String_o *)StringLiteral_10326/*"OnLongPushAppendSkill2ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B06A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10327/*"OnLongPushAppendSkill3ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596B06A = 1;
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
      (System_String_o *)StringLiteral_10327/*"OnLongPushAppendSkill3ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill4(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B06B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    sub_2213A60(&StringLiteral_10328/*"OnLongPushAppendSkill4ListView"*/);
    byte_596B06B = 1;
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
      (System_String_o *)StringLiteral_10328/*"OnLongPushAppendSkill4ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushAppendSkill5(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B06C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10329/*"OnLongPushAppendSkill5ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596B06C = 1;
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
      (System_String_o *)StringLiteral_10329/*"OnLongPushAppendSkill5ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B061 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10331/*"OnLongPushServantEquip"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596B061 = 1;
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
      (System_String_o *)StringLiteral_10331/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B062 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10332/*"OnLongPushSkill1ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596B062 = 1;
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
      (System_String_o *)StringLiteral_10332/*"OnLongPushSkill1ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B064 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10333/*"OnLongPushSkill2ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596B064 = 1;
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
      (System_String_o *)StringLiteral_10333/*"OnLongPushSkill2ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__OnLongPushSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B066 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10334/*"OnLongPushSkill3ListView"*/);
    sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596B066 = 1;
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
      (System_String_o *)StringLiteral_10334/*"OnLongPushSkill3ListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FriendOperationItemListViewObject__SetInput(
        FriendOperationItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v10; // x1
  FriendOperationItemListViewItemDraw_o *v11; // x0

  if ( (byte_596B052 & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B052 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
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
    FriendOperationItemListViewItemDraw__SetInput(v11, (FriendOperationItemListViewItem_o *)v10, isInput, 0);
  }
}


void FriendOperationItemListViewObject__SetItem(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void FriendOperationItemListViewObject__SetItem_39354240(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void FriendOperationItemListViewObject__SetupDisp(FriendOperationItemListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  FriendOperationItemListViewItemDraw_o *v10; // x0

  if ( (byte_596B055 & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B055 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != FriendOperationItemListViewItem_TypeInfo )
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
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_2213CDC(0, v9);
    FriendOperationItemListViewItemDraw__SetItem(
      v10,
      (FriendOperationItemListViewItem_o *)linkItem,
      this->fields.dispMode,
      0);
  }
}


void FriendOperationItemListViewObject__UpdateLock(
        FriendOperationItemListViewObject_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, item);
  FriendOperationItemListViewItemDraw__UpdateLockUI(itemDraw, item, 0);
}


void FriendOperationItemListViewObject__add_callbackFunc(
        FriendOperationItemListViewObject_o *this,
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
  FriendOperationItemListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B04D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B04D = 1;
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
  v13 = (FriendOperationItemListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  FriendOperationItemListViewObject__remove_callbackFunc(v13, v14, v15);
}


void FriendOperationItemListViewObject__onClickMessageDisp(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B073 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23536/*"onClickListViewMessageDisp"*/);
    byte_596B073 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_23536/*"onClickListViewMessageDisp"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__onClickRegist(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596B072 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23534/*"onClickListViewBlacklistRegist"*/);
    byte_596B072 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_23534/*"onClickListViewBlacklistRegist"*/, (Il2CppObject *)this, 0);
  }
}


void FriendOperationItemListViewObject__remove_callbackFunc(
        FriendOperationItemListViewObject_o *this,
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
  FriendOperationItemListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B04E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B04E = 1;
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
  v13 = (FriendOperationItemListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  FriendOperationItemListViewObject__Awake(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewObject__setMessageButtonUI(
        FriendOperationItemListViewObject_o *this,
        bool disp,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *itemDraw; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v8; // x1

  if ( (byte_596B05F & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewItem_TypeInfo);
    byte_596B05F = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, disp);
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
      v8 = this->fields.linkItem;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  FriendOperationItemListViewItemDraw__setMessageButtonUI(itemDraw, (FriendOperationItemListViewItem_o *)v8, disp, 0);
}