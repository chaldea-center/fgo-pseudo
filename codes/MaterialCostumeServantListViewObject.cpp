void __fastcall MaterialCostumeServantListViewObject___ctor(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B117D7 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B117D7 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantListViewObject__Awake(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4B117C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewItemDraw___, method, v2);
    byte_4B117C4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewItemDraw___);
  this->fields.itemDraw = (struct MaterialCostumeServantListViewItemDraw_o *)Component_object;
  sub_1BCA784(&this->fields.itemDraw, Component_object);
}


UnityEngine_GameObject_o *__fastcall MaterialCostumeServantListViewObject__CreateDragObject(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x19
  const MethodInfo *v7; // x2
  MaterialCostumeServantListViewObject_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B117C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, method, v2);
    byte_4B117C8 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v6 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0LL) )
  {
    sub_1BCAA3C(DragObject, v5);
  }
  v8 = (MaterialCostumeServantListViewObject_o *)DragObject;
  MaterialCostumeServantListViewObject__Init_31764532((MaterialCostumeServantListViewObject_o *)DragObject, 2, v7);
  MaterialCostumeServantListViewObject__SetupDisp(v8, v9);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__EventEnterMove(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v8; // s0
  __int64 v11; // x1
  ListViewObject_c *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  float v14; // s9
  float v15; // s10
  float v16; // s8
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B117CF & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6294/*"EventEnterMove2"*/, v4, v5);
    byte_4B117CF = 1;
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
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_11;
  v20 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v12 = ListViewObject_TypeInfo;
  v13 = this->fields.dragObject;
  v14 = v20.fields.x + 0.0;
  v15 = v20.fields.y + 1000.0;
  v16 = v20.fields.z + 0.0;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v11);
    v12 = ListViewObject_TypeInfo;
  }
  v21.fields.x = v14;
  v21.fields.y = v15;
  v21.fields.z = v16;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v12->static_fields->BASE_MOVE_TIME, v21, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1BCAA3C(dragObject, method);
  v17 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17[3].monitor = gameObject;
  sub_1BCA784(&v17[3].monitor, gameObject);
  v19 = StringLiteral_6294/*"EventEnterMove2"*/;
  *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6294/*"EventEnterMove2"*/;
  sub_1BCA784(&v17[3].fields, v19);
}


void __fastcall MaterialCostumeServantListViewObject__EventEnterMove2(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4B117D0 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B117D0 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784(&this->fields.dragObject, 0LL);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v5);
}


void __fastcall MaterialCostumeServantListViewObject__EventEnterStart(
        MaterialCostumeServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4B117CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, method, v3);
    sub_1BCA7E0(&StringLiteral_6293/*"EventEnterMove"*/, v6, v7);
    byte_4B117CE = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  sub_1BCA784(&this->fields.dragObject, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0LL )
  {
    sub_1BCAA3C(dragObject, v9);
  }
  MaterialCostumeServantListViewObject__Init_31764532((MaterialCostumeServantListViewObject_o *)dragObject, 2, v11);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6293/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__EventExitMove(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v12; // s0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x20
  ListViewObject_c *v17; // x0
  float v18; // s8
  float v19; // s10
  float v20; // s9
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B117D2 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6296/*"EventExitMove2"*/, v6, v7);
    byte_4B117D2 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MaterialCostumeServantListViewObject__EventMoveEnd(this, v9);
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
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_15;
    v24 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v12, 0LL);
    v16 = this->fields.dragObject;
    v17 = ListViewObject_TypeInfo;
    v18 = v24.fields.x + 1000.0;
    v19 = v24.fields.y + 0.0;
    v20 = v24.fields.z + 0.0;
    if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v15);
      v17 = ListViewObject_TypeInfo;
    }
    v25.fields.x = v18;
    v25.fields.y = v19;
    v25.fields.z = v20;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v16, v17->static_fields->BASE_MOVE_TIME, v25, 0LL);
    if ( !transform )
