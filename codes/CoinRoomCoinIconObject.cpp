void __fastcall CoinRoomCoinIconObject___ctor(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8CF0 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CF0 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CoinRoomCoinIconObject__Awake(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct CoinRoomCoinIconDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8CE1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___, (_DWORD)method, v2, v3);
    byte_42E8CE1 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct CoinRoomCoinIconDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               dispObject,
                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconDraw___);
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
UnityEngine_GameObject_o *__fastcall CoinRoomCoinIconObject__CreateDragObject(
        CoinRoomCoinIconObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  CoinRoomCoinIconObject_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8CE7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, (_DWORD)method, v2, v3);
    byte_42E8CE7 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  v8 = (CoinRoomCoinIconObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  CoinRoomCoinIconObject__Init(v8, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
  CoinRoomCoinIconObject__SetupDisp(v8, v10);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventExitMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_42E8CEC & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6239/*"EventExitMove2"*/, v8, v9, v10);
    byte_42E8CEC = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v12);
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
    v20 = v38.fields.x + 1000.0;
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


void __fastcall CoinRoomCoinIconObject__EventExitMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_42E8CED & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CED = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  CoinRoomCoinIconObject__EventMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventExitStart(
        CoinRoomCoinIconObject_o *this,
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

  if ( (byte_42E8CEB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_6238/*"EventExitMove"*/, v10, v11, v12);
    byte_42E8CEB = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v13 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    CoinRoomCoinIconObject__EventMoveEnd(this, v20);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B5D69C(dragObject, v20);
  zero = UnityEngine_Vector3__get_zero(0LL);
  CoinRoomCoinIconObject__Init(
    (CoinRoomCoinIconObject_o *)Component_srcLineSprite,
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
void __fastcall CoinRoomCoinIconObject__EventIntoMove(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_42E8CE9 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6249/*"EventIntoMove2"*/, v5, v6, v7);
    byte_42E8CE9 = 1;
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


void __fastcall CoinRoomCoinIconObject__EventIntoMove2(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_42E8CEA & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CEA = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  CoinRoomCoinIconObject__SetupDisp(this, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  CoinRoomCoinIconObject__EventMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__EventIntoStart(
        CoinRoomCoinIconObject_o *this,
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
  CoinRoomCoinIconObject_o *v20; // x21
  const MethodInfo *v21; // x3
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8CE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_6248/*"EventIntoMove"*/, v7, v8, v9);
    byte_42E8CE8 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CoinRoomCoinIconObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CoinRoomCoinIconObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
  if ( !dragObject
    || (v20 = (CoinRoomCoinIconObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        CoinRoomCoinIconObject__Init(v20, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v21),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__TransformPoint_35744104(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
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


void __fastcall CoinRoomCoinIconObject__EventMoveEnd(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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


void __fastcall CoinRoomCoinIconObject__Init(
        CoinRoomCoinIconObject_o *this,
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

  if ( (byte_42E8CE3 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42E8CE3 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v13 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == CoinRoomCoinIconItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(CoinRoomCoinIconObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
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
      goto LABEL_16;
    case 1:
      v32 = v14;
      goto LABEL_15;
    case 3:
      v32 = 2;
LABEL_15:
      v31 = v14;
LABEL_16:
      this->fields.dispMode = v32;
      this->fields.state = v31;
      goto LABEL_17;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_21;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      CoinRoomCoinIconObject__EventIntoStart(this, delay, v24);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      CoinRoomCoinIconObject__EventExitStart(this, delay, v24);
      return;
    default:
LABEL_17:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_21:
        CoinRoomCoinIconObject__SetupDisp(this, v24);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B5D560(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconObject__Init_25643300(
        CoinRoomCoinIconObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CoinRoomCoinIconObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
}


bool __fastcall CoinRoomCoinIconObject__IsCanDrag(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall CoinRoomCoinIconObject__OnClickIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CoinRoomCoinIconObject_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11

  v4 = this;
  if ( (byte_42E8CEE & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    this = (CoinRoomCoinIconObject_o *)sub_B5D5C4(&StringLiteral_10054/*"OnClickIcon"*/, v8, v9, v10);
    byte_42E8CEE = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != CoinRoomCoinIconItem_TypeInfo )
    {
      goto LABEL_17;
    }
    if ( BYTE4(linkItem[1].fields.sortValue0B) )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this = (CoinRoomCoinIconObject_o *)v4->fields.manager;
      if ( this )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10054/*"OnClickIcon"*/,
          (Il2CppObject *)v4,
          0LL);
        return;
      }
LABEL_17:
      sub_B5D69C(this, method);
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall CoinRoomCoinIconObject__OnDestroy(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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

  if ( (byte_42E8CE2 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8CE2 = 1;
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


void __fastcall CoinRoomCoinIconObject__OnPressIcon(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42E8CEF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10148/*"OnPressIcon"*/, v5, v6, v7);
    byte_42E8CEF = 1;
  }
  if ( this->fields.linkItem )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, v8);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10148/*"OnPressIcon"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall CoinRoomCoinIconObject__ResetItem(
        CoinRoomCoinIconObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  CoinRoomCoinIconDraw_o *v10; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11
  CoinRoomCoinIconItem_c *v13; // x10
  CoinRoomCoinIconItem_o *v14; // x1

  if ( (byte_42E8CE5 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8CE5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (CoinRoomCoinIconDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v12 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
      {
        v13 = (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1];
        v14 = v13 == CoinRoomCoinIconItem_TypeInfo ? (CoinRoomCoinIconItem_o *)this->fields.linkItem : 0LL;
        if ( v13 == CoinRoomCoinIconItem_TypeInfo )
        {
          if ( !v14
            || (v14->fields._selectedNum_k__BackingField = 0,
                v14->fields.selectNum = -1,
                v14->fields._isTouchEnabled_k__BackingField = 1,
                (v10 = this->fields.itemDraw) == 0LL) )
          {
            sub_B5D69C(v10, v14);
          }
          CoinRoomCoinIconDraw__ResetItem(v10, v14, isInput, 0LL);
        }
      }
    }
  }
}


void __fastcall CoinRoomCoinIconObject__SetItem(
        CoinRoomCoinIconObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CoinRoomCoinIconObject__SetupDisp(CoinRoomCoinIconObject_o *this, const MethodInfo *method)
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
  CoinRoomCoinIconDraw_o *v13; // x0

  if ( (byte_42E8CE4 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8CE4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == CoinRoomCoinIconItem_TypeInfo )
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
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
    CoinRoomCoinIconDraw__SetItem(v13, (CoinRoomCoinIconItem_o *)linkItem, this->fields.dispMode, 0, 0LL);
  }
}


void __fastcall CoinRoomCoinIconObject__UpdateItem(
        CoinRoomCoinIconObject_o *this,
        int32_t num,
        bool isInput,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *itemDraw; // x22
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11
  CoinRoomCoinIconItem_c *v13; // x10
  CoinRoomCoinIconItem_o *v14; // x1
  CoinRoomCoinIconDraw_o *v15; // x0

  if ( (byte_42E8CE6 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomCoinIconItem_TypeInfo, num, isInput, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E8CE6 = 1;
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
    if ( linkItem )
    {
      v12 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
      {
        v13 = (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1];
        v14 = v13 == CoinRoomCoinIconItem_TypeInfo ? (CoinRoomCoinIconItem_o *)this->fields.linkItem : 0LL;
        if ( v13 == CoinRoomCoinIconItem_TypeInfo )
        {
          v15 = this->fields.itemDraw;
          if ( !v15 )
            sub_B5D69C(0LL, v14);
          CoinRoomCoinIconDraw__UpdateItem(v15, v14, num, isInput, 0LL);
        }
      }
    }
  }
}


void __fastcall CoinRoomCoinIconObject__add_callbackFunc(
        CoinRoomCoinIconObject_o *this,
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
  CoinRoomCoinIconObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E8CDF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8CDF = 1;
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
  v12 = (CoinRoomCoinIconObject_o *)sub_B5D990(v9);
  CoinRoomCoinIconObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall CoinRoomCoinIconObject__remove_callbackFunc(
        CoinRoomCoinIconObject_o *this,
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
  CoinRoomCoinIconObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E8CE0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8CE0 = 1;
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
  v12 = (CoinRoomCoinIconObject_o *)sub_B5D990(v9);
  CoinRoomCoinIconObject__Awake(v12, v13);
}