void __fastcall EventRankingListViewObject___ctor(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40F60E9 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40F60E9 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventRankingListViewObject__Awake(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventRankingListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_40F60DB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewItemDraw___, method);
    byte_40F60DB = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (struct EventRankingListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewItemDraw___),
        this->fields.itemDraw = Component_srcLineSprite,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.itemDraw,
          (System_Int32_array **)Component_srcLineSprite,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (itemDraw = this->fields.itemDraw) == 0LL) )
  {
    sub_B170D4();
  }
  itemDraw->fields.listViewObject = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&itemDraw->fields.listViewObject,
    (System_Int32_array **)this,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventExitMove(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v10; // x0
  int v11; // s0
  UnityEngine_GameObject_o *v14; // x20
  ListViewObject_c *v15; // x0
  float v16; // s8
  float v17; // s10
  float v18; // s9
  TweenPosition_o *v19; // x0
  TweenPosition_o *v20; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40F60E5 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_6142/*"EventExitMove2"*/, v4);
    byte_40F60E5 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    EventRankingListViewObject__EventMoveEnd(this, v6);
  }
  else
  {
    v7 = this->fields.dragObject;
    if ( !v7 )
      goto LABEL_17;
    transform = UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( !transform )
      goto LABEL_17;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v10 )
      goto LABEL_17;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(v10, 0LL);
    if ( !parent )
      goto LABEL_17;
    v35 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v11, 0LL);
    v14 = this->fields.dragObject;
    v15 = ListViewObject_TypeInfo;
    v16 = v35.fields.x + 1000.0;
    v17 = v35.fields.y + 0.0;
    v18 = v35.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v15 = ListViewObject_TypeInfo;
    }
    v36.fields.x = v16;
    v36.fields.y = v17;
    v36.fields.z = v18;
    v19 = TweenPosition__Begin(v14, v15->static_fields->BASE_MOVE_TIME, v36, 0LL);
    if ( !v19 )
LABEL_17:
      sub_B170D4();
    v20 = v19;
    v19->fields.style = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
    sub_B16F98((BattleServantConfConponent_o *)&v20->fields.eventReceiver, gameObject, v22, v23, v24, v25, v26, v27);
    v28 = (System_Int32_array **)StringLiteral_6142/*"EventExitMove2"*/;
    v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6142/*"EventExitMove2"*/;
    sub_B16F98((BattleServantConfConponent_o *)&v20->fields.callWhenFinished, v28, v29, v30, v31, v32, v33, v34);
  }
}


