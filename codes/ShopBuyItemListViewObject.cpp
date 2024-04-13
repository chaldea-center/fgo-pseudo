void __fastcall ShopBuyItemListViewObject___ctor(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE57A & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE57A = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ShopBuyItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EE566 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42EE566 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct ShopBuyItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      dispObject,
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___);
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
    sub_B5D560(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall ShopBuyItemListViewObject__CreateDragObject(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  const MethodInfo *v8; // x3

  if ( (byte_42EE569 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, (_DWORD)method, v2, v3);
    byte_42EE569 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  ShopBuyItemListViewObject__Init_35081904((ShopBuyItemListViewObject_o *)DragObject, 2, 0LL, 0.0, v8);
  return v7;
}


void __fastcall ShopBuyItemListViewObject__EndShowItemDetailDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EE577 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42EE577 = 1;
  }
  v7 = Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall ShopBuyItemListViewObject__EndShowServantEquipStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EE576 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EE576 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall ShopBuyItemListViewObject__EndShowServantStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EE575 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EE575 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall ShopBuyItemListViewObject__EventMove(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v11; // x0
  float z; // s10
  TweenPosition_o *v13; // x0
  __int64 v14; // x1
  TweenPosition_o *v15; // x20
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
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EE56D & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6257/*"EventMoveFinish"*/, v5, v6, v7);
    byte_42EE56D = 1;
  }
  TargetPosition = ShopBuyItemListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  v11 = ListViewObject_TypeInfo;
  z = TargetPosition.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v11 = ListViewObject_TypeInfo;
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v13 = TweenPosition__Begin(dragObject, v11->static_fields->BASE_MOVE_TIME, v31, 0LL);
  if ( !v13 )
    sub_B5D69C(0LL, v14);
  v15 = v13;
  v13->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v15->fields.eventReceiver, gameObject, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_6257/*"EventMoveFinish"*/;
  v15->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6257/*"EventMoveFinish"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v15->fields.callWhenFinished, v23, v24, v25, v26, v27, v28, v29);
}


void __fastcall ShopBuyItemListViewObject__EventMoveFinish(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_42EE56E & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE56E = 1;
  }
  if ( this->fields.initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
    this->fields.dispMode = 2;
    ShopBuyItemListViewObject__SetupDisp(this, v5);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__EventStart(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_GameObject_o *v11; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v21; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v23; // x2
  int v24; // s0

  if ( (byte_42EE56C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, initMode, (_DWORD)method, v4);
    sub_B5D5C4(&StringLiteral_6255/*"EventMove"*/, v8, v9, v10);
    byte_42EE56C = 1;
  }
  this->fields.isBusy = 1;
  ShopBuyItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v11 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopBuyItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL
    || (ShopBuyItemListViewObject__Init_35081904((ShopBuyItemListViewObject_o *)dragObject, 2, 0LL, 0.0, v21),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = ShopBuyItemListViewObject__GetStartPosition(this, initMode, v23),
        !transform) )
  {
    sub_B5D69C(dragObject, v19);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6255/*"EventMove"*/,
    delay,
    0LL);
}


int32_t __fastcall ShopBuyItemListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 5 )
    return 0;
  else
    return dword_32C45D0[initMode];
}


ShopBuyItemListViewItem_o *__fastcall ShopBuyItemListViewObject__GetItem(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EE568 & 1) == 0 )
  {
    sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE568 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ShopBuyItemListViewItem_TypeInfo )
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
    sub_B5D69C(0LL, v5);
  if ( initMode == 4 )
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__TransformPoint_35744104(transform, 1000.0, 0.0, 0.0, 0LL);
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
    return dword_329F550[initMode];
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
    sub_B5D69C(dragObject, *(_QWORD *)&initMode);
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

  ShopBuyItemListViewObject__Init_35081904(this, initMode, 0LL, 0.0, v3);
}


