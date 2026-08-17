void StonePurchaseListViewObject___ctor(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E722 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596E722 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void StonePurchaseListViewObject__Awake(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596E710 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewItemDraw___);
    byte_596E710 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewItemDraw___);
  this->fields.itemDraw = (struct StonePurchaseListViewItemDraw_o *)Component_object;
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


UnityEngine_GameObject_o *StonePurchaseListViewObject__CreateDragObject(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_596E714 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    byte_596E714 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  StonePurchaseListViewObject__Init_45586196((StonePurchaseListViewObject_o *)DragObject, 2, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__EventEnterMove(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  float v5; // s4
  float v6; // s3
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_596E71C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6472/*"EventEnterMove2"*/);
    byte_596E71C = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !parent)
    || (v23 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
        v5 = v23.fields.y + 1000.0,
        v6 = v23.fields.z + 0.0,
        v23.fields.y = v23.fields.x + 0.0,
        v23.fields.z = v5,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.0,
                                                    *(UnityEngine_Vector3_o *)&v23.fields.y,
                                                    0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(dragObject, method);
  }
  v7 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7[3].monitor, (int32_t)gameObject, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_6472/*"EventEnterMove2"*/;
  v7[3].fields.m_CachedPtr = StringLiteral_6472/*"EventEnterMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7[3].fields, v15, v16, v17, v18, v19, v20, v21);
}


void StonePurchaseListViewObject__EventEnterMove2(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596E71D & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596E71D = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  StonePurchaseListViewObject__EventMoveEnd(this, v11);
}


void StonePurchaseListViewObject__EventEnterStart(
        StonePurchaseListViewObject_o *this,
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

  if ( (byte_596E71B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_2213A60(&StringLiteral_6471/*"EventEnterMove"*/);
    byte_596E71B = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0 )
  {
    sub_2213CDC(dragObject, v12);
  }
  StonePurchaseListViewObject__Init_45586196((StonePurchaseListViewObject_o *)dragObject, 2, v14);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6471/*"EventEnterMove"*/,
    delay,
    0);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__EventExitMove(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  float v8; // s4
  float v9; // s3
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_596E71F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6477/*"EventExitMove2"*/);
    byte_596E71F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    StonePurchaseListViewObject__EventMoveEnd(this, v5);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_13;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_13;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0), !parent)
      || (v26 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
          v8 = v26.fields.y + 0.0,
          v9 = v26.fields.z + 0.0,
          v26.fields.y = v26.fields.x + 1000.0,
          v26.fields.z = v8,
          (transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                     this->fields.dragObject,
                                                     1.0,
                                                     *(UnityEngine_Vector3_o *)&v26.fields.y,
                                                     0)) == 0) )
    {
LABEL_13:
      sub_2213CDC(transform, v5);
    }
    v10 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v10[3].monitor = gameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10[3].monitor, (int32_t)gameObject, v12, v13, v14, v15, v16, v17);
    v18 = StringLiteral_6477/*"EventExitMove2"*/;
    v10[3].fields.m_CachedPtr = StringLiteral_6477/*"EventExitMove2"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10[3].fields, v18, v19, v20, v21, v22, v23, v24);
  }
}


void StonePurchaseListViewObject__EventExitMove2(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596E720 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596E720 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  StonePurchaseListViewObject__EventMoveEnd(this, v11);
}


void StonePurchaseListViewObject__EventExitStart(
        StonePurchaseListViewObject_o *this,
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

  if ( (byte_596E71E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6476/*"EventExitMove"*/);
    byte_596E71E = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    StonePurchaseListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_2213CDC(dragObject, v12);
  StonePurchaseListViewObject__Init_45586196((StonePurchaseListViewObject_o *)Component_object, 2, v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6476/*"EventExitMove"*/,
    delay,
    0);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__EventIntoMove(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  float y; // s4
  float z; // s5
  float v7; // s3
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_596E719 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6492/*"EventIntoMove2"*/);
    byte_596E719 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_9;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !parent
    || (v24 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
        y = v24.fields.y,
        z = v24.fields.z,
        v24.fields.y = v24.fields.x,
        v24.fields.z = y,
        v7 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v24.fields.y,
                                                    0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(dragObject, method);
  }
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_6492/*"EventIntoMove2"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_6492/*"EventIntoMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8[3].fields, v16, v17, v18, v19, v20, v21, v22);
}


void StonePurchaseListViewObject__EventIntoMove2(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596E71A & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596E71A = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  StonePurchaseListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  StonePurchaseListViewObject__EventMoveEnd(this, v13);
}


void StonePurchaseListViewObject__EventIntoStart(
        StonePurchaseListViewObject_o *this,
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

  if ( (byte_596E718 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_2213A60(&StringLiteral_6491/*"EventIntoMove"*/);
    byte_596E718 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0
    || (StonePurchaseListViewObject__Init_45586196((StonePurchaseListViewObject_o *)dragObject, 2, v15),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v17 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)dragObject, 1000.0, 0.0, 0.0, 0),
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


void StonePurchaseListViewObject__EventMoveEnd(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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


StonePurchaseListViewItem_o *StonePurchaseListViewObject__GetItem(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596E712 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewItem_TypeInfo);
    byte_596E712 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StonePurchaseListViewItem_TypeInfo )
    return (StonePurchaseListViewItem_o *)this->fields.linkItem;
  return 0;
}


