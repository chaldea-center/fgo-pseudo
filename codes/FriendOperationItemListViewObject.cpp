void __fastcall FriendOperationItemListViewObject___ctor(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBE6A & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBE6A = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct FriendOperationItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBE43 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBE43 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct FriendOperationItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              dispObject,
                                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall FriendOperationItemListViewObject__CreateDragObject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  FriendOperationItemListViewObject_o *v8; // x20
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBE47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, (_DWORD)method, v2, v3);
    byte_42EBE47 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  v8 = (FriendOperationItemListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(v8, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventEnterMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  ListViewObject_c *v14; // x0
  float v15; // s10
  float v16; // s9
  float v17; // s8
  UnityEngine_GameObject_o *v18; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EBE4E & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6237/*"EventEnterMove2"*/, v5, v6, v7);
    byte_42EBE4E = 1;
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
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v33 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = this->fields.dragObject;
  v14 = ListViewObject_TypeInfo;
  v15 = v33.fields.x + 0.0;
  v16 = v33.fields.y + 980.0;
  v17 = v33.fields.z + 0.0;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v14 = ListViewObject_TypeInfo;
  }
  v34.fields.x = v15;
  v34.fields.y = v16;
  v34.fields.z = v17;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v14->static_fields->BASE_MOVE_TIME, v34, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B5D69C(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_6237/*"EventEnterMove2"*/;
  v18[3].monitor = (void *)StringLiteral_6237/*"EventEnterMove2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall FriendOperationItemListViewObject__EventEnterMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42EBE4F & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBE4F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  FriendOperationItemListViewObject__EventMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventEnterStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct UnityEngine_GameObject_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  FriendOperationItemListViewObject_o *v19; // x20
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBE4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_6236/*"EventEnterMove"*/, v7, v8, v9);
    byte_42EBE4D = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___)) == 0LL )
  {
    sub_B5D69C(dragObject, v17);
  }
  v19 = (FriendOperationItemListViewObject_o *)dragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(v19, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v20);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6236/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventExitMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v15; // s0
  UnityEngine_GameObject_o *v18; // x20
  ListViewObject_c *v19; // x0
  float v20; // s8
  float v21; // s10
  float v22; // s9
  UnityEngine_GameObject_o *v23; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EBE51 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6239/*"EventExitMove2"*/, v8, v9, v10);
    byte_42EBE51 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v12);
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
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_17;
    v38 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v15, 0LL);
    v18 = this->fields.dragObject;
    v19 = ListViewObject_TypeInfo;
    v20 = v38.fields.x + 980.0;
    v21 = v38.fields.y + 0.0;
    v22 = v38.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v19 = ListViewObject_TypeInfo;
    }
    v39.fields.x = v20;
    v39.fields.y = v21;
    v39.fields.z = v22;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v18, v19->static_fields->BASE_MOVE_TIME, v39, 0LL);
    if ( !transform )
LABEL_17:
      sub_B5D69C(transform, v12);
    v23 = transform;
    LODWORD(transform[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v23[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3], gameObject, v25, v26, v27, v28, v29, v30);
    v31 = (System_Int32_array **)StringLiteral_6239/*"EventExitMove2"*/;
    v23[3].monitor = (void *)StringLiteral_6239/*"EventExitMove2"*/;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3].monitor, v31, v32, v33, v34, v35, v36, v37);
  }
}


