void __fastcall ShopBuyItemListViewObject___ctor(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4AFE308 & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    byte_4AFE308 = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewObject__Awake(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ShopBuyItemListViewItemDraw_o *itemDraw; // x8

  if ( (byte_4AFE2F2 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___, method);
    byte_4AFE2F2 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___),
        this->fields.itemDraw = (struct ShopBuyItemListViewItemDraw_o *)Component_object,
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7),
        (itemDraw = this->fields.itemDraw) == 0LL) )
  {
    sub_1BC3264(dispObject, v3);
  }
  itemDraw->fields.listViewObject = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)&itemDraw->fields.listViewObject, (int32_t)this, v8, v9);
}


void __fastcall ShopBuyItemListViewObject__CallOnMoveEnd(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (CGThumbnailListItem_o *)&this->fields.onMoveEnd;
  v5 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_1BC2FAC(p_onMoveEnd, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v5; // x1
  ShopBuyItemListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4AFE307 & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewManager_TypeInfo, method);
    byte_4AFE307 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ShopBuyItemListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewManager_TypeInfo )
      v5 = this->fields.manager;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BC3264(0LL, v5);
  ShopBuyItemListViewItemDraw__ChangeNextAnotherItemIcon(itemDraw, (ShopBuyItemListViewManager_o *)v5, 0LL);
}


UnityEngine_GameObject_o *__fastcall ShopBuyItemListViewObject__CreateDragObject(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4AFE2F6 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    byte_4AFE2F6 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL) )
  {
    sub_1BC3264(DragObject, v4);
  }
  ShopBuyItemListViewObject__Init_34299604((ShopBuyItemListViewObject_o *)DragObject, 2, 0LL, 0.0, v6);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4AFE304 & 1) == 0 )
  {
    sub_1BC3008(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4AFE304 = 1;
  }
  v4 = Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1BC3264(Instance, v7);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__EndShowServantEquipStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AFE303 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AFE303 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__EndShowServantStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AFE302 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AFE302 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall ShopBuyItemListViewObject__EventMove(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  ListViewObject_c *v5; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  TweenPosition_o *v10; // x0
  __int64 v11; // x1
  TweenPosition_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4AFE2FA & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    sub_1BC3008(&StringLiteral_6179/*"EventMoveFinish"*/, v4);
    byte_4AFE2FA = 1;
  }
  TargetPosition = ShopBuyItemListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  v5 = ListViewObject_TypeInfo;
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  z = TargetPosition.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v5 = ListViewObject_TypeInfo;
  }
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  v10 = TweenPosition__Begin(dragObject, v5->static_fields->BASE_MOVE_TIME, v20, 0LL);
  if ( !v10 )
    sub_1BC3264(0LL, v11);
  v12 = v10;
  v10->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12->fields.eventReceiver = gameObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v12->fields.eventReceiver, (int32_t)gameObject, v14, v15);
  v16 = StringLiteral_6179/*"EventMoveFinish"*/;
  v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6179/*"EventMoveFinish"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v12->fields.callWhenFinished, v16, v17, v18);
}


void __fastcall ShopBuyItemListViewObject__EventMoveFinish(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4AFE2FB & 1) == 0 )
  {
    sub_1BC3008(&NGUITools_TypeInfo, method);
    byte_4AFE2FB = 1;
  }
  if ( this->fields.initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
    this->fields.dispMode = 2;
    ShopBuyItemListViewObject__SetupDisp(this, v3);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v5, v6);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v7);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v16; // x2
  int v17; // s0

  if ( (byte_4AFE2F9 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, *(_QWORD *)&initMode);
    sub_1BC3008(&StringLiteral_6177/*"EventMove"*/, v7);
    byte_4AFE2F9 = 1;
  }
  this->fields.isBusy = 1;
  ShopBuyItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopBuyItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  p_dragObject = &this->fields.dragObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v8, v10, v11);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL
    || (ShopBuyItemListViewObject__Init_34299604((ShopBuyItemListViewObject_o *)dragObject, 2, 0LL, 0.0, v14),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = ShopBuyItemListViewObject__GetStartPosition(this, initMode, v16),
        !transform) )
  {
    sub_1BC3264(dragObject, v12);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6177/*"EventMove"*/,
    delay,
    0LL);
}


int32_t __fastcall ShopBuyItemListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 5 )
    return 0;
  else
    return dword_C17384[initMode];
}