void StonePurchaseListViewObject__Init(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  unsigned int v12; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w9
  MissionNaviTransitionBoardItem_c *v32; // x19

  if ( (byte_596E715 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewItem_TypeInfo);
    byte_596E715 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (StonePurchaseListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == StonePurchaseListViewItem_TypeInfo )
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
  ((void (__fastcall *)(StonePurchaseListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( v12 <= 3 )
  {
    v31 = dword_E9C0E0[v12];
    this->fields.dispMode = *((_DWORD *)&xmmword_E9C5F0 + v12);
    this->fields.state = v31;
  }
  if ( !state || dispMode != this->fields.dispMode )
    StonePurchaseListViewObject__SetupDisp(this, v24);
  v32 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v25, v26, v27, v28, v29, v30);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v32->_1.namespaze)(
      v32->_1.element_class,
      *(_QWORD *)&v32->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__Init_45586196(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__Init_45587468(
        StonePurchaseListViewObject_o *this,
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
  StonePurchaseListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewObject__Init_45587552(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void StonePurchaseListViewObject__OnClickDetailBtn(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ListViewItem_o *linkItem; // x19
  __int64 naturalAligment; // x10
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  BankShopEntity_o *klass; // x19
  StonePurchaseListViewObject___c_c *v12; // x8
  struct StonePurchaseListViewObject___c_StaticFields *static_fields; // x9
  System_Action_o *_9__20_0; // x21
  Il2CppObject *v15; // x22
  struct StonePurchaseListViewObject___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596E717 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StonePurchaseListViewItem_TypeInfo);
    sub_2213A60(&Method_StonePurchaseListViewObject_OnClickDetailBtn__);
    sub_2213A60(&Method_StonePurchaseListViewObject___c__OnClickDetailBtn_b__20_0__);
    sub_2213A60(&StonePurchaseListViewObject___c_TypeInfo);
    byte_596E717 = 1;
  }
  v3 = Method_StonePurchaseListViewObject_OnClickDetailBtn__;
  if ( (*((_BYTE *)Method_StonePurchaseListViewObject_OnClickDetailBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_StonePurchaseListViewObject_OnClickDetailBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StonePurchaseListViewItem_TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (CommonUI_o *)Instance;
      klass = (BankShopEntity_o *)linkItem[1].klass;
      v12 = StonePurchaseListViewObject___c_TypeInfo;
      if ( !*(&StonePurchaseListViewObject___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(StonePurchaseListViewObject___c_TypeInfo, v8, v9);
        v12 = StonePurchaseListViewObject___c_TypeInfo;
      }
      static_fields = v12->static_fields;
      _9__20_0 = static_fields->__9__20_0;
      if ( !_9__20_0 )
      {
        if ( !*(&v12->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v12, v8, v9);
          static_fields = StonePurchaseListViewObject___c_TypeInfo->static_fields;
        }
        v15 = (Il2CppObject *)static_fields->__9;
        _9__20_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__20_0, v15, Method_StonePurchaseListViewObject___c__OnClickDetailBtn_b__20_0__, 0);
        v16 = StonePurchaseListViewObject___c_TypeInfo->static_fields;
        v16->__9__20_0 = _9__20_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v16->__9__20_0,
          (int32_t)_9__20_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      if ( !v10 )
        sub_2213CDC(Instance, v8);
      CommonUI__OpenStoneShopDetailDialog(v10, klass, _9__20_0, 0);
    }
  }
}


void StonePurchaseListViewObject__OnDestroy(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596E711 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E711 = 1;
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


void StonePurchaseListViewObject__SetInput(StonePurchaseListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  StonePurchaseListViewItem_o *v8; // x1
  const MethodInfo *v9; // x3
  StonePurchaseListViewItemDraw_o *v10; // x0

  if ( (byte_596E713 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StonePurchaseListViewItem_TypeInfo);
    byte_596E713 = 1;
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
    StonePurchaseListViewItemDraw__SetInput(v10, v8, isInput, v9);
  }
}


void StonePurchaseListViewObject__SetItem(
        StonePurchaseListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void StonePurchaseListViewObject__SetupDisp(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  StonePurchaseListViewItemDraw_o *v11; // x0

  if ( (byte_596E716 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StonePurchaseListViewItem_TypeInfo);
    byte_596E716 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != StonePurchaseListViewItem_TypeInfo )
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
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    StonePurchaseListViewItemDraw__SetItem(v11, (StonePurchaseListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


System_String_o *StonePurchaseListViewObject__ToString(StonePurchaseListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596E721 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_596E721 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)StonePurchaseListViewItemDraw_DispMode_TypeInfo;
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


void StonePurchaseListViewObject__add_callbackFunc(
        StonePurchaseListViewObject_o *this,
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
  StonePurchaseListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596E70E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596E70E = 1;
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
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  StonePurchaseListViewObject__remove_callbackFunc(v13, v14, v15);
}


void StonePurchaseListViewObject__remove_callbackFunc(
        StonePurchaseListViewObject_o *this,
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
  StonePurchaseListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596E70F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596E70F = 1;
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
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  StonePurchaseListViewObject__Awake(v13, v14);
}


void StonePurchaseListViewObject___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E723 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewObject___c_TypeInfo);
    byte_596E723 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(StonePurchaseListViewObject___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StonePurchaseListViewObject___c_TypeInfo->static_fields->__9 = (struct StonePurchaseListViewObject___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)StonePurchaseListViewObject___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void StonePurchaseListViewObject___c___ctor(StonePurchaseListViewObject___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseListViewObject___c___OnClickDetailBtn_b__20_0(
        StonePurchaseListViewObject___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596E724 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596E724 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseStoneShopDetailDialog((CommonUI_o *)Instance, 0, 0);
}