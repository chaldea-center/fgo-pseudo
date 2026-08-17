void OrganizationTopListViewObject___ctor(OrganizationTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BD86 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596BD86 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void OrganizationTopListViewObject__Awake(OrganizationTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BD76 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewItemDraw___);
    byte_596BD76 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewItemDraw___);
  this->fields.itemDraw = (struct OrganizationTopListViewItemDraw_o *)Component_object;
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


UnityEngine_GameObject_o *OrganizationTopListViewObject__CreateDragObject(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_596BD79 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    byte_596BD79 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  OrganizationTopListViewObject__Init_40678680((OrganizationTopListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void OrganizationTopListViewObject__EventEnterMove(OrganizationTopListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewObject_c *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  float v9; // s8
  float v10; // s9
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

  if ( (byte_596BD80 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6472/*"EventEnterMove2"*/);
    byte_596BD80 = 1;
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
  v9 = v28.fields.x + 0.0;
  v10 = v28.fields.y + 800.0;
  v11 = v28.fields.z + 0.0;
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v5, v6);
    v7 = ListViewObject_TypeInfo;
  }
  v29.fields.x = v9;
  v29.fields.y = v10;
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


void OrganizationTopListViewObject__EventEnterMove2(OrganizationTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BD81 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596BD81 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  OrganizationTopListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewObject__EventEnterStart(
        OrganizationTopListViewObject_o *this,
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
  const MethodInfo *v14; // x3
  int v15; // s1 OVERLAPPED
  OrganizationTopListViewObject_o *v18; // x20

  if ( (byte_596BD7F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_2213A60(&StringLiteral_6471/*"EventEnterMove"*/);
    byte_596BD7F = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  OrganizationTopListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(OrganizationTopListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___)) == 0 )
  {
    sub_2213CDC(dragObject, v12);
  }
  v18 = (OrganizationTopListViewObject_o *)dragObject;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  OrganizationTopListViewObject__Init(v18, 2, 0, 0.0, *(UnityEngine_Vector3_o *)&v15, v14);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6471/*"EventEnterMove"*/,
    delay,
    0);
}


void OrganizationTopListViewObject__EventIntoMove(OrganizationTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BD7D & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6492/*"EventIntoMove2"*/);
    byte_596BD7D = 1;
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


void OrganizationTopListViewObject__EventIntoMove2(OrganizationTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BD7E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596BD7E = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  OrganizationTopListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  OrganizationTopListViewObject__EventMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewObject__EventIntoStart(
        OrganizationTopListViewObject_o *this,
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
  int v16; // s1 OVERLAPPED
  OrganizationTopListViewObject_o *v19; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596BD7C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_2213A60(&StringLiteral_6491/*"EventIntoMove"*/);
    byte_596BD7C = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  OrganizationTopListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(OrganizationTopListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
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
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
  if ( !dragObject )
    goto LABEL_11;
  v19 = (OrganizationTopListViewObject_o *)dragObject;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  OrganizationTopListViewObject__Init(v19, 2, 0, 0.0, *(UnityEngine_Vector3_o *)&v16, v15);
  dragObject = *p_dragObject;
  if ( !*p_dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v21 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)dragObject, 500.0, 0.0, 0.0, 0),
        !transform) )
  {
LABEL_11:
    sub_2213CDC(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, v21, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6491/*"EventIntoMove"*/,
    delay,
    0);
}


void OrganizationTopListViewObject__EventMoveEnd(OrganizationTopListViewObject_o *this, const MethodInfo *method)
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


void OrganizationTopListViewObject__EventRetryMove(OrganizationTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BD83 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6510/*"EventRetryMove2"*/);
    byte_596BD83 = 1;
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
  v20 = StringLiteral_6510/*"EventRetryMove2"*/;
  v12[3].fields.m_CachedPtr = StringLiteral_6510/*"EventRetryMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[3].fields, v20, v21, v22, v23, v24, v25, v26);
}


void OrganizationTopListViewObject__EventRetryMove2(OrganizationTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BD84 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596BD84 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  OrganizationTopListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  OrganizationTopListViewObject__EventMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewObject__EventRetryStart(
        OrganizationTopListViewObject_o *this,
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
  int v16; // s1 OVERLAPPED
  OrganizationTopListViewObject_o *v19; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596BD82 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_2213A60(&StringLiteral_6509/*"EventRetryMove"*/);
    byte_596BD82 = 1;
  }
  this->fields.dispMode = 0;
  this->fields.isBusy = 1;
  OrganizationTopListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(OrganizationTopListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
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
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
  if ( !dragObject )
    goto LABEL_11;
  v19 = (OrganizationTopListViewObject_o *)dragObject;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  OrganizationTopListViewObject__Init(v19, 2, 0, 0.0, *(UnityEngine_Vector3_o *)&v16, v15);
  dragObject = *p_dragObject;
  if ( !*p_dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v21 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)dragObject, 0.0, 800.0, 0.0, 0),
        !transform) )
  {
LABEL_11:
    sub_2213CDC(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, v21, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6509/*"EventRetryMove"*/,
    delay,
    0);
}


