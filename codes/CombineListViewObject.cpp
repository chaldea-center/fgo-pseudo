void __fastcall CombineListViewObject___ctor(CombineListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40F994B & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40F994B = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CombineListViewObject__Awake(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct CombineListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F993B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineListViewItemDraw___, method);
    byte_40F993B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct CombineListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  dispObject,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CombineListViewObject__CreateDragObject(
        CombineListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  CombineListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F993E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, method);
    byte_40F993E = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     DragObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  v6 = (CombineListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventEnterMove(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v6; // x0
  int v7; // s0
  float v10; // s4
  float v11; // s3
  TweenPosition_o *v12; // x0
  TweenPosition_o *v13; // x20
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
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9945 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6140/*"EventEnterMove2"*/, method);
    byte_40F9945 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v6
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(v6, 0LL), !parent)
    || (v28 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL),
        v10 = v28.fields.y + 1000.0,
        v11 = v28.fields.z + 0.0,
        v28.fields.y = v28.fields.x + 0.0,
        v28.fields.z = v10,
        (v12 = TweenPosition__Begin(this->fields.dragObject, 1.0, *(UnityEngine_Vector3_o *)&v28.fields.y, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  v13 = v12;
  v12->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v13->fields.eventReceiver, gameObject, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_6140/*"EventEnterMove2"*/;
  v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6140/*"EventEnterMove2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v13->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall CombineListViewObject__EventEnterMove2(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_40F9946 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40F9946 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  CombineListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventEnterStart(
        CombineListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  CombineListViewObject_o *v15; // x20
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9944 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, method);
    sub_B16FFC(&StringLiteral_6139/*"EventEnterMove"*/, v5);
    byte_40F9944 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CombineListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CombineListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dragObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___)) == 0LL )
  {
    sub_B170D4();
  }
  v15 = (CombineListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineListViewObject__Init(v15, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6139/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventIntoMove(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v6; // x0
  int v7; // s0
  float y; // s4
  float z; // s5
  float v12; // s3
  TweenPosition_o *v13; // x0
  TweenPosition_o *v14; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9942 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6152/*"EventIntoMove2"*/, method);
    byte_40F9942 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v6 )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(v6, 0LL);
  if ( !parent
    || (v29 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL),
        y = v29.fields.y,
        z = v29.fields.z,
        v29.fields.y = v29.fields.x,
        v29.fields.z = y,
        v12 = z,
        (v13 = TweenPosition__Begin(this->fields.dragObject, 1.5, *(UnityEngine_Vector3_o *)&v29.fields.y, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  v14 = v13;
  v13->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v14->fields.eventReceiver, gameObject, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6152/*"EventIntoMove2"*/;
  v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6152/*"EventIntoMove2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v14->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall CombineListViewObject__EventIntoMove2(CombineListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_40F9943 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40F9943 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  CombineListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  CombineListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventIntoStart(
        CombineListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  CombineListViewObject_o *v16; // x21
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v19; // x0
  int v20; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9941 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, method);
    sub_B16FFC(&StringLiteral_6151/*"EventIntoMove"*/, v5);
    byte_40F9941 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CombineListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CombineListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dragObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___)) == 0LL
    || (v16 = (CombineListViewObject_o *)Component_srcLineSprite,
        zero = UnityEngine_Vector3__get_zero(0LL),
        CombineListViewObject__Init(v16, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v17),
        !*p_dragObject)
    || (transform = UnityEngine_GameObject__get_transform(*p_dragObject, 0LL),
        (v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__TransformPoint_34933176(v19, 1000.0, 0.0, 0.0, 0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6151/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall CombineListViewObject__EventMoveEnd(CombineListViewObject_o *this, const MethodInfo *method)
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
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventRetryMove(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v6; // x0
  int v7; // s0
  float y; // s4
  float z; // s5
  float v12; // s3
  TweenPosition_o *v13; // x0
  TweenPosition_o *v14; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9948 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6171/*"EventRetryMove2"*/, method);
    byte_40F9948 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v6 )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(v6, 0LL);
  if ( !parent
    || (v29 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL),
        y = v29.fields.y,
        z = v29.fields.z,
        v29.fields.y = v29.fields.x,
        v29.fields.z = y,
        v12 = z,
        (v13 = TweenPosition__Begin(this->fields.dragObject, 1.5, *(UnityEngine_Vector3_o *)&v29.fields.y, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  v14 = v13;
  v13->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v14->fields.eventReceiver, gameObject, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6171/*"EventRetryMove2"*/;
  v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6171/*"EventRetryMove2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v14->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall CombineListViewObject__EventRetryMove2(CombineListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_40F9949 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40F9949 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  CombineListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  CombineListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventRetryStart(
        CombineListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  CombineListViewObject_o *v16; // x21
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v19; // x0
  int v20; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9947 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, method);
    sub_B16FFC(&StringLiteral_6170/*"EventRetryMove"*/, v5);
    byte_40F9947 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CombineListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CombineListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dragObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___)) == 0LL
    || (v16 = (CombineListViewObject_o *)Component_srcLineSprite,
        zero = UnityEngine_Vector3__get_zero(0LL),
        CombineListViewObject__Init(v16, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v17),
        !*p_dragObject)
    || (transform = UnityEngine_GameObject__get_transform(*p_dragObject, 0LL),
        (v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__TransformPoint_34933176(v19, 0.0, 600.0, 0.0, 0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6170/*"EventRetryMove"*/,
    delay,
    0LL);
}


CombineListViewItem_o *__fastcall CombineListViewObject__GetItem(
        CombineListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40F993D & 1) == 0 )
  {
    sub_B16FFC(&CombineListViewItem_TypeInfo, method);
    byte_40F993D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&CombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (CombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == CombineListViewItem_TypeInfo )
    return (CombineListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Init(
        CombineListViewObject_o *this,
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
  UnityEngine_Transform_o *v16; // x0
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
  int32_t v31; // w8
  System_Action_o *klass; // x19

  if ( (byte_40F993F & 1) == 0 )
  {
    sub_B16FFC(&CombineListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40F993F = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v13 = *(&CombineListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (CombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == CombineListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(CombineListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v14 == 4,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v16, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v31 = 1;
  switch ( v14 )
  {
    case 0:
    case 1:
    case 2:
      goto LABEL_13;
    case 4:
      v31 = 3;
      v14 = 2;
LABEL_13:
      this->fields.dispMode = v14;
      this->fields.state = v31;
      goto LABEL_14;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      CombineListViewObject__EventIntoStart(this, delay, v24);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      CombineListViewObject__EventEnterStart(this, delay, v24);
      return;
    case 8:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      CombineListViewObject__EventRetryStart(this, delay, v24);
      return;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
        CombineListViewObject__SetupDisp(this, v24);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B16F98(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


void __fastcall CombineListViewObject__InitItem(CombineListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Init_24274200(
        CombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Init_24275440(
        CombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Init_24275520(
        CombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


void __fastcall CombineListViewObject__OnDestroy(CombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F993C & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F993C = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall CombineListViewObject__SetItem(
        CombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall CombineListViewObject__SetItem_24277352(
        CombineListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
}


void __fastcall CombineListViewObject__SetupDisp(CombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  CombineListViewItemDraw_o *v9; // x0

  if ( (byte_40F9940 & 1) == 0 )
  {
    sub_B16FFC(&CombineListViewItem_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9940 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&CombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (CombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == CombineListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
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
      sub_B170D4();
    CombineListViewItemDraw__SetItem(v9, (CombineListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Start(CombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    CombineListViewObject__Init(this, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall CombineListViewObject__ToString(CombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x20
  System_String_o *v6; // x21
  int32_t *v7; // x0
  __int64 v8; // x9
  float z; // w10
  System_String_o *v10; // x0
  __int64 v12; // [xsp+0h] [xbp-30h] BYREF
  float v13; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F994A & 1) == 0 )
  {
    sub_B16FFC(&CombineListViewItemDraw_DispMode_TypeInfo, method);
    sub_B16FFC(&StringLiteral_80/*" "*/, v3);
    byte_40F994A = 1;
  }
  v13 = 0.0;
  v12 = 0LL;
  v4 = j_il2cpp_value_box_0(CombineListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B170D4();
  v5 = v4;
  v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v7 = (int32_t *)j_il2cpp_object_unbox_0(v5);
  v8 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v7;
  v12 = v8;
  v13 = z;
  v10 = UnityEngine_Vector3__ToString(v14, (const MethodInfo *)&v12);
  return System_String__Concat_43746016(v6, (System_String_o *)StringLiteral_80/*" "*/, v10, 0LL);
}


void __fastcall CombineListViewObject__add_callbackFunc(
        CombineListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40F9939 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9939 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineListViewObject_o *)sub_B173C8(v8);
  CombineListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CombineListViewObject__remove_callbackFunc(
        CombineListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40F993A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F993A = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineListViewObject_o *)sub_B173C8(v8);
  CombineListViewObject__Awake(v11, v12);
}