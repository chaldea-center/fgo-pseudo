void __fastcall ShopTopListViewObject___ctor(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4186D1E & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4186D1E = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ShopTopListViewObject__Awake(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ShopTopListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4186D14 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewItemDraw___, method);
    byte_4186D14 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct ShopTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  dispObject,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewItemDraw___);
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


void __fastcall ShopTopListViewObject__CallOnMoveEnd(ShopTopListViewObject_o *this, const MethodInfo *method)
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


UnityEngine_GameObject_o *__fastcall ShopTopListViewObject__CreateDragObject(
        ShopTopListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4186D18 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___, method);
    byte_4186D18 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
  }
  ShopTopListViewObject__Init((ShopTopListViewObject_o *)DragObject, 2, 0LL, 0.0, v6);
  return v5;
}


void __fastcall ShopTopListViewObject__EventMove(ShopTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4186D1C & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6178/*"EventMoveFinish"*/, v4);
    byte_4186D1C = 1;
  }
  TargetPosition = ShopTopListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
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


void __fastcall ShopTopListViewObject__EventMoveFinish(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  int32_t initMode; // w8
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4186D1D & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    byte_4186D1D = 1;
  }
  initMode = this->fields.initMode;
  if ( initMode == 7 || initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
    this->fields.dispMode = 2;
    ShopTopListViewObject__SetupDisp(this, v4);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopTopListViewObject__CallOnMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewObject__EventStart(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  struct UnityEngine_GameObject_o *v9; // x0
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

  if ( (byte_4186D1B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___, *(_QWORD *)&initMode);
    sub_B2C35C(&StringLiteral_6176/*"EventMove"*/, v7);
    byte_4186D1B = 1;
  }
  this->fields.isBusy = 1;
  ShopTopListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  if ( initMode != 8 )
  {
    p_dragObject = &this->fields.dragObject;
    v9 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopTopListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                              this,
                                              this->klass->vtable._9_SetInput.methodPtr);
    this->fields.dragObject = v9;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.dragObject,
      (System_Int32_array **)v9,
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
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___)) == 0LL
      || (ShopTopListViewObject__Init((ShopTopListViewObject_o *)dragObject, 2, 0LL, 0.0, v18),
          (dragObject = *p_dragObject) == 0LL)
      || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
          *(UnityEngine_Vector3_o *)&v21 = ShopTopListViewObject__GetStartPosition(this, initMode, v20),
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
}


int32_t __fastcall ShopTopListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 5 )
    return 0;
  else
    return initMode + 2;
}


