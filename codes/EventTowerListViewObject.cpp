void __fastcall EventTowerListViewObject___ctor(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_438A696 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438A696 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventTowerListViewObject__Awake(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventTowerListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438A689 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
    byte_438A689 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct EventTowerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     dispObject,
                                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewItemDraw___);
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
void __fastcall EventTowerListViewObject__EventExitMove(EventTowerListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_438A693 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6308/*"EventExitMove2"*/);
    byte_438A693 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    EventTowerListViewObject__EventMoveEnd(this, v4);
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


void __fastcall EventTowerListViewObject__EventExitMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_438A694 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    byte_438A694 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  EventTowerListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__EventExitStart(
        EventTowerListViewObject_o *this,
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

  if ( (byte_438A692 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6307/*"EventExitMove"*/);
    byte_438A692 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventTowerListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B7769C(dragObject, v12);
  zero = UnityEngine_Vector3__get_zero(0LL);
  EventTowerListViewObject__Init(
    (EventTowerListViewObject_o *)Component_srcLineSprite,
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
void __fastcall EventTowerListViewObject__EventIntoMove(EventTowerListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_438A690 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    sub_B775C4(&StringLiteral_6318/*"EventIntoMove2"*/);
    byte_438A690 = 1;
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


void __fastcall EventTowerListViewObject__EventIntoMove2(EventTowerListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_438A691 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    byte_438A691 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventTowerListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  EventTowerListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__EventIntoStart(
        EventTowerListViewObject_o *this,
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
  EventTowerListViewObject_o *v15; // x21
  const MethodInfo *v16; // x3
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438A68F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_B775C4(&StringLiteral_6317/*"EventIntoMove"*/);
    byte_438A68F = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventTowerListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventTowerListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
  if ( !dragObject
    || (v15 = (EventTowerListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        EventTowerListViewObject__Init(v15, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16),
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


void __fastcall EventTowerListViewObject__EventMoveEnd(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_CallbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *CallbackFunc; // t1

  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = (BattleServantConfConponent_o *)&this->fields.CallbackFunc;
  v9 = CallbackFunc;
  LOBYTE(p_CallbackFunc[-1].fields.classBoardSkillObj) = 0;
  HIDWORD(p_CallbackFunc[-1].fields.classBoardSkillObj) = 1;
  if ( CallbackFunc )
  {
    p_CallbackFunc->klass = 0LL;
    sub_B77560(p_CallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


EventTowerListViewItem_o *__fastcall EventTowerListViewObject__GetItem(
        EventTowerListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438A68B & 1) == 0 )
  {
    sub_B775C4(&EventTowerListViewItem_TypeInfo);
    byte_438A68B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventTowerListViewItem_TypeInfo )
    return (EventTowerListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventTowerListViewObject__Init(
        EventTowerListViewObject_o *this,
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
  BattleServantConfConponent_o *p_CallbackFunc; // x21
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

  if ( (byte_438A68D & 1) == 0 )
  {
    sub_B775C4(&EventTowerListViewItem_TypeInfo);
    byte_438A68D = 1;
  }
  linkItem = this->fields.linkItem;
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  if ( linkItem
    && (v13 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == EventTowerListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(EventTowerListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
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
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (BattleServantConfConponent_o *)&this->fields.CallbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
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
      this->fields.state = v31;
      this->fields.dispMode = v14;
      goto LABEL_14;
    case 4:
      *(_QWORD *)&this->fields.state = 2LL;
      EventTowerListViewObject__EventIntoStart(this, delay, v24);
      return;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
        EventTowerListViewObject__SetupDisp(this, v24);
      klass = (System_Action_o *)p_CallbackFunc->klass;
      if ( p_CallbackFunc->klass )
      {
        p_CallbackFunc->klass = 0LL;
        sub_B77560(p_CallbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


void __fastcall EventTowerListViewObject__InitItem(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_24026864(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventTowerListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_24027768(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventTowerListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewObject__Init_24028300(
        EventTowerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventTowerListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
}


void __fastcall EventTowerListViewObject__OnClickSelect(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_438A695 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10136/*"OnClickListView"*/);
    byte_438A695 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B7769C(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10136/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall EventTowerListViewObject__SetInput(
        EventTowerListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_438A68C & 1) == 0 )
  {
    sub_B775C4(&EventTowerListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A68C = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v6 && !this->fields.itemDraw )
    sub_B7769C(v6, v7);
}


void __fastcall EventTowerListViewObject__SetItem(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventTowerListViewObject__SetItem_24030344(
        EventTowerListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
}


void __fastcall EventTowerListViewObject__SetupDisp(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct ListViewManager_o *manager; // x8
  __int64 v14; // x11
  struct ListViewManager_o *v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  EventTowerListViewItemDraw_o *v18; // x0

  if ( (byte_438A68E & 1) == 0 )
  {
    sub_B775C4(&EventTowerListViewItem_TypeInfo);
    sub_B775C4(&EventTowerListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A68E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (EventTowerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventTowerListViewItem_TypeInfo )
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
    manager = this->fields.manager;
    if ( manager
      && (v14 = *(&EventTowerListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
    {
      if ( (EventTowerListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] == EventTowerListViewManager_TypeInfo )
        v15 = this->fields.manager;
      else
        v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
    }
    this->fields.manager = v15;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.manager,
      (System_Int32_array **)v15,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v18 = this->fields.itemDraw;
    if ( !v18 )
      sub_B7769C(0LL, v16);
    EventTowerListViewItemDraw__SetItem(v18, (EventTowerListViewItem_o *)linkItem, this->fields.dispMode, v17);
  }
}


void __fastcall EventTowerListViewObject__Update(EventTowerListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x19

  if ( (byte_438A68A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A68A = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__op_Equality(manager, 0LL, 0LL);
  }
}


void __fastcall EventTowerListViewObject__add_CallbackFunc(
        EventTowerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438A687 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438A687 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewObject_o *)sub_B77990(v8);
  EventTowerListViewObject__remove_CallbackFunc(v11, v12, v13);
}


void __fastcall EventTowerListViewObject__remove_CallbackFunc(
        EventTowerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438A688 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438A688 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewObject_o *)sub_B77990(v8);
  EventTowerListViewObject__Awake(v11, v12);
}