ShopBuyItemListViewItem_o *__fastcall ShopBuyItemListViewObject__GetItem(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4AFE2F5 & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_4AFE2F5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
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
    sub_1BC3264(0LL, v5);
  if ( initMode == 4 )
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__TransformPoint_70060900(transform, 1000.0, 0.0, 0.0, 0LL);
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
    return dword_C169A4[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopBuyItemListViewObject__GetTargetPosition(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  float v9; // s2
  float v10; // s0
  float v11; // s0
  float v12; // s1
  float v13; // s1
  UnityEngine_Transform_o *parent; // x20
  int v15; // s0
  float v18; // s0
  float v19; // s1
  float v20; // s2
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( initMode == 6 )
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
          *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL);
          if ( parent )
          {
            *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__InverseTransformPoint(
                                                    parent,
                                                    *(UnityEngine_Vector3_o *)&v15,
                                                    0LL);
            v11 = v18 + 1000.0;
            v13 = v19 + 0.0;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_19:
    sub_1BC3264(dragObject, *(_QWORD *)&initMode);
  }
  if ( initMode != 5 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( dragObject )
      {
        v21 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( dragObject )
        {
          *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL);
          if ( v21 )
          {
            *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                               v21,
                                               *(UnityEngine_Vector3_o *)&v22,
                                               0LL);
            goto LABEL_20;
          }
        }
      }
    }
    goto LABEL_19;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  v5 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__InverseTransformPoint(
                                          v5,
                                          *(UnityEngine_Vector3_o *)&v6,
                                          0LL);
  v11 = v10 + 0.0;
  v13 = v12 + 1000.0;
LABEL_13:
  v20 = v9 + 0.0;
LABEL_20:
  result.fields.z = v20;
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

  ShopBuyItemListViewObject__Init_34299604(this, initMode, 0LL, 0.0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__Init_34299604(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct ListViewItem_o *linkItem; // x8
  ListViewItem_c *klass; // x9
  __int64 methodPtr_low; // x10
  int32_t v13; // w8
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w21
  int32_t v21; // w0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  int32_t v24; // w8

  if ( (byte_4AFE2F7 & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewItemDraw_TypeInfo, *(_QWORD *)&initMode);
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, v9);
    byte_4AFE2F7 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (v13 = initMode,
        (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewItem_TypeInfo) )
  {
    v13 = 0;
    this->fields.initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(ShopBuyItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BC3264(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v18, v19);
  v20 = this->fields.initMode;
  if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
  v21 = ShopBuyItemListViewItemDraw__GetDispMode(v20, 0LL);
  v23 = (const MethodInfo *)this->fields.initMode;
  this->fields.dispMode = v21;
  if ( (unsigned int)v23 > 7 )
    v24 = 0;
  else
    v24 = dword_C169A4[(_QWORD)v23];
  this->fields.state = v24;
  switch ( initMode )
  {
    case 4:
      goto LABEL_17;
    case 7:
      goto LABEL_20;
    case 6:
LABEL_17:
      ShopBuyItemListViewObject__EventStart(this, (int32_t)v23, delay, v22);
      return;
  }
  if ( !state || dispMode != v21 )
LABEL_20:
    ShopBuyItemListViewObject__SetupDisp(this, v23);
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v23);
}


void __fastcall ShopBuyItemListViewObject__OnDestroy(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFE2F3 & 1) == 0 )
  {
    sub_1BC3008(&NGUITools_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFE2F3 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BC2FAC(p_dragObject, 0, v8, v9);
  }
}


void __fastcall ShopBuyItemListViewObject__OnInformationButton(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  ShopBuyItemListViewObject_o *v2; // x19
  ShopBuyItemListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  int32_t PurchaseType; // w0
  const MethodInfo *v6; // x2
  ShopBuyItemListViewObject_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x4
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v11; // w0
  const MethodInfo *v12; // x2
  int32_t TargetId; // w0
  const MethodInfo *v14; // x2
  System_String_o *itemName; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-18h] BYREF

  v2 = this;
  if ( (byte_4AFE2FC & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_4AFE2FC = 1;
  }
  message = 0LL;
  itemName = 0LL;
  linkItem = (ShopBuyItemListViewItem_o *)v2->fields.linkItem;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewItem_TypeInfo )
  {
    linkItem = v2->fields.shopBuyItem;
  }
  if ( !linkItem )
    goto LABEL_24;
  if ( !ShopBuyItemListViewItem__GetIsPreparation(linkItem, &message, &itemName, 0LL)
    || ShopBuyItemListViewItem__get_IsSoldOut(linkItem, 0LL) )
  {
    this = (ShopBuyItemListViewObject_o *)linkItem->fields._Shop_k__BackingField;
    if ( this )
    {
      if ( ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0LL) )
        return;
      PurchaseType = ShopBuyItemListViewItem__get_PurchaseType(linkItem, 0LL);
      if ( PurchaseType <= 4 )
      {
        if ( PurchaseType == 1 )
        {
          TargetId = ShopBuyItemListViewItem__get_TargetId(linkItem, 0LL);
          v7 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowItemInfomation(v2, TargetId, v14);
          goto LABEL_22;
        }
        if ( PurchaseType != 4 )
        {
LABEL_15:
          v7 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowOtherInfomation(v2, linkItem, v6);
LABEL_22:
          ShopBuyItemListViewObject__PlayShowInfomationSound(v7, (int32_t)v7, v8);
          return;
        }
      }
      else
      {
        if ( PurchaseType == 19 )
        {
          v11 = ShopBuyItemListViewItem__get_TargetId(linkItem, 0LL);
          v7 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowCommandCodeInfomation(v2, v11, v12);
          goto LABEL_22;
        }
        if ( PurchaseType != 21 )
          goto LABEL_15;
      }
      this = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewItem__get_TargetId(linkItem, 0LL);
      Shop_k__BackingField = linkItem->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        v7 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowServantInfomation(
                                              v2,
                                              (int32_t)this,
                                              Shop_k__BackingField->fields.defaultLimitCount,
                                              Shop_k__BackingField->fields.defaultLv,
                                              v9);
        goto LABEL_22;
      }
    }