void __fastcall ShopBuyItemListViewObject__Init_35081904(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w23
  int32_t state; // w24
  ListViewItem_c *klass; // x9
  __int64 v16; // x10
  int32_t v17; // w8
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  int32_t v27; // w21
  const MethodInfo *v28; // x1
  int32_t v29; // w9
  int32_t v30; // w8

  if ( (byte_42EE56A & 1) == 0 )
  {
    sub_B5D5C4(&ShopBuyItemListViewItemDraw_TypeInfo, initMode, (_DWORD)onMoveEnd, method);
    sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, v9, v10, v11);
    byte_42EE56A = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        v16 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v16)
    || (v17 = initMode, (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[v16 - 1] != ShopBuyItemListViewItem_TypeInfo) )
  {
    v17 = 0;
    this->fields.initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v17 != 0, 0LL);
  ((void (__fastcall *)(ShopBuyItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v19);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v27 = this->fields.initMode;
  if ( (BYTE3(ShopBuyItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
  }
  v28 = (const MethodInfo *)this->fields.initMode;
  v29 = 0;
  if ( (unsigned int)(v27 - 1) >= 3 )
    v30 = 0;
  else
    v30 = v27;
  this->fields.dispMode = v30;
  if ( (unsigned int)v28 <= 7 )
    v29 = dword_329F550[(_QWORD)v28];
  this->fields.state = v29;
  switch ( initMode )
  {
    case 4:
      goto LABEL_20;
    case 7:
      goto LABEL_23;
    case 6:
LABEL_20:
      ShopBuyItemListViewObject__EventStart(this, (int32_t)v28, delay, v26);
      return;
  }
  if ( !state || dispMode != v30 )
LABEL_23:
    ShopBuyItemListViewObject__SetupDisp(this, v28);
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v28);
}


void __fastcall ShopBuyItemListViewObject__OnDestroy(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_42EE567 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE567 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall ShopBuyItemListViewObject__OnInformationButton(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  ShopBuyItemListViewObject_o *v4; // x19
  ShopBuyItemListViewItem_o *linkItem; // x20
  __int64 v6; // x10
  const MethodInfo *v7; // x2
  ShopEntity_o *v8; // x0
  int v9; // w8
  ShopBuyItemListViewObject_o *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x4
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  int32_t TargetId; // w0
  const MethodInfo *v17; // x2
  System_String_o *v18; // [xsp+0h] [xbp-20h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42EE56F & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE56F = 1;
  }
  v18 = 0LL;
  message = 0LL;
  linkItem = (ShopBuyItemListViewItem_o *)v4->fields.linkItem;
  if ( !linkItem
    || (v6 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != ShopBuyItemListViewItem_TypeInfo )
  {
    linkItem = v4->fields.shopBuyItem;
  }
  if ( !linkItem )
    goto LABEL_25;
  if ( !ShopBuyItemListViewItem__GetIsPreparation(linkItem, &message, &v18, v3)
    || (v8 = linkItem->fields._Shop_k__BackingField) != 0LL && ShopEntity__IsSoldOut(v8, method) )
  {
    this = (ShopBuyItemListViewObject_o *)linkItem->fields._Shop_k__BackingField;
    if ( this )
    {
      if ( (BYTE5(this->fields.dragObjectPrefab) & 0x80) != 0 )
        return;
      v9 = (int)this->fields.linkItem;
      if ( v9 <= 4 )
      {
        if ( v9 == 1 )
        {
          TargetId = ShopEntity__get_TargetId((ShopEntity_o *)this, method);
          v10 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowItemInfomation(v4, TargetId, v17);
          goto LABEL_23;
        }
        if ( v9 != 4 )
        {
LABEL_16:
          v10 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowOtherInfomation(v4, linkItem, v7);
LABEL_23:
          ShopBuyItemListViewObject__PlayShowInfomationSound(v10, (int32_t)v10, v11);
          return;
        }
      }
      else
      {
        if ( v9 == 19 )
        {
          v14 = ShopEntity__get_TargetId((ShopEntity_o *)this, method);
          v10 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowCommandCodeInfomation(v4, v14, v15);
          goto LABEL_23;
        }
        if ( v9 != 21 )
          goto LABEL_16;
      }
      this = (ShopBuyItemListViewObject_o *)ShopEntity__get_TargetId((ShopEntity_o *)this, method);
      Shop_k__BackingField = linkItem->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        v10 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowServantInfomation(
                                               v4,
                                               (int32_t)this,
                                               Shop_k__BackingField->fields.defaultLimitCount,
                                               Shop_k__BackingField->fields.defaultLv,
                                               v12);
        goto LABEL_23;
      }
    }
LABEL_25:
    sub_B5D69C(this, method);
  }
}


void __fastcall ShopBuyItemListViewObject__OnMoveEnd(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopBuyItemListViewObject__CallOnMoveEnd(this, method);
}


void __fastcall ShopBuyItemListViewObject__PlayShowInfomationSound(
        ShopBuyItemListViewObject_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EE574 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, seKind, (_DWORD)method, v3);
    byte_42EE574 = 1;
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
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
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
  sub_B5D560(
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
  ShopBuyItemListViewItemDraw_o *v14; // x0

  if ( (byte_42EE56B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, v5, v6, v7);
    byte_42EE56B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == ShopBuyItemListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v12);
    ShopBuyItemListViewItemDraw__SetItem(v14, (ShopBuyItemListViewItem_o *)linkItem, this->fields.dispMode, v13);
  }
}


int32_t __fastcall ShopBuyItemListViewObject__ShowCommandCodeInfomation(
        ShopBuyItemListViewObject_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  WebViewManager_o *v23; // x0
  CommandCodeEntity_o *v24; // x20
  CommonUI_o *v25; // x21
  ServantStatusDialog_EndDelegate_o *v26; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EE572 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    byte_42EE572 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (CommandCodeEntity_o *)entity;
    v25 = (CommonUI_o *)v23;
    v26 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v26,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v25 )
    {
      CommonUI__OpenServantEquipStatusDialog_18218384(v25, 25, v24, 0, v26, 0LL, 0LL);
      return 0;
    }
LABEL_10:
    sub_B5D69C(Instance, v22);
  }
  return -1;
}


