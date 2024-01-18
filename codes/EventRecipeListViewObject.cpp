void __fastcall EventRecipeListViewObject___ctor(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_41887BF & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_41887BF = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventRecipeListViewObject__Awake(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventRecipeListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41887B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewItemDraw___, method);
    byte_41887B7 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct EventRecipeListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      dispObject,
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall EventRecipeListViewObject__CallOnMoveEnd(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onMoveEnd; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (BattleServantConfConponent_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_B2C2F8(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall EventRecipeListViewObject__CreateDragObject(
        EventRecipeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_41887BA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, method);
    byte_41887BA = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
  }
  EventRecipeListViewObject__Init_26695196((EventRecipeListViewObject_o *)DragObject, 2, 0LL, 0.0, v6);
  return v5;
}


void __fastcall EventRecipeListViewObject__EventMove(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v8; // x0
  float z; // s10
  TweenPosition_o *v10; // x0
  __int64 v11; // x1
  TweenPosition_o *v12; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_41887BE & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6178/*"EventMoveFinish"*/, v4);
    byte_41887BE = 1;
  }
  TargetPosition = EventRecipeListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  v8 = ListViewObject_TypeInfo;
  z = TargetPosition.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v8 = ListViewObject_TypeInfo;
  }
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v10 = TweenPosition__Begin(dragObject, v8->static_fields->BASE_MOVE_TIME, v28, 0LL);
  if ( !v10 )
    sub_B2C434(0LL, v11);
  v12 = v10;
  v10->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->fields.eventReceiver, gameObject, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_6178/*"EventMoveFinish"*/;
  v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6178/*"EventMoveFinish"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewObject__EventStart(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *v8; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v20; // x2
  int v21; // s0

  if ( (byte_41887BD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, *(_QWORD *)&initMode);
    sub_B2C35C(&StringLiteral_6176/*"EventMove"*/, v7);
    byte_41887BD = 1;
  }
  this->fields.isBusy = 1;
  EventRecipeListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRecipeListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___)) == 0LL
    || (EventRecipeListViewObject__Init_26695196((EventRecipeListViewObject_o *)dragObject, 2, 0LL, 0.0, v18),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = EventRecipeListViewObject__GetStartPosition(this, initMode, v20),
        !transform) )
  {
    sub_B2C434(dragObject, v16);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6176/*"EventMove"*/,
    delay,
    0LL);
}