LABEL_24:
    sub_1BC3264(this, method);
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4AFE301 & 1) == 0 )
  {
    sub_1BC3008(&Method_ShopBuyItemListViewObject_PlayShowInfomationSound__, *(_QWORD *)&seKind);
    byte_4AFE301 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemListViewObject_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BC3020(Method_ShopBuyItemListViewObject_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0, 0LL);
  }
}


void __fastcall ShopBuyItemListViewObject__SetItem(
        ShopBuyItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_42800124((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopBuyItemListViewObject__SetShopBuyItem(
        ShopBuyItemListViewObject_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.shopBuyItem = item;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.shopBuyItem, (int32_t)item, (int32_t)method, v3);
}


void __fastcall ShopBuyItemListViewObject__SetupDisp(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  ShopBuyItemListViewItemDraw_o *v9; // x0

  if ( (byte_4AFE2F8 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, v3);
    byte_4AFE2F8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1BC3264(0LL, v8);
    ShopBuyItemListViewItemDraw__SetItem(v9, (ShopBuyItemListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  CommonUI_o *v14; // x21
  ServantStatusDialog_EndDelegate_o *v15; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AFE2FF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1BC3008(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1BC3008(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AFE2FF = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = entity;
    v14 = (CommonUI_o *)v12;
    v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenServantEquipStatusDialog_30747464(v14, 25, (CommandCodeEntity_o *)v13, 0, v15, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1BC3264(Instance, v11);
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
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  UserItemData_o *UserItemData; // x20
  Il2CppObject *v14; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v15; // x22
  int32_t itemDetailDialogOverwriteDepth; // w23
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x20
  CommonUI_o *v20; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v21; // x22
  int32_t v22; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AFE2FE & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_1BC3008(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BC3008(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4AFE2FE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = entity;
    v20 = (CommonUI_o *)v18;
    v21 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BC3254(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( !v20 )
        goto LABEL_20;
      v22 = 50;
    }
    else
    {
      if ( !v20 )
        goto LABEL_20;
      v22 = this->fields.itemDetailDialogOverwriteDepth;
    }
    CommonUI__OpenItemDetailDialog(v20, (ItemEntity_o *)v19, v21, v22, 0LL);
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, (ItemEntity_o *)entity, 0LL),
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BC3254(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo),
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0LL),
        !v14) )
  {
LABEL_20:
    sub_1BC3264(Instance, v12);
  }
  CommonUI__OpenItemLinkInfoDetailWindow_30837068((CommonUI_o *)v14, UserItemData, v15, 0LL);
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
  System_String_o *UniqueMessage; // x0
  System_String_o *v9; // x0
  Il2CppObject *Instance; // x21
  System_String_o *NameText; // x22
  System_String_o *v13; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4AFE300 & 1) == 0 )
  {
    sub_1BC3008(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, item);
    sub_1BC3008(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopBuyItemListViewObject_o *)sub_1BC3008(&StringLiteral_9194/*"NONE"*/, v7);
    byte_4AFE300 = 1;
  }
  if ( !item )
    goto LABEL_9;
  UniqueMessage = ShopBuyItemListViewItem__get_UniqueMessage(item, 0LL);
  if ( System_String__IsNullOrEmpty(UniqueMessage, 0LL) )
    return -1;
  v9 = ShopBuyItemListViewItem__get_UniqueMessage(item, 0LL);
  if ( System_String__op_Equality(v9, (System_String_o *)StringLiteral_9194/*"NONE"*/, 0LL) )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  NameText = ShopBuyItemListViewItem__get_NameText(item, 0LL);
  v13 = ShopBuyItemListViewItem__get_UniqueMessage(item, 0LL);
  v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BC3254(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v14,
    v4,
    (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_1BC3264(this, item);
  CommonUI__OpenItemDetailDialog_30809372((CommonUI_o *)Instance, NameText, v13, v14, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  ServantLeaderInfo_o *v21; // x22
  ServantStatusDialog_EndDelegate_o *v22; // x20
  Il2CppObject *v24; // x23
  EquipTargetInfo_o *v25; // x24
  ServantStatusDialog_EndDelegate_o *v26; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AFE2FD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1BC3008(&EquipTargetInfo_TypeInfo, v11);
    sub_1BC3008(&ServantLeaderInfo_TypeInfo, v12);
    sub_1BC3008(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__, v13);
    sub_1BC3008(&Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&UICamera_TypeInfo, v17);
    byte_4AFE2FD = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return -1;
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)entity, 0LL) )
  {
LABEL_14:
    v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (ServantLeaderInfo_o *)sub_1BC3254(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_42446472(v21, servantId, 0, 1, 0LL);
    v22 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v22,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__,
      0LL);
    if ( v20 )
    {
      CommonUI__OpenServantStatusDialog_30743384((CommonUI_o *)v20, 7, v21, v22, 0LL);
      return 0;
    }
    goto LABEL_25;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__set_selectedObject(0LL, 0LL);
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (EquipTargetInfo_o *)sub_1BC3254(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_40729192(v25, servantId, limitCount, level, 0, 0LL);
    v26 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v26,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v24 )
    {
      CommonUI__OpenServantEquipStatusDialog_30746480((CommonUI_o *)v24, 7, v25, v26, 0LL, 0LL);
      return 0;
    }
LABEL_25:
    sub_1BC3264(Instance, v19);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemListViewObject__ToString(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_4AFE306 & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewItemDraw_DispMode_TypeInfo, method);
    sub_1BC3008(&StringLiteral_113/*" "*/, v3);
    byte_4AFE306 = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)ShopBuyItemListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D80BBC(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_62386896(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0LL);
}


void __fastcall ShopBuyItemListViewObject__Update(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v5; // x2
  ShopBuyItemListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4AFE2F4 & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewManager_TypeInfo, method);
    byte_4AFE2F4 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ShopBuyItemListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewManager_TypeInfo )
      v5 = this->fields.manager;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BC3264(0LL, method);
  ShopBuyItemListViewItemDraw__UpdateListViewDraw(
    itemDraw,
    this->fields.dispMode,
    (ShopBuyItemListViewManager_o *)v5,
    0LL);
}


void __fastcall ShopBuyItemListViewObject__UpdateRemaingTime(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  ShopBuyItemListViewObject_o *v2; // x20
  ShopBuyItemListViewItem_o *linkItem; // x19
  __int64 methodPtr_low; // x10
  ShopBuyItemListViewItemDraw_o *itemDraw; // x20
  _BOOL4 IsRarePriShopPurchased_k__BackingField; // w22
  bool IsIndefinitePeriodShowable; // w21

  v2 = this;
  if ( (byte_4AFE305 & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_4AFE305 = 1;
  }
  linkItem = (ShopBuyItemListViewItem_o *)v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewItem_TypeInfo
      || (itemDraw = v2->fields.itemDraw,
          IsRarePriShopPurchased_k__BackingField = linkItem->fields._IsRarePriShopPurchased_k__BackingField,
          IsIndefinitePeriodShowable = ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(linkItem, 0LL),
          this = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewItem__get_ActiveTime(linkItem, 0LL),
          !itemDraw) )
    {
      sub_1BC3264(this, method);
    }
    ShopBuyItemListViewItemDraw__SetEventEndTime(
      itemDraw,
      IsRarePriShopPurchased_k__BackingField,
      IsIndefinitePeriodShowable,
      (int64_t)this,
      linkItem->fields._EnterTime_k__BackingField,
      0LL);
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

  if ( (byte_4AFE2F0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFE2F0 = 1;
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
    v9 = sub_1BFD098(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
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

  if ( (byte_4AFE2F1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFE2F1 = 1;
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
    v9 = sub_1BFD098(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  ShopBuyItemListViewObject__Awake(v11, v12);
}