LABEL_15:
      sub_1BCAA3C(transform, v9);
    v21 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v21[3].monitor = gameObject;
    sub_1BCA784(&v21[3].monitor, gameObject);
    v23 = StringLiteral_6296/*"EventExitMove2"*/;
    *(_QWORD *)&v21[3].fields.m_CachedPtr = StringLiteral_6296/*"EventExitMove2"*/;
    sub_1BCA784(&v21[3].fields, v23);
  }
}


void __fastcall MaterialCostumeServantListViewObject__EventExitMove2(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4B117D3 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B117D3 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784(&this->fields.dragObject, 0LL);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v5);
}


void __fastcall MaterialCostumeServantListViewObject__EventExitStart(
        MaterialCostumeServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4B117D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_6295/*"EventExitMove"*/, v8, v9);
    byte_4B117D1 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v10;
  sub_1BCA784(&this->fields.dragObject, v10);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    MaterialCostumeServantListViewObject__EventMoveEnd(this, v11);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1BCAA3C(dragObject, v11);
  MaterialCostumeServantListViewObject__Init_31764532(
    (MaterialCostumeServantListViewObject_o *)Component_object,
    2,
    v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6295/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__EventIntoMove(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v8; // s0
  __int64 v11; // x1
  ListViewObject_c *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B117CC & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6307/*"EventIntoMove2"*/, v4, v5);
    byte_4B117CC = 1;
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
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_11;
  v20 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v12 = ListViewObject_TypeInfo;
  v13 = this->fields.dragObject;
  x = v20.fields.x;
  y = v20.fields.y;
  z = v20.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, v11);
    v12 = ListViewObject_TypeInfo;
  }
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v12->static_fields->BASE_MOVE_TIME, v21, 0LL);
  if ( !dragObject )
LABEL_11:
    sub_1BCAA3C(dragObject, method);
  v17 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17[3].monitor = gameObject;
  sub_1BCA784(&v17[3].monitor, gameObject);
  v19 = StringLiteral_6307/*"EventIntoMove2"*/;
  *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_6307/*"EventIntoMove2"*/;
  sub_1BCA784(&v17[3].fields, v19);
}