void __fastcall FriendOperationItemListViewObject__EventExitMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42EBE52 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBE52 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  FriendOperationItemListViewObject__EventMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventExitStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct UnityEngine_GameObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBE50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_6238/*"EventExitMove"*/, v10, v11, v12);
    byte_42EBE50 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v13 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FriendOperationItemListViewObject__EventMoveEnd(this, v20);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B5D69C(dragObject, v20);
  zero = UnityEngine_Vector3__get_zero(0LL);
  FriendOperationItemListViewObject__Init(
    (FriendOperationItemListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v23);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6238/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventIntoMove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v16; // x0
  float z; // s10
  UnityEngine_GameObject_o *v18; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EBE4B & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6249/*"EventIntoMove2"*/, v5, v6, v7);
    byte_42EBE4B = 1;
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
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v33 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = this->fields.dragObject;
  x = v33.fields.x;
  y = v33.fields.y;
  v16 = ListViewObject_TypeInfo;
  z = v33.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v16 = ListViewObject_TypeInfo;
  }
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->BASE_MOVE_TIME, v34, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B5D69C(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_6249/*"EventIntoMove2"*/;
  v18[3].monitor = (void *)StringLiteral_6249/*"EventIntoMove2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall FriendOperationItemListViewObject__EventIntoMove2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_42EBE4C & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBE4C = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  FriendOperationItemListViewObject__SetupDisp(this, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  FriendOperationItemListViewObject__EventMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewObject__EventIntoStart(
        FriendOperationItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  FriendOperationItemListViewObject_o *v20; // x21
  const MethodInfo *v21; // x3
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBE4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_6248/*"EventIntoMove"*/, v7, v8, v9);
    byte_42EBE4A = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FriendOperationItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FriendOperationItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             dragObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
  if ( !dragObject
    || (v20 = (FriendOperationItemListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        FriendOperationItemListViewObject__Init(v20, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v21),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__TransformPoint_35744104(
                                           (UnityEngine_Transform_o *)dragObject,
                                           980.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B5D69C(dragObject, v18);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6248/*"EventIntoMove"*/,
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


FriendOperationItemListViewItem_o *__fastcall FriendOperationItemListViewObject__GetItem(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EBE45 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBE45 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FriendOperationItemListViewItem_TypeInfo )
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

  if ( (byte_42EBE48 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42EBE48 = 1;
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
      sub_B5D69C(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B5D560(
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
          sub_B5D560(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
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
void __fastcall FriendOperationItemListViewObject__Init_31317572(
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
void __fastcall FriendOperationItemListViewObject__Init_31318708(
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
void __fastcall FriendOperationItemListViewObject__Init_31319764(
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE62 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10061/*"OnClickListViewAccept"*/, (_DWORD)method, v2, v3);
    byte_42EBE62 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10061/*"OnClickListViewAccept"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickAppendSkill(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE5B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10060/*"OnClickListView"*/, (_DWORD)method, v2, v3);
    byte_42EBE5B = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B5D69C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10060/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickCancel(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE64 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10063/*"OnClickListViewCancel"*/, (_DWORD)method, v2, v3);
    byte_42EBE64 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10063/*"OnClickListViewCancel"*/, (Il2CppObject *)this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE61 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10068/*"OnClickListViewOffer"*/, (_DWORD)method, v2, v3);
    byte_42EBE61 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10068/*"OnClickListViewOffer"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickReject(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE63 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10069/*"OnClickListViewReject"*/, (_DWORD)method, v2, v3);
    byte_42EBE63 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10069/*"OnClickListViewReject"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickRemove(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewItem_o *linkItem; // x0
  FriendOperationItemListViewItem_c *v12; // x1
  __int64 v13; // x9
  System_String_o *v14; // x1

  if ( (byte_42EBE65 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10070/*"OnClickListViewRemove"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_21514/*"onClickListViewBlacklistRemove"*/, v8, v9, v10);
    byte_42EBE65 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v12 = FriendOperationItemListViewItem_TypeInfo;
    v13 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13
      && (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == FriendOperationItemListViewItem_TypeInfo )
    {
      if ( this->fields.manager )
      {
        if ( LODWORD(linkItem[1].klass) == 8 )
          v14 = (System_String_o *)StringLiteral_21514/*"onClickListViewBlacklistRemove"*/;
        else
          v14 = (System_String_o *)StringLiteral_10070/*"OnClickListViewRemove"*/;
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this->fields.manager,
          v14,
          (Il2CppObject *)this,
          0LL);
        return;
      }
    }
    else
    {
      sub_B5D990(linkItem);
    }
    sub_B5D69C(linkItem, v12);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE54 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10060/*"OnClickListView"*/, (_DWORD)method, v2, v3);
    byte_42EBE54 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B5D69C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10060/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill13(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE59 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10060/*"OnClickListView"*/, (_DWORD)method, v2, v3);
    byte_42EBE59 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B5D69C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10060/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE57 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10060/*"OnClickListView"*/, (_DWORD)method, v2, v3);
    byte_42EBE57 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B5D69C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10060/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall FriendOperationItemListViewObject__OnClickSupportClassBoardBuff(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE69 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10209/*"OpenSupportClassBoard"*/, (_DWORD)method, v2, v3);
    byte_42EBE69 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10209/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnClickSupportInfo(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v15; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v17; // x11
  OtherUserGameEntity_o *monitor; // x20
  int32_t klass; // w21
  SupportInfoJump_o *v20; // x19

  if ( (byte_42EBE68 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SupportInfoJump_TypeInfo, v11, v12, v13);
    byte_42EBE68 = 1;
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
      || (v17 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v17)
      || (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v17 - 1] != FriendOperationItemListViewItem_TypeInfo
      || (monitor = (OtherUserGameEntity_o *)linkItem[1].monitor,
          klass = (int32_t)linkItem[1].klass,
          v20 = (SupportInfoJump_o *)sub_B5D694(SupportInfoJump_TypeInfo),
          SupportInfoJump___ctor(v20, monitor, klass, 0, 0LL),
          (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
    {
      sub_B5D69C(Instance, v15);
    }
    AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v20, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnDestroy(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EBE44 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBE44 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE5C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10124/*"OnLongPushAppendSkill1ListView"*/, v5, v6, v7);
    byte_42EBE5C = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10124/*"OnLongPushAppendSkill1ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE5D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10125/*"OnLongPushAppendSkill2ListView"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBE5D = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10125/*"OnLongPushAppendSkill2ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE5E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10126/*"OnLongPushAppendSkill3ListView"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBE5E = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10126/*"OnLongPushAppendSkill3ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill4(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE5F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10127/*"OnLongPushAppendSkill4ListView"*/, v5, v6, v7);
    byte_42EBE5F = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10127/*"OnLongPushAppendSkill4ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushAppendSkill5(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE60 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10128/*"OnLongPushAppendSkill5ListView"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBE60 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10128/*"OnLongPushAppendSkill5ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushEquip(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE55 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10130/*"OnLongPushServantEquip"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBE55 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10130/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill1(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE56 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10131/*"OnLongPushSkill1ListView"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBE56 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10131/*"OnLongPushSkill1ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill2(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE58 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10132/*"OnLongPushSkill2ListView"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBE58 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10132/*"OnLongPushSkill2ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__OnLongPushSkill3(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBE5A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10133/*"OnLongPushSkill3ListView"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBE5A = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10133/*"OnLongPushSkill3ListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__SetInput(
        FriendOperationItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v10; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11
  struct ListViewItem_o *v13; // x1
  FriendOperationItemListViewItemDraw_o *v14; // x0

  if ( (byte_42EBE46 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EBE46 = 1;
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
      && (v12 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
    {
      if ( (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FriendOperationItemListViewItem_TypeInfo )
        v13 = this->fields.linkItem;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v13);
    FriendOperationItemListViewItemDraw__SetInput(v14, (FriendOperationItemListViewItem_o *)v13, isInput, v10);
  }
}


void __fastcall FriendOperationItemListViewObject__SetItem(
        FriendOperationItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall FriendOperationItemListViewObject__SetItem_31327332(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x10
  bool v10; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  FriendOperationItemListViewItemDraw_o *v14; // x0

  if ( (byte_42EBE49 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBE49 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (FriendOperationItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == FriendOperationItemListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v10 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v12);
    FriendOperationItemListViewItemDraw__SetItem(
      v14,
      (FriendOperationItemListViewItem_o *)linkItem,
      this->fields.dispMode,
      v13);
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
    sub_B5D69C(0LL, item);
  FriendOperationItemListViewItemDraw__UpdateLockUI(itemDraw, item, method);
}


void __fastcall FriendOperationItemListViewObject__add_callbackFunc(
        FriendOperationItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  FriendOperationItemListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EBE41 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBE41 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  FriendOperationItemListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall FriendOperationItemListViewObject__onClickMessageDisp(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE67 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21515/*"onClickListViewMessageDisp"*/, (_DWORD)method, v2, v3);
    byte_42EBE67 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_21515/*"onClickListViewMessageDisp"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__onClickRegist(
        FriendOperationItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBE66 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21513/*"onClickListViewBlacklistRegist"*/, (_DWORD)method, v2, v3);
    byte_42EBE66 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_21513/*"onClickListViewBlacklistRegist"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FriendOperationItemListViewObject__remove_callbackFunc(
        FriendOperationItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  FriendOperationItemListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EBE42 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBE42 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  FriendOperationItemListViewObject__Awake(v12, v13);
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

  if ( (byte_42EBE53 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, disp, (_DWORD)method, v3);
    byte_42EBE53 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B5D69C(0LL, disp);
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