void __fastcall EventRankingListViewObject__EventExitMove2(
        EventRankingListViewObject_o *this,
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

  if ( (byte_40F60E6 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40F60E6 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  EventRankingListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventExitStart(
        EventRankingListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F60E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6141/*"EventExitMove"*/, v6);
    byte_40F60E4 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventRankingListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRankingListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    EventRankingListViewObject__EventMoveEnd(this, v16);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B170D4();
  zero = UnityEngine_Vector3__get_zero(0LL);
  EventRankingListViewObject__Init(
    (EventRankingListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6141/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventIntoMove(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v7; // x0
  int v8; // s0
  UnityEngine_GameObject_o *v11; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v14; // x0
  float z; // s10
  TweenPosition_o *v16; // x0
  TweenPosition_o *v17; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40F60E2 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6152/*"EventIntoMove2"*/, v3);
    byte_40F60E2 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(v7, 0LL);
  if ( !parent )
    goto LABEL_12;
  v32 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = this->fields.dragObject;
  x = v32.fields.x;
  y = v32.fields.y;
  v14 = ListViewObject_TypeInfo;
  z = v32.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v14 = ListViewObject_TypeInfo;
  }
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v16 = TweenPosition__Begin(v11, v14->static_fields->BASE_MOVE_TIME, v33, 0LL);
  if ( !v16 )
LABEL_12:
    sub_B170D4();
  v17 = v16;
  v16->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.eventReceiver, gameObject, v19, v20, v21, v22, v23, v24);
  v25 = (System_Int32_array **)StringLiteral_6152/*"EventIntoMove2"*/;
  v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6152/*"EventIntoMove2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.callWhenFinished, v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall EventRankingListViewObject__EventIntoMove2(
        EventRankingListViewObject_o *this,
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

  if ( (byte_40F60E3 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40F60E3 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventRankingListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  EventRankingListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventIntoStart(
        EventRankingListViewObject_o *this,
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
  EventRankingListViewObject_o *v16; // x21
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v19; // x0
  int v20; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F60E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_B16FFC(&StringLiteral_6151/*"EventIntoMove"*/, v5);
    byte_40F60E1 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventRankingListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRankingListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___)) == 0LL
    || (v16 = (EventRankingListViewObject_o *)Component_srcLineSprite,
        zero = UnityEngine_Vector3__get_zero(0LL),
        EventRankingListViewObject__Init(v16, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v17),
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


void __fastcall EventRankingListViewObject__EventMoveEnd(EventRankingListViewObject_o *this, const MethodInfo *method)
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
  LOBYTE(p_callbackFunc[-1].fields.classBoardSkillObj) = 0;
  HIDWORD(p_callbackFunc[-1].fields.classBoardSkillObj) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


EventRankingListViewItem_o *__fastcall EventRankingListViewObject__GetItem(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40F60DD & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItem_TypeInfo, method);
    byte_40F60DD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventRankingListViewItem_TypeInfo )
    return (EventRankingListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init(
        EventRankingListViewObject_o *this,
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
  int32_t v31; // w9
  int32_t v32; // w8
  System_Action_o *klass; // x19

  if ( (byte_40F60DF & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40F60DF = 1;
  }
  linkItem = this->fields.linkItem;
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  if ( linkItem
    && (v13 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == EventRankingListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(EventRankingListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v14 == 3,
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
      this->fields.state = v31;
      this->fields.dispMode = v32;
      goto LABEL_17;
    case 4:
      *(_QWORD *)&this->fields.state = 2LL;
      EventRankingListViewObject__EventIntoStart(this, delay, v24);
      return;
    default:
LABEL_17:
      if ( !state || dispMode != this->fields.dispMode )
        EventRankingListViewObject__SetupDisp(this, v24);
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


void __fastcall EventRankingListViewObject__InitItem(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_17457060(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventRankingListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_17457964(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventRankingListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_17458496(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventRankingListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
}


void __fastcall EventRankingListViewObject__OnChangeAlphaAnim(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v6; // x11
  struct ListViewManager_o *v7; // x1
  EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_40F60E7 & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItem_TypeInfo, method);
    sub_B16FFC(&EventRankingListViewManager_TypeInfo, v4);
    byte_40F60E7 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager
      && (v6 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
    {
      if ( (EventRankingListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == EventRankingListViewManager_TypeInfo )
        v7 = this->fields.manager;
      else
        v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_B170D4();
    EventRankingListViewItemDraw__ChangeNextRewardIcon(itemDraw, (EventRankingListViewManager_o *)v7, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__SetInput(
        EventRankingListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20

  if ( (byte_40F60DE & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItem_TypeInfo, isInput);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F60DE = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) && !this->fields.itemDraw )
    sub_B170D4();
}


void __fastcall EventRankingListViewObject__SetItem(
        EventRankingListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventRankingListViewObject__SetItem_17461152(
        EventRankingListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall EventRankingListViewObject__SetupDisp(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v6; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct ListViewManager_o *manager; // x8
  __int64 v16; // x11
  struct ListViewManager_o *v17; // x1
  const MethodInfo *v18; // x3
  EventRankingListViewItemDraw_o *v19; // x0

  if ( (byte_40F60E0 & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItem_TypeInfo, method);
    sub_B16FFC(&EventRankingListViewManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F60E0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventRankingListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v7 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    manager = this->fields.manager;
    if ( manager
      && (v16 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
    {
      if ( (EventRankingListViewManager_c *)manager->klass->_2.typeHierarchy[v16 - 1] == EventRankingListViewManager_TypeInfo )
        v17 = this->fields.manager;
      else
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    this->fields.manager = v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.manager,
      (System_Int32_array **)v17,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v19 = this->fields.itemDraw;
    if ( !v19 )
      sub_B170D4();
    EventRankingListViewItemDraw__SetItem(v19, (EventRankingListViewItem_o *)linkItem, this->fields.dispMode, v18);
  }
}


System_String_o *__fastcall EventRankingListViewObject__ToString(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_40F60E8 & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItemDraw_DispMode_TypeInfo, method);
    sub_B16FFC(&StringLiteral_80/*" "*/, v3);
    byte_40F60E8 = 1;
  }
  v13 = 0.0;
  v12 = 0LL;
  v4 = j_il2cpp_value_box_0(EventRankingListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
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


void __fastcall EventRankingListViewObject__Update(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *manager; // x20
  const MethodInfo *v6; // x4
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  struct ListViewManager_o *v10; // x8
  __int64 v11; // x11
  struct ListViewManager_o *v12; // x3
  EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_40F60DC & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItem_TypeInfo, method);
    sub_B16FFC(&EventRankingListViewManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F60DC = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) )
    {
      linkItem = this->fields.linkItem;
      if ( linkItem
        && (v8 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
      {
        if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == EventRankingListViewItem_TypeInfo )
          v9 = this->fields.linkItem;
        else
          v9 = 0LL;
      }
      else
      {
        v9 = 0LL;
      }
      v10 = this->fields.manager;
      if ( v10
        && (v11 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
      {
        if ( (EventRankingListViewManager_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EventRankingListViewManager_TypeInfo )
          v12 = this->fields.manager;
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_B170D4();
      EventRankingListViewItemDraw__UpdateItem(
        itemDraw,
        (EventRankingListViewItem_o *)v9,
        this->fields.dispMode,
        (EventRankingListViewManager_o *)v12,
        v6);
    }
  }
}


void __fastcall EventRankingListViewObject__add_callbackFunc(
        EventRankingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40F60D9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F60D9 = 1;
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
  v11 = (EventRankingListViewObject_o *)sub_B173C8(v8);
  EventRankingListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EventRankingListViewObject__remove_callbackFunc(
        EventRankingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40F60DA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F60DA = 1;
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
  v11 = (EventRankingListViewObject_o *)sub_B173C8(v8);
  EventRankingListViewObject__Awake(v11, v12);
}