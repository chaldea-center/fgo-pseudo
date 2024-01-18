void __fastcall ShopBuyItemListViewObject___ctor(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_418D4BA & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_418D4BA = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewObject__Awake(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ShopBuyItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418D4A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___, method);
    byte_418D4A6 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct ShopBuyItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      dispObject,
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___);
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


void __fastcall ShopBuyItemListViewObject__CallOnMoveEnd(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
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


UnityEngine_GameObject_o *__fastcall ShopBuyItemListViewObject__CreateDragObject(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_418D4A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    byte_418D4A9 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
  }
  ShopBuyItemListViewObject__Init_34852000((ShopBuyItemListViewObject_o *)DragObject, 2, 0LL, 0.0, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__EndShowItemDetailDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_418D4B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_418D4B7 = 1;
  }
  v4 = Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B2C364(Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__EndShowServantEquipStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418D4B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418D4B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__EndShowServantStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418D4B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418D4B5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall ShopBuyItemListViewObject__EventMove(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_418D4AD & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6178/*"EventMoveFinish"*/, v4);
    byte_418D4AD = 1;
  }
  TargetPosition = ShopBuyItemListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
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


void __fastcall ShopBuyItemListViewObject__EventMoveFinish(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_418D4AE & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    byte_418D4AE = 1;
  }
  if ( this->fields.initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
    this->fields.dispMode = 2;
    ShopBuyItemListViewObject__SetupDisp(this, v3);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__EventStart(
        ShopBuyItemListViewObject_o *this,
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

  if ( (byte_418D4AC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, *(_QWORD *)&initMode);
    sub_B2C35C(&StringLiteral_6176/*"EventMove"*/, v7);
    byte_418D4AC = 1;
  }
  this->fields.isBusy = 1;
  ShopBuyItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopBuyItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL
    || (ShopBuyItemListViewObject__Init_34852000((ShopBuyItemListViewObject_o *)dragObject, 2, 0LL, 0.0, v18),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = ShopBuyItemListViewObject__GetStartPosition(this, initMode, v20),
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


int32_t __fastcall ShopBuyItemListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 5 )
    return 0;
  else
    return dword_31C3610[initMode];
}


ShopBuyItemListViewItem_o *__fastcall ShopBuyItemListViewObject__GetItem(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_418D4A8 & 1) == 0 )
  {
    sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_418D4A8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ShopBuyItemListViewItem_TypeInfo )
    return (ShopBuyItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopBuyItemListViewObject__GetStartPosition(
        ShopBuyItemListViewObject_o *this,
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


int32_t __fastcall ShopBuyItemListViewObject__GetState(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 7 )
    return 0;
  else
    return dword_31A30A0[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopBuyItemListViewObject__GetTargetPosition(
        ShopBuyItemListViewObject_o *this,
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


void __fastcall ShopBuyItemListViewObject__Init(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ShopBuyItemListViewObject__Init_34852000(this, initMode, 0LL, 0.0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__Init_34852000(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w23
  int32_t state; // w24
  ListViewItem_c *klass; // x9
  __int64 v14; // x10
  int32_t v15; // w8
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  int32_t v25; // w21
  const MethodInfo *v26; // x1
  int32_t v27; // w9
  int32_t v28; // w8

  if ( (byte_418D4AA & 1) == 0 )
  {
    sub_B2C35C(&ShopBuyItemListViewItemDraw_TypeInfo, *(_QWORD *)&initMode);
    sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, v9);
    byte_418D4AA = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        v14 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v14)
    || (v15 = initMode, (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[v14 - 1] != ShopBuyItemListViewItem_TypeInfo) )
  {
    v15 = 0;
    this->fields.initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v15 != 0, 0LL);
  ((void (__fastcall *)(ShopBuyItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = this->fields.initMode;
  if ( (BYTE3(ShopBuyItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
  }
  v26 = (const MethodInfo *)this->fields.initMode;
  v27 = 0;
  if ( (unsigned int)(v25 - 1) >= 3 )
    v28 = 0;
  else
    v28 = v25;
  this->fields.dispMode = v28;
  if ( (unsigned int)v26 <= 7 )
    v27 = dword_31A30A0[(_QWORD)v26];
  this->fields.state = v27;
  switch ( initMode )
  {
    case 4:
      goto LABEL_20;
    case 7:
      goto LABEL_23;
    case 6:
LABEL_20:
      ShopBuyItemListViewObject__EventStart(this, (int32_t)v26, delay, v24);
      return;
  }
  if ( !state || dispMode != v28 )
LABEL_23:
    ShopBuyItemListViewObject__SetupDisp(this, v26);
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v26);
}


void __fastcall ShopBuyItemListViewObject__OnDestroy(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_418D4A7 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418D4A7 = 1;
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


void __fastcall ShopBuyItemListViewObject__OnInformationButton(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ShopBuyItemListViewObject_o *v3; // x19
  ShopBuyItemListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  const MethodInfo *v6; // x2
  ShopEntity_o *v7; // x0
  int v8; // w8
  ShopBuyItemListViewObject_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x4
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  int32_t TargetId; // w0
  const MethodInfo *v16; // x2
  System_String_o *v17; // [xsp+0h] [xbp-20h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-18h] BYREF

  v3 = this;
  if ( (byte_418D4AF & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_418D4AF = 1;
  }
  v17 = 0LL;
  message = 0LL;
  linkItem = (ShopBuyItemListViewItem_o *)v3->fields.linkItem;
  if ( !linkItem
    || (v5 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] != ShopBuyItemListViewItem_TypeInfo )
  {
    linkItem = v3->fields.shopBuyItem;
  }
  if ( !linkItem )
    goto LABEL_25;
  if ( !ShopBuyItemListViewItem__GetIsPreparation(linkItem, &message, &v17, v2)
    || (v7 = linkItem->fields._Shop_k__BackingField) != 0LL && ShopEntity__IsSoldOut(v7, method) )
  {
    this = (ShopBuyItemListViewObject_o *)linkItem->fields._Shop_k__BackingField;
    if ( this )
    {
      if ( (BYTE5(this->fields.dragObjectPrefab) & 0x80) != 0 )
        return;
      v8 = (int)this->fields.linkItem;
      if ( v8 <= 4 )
      {
        if ( v8 == 1 )
        {
          TargetId = ShopEntity__get_TargetId((ShopEntity_o *)this, method);
          v9 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowItemInfomation(v3, TargetId, v16);
          goto LABEL_23;
        }
        if ( v8 != 4 )
        {
LABEL_16:
          v9 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowOtherInfomation(v3, linkItem, v6);
LABEL_23:
          ShopBuyItemListViewObject__PlayShowInfomationSound(v9, (int32_t)v9, v10);
          return;
        }
      }
      else
      {
        if ( v8 == 19 )
        {
          v13 = ShopEntity__get_TargetId((ShopEntity_o *)this, method);
          v9 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowCommandCodeInfomation(v3, v13, v14);
          goto LABEL_23;
        }
        if ( v8 != 21 )
          goto LABEL_16;
      }
      this = (ShopBuyItemListViewObject_o *)ShopEntity__get_TargetId((ShopEntity_o *)this, method);
      Shop_k__BackingField = linkItem->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        v9 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowServantInfomation(
                                              v3,
                                              (int32_t)this,
                                              Shop_k__BackingField->fields.defaultLimitCount,
                                              Shop_k__BackingField->fields.defaultLv,
                                              v11);
        goto LABEL_23;
      }
    }
LABEL_25:
    sub_B2C434(this, method);
  }
}


void __fastcall ShopBuyItemListViewObject__OnMoveEnd(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopBuyItemListViewObject__CallOnMoveEnd(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__PlayShowInfomationSound(
        ShopBuyItemListViewObject_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  if ( (byte_418D4B4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&seKind);
    byte_418D4B4 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(seKind, 0LL);
  }
}


void __fastcall ShopBuyItemListViewObject__SetItem(
        ShopBuyItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopBuyItemListViewObject__SetShopBuyItem(
        ShopBuyItemListViewObject_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.shopBuyItem = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.shopBuyItem,
    (System_Int32_array **)item,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopBuyItemListViewObject__SetupDisp(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ShopBuyItemListViewItemDraw_o *v10; // x0

  if ( (byte_418D4AB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, v3);
    byte_418D4AB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == ShopBuyItemListViewItem_TypeInfo )
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
    ShopBuyItemListViewItemDraw__SetItem(v10, (ShopBuyItemListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemListViewObject__ShowCommandCodeInfomation(
        ShopBuyItemListViewObject_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  WebViewManager_o *v12; // x0
  CommandCodeEntity_o *v13; // x20
  CommonUI_o *v14; // x21
  ServantStatusDialog_EndDelegate_o *v15; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418D4B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_B2C35C(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_418D4B2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (CommandCodeEntity_o *)entity;
    v14 = (CommonUI_o *)v12;
    v15 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenServantEquipStatusDialog_17987504(v14, 25, v13, 0, v15, 0LL, 0LL);
      return 0;
    }
LABEL_10:
    sub_B2C434(Instance, v11);
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemListViewObject__ShowItemInfomation(
        ShopBuyItemListViewObject_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int32_t itemDetailDialogOverwriteDepth; // w23
  WebViewManager_o *v13; // x0
  ItemEntity_o *v14; // x20
  CommonUI_o *v15; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x22
  int32_t v17; // w3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418D4B1 & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_418D4B1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return -1;
  itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (ItemEntity_o *)entity;
  v15 = (CommonUI_o *)v13;
  v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
    0LL);
  if ( itemDetailDialogOverwriteDepth != 0x80000000 )
  {
    if ( v15 )
    {
      v17 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_12;
    }
LABEL_13:
    sub_B2C434(Instance, v11);
  }
  if ( !v15 )
    goto LABEL_13;
  v17 = 50;
LABEL_12:
  CommonUI__OpenItemDetailDialog(v15, v14, v16, v17, 0LL);
  return 0;
}


int32_t __fastcall ShopBuyItemListViewObject__ShowOtherInfomation(
        ShopBuyItemListViewObject_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  struct ShopEntity_o *v9; // x8
  CommonUI_o *Instance; // x21
  const MethodInfo *v12; // x1
  struct ShopEntity_o *v13; // x8
  System_String_o *infoMessage; // x22
  System_String_o *v15; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_418D4B3 & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, item);
    sub_B2C35C(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopBuyItemListViewObject_o *)sub_B2C35C(&StringLiteral_9310/*"NONE"*/, v7);
    byte_418D4B3 = 1;
  }
  if ( !item )
    goto LABEL_12;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_12;
  this = (ShopBuyItemListViewObject_o *)System_String__IsNullOrEmpty(Shop_k__BackingField->fields.infoMessage, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return -1;
  v9 = item->fields._Shop_k__BackingField;
  if ( !v9 )
    goto LABEL_12;
  if ( System_String__op_Equality(v9->fields.infoMessage, (System_String_o *)StringLiteral_9310/*"NONE"*/, 0LL) )
    return -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  this = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewItem__get_NameText(item, v12);
  v13 = item->fields._Shop_k__BackingField;
  if ( !v13
    || (infoMessage = v13->fields.infoMessage,
        v15 = (System_String_o *)this,
        v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v16,
          v4,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0LL),
        !Instance) )
  {
LABEL_12:
    sub_B2C434(this, item);
  }
  CommonUI__OpenItemDetailDialog_18036692(Instance, v15, infoMessage, v16, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemListViewObject__ShowServantInfomation(
        ShopBuyItemListViewObject_o *this,
        int32_t servantId,
        int32_t limitCount,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  CommonUI_o *v20; // x21
  ServantLeaderInfo_o *v21; // x22
  ServantStatusDialog_EndDelegate_o *v22; // x20
  CommonUI_o *v24; // x23
  EquipTargetInfo_o *v25; // x24
  ServantStatusDialog_EndDelegate_o *v26; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418D4B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B2C35C(&EquipTargetInfo_TypeInfo, v11);
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, v12);
    sub_B2C35C(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__, v13);
    sub_B2C35C(&Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B2C35C(&UICamera_TypeInfo, v17);
    byte_418D4B0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return -1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_27;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_27;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_27;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_27;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)entity, 0LL) )
  {
LABEL_14:
    v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (ServantLeaderInfo_o *)sub_B2C42C(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_29329736(v21, servantId, 0, 1, 0LL);
    v22 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v22,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__,
      0LL);
    if ( v20 )
    {
      CommonUI__OpenServantStatusDialog_17984076(v20, 7, v21, v22, 0LL);
      return 0;
    }
    goto LABEL_27;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_27;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__set_selectedObject(0LL, 0LL);
    v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (EquipTargetInfo_o *)sub_B2C42C(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_29550540(v25, servantId, limitCount, level, 0, 0LL);
    v26 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v26,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v24 )
    {
      CommonUI__OpenServantEquipStatusDialog_17986440(v24, 7, v25, v26, 0LL, 0LL);
      return 0;
    }
LABEL_27:
    sub_B2C434(Instance, v19);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemListViewObject__ToString(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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

  if ( (byte_418D4B9 & 1) == 0 )
  {
    sub_B2C35C(&ShopBuyItemListViewItemDraw_DispMode_TypeInfo, method);
    sub_B2C35C(&StringLiteral_80/*" "*/, v3);
    byte_418D4B9 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(ShopBuyItemListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B2C434(0LL, v5);
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
  return System_String__Concat_44307816(v7, (System_String_o *)StringLiteral_80/*" "*/, v11, 0LL);
}


void __fastcall ShopBuyItemListViewObject__UpdateRemaingTime(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  ShopBuyItemListViewObject_o *v3; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  ListViewItem_c *klass; // x9

  v3 = this;
  if ( (byte_418D4B8 & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_418D4B8 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v5
      || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] != ShopBuyItemListViewItem_TypeInfo
      || (klass = linkItem[1].klass) == 0LL
      || (this = (ShopBuyItemListViewObject_o *)v3->fields.itemDraw) == 0LL )
    {
      sub_B2C434(this, method);
    }
    ShopBuyItemListViewItemDraw__SetEventEndTime(
      (ShopBuyItemListViewItemDraw_o *)this,
      BYTE2(linkItem[1].fields.sortValue0B) != 0,
      (*(&klass->_1.byval_arg.bits + 1) & 0x40000) != 0,
      (int64_t)klass->_1.events,
      linkItem[1].fields.sortValue0,
      v2);
  }
}


void __fastcall ShopBuyItemListViewObject__add_onMoveEnd(
        ShopBuyItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ShopBuyItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418D4A4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D4A4 = 1;
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
  sub_B2C728(v8);
  ShopBuyItemListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void __fastcall ShopBuyItemListViewObject__remove_onMoveEnd(
        ShopBuyItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ShopBuyItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418D4A5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D4A5 = 1;
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
  sub_B2C728(v8);
  ShopBuyItemListViewObject__Awake(v11, v12);
}