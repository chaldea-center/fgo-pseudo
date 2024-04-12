void __fastcall FriendOperationItemListViewObject___ctor(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3248 & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42B3248 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__Awake(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct FriendOperationItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B3221 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___);
    byte_42B3221 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B52A5C(0LL, v3);
  Component_srcLineSprite = (struct FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              dispObject,
                                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall FriendOperationItemListViewObject__CreateDragObject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  FriendOperationItemListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B3225 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    byte_42B3225 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0LL) )
  {
    sub_B52A5C(DragObject, v4);
  }
  v6 = (FriendOperationItemListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventEnterMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  UnityEngine_GameObject_o *v8; // x20
  ListViewObject_c *v9; // x0
  float v10; // s10
  float v11; // s9
  float v12; // s8
  UnityEngine_GameObject_o *v13; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42B322C & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    sub_B52984(&StringLiteral_6201/*"EventEnterMove2"*/);
    byte_42B322C = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v28 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL);
  v8 = this->fields.dragObject;
  v9 = ListViewObject_TypeInfo;
  v10 = v28.fields.x + 0.0;
  v11 = v28.fields.y + 980.0;
  v12 = v28.fields.z + 0.0;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v29.fields.x = v10;
  v29.fields.y = v11;
  v29.fields.z = v12;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v9->static_fields->BASE_MOVE_TIME, v29, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B52A5C(dragObject, method);
  v13 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B52920((BattleServantConfConponent_o *)&v13[3], gameObject, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_6201/*"EventEnterMove2"*/;
  v13[3].monitor = (void *)StringLiteral_6201/*"EventEnterMove2"*/;
  sub_B52920((BattleServantConfConponent_o *)&v13[3].monitor, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall FriendOperationItemListViewObject__EventEnterMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_42B322D & 1) == 0 )
  {
    sub_B52984(&NGUITools_TypeInfo);
    byte_42B322D = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  FriendOperationItemListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventEnterStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  FriendOperationItemListViewObject_o *v14; // x20
  const MethodInfo *v15; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B322B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_B52984(&StringLiteral_6200/*"EventEnterMove"*/);
    byte_42B322B = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0LL )
  {
    sub_B52A5C(dragObject, v12);
  }
  v14 = (FriendOperationItemListViewObject_o *)dragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(v14, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6200/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventExitMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v7; // s0
  UnityEngine_GameObject_o *v10; // x20
  ListViewObject_c *v11; // x0
  float v12; // s8
  float v13; // s10
  float v14; // s9
  UnityEngine_GameObject_o *v15; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42B322F & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6203/*"EventExitMove2"*/);
    byte_42B322F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v4);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_17;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_17;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_17;
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_17;
    v30 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL);
    v10 = this->fields.dragObject;
    v11 = ListViewObject_TypeInfo;
    v12 = v30.fields.x + 980.0;
    v13 = v30.fields.y + 0.0;
    v14 = v30.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v11 = ListViewObject_TypeInfo;
    }
    v31.fields.x = v12;
    v31.fields.y = v13;
    v31.fields.z = v14;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v11->static_fields->BASE_MOVE_TIME, v31, 0LL);
    if ( !transform )
LABEL_17:
      sub_B52A5C(transform, v4);
    v15 = transform;
    LODWORD(transform[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B52920((BattleServantConfConponent_o *)&v15[3], gameObject, v17, v18, v19, v20, v21, v22);
    v23 = (System_Int32_array **)StringLiteral_6203/*"EventExitMove2"*/;
    v15[3].monitor = (void *)StringLiteral_6203/*"EventExitMove2"*/;
    sub_B52920((BattleServantConfConponent_o *)&v15[3].monitor, v23, v24, v25, v26, v27, v28, v29);
  }
}