void __fastcall MaterialCostumeServantListViewObject__EventIntoMove2(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4B117CD & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B117CD = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MaterialCostumeServantListViewObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784(&this->fields.dragObject, 0LL);
  MaterialCostumeServantListViewObject__EventMoveEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__EventIntoStart(
        MaterialCostumeServantListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_GameObject_o *v8; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v10; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0

  if ( (byte_4B117CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, method, v3);
    sub_1BCA7E0(&StringLiteral_6306/*"EventIntoMove"*/, v6, v7);
    byte_4B117CB = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCostumeServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCostumeServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  p_dragObject = &this->fields.dragObject;
  sub_1BCA784(&this->fields.dragObject, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___)) == 0LL
    || (MaterialCostumeServantListViewObject__Init_31764532(
          (MaterialCostumeServantListViewObject_o *)dragObject,
          2,
          v12),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__TransformPoint_70178832(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1BCAA3C(dragObject, v10);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6306/*"EventIntoMove"*/,
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
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


MaterialCostumeServantListViewItem_o *__fastcall MaterialCostumeServantListViewObject__GetItem(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B117C6 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantListViewItem_TypeInfo, method, v2);
    byte_4B117C6 = 1;
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

  if ( (byte_4B117C9 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B117C9 = 1;
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
    sub_1BCAA3C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1BCA784(&this->fields.callbackFunc, callbackFunc);
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
        sub_1BCA784(p_callbackFunc, 0LL);
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
void __fastcall MaterialCostumeServantListViewObject__Init_31764532(
        MaterialCostumeServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, method);
    byte_4B109C1 = 1;
  }
  MaterialCostumeServantListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__Init_31765184(
        MaterialCostumeServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  MaterialCostumeServantListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewObject__Init_31765284(
        MaterialCostumeServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  MaterialCostumeServantListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void __fastcall MaterialCostumeServantListViewObject__OnClickSelect(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCostumeServantListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  _DWORD *monitor; // x10
  bool v11; // w20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  v3 = this;
  if ( (byte_4B117D5 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCostumeServantListViewObject_OnClickSelect__, v4, v5);
    this = (MaterialCostumeServantListViewObject_o *)sub_1BCA7E0(&StringLiteral_9997/*"OnClickSelectListView"*/, v6, v7);
    byte_4B117D5 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCostumeServantListViewItem_TypeInfo )
    {
      goto LABEL_18;
    }
    monitor = linkItem[1].monitor;
    v11 = !monitor || LOBYTE(linkItem[1].fields.loopIndex) || monitor[10] != 2 || linkItem[1].fields.selectNum == 0;
    v12 = Method_MaterialCostumeServantListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeServantListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    if ( v11 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    this = (MaterialCostumeServantListViewObject_o *)v3->fields.manager;
    if ( !this )
LABEL_18:
      sub_1BCAA3C(this, method);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)this,
      (System_String_o *)StringLiteral_9997/*"OnClickSelectListView"*/,
      (Il2CppObject *)v3,
      0LL);
  }
}


void __fastcall MaterialCostumeServantListViewObject__OnDestroy(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4B117C5 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B117C5 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(v10, 0LL);
    *p_dragObject = 0LL;
    sub_1BCA784(p_dragObject, 0LL);
  }
}


void __fastcall MaterialCostumeServantListViewObject__OnLongPush(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B117D6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_10073/*"OnPressCancel"*/, v4, v5);
    byte_4B117D6 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_70135704(gameObject, (System_String_o *)StringLiteral_10073/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1BCAA3C(gameObject, v7);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10055/*"OnLongPushListView"*/,
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
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  MaterialCostumeServantListViewItemDraw_o *v11; // x0

  if ( (byte_4B117C7 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantListViewItem_TypeInfo, isInput, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B117C7 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1BCAA3C(0LL, v9);
    MaterialCostumeServantListViewItemDraw__SetButtonState(v11, 1, v10);
  }
}


void __fastcall MaterialCostumeServantListViewObject__SetItem(
        MaterialCostumeServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialCostumeServantListViewObject__SetItem_31769520(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  MaterialCostumeServantListViewItemDraw_o *v13; // x0

  if ( (byte_4B117CA & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B117CA = 1;
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
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_1BCAA3C(0LL, v11);
    MaterialCostumeServantListViewItemDraw__SetItem(
      v13,
      (MaterialCostumeServantListViewItem_o *)linkItem,
      this->fields.dispMode,
      v12);
  }
}


System_String_o *__fastcall MaterialCostumeServantListViewObject__ToString(
        MaterialCostumeServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  float z; // w9
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v13; // [xsp+20h] [xbp-40h] BYREF
  float v14; // [xsp+28h] [xbp-38h]

  if ( (byte_4B117D4 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantListViewItemDraw_DispMode_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    byte_4B117D4 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v11.klass = (System_Enum_c *)MaterialCostumeServantListViewItemDraw_DispMode_TypeInfo;
  v11.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v6 = System_Enum__ToString(&v11, 0LL);
  z = this->fields.basePosition.fields.z;
  v8 = v6;
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v14 = z;
  v9 = (System_String_o *)sub_1DDA8EC(&v13, 0LL, 0LL, 0LL);
  return System_String__Concat_62412480(v8, (System_String_o *)StringLiteral_116/*" "*/, v9, 0LL);
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

  if ( (byte_4B117C2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B117C2 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantListViewObject_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B117C3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B117C3 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantListViewObject_o *)sub_1BCACFC(v8);
  MaterialCostumeServantListViewObject__Awake(v11, v12);
}