int32_t __fastcall ShopBuyItemListViewObject__ShowItemInfomation(
        ShopBuyItemListViewObject_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t itemDetailDialogOverwriteDepth; // w23
  WebViewManager_o *v24; // x0
  ItemEntity_o *v25; // x20
  CommonUI_o *v26; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v27; // x22
  int32_t v28; // w3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EE571 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, itemId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    byte_42EE571 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return -1;
  itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (ItemEntity_o *)entity;
  v26 = (CommonUI_o *)v24;
  v27 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
    0LL);
  if ( itemDetailDialogOverwriteDepth != 0x80000000 )
  {
    if ( v26 )
    {
      v28 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_12;
    }
LABEL_13:
    sub_B5D69C(Instance, v22);
  }
  if ( !v26 )
    goto LABEL_13;
  v28 = 50;
LABEL_12:
  CommonUI__OpenItemDetailDialog(v26, v25, v27, v28, 0LL);
  return 0;
}


int32_t __fastcall ShopBuyItemListViewObject__ShowOtherInfomation(
        ShopBuyItemListViewObject_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  struct ShopEntity_o *v16; // x8
  CommonUI_o *Instance; // x21
  const MethodInfo *v19; // x1
  struct ShopEntity_o *v20; // x8
  System_String_o *infoMessage; // x22
  System_String_o *v22; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v23; // x23

  v5 = (Il2CppObject *)this;
  if ( (byte_42EE573 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    this = (ShopBuyItemListViewObject_o *)sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, v12, v13, v14);
    byte_42EE573 = 1;
  }
  if ( !item )
    goto LABEL_12;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_12;
  this = (ShopBuyItemListViewObject_o *)System_String__IsNullOrEmpty(Shop_k__BackingField->fields.infoMessage, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return -1;
  v16 = item->fields._Shop_k__BackingField;
  if ( !v16 )
    goto LABEL_12;
  if ( System_String__op_Equality(v16->fields.infoMessage, (System_String_o *)StringLiteral_9405/*"NONE"*/, 0LL) )
    return -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  this = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewItem__get_NameText(item, v19);
  v20 = item->fields._Shop_k__BackingField;
  if ( !v20
    || (infoMessage = v20->fields.infoMessage,
        v22 = (System_String_o *)this,
        v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v23,
          v5,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0LL),
        !Instance) )
  {
LABEL_12:
    sub_B5D69C(this, item);
  }
  CommonUI__OpenItemDetailDialog_18267660(Instance, v22, infoMessage, v23, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  CommonUI_o *v38; // x21
  ServantLeaderInfo_o *v39; // x22
  ServantStatusDialog_EndDelegate_o *v40; // x20
  CommonUI_o *v42; // x23
  EquipTargetInfo_o *v43; // x24
  ServantStatusDialog_EndDelegate_o *v44; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EE570 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, servantId, limitCount, *(_QWORD *)&level);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__, v21, v22, v23);
    sub_B5D5C4(&Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&UICamera_TypeInfo, v33, v34, v35);
    byte_42EE570 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v38 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v39 = (ServantLeaderInfo_o *)sub_B5D694(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_29348816(v39, servantId, 0, 1, 0LL);
    v40 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v40,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__,
      0LL);
    if ( v38 )
    {
      CommonUI__OpenServantStatusDialog_18214956(v38, 7, v39, v40, 0LL);
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
    v42 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v43 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_30730304(v43, servantId, limitCount, level, 0, 0LL);
    v44 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v44,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v42 )
    {
      CommonUI__OpenServantEquipStatusDialog_18217320(v42, 7, v43, v44, 0LL, 0LL);
      return 0;
    }