void __fastcall FriendOperationItemListViewObject__EventExitMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_42B3230 & 1) == 0 )
  {
    sub_B52984(&NGUITools_TypeInfo);
    byte_42B3230 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  FriendOperationItemListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventExitStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v15; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B322E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6202/*"EventExitMove"*/);
    byte_42B322E = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B52A5C(dragObject, v12);
  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(
    (FriendOperationItemListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6202/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventIntoMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  UnityEngine_GameObject_o *v8; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v11; // x0
  float z; // s10
  UnityEngine_GameObject_o *v13; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42B3229 & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    sub_B52984(&StringLiteral_6213/*"EventIntoMove2"*/);
    byte_42B3229 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v28 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL);
  v8 = this->fields.dragObject;
  x = v28.fields.x;
  y = v28.fields.y;
  v11 = ListViewObject_TypeInfo;
  z = v28.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v11 = ListViewObject_TypeInfo;
  }
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v11->static_fields->BASE_MOVE_TIME, v29, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B52A5C(dragObject, method);
  v13 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B52920((BattleServantConfConponent_o *)&v13[3], gameObject, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_6213/*"EventIntoMove2"*/;
  v13[3].monitor = (void *)StringLiteral_6213/*"EventIntoMove2"*/;
  sub_B52920((BattleServantConfConponent_o *)&v13[3].monitor, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall FriendOperationItemListViewObject__EventIntoMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_42B322A & 1) == 0 )
  {
    sub_B52984(&NGUITools_TypeInfo);
    byte_42B322A = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  FriendOperationItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  FriendOperationItemListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventIntoStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  FriendOperationItemListViewObject_o *v15; // x21
  const MethodInfo *v16; // x3
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B3228 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_B52984(&StringLiteral_6212/*"EventIntoMove"*/);
    byte_42B3228 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             dragObject,
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
  if ( !dragObject
    || (v15 = (FriendOperationItemListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        FriendOperationItemListViewObject__Init(v15, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__TransformPoint_35740824(
                                           (UnityEngine_Transform_o *)dragObject,
                                           980.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B52A5C(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6212/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall FriendOperationItemListViewObject__EventMoveEnd(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields.isOpenAfter = 0;
  p_callbackFunc[-1].fields.adjustHeight = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


FriendOperationItemListViewItem_o *__fastcall FriendOperationItemListViewObject__GetItem(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_42B3223 & 1) == 0 )
  {
    sub_B52984(&FriendOperationItemListViewItem_TypeInfo);
    byte_42B3223 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == FriendOperationItemListViewItem_TypeInfo )
    return (FriendOperationItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__Init(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v13; // x10
  int32_t v14; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w9
  int32_t v32; // w8
  System_Action_o *klass; // x19

  if ( (byte_42B3226 & 1) == 0 )
  {
    sub_B52984(&FriendOperationItemListViewItem_TypeInfo);
    byte_42B3226 = 1;
  }
  if ( initMode == 7 )
  {
    FriendOperationItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    if ( linkItem
      && (v13 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
    {
      if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == FriendOperationItemListViewItem_TypeInfo )
        v14 = initMode;
      else
        v14 = 0;
    }
    else
    {
      v14 = 0;
    }
    ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
    ((void (__fastcall *)(FriendOperationItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      v14 == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B52A5C(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callbackFunc,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v31 = 1;
    v32 = v14;
    switch ( v14 )
    {
      case 0:
      case 2:
        goto LABEL_18;
      case 1:
        v32 = v14;
        goto LABEL_17;
      case 3:
        v32 = 2;
LABEL_17:
        v31 = v14;
LABEL_18:
        this->fields.dispMode = v32;
        this->fields.state = v31;
        goto LABEL_19;
      case 4:
        this->fields.dispMode = 0;
        this->fields.state = 2;
        FriendOperationItemListViewObject__EventIntoStart(this, delay, v24);
        return;
      case 6:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        FriendOperationItemListViewObject__EventExitStart(this, delay, v24);
        return;
      default:
LABEL_19:
        if ( !state || dispMode != this->fields.dispMode )
          FriendOperationItemListViewObject__SetupDisp(this, v24);
        klass = (System_Action_o *)p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0LL;
          sub_B52920(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
          System_Action__Invoke(klass, 0LL);
        }
        break;
    }
  }
}


void __fastcall FriendOperationItemListViewObject__InitItem(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__Init_30822204(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__Init_30823340(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__Init_30824396(
        FriendOperationItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall FriendOperationItemListViewObject__OnClickAccept(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3240 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10019/*"OnClickListViewAccept"*/);
    byte_42B3240 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B52A5C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10019/*"OnClickListViewAccept"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickAppendSkill(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3239 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10018/*"OnClickListView"*/);
    byte_42B3239 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B52A5C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10018/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickCancel(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3242 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10021/*"OnClickListViewCancel"*/);
    byte_42B3242 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B52A5C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10021/*"OnClickListViewCancel"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.linkItem )
    ListViewObject__OnClick((ListViewObject_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickOffer(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B323F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10026/*"OnClickListViewOffer"*/);
    byte_42B323F = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B52A5C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10026/*"OnClickListViewOffer"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickReject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3241 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10027/*"OnClickListViewReject"*/);
    byte_42B3241 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B52A5C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10027/*"OnClickListViewReject"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickRemove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  FriendOperationItemListViewItem_c *v4; // x1
  __int64 v5; // x9
  System_String_o *v6; // x1

  if ( (byte_42B3243 & 1) == 0 )
  {
    sub_B52984(&FriendOperationItemListViewItem_TypeInfo);
    sub_B52984(&StringLiteral_10028/*"OnClickListViewRemove"*/);
    sub_B52984(&StringLiteral_21405/*"onClickListViewBlacklistRemove"*/);
    byte_42B3243 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = FriendOperationItemListViewItem_TypeInfo;
    v5 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == FriendOperationItemListViewItem_TypeInfo )
    {
      if ( this->fields.manager )
      {
        if ( LODWORD(linkItem[1].klass) == 8 )
          v6 = (System_String_o *)StringLiteral_21405/*"onClickListViewBlacklistRemove"*/;
        else
          v6 = (System_String_o *)StringLiteral_10028/*"OnClickListViewRemove"*/;
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this->fields.manager,
          v6,
          (Il2CppObject *)this,
          0LL);
        return;
      }
    }
    else
    {
      sub_B52D50(linkItem);
    }
    sub_B52A5C(linkItem, v4);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3232 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10018/*"OnClickListView"*/);
    byte_42B3232 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B52A5C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10018/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill13(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3237 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10018/*"OnClickListView"*/);
    byte_42B3237 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B52A5C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10018/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3235 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10018/*"OnClickListView"*/);
    byte_42B3235 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B52A5C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10018/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSupportClassBoardBuff(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3247 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10167/*"OpenSupportClassBoard"*/);
    byte_42B3247 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B52A5C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10167/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickSupportInfo(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11
  OtherUserGameEntity_o *monitor; // x20
  int32_t klass; // w21
  SupportInfoJump_o *v9; // x19

  if ( (byte_42B3246 & 1) == 0 )
  {
    sub_B52984(&FriendOperationItemListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&SupportInfoJump_TypeInfo);
    byte_42B3246 = 1;
  }
  if ( this->fields.linkItem )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    linkItem = this->fields.linkItem;
    if ( !linkItem
      || (v6 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6)
      || (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != FriendOperationItemListViewItem_TypeInfo
      || (monitor = (OtherUserGameEntity_o *)linkItem[1].monitor,
          klass = (int32_t)linkItem[1].klass,
          v9 = (SupportInfoJump_o *)sub_B52A54(SupportInfoJump_TypeInfo),
          SupportInfoJump___ctor(v9, monitor, klass, 0, 0LL),
          (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_B52A5C(Instance, v4);
    }
    AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v9, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnDestroy(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B3222 & 1) == 0 )
  {
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3222 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B52920(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B323A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    sub_B52984(&StringLiteral_10082/*"OnLongPushAppendSkill1ListView"*/);
    byte_42B323A = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10082/*"OnLongPushAppendSkill1ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B323B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10083/*"OnLongPushAppendSkill2ListView"*/);
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    byte_42B323B = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10083/*"OnLongPushAppendSkill2ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B323C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10084/*"OnLongPushAppendSkill3ListView"*/);
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    byte_42B323C = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10084/*"OnLongPushAppendSkill3ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill4(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B323D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    sub_B52984(&StringLiteral_10085/*"OnLongPushAppendSkill4ListView"*/);
    byte_42B323D = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10085/*"OnLongPushAppendSkill4ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill5(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B323E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10086/*"OnLongPushAppendSkill5ListView"*/);
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    byte_42B323E = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10086/*"OnLongPushAppendSkill5ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B3233 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10088/*"OnLongPushServantEquip"*/);
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    byte_42B3233 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10088/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B3234 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10089/*"OnLongPushSkill1ListView"*/);
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    byte_42B3234 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10089/*"OnLongPushSkill1ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B3236 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10090/*"OnLongPushSkill2ListView"*/);
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    byte_42B3236 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10090/*"OnLongPushSkill2ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B3238 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10091/*"OnLongPushSkill3ListView"*/);
    sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    byte_42B3238 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B52A5C(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10091/*"OnLongPushSkill3ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__SetInput(
        FriendOperationItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  FriendOperationItemListViewItemDraw_o *v10; // x0

  if ( (byte_42B3224 & 1) == 0 )
  {
    sub_B52984(&FriendOperationItemListViewItem_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3224 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v8 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == FriendOperationItemListViewItem_TypeInfo )
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
      sub_B52A5C(0LL, v9);
    FriendOperationItemListViewItemDraw__SetInput(v10, (FriendOperationItemListViewItem_o *)v9, isInput, v6);
  }
}


void __fastcall FriendOperationItemListViewObject__SetItem(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33992116((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall FriendOperationItemListViewObject__SetItem_30831964(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall FriendOperationItemListViewObject__SetupDisp(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  FriendOperationItemListViewItemDraw_o *v9; // x0

  if ( (byte_42B3227 & 1) == 0 )
  {
    sub_B52984(&FriendOperationItemListViewItem_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3227 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == FriendOperationItemListViewItem_TypeInfo )
    {
      v5 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v5 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B52A5C(0LL, v7);
    FriendOperationItemListViewItemDraw__SetItem(
      v9,
      (FriendOperationItemListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void __fastcall FriendOperationItemListViewObject__UpdateLock(
        FriendOperationItemListViewObject_o *this,
        FriendOperationItemListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B52A5C(0LL, item);
  FriendOperationItemListViewItemDraw__UpdateLockUI(itemDraw, item, method);
}


void __fastcall FriendOperationItemListViewObject__add_callbackFunc(
        FriendOperationItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B321F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B321F = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  FriendOperationItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FriendOperationItemListViewObject__onClickMessageDisp(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3245 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21406/*"onClickListViewMessageDisp"*/);
    byte_42B3245 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B52A5C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_21406/*"onClickListViewMessageDisp"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__onClickRegist(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42B3244 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21404/*"onClickListViewBlacklistRegist"*/);
    byte_42B3244 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B52A5C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_21404/*"onClickListViewBlacklistRegist"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__remove_callbackFunc(
        FriendOperationItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B3220 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B3220 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  FriendOperationItemListViewObject__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__setMessageButtonUI(
        FriendOperationItemListViewObject_o *this,
        bool disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  FriendOperationItemListViewItemDraw_o *itemDraw; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1

  if ( (byte_42B3231 & 1) == 0 )
  {
    sub_B52984(&FriendOperationItemListViewItem_TypeInfo);
    byte_42B3231 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B52A5C(0LL, disp);
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v8 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
  {
    if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == FriendOperationItemListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  FriendOperationItemListViewItemDraw__setMessageButtonUI(itemDraw, (FriendOperationItemListViewItem_o *)v9, disp, v3);
}