OrganizationTopListViewItem_o *OrganizationTopListViewObject__GetItem(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596BD78 & 1) == 0 )
  {
    sub_2213A60(&OrganizationTopListViewItem_TypeInfo);
    byte_596BD78 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = OrganizationTopListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (OrganizationTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == OrganizationTopListViewItem_TypeInfo )
    return (OrganizationTopListViewItem_o *)this->fields.linkItem;
  return 0;
}


void OrganizationTopListViewObject__Init(
        OrganizationTopListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int v13; // w24
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
  MissionNaviTransitionBoardItem_c *v33; // x19

  if ( (byte_596BD7A & 1) == 0 )
  {
    sub_2213A60(&OrganizationTopListViewItem_TypeInfo);
    byte_596BD7A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = OrganizationTopListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (OrganizationTopListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == OrganizationTopListViewItem_TypeInfo )
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
  ((void (__fastcall *)(OrganizationTopListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 4,
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
  if ( v13 <= 3 )
  {
    if ( (unsigned int)v13 >= 3 )
      goto LABEL_22;
    v32 = 1;
    goto LABEL_21;
  }
  if ( v13 <= 5 )
  {
    if ( v13 != 4 )
    {
      this->fields.dispMode = 0;
      this->fields.state = 2;
      OrganizationTopListViewObject__EventIntoStart(this, delay, v25);
      return;
    }
    v32 = 3;
    v13 = 2;
LABEL_21:
    this->fields.dispMode = v13;
    this->fields.state = v32;
    goto LABEL_22;
  }
  if ( v13 == 6 )
  {
    this->fields.dispMode = 2;
    this->fields.state = 2;
    OrganizationTopListViewObject__EventEnterStart(this, delay, v25);
    return;
  }
  if ( v13 == 8 )
  {
    this->fields.dispMode = 2;
    this->fields.state = 2;
    OrganizationTopListViewObject__EventRetryStart(this, delay, v25);
    return;
  }
LABEL_22:
  if ( !state || dispMode != this->fields.dispMode )
    OrganizationTopListViewObject__SetupDisp(this, v25);
  v33 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v26, v27, v28, v29, v30, v31);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v33->_1.namespaze)(
      v33->_1.element_class,
      *(_QWORD *)&v33->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewObject__Init_40678680(
        OrganizationTopListViewObject_o *this,
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
  OrganizationTopListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewObject__Init_40680056(
        OrganizationTopListViewObject_o *this,
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
  OrganizationTopListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewObject__Init_40680668(
        OrganizationTopListViewObject_o *this,
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
  OrganizationTopListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void OrganizationTopListViewObject__OnDestroy(OrganizationTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BD77 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD77 = 1;
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


void OrganizationTopListViewObject__SetItem(
        OrganizationTopListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void OrganizationTopListViewObject__SetupDisp(OrganizationTopListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  OrganizationTopListViewItemDraw_o *v11; // x0

  if ( (byte_596BD7B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OrganizationTopListViewItem_TypeInfo);
    byte_596BD7B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = OrganizationTopListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (OrganizationTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != OrganizationTopListViewItem_TypeInfo )
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
    OrganizationTopListViewItemDraw__SetItem(v11, (OrganizationTopListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


void OrganizationTopListViewObject__Start(OrganizationTopListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    OrganizationTopListViewObject__Init_40678680(this, 2, v2);
}


System_String_o *OrganizationTopListViewObject__ToString(
        OrganizationTopListViewObject_o *this,
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

  if ( (byte_596BD85 & 1) == 0 )
  {
    sub_2213A60(&OrganizationTopListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_596BD85 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)OrganizationTopListViewItemDraw_DispMode_TypeInfo;
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


void OrganizationTopListViewObject__add_callbackFunc(
        OrganizationTopListViewObject_o *this,
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
  OrganizationTopListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BD74 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BD74 = 1;
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
  v13 = (OrganizationTopListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  OrganizationTopListViewObject__remove_callbackFunc(v13, v14, v15);
}


void OrganizationTopListViewObject__remove_callbackFunc(
        OrganizationTopListViewObject_o *this,
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
  OrganizationTopListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BD75 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BD75 = 1;
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
  v13 = (OrganizationTopListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  OrganizationTopListViewObject__Awake(v13, v14);
}