LABEL_27:
    sub_B5D69C(Instance, v37);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemListViewObject__ToString(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_o *v11; // x21
  int32_t *v12; // x0
  __int64 v13; // x9
  float z; // w10
  System_String_o *v15; // x0
  __int64 v17; // [xsp+0h] [xbp-30h] BYREF
  float v18; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE579 & 1) == 0 )
  {
    sub_B5D5C4(&ShopBuyItemListViewItemDraw_DispMode_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v5, v6, v7);
    byte_42EE579 = 1;
  }
  v18 = 0.0;
  v17 = 0LL;
  v8 = j_il2cpp_value_box_0(ShopBuyItemListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v10 = v8;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v12 = (int32_t *)j_il2cpp_object_unbox_0(v10);
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v12;
  v17 = v13;
  v18 = z;
  v15 = UnityEngine_Vector3__ToString(v19, (const MethodInfo *)&v17);
  return System_String__Concat_44580072(v11, (System_String_o *)StringLiteral_81/*" "*/, v15, 0LL);
}


void __fastcall ShopBuyItemListViewObject__UpdateRemaingTime(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  ShopBuyItemListViewObject_o *v5; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  ListViewItem_c *klass; // x9

  v5 = this;
  if ( (byte_42EE578 & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE578 = 1;
  }
  linkItem = v5->fields.linkItem;
  if ( linkItem )
  {
    v7 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != ShopBuyItemListViewItem_TypeInfo
      || (klass = linkItem[1].klass) == 0LL
      || (this = (ShopBuyItemListViewObject_o *)v5->fields.itemDraw) == 0LL )
    {
      sub_B5D69C(this, method);
    }
    ShopBuyItemListViewItemDraw__SetEventEndTime(
      (ShopBuyItemListViewItemDraw_o *)this,
      BYTE2(linkItem[1].fields.sortValue0B) != 0,
      (*(&klass->_1.byval_arg.bits + 1) & 0x40000) != 0,
      (int64_t)klass->_1.events,
      linkItem[1].fields.sortValue0,
      v4);
  }
}


void __fastcall ShopBuyItemListViewObject__add_onMoveEnd(
        ShopBuyItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ShopBuyItemListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EE564 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE564 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v7 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onMoveEnd, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ShopBuyItemListViewObject__remove_onMoveEnd(v12, v13, v14);
}


void __fastcall ShopBuyItemListViewObject__remove_onMoveEnd(
        ShopBuyItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ShopBuyItemListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EE565 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE565 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v7 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onMoveEnd, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ShopBuyItemListViewObject__Awake(v12, v13);
}