EventRecipeListViewItem_o *__fastcall EventRecipeListViewObject__GetItem(
        EventRecipeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_41887B9 & 1) == 0 )
  {
    sub_B2C35C(&EventRecipeListViewItem_TypeInfo, method);
    byte_41887B9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventRecipeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventRecipeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventRecipeListViewItem_TypeInfo )
    return (EventRecipeListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventRecipeListViewObject__GetStartPosition(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v5);
  if ( initMode == 4 )
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__TransformPoint_35438660(transform, 1000.0, 0.0, 0.0, 0LL);
  else
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position(transform, 0LL);
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


int32_t __fastcall EventRecipeListViewObject__GetState(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 7 )
    return 0;
  else
    return dword_31A30A0[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventRecipeListViewObject__GetTargetPosition(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x19
  int v6; // s0
  float v9; // s2
  float v10; // s0
  float v11; // s0
  float v12; // s1
  float v13; // s1
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( initMode == 5 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( dragObject )
      {
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( dragObject )
        {
          *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position(
                                            (UnityEngine_Transform_o *)dragObject,
                                            0LL);
          if ( parent )
          {
            *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__InverseTransformPoint(
                                                    parent,
                                                    *(UnityEngine_Vector3_o *)&v6,
                                                    0LL);
            v11 = v10 + 0.0;
            v13 = v12 + 1000.0;
LABEL_13:
            v9 = v9 + 0.0;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_15:
    sub_B2C434(dragObject, *(_QWORD *)&initMode);
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_15;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_15;
  v15 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v15 )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                     v15,
                                     *(UnityEngine_Vector3_o *)&v16,
                                     0LL);
  if ( initMode == 6 )
  {
    v13 = v13 + 0.0;
    v11 = v11 + 1000.0;
    goto LABEL_13;
  }
LABEL_16:
  result.fields.z = v9;
  result.fields.y = v13;
  result.fields.x = v11;
  return result;
}


void __fastcall EventRecipeListViewObject__Init(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  EventRecipeListViewObject__Init_26695196(this, initMode, 0LL, 0.0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewObject__Init_26695196(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w23
  int32_t state; // w24
  ListViewItem_c *klass; // x9
  __int64 v13; // x10
  int32_t v14; // w8
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  int32_t v25; // w9
  int32_t v26; // w10
  int v27; // w8

  if ( (byte_41887BB & 1) == 0 )
  {
    sub_B2C35C(&EventRecipeListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_41887BB = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        v13 = *(&EventRecipeListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v13)
    || (v14 = initMode, (EventRecipeListViewItem_c *)klass->_2.typeHierarchy[v13 - 1] != EventRecipeListViewItem_TypeInfo) )
  {
    v14 = 0;
    this->fields.initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(EventRecipeListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = (const MethodInfo *)(unsigned int)this->fields.initMode;
  if ( (_DWORD)v24 == 3 )
  {
    v27 = 3;
    this->fields.dispMode = 3;
    v26 = 3;
    goto LABEL_18;
  }
  v25 = this->fields.initMode;
  if ( (_DWORD)v24 == 2 )
    goto LABEL_13;
  if ( (_DWORD)v24 == 1 )
  {
    v25 = 1;
LABEL_13:
    this->fields.dispMode = v25;
LABEL_14:
    v26 = 1;
    v27 = v25;
    goto LABEL_18;
  }
  this->fields.dispMode = 0;
  v25 = 0;
  v27 = 0;
  v26 = 2;
  switch ( (int)v24 )
  {
    case 0:
    case 7:
      goto LABEL_14;
    case 4:
    case 6:
      break;
    default:
      v27 = 0;
      v26 = 0;
      break;
  }
LABEL_18:
  this->fields.state = v26;
  switch ( initMode )
  {
    case 3:
    case 7:
      goto LABEL_19;
    case 4:
    case 6:
      EventRecipeListViewObject__EventStart(this, (int32_t)v24, delay, v23);
      break;
    default:
      if ( !state || dispMode != v27 )
LABEL_19:
        EventRecipeListViewObject__SetupDisp(this, v24);
      EventRecipeListViewObject__CallOnMoveEnd(this, v24);
      break;
  }
}


void __fastcall EventRecipeListViewObject__OnDestroy(EventRecipeListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_41887B8 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41887B8 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B2C2F8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall EventRecipeListViewObject__SetItem(
        EventRecipeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventRecipeListViewObject__SetupDisp(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  EventRecipeListViewItemDraw_o *v10; // x0

  if ( (byte_41887BC & 1) == 0 )
  {
    sub_B2C35C(&EventRecipeListViewItem_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41887BC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&EventRecipeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (EventRecipeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == EventRecipeListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
    EventRecipeListViewItemDraw__SetItem(v10, (EventRecipeListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall EventRecipeListViewObject__add_onMoveEnd(
        EventRecipeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRecipeListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_41887B5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41887B5 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRecipeListViewObject_o *)sub_B2C728(v8);
  EventRecipeListViewObject__remove_onMoveEnd(v11, v12, v13);
}


int32_t __fastcall EventRecipeListViewObject__get_DispMode(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.dispMode;
}


void __fastcall EventRecipeListViewObject__remove_onMoveEnd(
        EventRecipeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRecipeListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_41887B6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41887B6 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRecipeListViewObject_o *)sub_B2C728(v8);
  EventRecipeListViewObject__get_DispMode(v11, v12);
}