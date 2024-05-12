void __fastcall EventPointItemListViewObject___ctor(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_438BCD1 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438BCD1 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventPointItemListViewObject__Awake(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventPointItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438BCC4 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewItemDraw___);
    byte_438BCC4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct EventPointItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dispObject,
                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B77560(
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
UnityEngine_GameObject_o *__fastcall EventPointItemListViewObject__CreateDragObject(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  EventPointItemListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438BCC7 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    byte_438BCC7 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___)) == 0LL) )
  {
    sub_B7769C(DragObject, v4);
  }
  v6 = (EventPointItemListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  EventPointItemListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__EventExitMove(
        EventPointItemListViewObject_o *this,
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

  if ( (byte_438BCCE & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6308/*"EventExitMove2"*/);
    byte_438BCCE = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    EventPointItemListViewObject__EventMoveEnd(this, v4);
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
    v12 = v30.fields.x + 1000.0;
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
      sub_B7769C(transform, v4);
    v15 = transform;
    LODWORD(transform[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B77560((BattleServantConfConponent_o *)&v15[3], gameObject, v17, v18, v19, v20, v21, v22);
    v23 = (System_Int32_array **)StringLiteral_6308/*"EventExitMove2"*/;
    v15[3].monitor = (void *)StringLiteral_6308/*"EventExitMove2"*/;
    sub_B77560((BattleServantConfConponent_o *)&v15[3].monitor, v23, v24, v25, v26, v27, v28, v29);
  }
}


void __fastcall EventPointItemListViewObject__EventExitMove2(
        EventPointItemListViewObject_o *this,
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

  if ( (byte_438BCCF & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    byte_438BCCF = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  EventPointItemListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__EventExitStart(
        EventPointItemListViewObject_o *this,
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

  if ( (byte_438BCCD & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6307/*"EventExitMove"*/);
    byte_438BCCD = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventPointItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventPointItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v5;
  sub_B77560(
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
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventPointItemListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B7769C(dragObject, v12);
  zero = UnityEngine_Vector3__get_zero(0LL);
  EventPointItemListViewObject__Init(
    (EventPointItemListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6307/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__EventIntoMove(
        EventPointItemListViewObject_o *this,
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

  if ( (byte_438BCCB & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    sub_B775C4(&StringLiteral_6318/*"EventIntoMove2"*/);
    byte_438BCCB = 1;
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
    sub_B7769C(dragObject, method);
  v13 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B77560((BattleServantConfConponent_o *)&v13[3], gameObject, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_6318/*"EventIntoMove2"*/;
  v13[3].monitor = (void *)StringLiteral_6318/*"EventIntoMove2"*/;
  sub_B77560((BattleServantConfConponent_o *)&v13[3].monitor, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall EventPointItemListViewObject__EventIntoMove2(
        EventPointItemListViewObject_o *this,
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

  if ( (byte_438BCCC & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    byte_438BCCC = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventPointItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  EventPointItemListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__EventIntoStart(
        EventPointItemListViewObject_o *this,
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
  EventPointItemListViewObject_o *v15; // x21
  const MethodInfo *v16; // x3
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438BCCA & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_B775C4(&StringLiteral_6317/*"EventIntoMove"*/);
    byte_438BCCA = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventPointItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventPointItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v5;
  sub_B77560(
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
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
  if ( !dragObject
    || (v15 = (EventPointItemListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        EventPointItemListViewObject__Init(v15, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__TransformPoint_36433912(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B7769C(dragObject, v13);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6317/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall EventPointItemListViewObject__EventMoveEnd(
        EventPointItemListViewObject_o *this,
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
    sub_B77560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


EventPointItemListViewItem_o *__fastcall EventPointItemListViewObject__GetItem(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438BCC6 & 1) == 0 )
  {
    sub_B775C4(&EventPointItemListViewItem_TypeInfo);
    byte_438BCC6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventPointItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventPointItemListViewItem_TypeInfo )
    return (EventPointItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventPointItemListViewObject__Init(
        EventPointItemListViewObject_o *this,
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
  int32_t v31; // w8
  System_Action_o *klass; // x19

  if ( (byte_438BCC8 & 1) == 0 )
  {
    sub_B775C4(&EventPointItemListViewItem_TypeInfo);
    byte_438BCC8 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v13 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (EventPointItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == EventPointItemListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(EventPointItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v14 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B77560(
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
    case 2:
      goto LABEL_13;
    case 1:
    case 3:
      v31 = v14;
LABEL_13:
      this->fields.dispMode = v14;
      this->fields.state = v31;
      goto LABEL_14;
    case 4:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      EventPointItemListViewObject__EventIntoStart(this, delay, v24);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      EventPointItemListViewObject__EventExitStart(this, delay, v24);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        EventPointItemListViewObject__SetupDisp(this, v24);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B77560(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_26482300(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventPointItemListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_26483824(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventPointItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewObject__Init_26483904(
        EventPointItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventPointItemListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


void __fastcall EventPointItemListViewObject__OnDestroy(EventPointItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_438BCC5 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BCC5 = 1;
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
    sub_B77560(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall EventPointItemListViewObject__SetItem(
        EventPointItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventPointItemListViewObject__SetupDisp(EventPointItemListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  EventPointItemListViewItemDraw_o *v8; // x0

  if ( (byte_438BCC9 & 1) == 0 )
  {
    sub_B775C4(&EventPointItemListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BCC9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (EventPointItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventPointItemListViewItem_TypeInfo )
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
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_B7769C(0LL, v7);
    EventPointItemListViewItemDraw__SetItem(v8, (EventPointItemListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
  }
}


System_String_o *__fastcall EventPointItemListViewObject__ToString(
        EventPointItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  System_String_o *v7; // x21
  int32_t *v8; // x0
  __int64 v9; // x9
  float z; // w10
  System_String_o *v11; // x0
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF
  float v14; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438BCD0 & 1) == 0 )
  {
    sub_B775C4(&EventPointItemListViewItemDraw_DispMode_TypeInfo);
    sub_B775C4(&StringLiteral_82/*" "*/);
    byte_438BCD0 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(EventPointItemListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode, v2);
  if ( !v4 )
    sub_B7769C(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v8 = (int32_t *)j_il2cpp_object_unbox_0(v6);
  v9 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v8;
  v13 = v9;
  v14 = z;
  v11 = UnityEngine_Vector3__ToString(v15, (const MethodInfo *)&v13);
  return System_String__Concat_44904220(v7, (System_String_o *)StringLiteral_82/*" "*/, v11, 0LL);
}


void __fastcall EventPointItemListViewObject__add_callbackFunc(
        EventPointItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438BCC2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438BCC2 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventPointItemListViewObject_o *)sub_B77990(v8);
  EventPointItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EventPointItemListViewObject__remove_callbackFunc(
        EventPointItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438BCC3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438BCC3 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventPointItemListViewObject_o *)sub_B77990(v8);
  EventPointItemListViewObject__Awake(v11, v12);
}