ShopTopListViewItem_o *__fastcall ShopTopListViewObject__GetItem(
        ShopTopListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_4186D16 & 1) == 0 )
  {
    sub_B2C35C(&ShopTopListViewItem_TypeInfo, method);
    byte_4186D16 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ShopTopListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ShopTopListViewItem_TypeInfo )
    return (ShopTopListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopTopListViewObject__GetStartPosition(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int v6; // s0
  int v7; // s1
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( initMode == 4 )
  {
    if ( transform )
    {
      v6 = 1140457472;
      v7 = 0;
      goto LABEL_7;
    }
LABEL_9:
    sub_B2C434(transform, v5);
  }
  if ( !transform )
    goto LABEL_9;
  if ( initMode != 7 )
  {
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(transform, 0LL);
    goto ShopTopListViewObject$$GetStartPosition;
  }
  v7 = 1145569280;
  v6 = 0;
LABEL_7:
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__TransformPoint_35438660(
                                    transform,
                                    *(float *)&v6,
                                    *(float *)&v7,
                                    0.0,
                                    0LL);
ShopTopListViewObject$$GetStartPosition:
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


int32_t __fastcall ShopTopListViewObject__GetState(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 8 )
    return 0;
  else
    return dword_31A1220[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopTopListViewObject__GetTargetPosition(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v7; // s0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL)) == 0LL
    || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL),
        !parent) )
  {
    sub_B2C434(dragObject, *(_QWORD *)&initMode);
  }
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__InverseTransformPoint(
                                     parent,
                                     *(UnityEngine_Vector3_o *)&v7,
                                     0LL);
  if ( initMode == 5 )
  {
    v10 = v10 + 0.0;
    v12 = v12 + 0.0;
    v11 = v11 + 800.0;
  }
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewObject__Init(
        ShopTopListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  int32_t v7; // w21
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t DispModeOnInit; // w0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  int32_t v24; // w8

  v7 = initMode;
  if ( (byte_4186D19 & 1) == 0 )
  {
    sub_B2C35C(&ShopTopListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4186D19 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  this->fields.initMode = v7;
  if ( !linkItem
    || (v12 = *(&ShopTopListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != ShopTopListViewItem_TypeInfo )
  {
    v7 = 0;
    this->fields.initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(ShopTopListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  DispModeOnInit = ShopTopListViewItemDraw__GetDispModeOnInit(this->fields.initMode, 0LL);
  v23 = (const MethodInfo *)(unsigned int)this->fields.initMode;
  this->fields.dispMode = DispModeOnInit;
  switch ( (int)v23 )
  {
    case 0:
    case 1:
    case 2:
    case 8:
      v24 = 1;
      goto LABEL_11;
    case 3:
      goto LABEL_17;
    case 4:
    case 5:
    case 7:
      this->fields.state = 2;
      goto LABEL_15;
    case 6:
      v23 = 0LL;
LABEL_17:
      this->fields.state = (int)v23;
      goto LABEL_18;
    default:
      v24 = 0;
LABEL_11:
      this->fields.state = v24;
      if ( (unsigned int)v23 <= 8 && ((1 << (char)v23) & 0x1B0) != 0 )
      {
LABEL_15:
        ShopTopListViewObject__EventStart(this, (int32_t)v23, delay, v22);
      }
      else
      {
LABEL_18:
        if ( !state || dispMode != DispModeOnInit )
          ShopTopListViewObject__SetupDisp(this, v23);
        ShopTopListViewObject__CallOnMoveEnd(this, v23);
      }
      return;
  }
}


void __fastcall ShopTopListViewObject__OnDestroy(ShopTopListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4186D15 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186D15 = 1;
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


void __fastcall ShopTopListViewObject__OnMoveEnd(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopTopListViewObject__CallOnMoveEnd(this, method);
}


void __fastcall ShopTopListViewObject__ResetShopListNotice(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  ShopTopListViewItemDraw_o *itemDraw; // x19
  ShopTopListViewItem_o *Item; // x0
  __int64 v4; // x1

  itemDraw = this->fields.itemDraw;
  Item = ShopTopListViewObject__GetItem(this, method);
  if ( !itemDraw )
    sub_B2C434(Item, v4);
  ShopTopListViewItemDraw__ResetShopListNotice(itemDraw, Item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewObject__SetInput(ShopTopListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  ShopTopListViewItemDraw_o *v8; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 v10; // x11
  struct ListViewItem_o *v11; // x1

  if ( (byte_4186D17 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isInput);
    sub_B2C35C(&ShopTopListViewItem_TypeInfo, v5);
    byte_4186D17 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_B2C434(0LL, v7);
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v10 = *(&ShopTopListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
    {
      if ( (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == ShopTopListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    ShopTopListViewItemDraw__SetInput(v8, (ShopTopListViewItem_o *)v11, 0LL);
  }
}


void __fastcall ShopTopListViewObject__SetItem(
        ShopTopListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopTopListViewObject__SetupDisp(ShopTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v6; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  ShopTopListViewItemDraw_o *v10; // x0
  struct ListViewManager_o *manager; // x3
  __int64 v12; // x9

  if ( (byte_4186D1A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&ShopTopListViewItem_TypeInfo, v3);
    sub_B2C35C(&ShopTopListViewManager_TypeInfo, v4);
    byte_4186D1A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&ShopTopListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (ShopTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ShopTopListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( v10 )
    {
      manager = this->fields.manager;
      if ( !manager
        || (v12 = *(&ShopTopListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v12)
        && (ShopTopListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == ShopTopListViewManager_TypeInfo )
      {
        ShopTopListViewItemDraw__SetItem(
          v10,
          (ShopTopListViewItem_o *)linkItem,
          this->fields.dispMode,
          (ShopTopListViewManager_o *)manager,
          0LL);
        return;
      }
      v10 = (ShopTopListViewItemDraw_o *)sub_B2C728(this->fields.manager);
    }
    sub_B2C434(v10, v9);
  }
}