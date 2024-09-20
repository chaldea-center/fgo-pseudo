void __fastcall ShopBuyItemListViewObject___ctor(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A57783 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A57783 = 1;
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
  int32_t v7; // w3

  if ( (byte_4A5776F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___);
    byte_4A5776F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___);
  this->fields.itemDraw = (struct ShopBuyItemListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall ShopBuyItemListViewObject__CallOnMoveEnd(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd;
  v5 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_1B88554(p_onMoveEnd, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
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

  if ( (byte_4A57772 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    byte_4A57772 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  ShopBuyItemListViewObject__Init_32873924((ShopBuyItemListViewObject_o *)DragObject, 2, 0LL, 0.0, v6);
  return v5;
}


void __fastcall ShopBuyItemListViewObject__EndShowItemDetailDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A57780 & 1) == 0 )
  {
    sub_1B885B0(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57780 = 1;
  }
  v3 = Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(Instance, v6);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ShopBuyItemListViewObject__EndShowServantEquipStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5777F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5777F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall ShopBuyItemListViewObject__EndShowServantStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5777E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5777E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall ShopBuyItemListViewObject__EventMove(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ListViewObject_c *v4; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  TweenPosition_o *v9; // x0
  __int64 v10; // x1
  TweenPosition_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A57776 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    sub_1B885B0(&StringLiteral_6195/*"EventMoveFinish"*/);
    byte_4A57776 = 1;
  }
  TargetPosition = ShopBuyItemListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  v4 = ListViewObject_TypeInfo;
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  z = TargetPosition.fields.z;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v4 = ListViewObject_TypeInfo;
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  v9 = TweenPosition__Begin(dragObject, v4->static_fields->BASE_MOVE_TIME, v19, 0LL);
  if ( !v9 )
    sub_1B8880C(0LL, v10);
  v11 = v9;
  v9->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.eventReceiver, (int32_t)gameObject, v13, v14);
  v15 = StringLiteral_6195/*"EventMoveFinish"*/;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6195/*"EventMoveFinish"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.callWhenFinished, v15, v16, v17);
}


void __fastcall ShopBuyItemListViewObject__EventMoveFinish(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_4A57777 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A57777 = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v5, v6);
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
  struct UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v13; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v15; // x2
  int v16; // s0

  if ( (byte_4A57775 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1B885B0(&StringLiteral_6193/*"EventMove"*/);
    byte_4A57775 = 1;
  }
  this->fields.isBusy = 1;
  ShopBuyItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopBuyItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  p_dragObject = &this->fields.dragObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v7, v9, v10);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL
    || (ShopBuyItemListViewObject__Init_32873924((ShopBuyItemListViewObject_o *)dragObject, 2, 0LL, 0.0, v13),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = ShopBuyItemListViewObject__GetStartPosition(this, initMode, v15),
        !transform) )
  {
    sub_1B8880C(dragObject, v11);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6193/*"EventMove"*/,
    delay,
    0LL);
}


int32_t __fastcall ShopBuyItemListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 5 )
    return 0;
  else
    return dword_BED9D4[initMode];
}


ShopBuyItemListViewItem_o *__fastcall ShopBuyItemListViewObject__GetItem(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A57771 & 1) == 0 )
  {
    sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    byte_4A57771 = 1;
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
    sub_1B8880C(0LL, v5);
  if ( initMode == 4 )
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__TransformPoint_69483968(transform, 1000.0, 0.0, 0.0, 0LL);
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
    return dword_BECD58[initMode];
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
    sub_1B8880C(dragObject, *(_QWORD *)&initMode);
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

  ShopBuyItemListViewObject__Init_32873924(this, initMode, 0LL, 0.0, v3);
}


void __fastcall ShopBuyItemListViewObject__Init_32873924(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  ListViewItem_c *klass; // x9
  __int64 methodPtr_low; // x10
  int32_t v12; // w8
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  int32_t v20; // w21
  const MethodInfo *v21; // x1
  int32_t v22; // w9
  int32_t v23; // w8

  if ( (byte_4A57773 & 1) == 0 )
  {
    sub_1B885B0(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    byte_4A57773 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (v12 = initMode,
        (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewItem_TypeInfo) )
  {
    v12 = 0;
    this->fields.initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0LL);
  ((void (__fastcall *)(ShopBuyItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v17, v18);
  v20 = this->fields.initMode;
  if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
  v21 = (const MethodInfo *)this->fields.initMode;
  v22 = 0;
  if ( (unsigned int)(v20 - 1) >= 3 )
    v23 = 0;
  else
    v23 = v20;
  this->fields.dispMode = v23;
  if ( (unsigned int)v21 <= 7 )
    v22 = dword_BECD58[(_QWORD)v21];
  this->fields.state = v22;
  switch ( initMode )
  {
    case 4:
      goto LABEL_19;
    case 7:
      goto LABEL_22;
    case 6:
LABEL_19:
      ShopBuyItemListViewObject__EventStart(this, (int32_t)v21, delay, v19);
      return;
  }
  if ( !state || dispMode != v23 )
LABEL_22:
    ShopBuyItemListViewObject__SetupDisp(this, v21);
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v21);
}


void __fastcall ShopBuyItemListViewObject__OnDestroy(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57770 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57770 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


void __fastcall ShopBuyItemListViewObject__OnInformationButton(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ShopBuyItemListViewObject_o *v3; // x19
  ShopBuyItemListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  ShopEntity_o *v6; // x0
  const MethodInfo *v7; // x2
  int dragObjectPrefab; // w8
  const MethodInfo *v9; // x4
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopBuyItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  int32_t TargetId; // w0
  const MethodInfo *v15; // x2
  System_String_o *itemName; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-18h] BYREF

  v3 = this;
  if ( (byte_4A57778 & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    byte_4A57778 = 1;
  }
  message = 0LL;
  itemName = 0LL;
  linkItem = (ShopBuyItemListViewItem_o *)v3->fields.linkItem;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewItem_TypeInfo )
  {
    linkItem = v3->fields.shopBuyItem;
  }
  if ( !linkItem )
    goto LABEL_32;
  if ( !ShopBuyItemListViewItem__GetIsPreparation(linkItem, &message, &itemName, v2)
    || (v6 = linkItem->fields._Shop_k__BackingField) != 0LL && ShopEntity__IsSoldOut(v6, 0LL) )
  {
    this = (ShopBuyItemListViewObject_o *)linkItem->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_32;
    if ( ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0LL) )
      return;
    this = (ShopBuyItemListViewObject_o *)linkItem->fields._Shop_k__BackingField;
    if ( this )
    {
      dragObjectPrefab = (int)this->fields.dragObjectPrefab;
      if ( dragObjectPrefab > 4 )
      {
        if ( dragObjectPrefab == 19 )
        {
          TargetId = ShopEntity__get_TargetId((ShopEntity_o *)this, 0LL);
          v11 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowCommandCodeInfomation(v3, TargetId, v15);
          goto LABEL_30;
        }
        if ( dragObjectPrefab != 21 )
          goto LABEL_24;
        goto LABEL_22;
      }
    }
    else
    {
      dragObjectPrefab = linkItem->fields.itemEntity != 0LL;
    }
    if ( dragObjectPrefab == 1 )
    {
      if ( this )
        v13 = ShopEntity__get_TargetId((ShopEntity_o *)this, 0LL);
      else
        v13 = 0;
      v11 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowItemInfomation(v3, v13, v7);
      goto LABEL_30;
    }
    if ( dragObjectPrefab != 4 )
    {
LABEL_24:
      v11 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowOtherInfomation(v3, linkItem, v7);
      goto LABEL_30;
    }
    if ( !this )
LABEL_32:
      sub_1B8880C(this, method);
LABEL_22:
    this = (ShopBuyItemListViewObject_o *)ShopEntity__get_TargetId((ShopEntity_o *)this, 0LL);
    Shop_k__BackingField = linkItem->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField )
    {
      v11 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowServantInfomation(
                                             v3,
                                             (int32_t)this,
                                             Shop_k__BackingField->fields.defaultLimitCount,
                                             Shop_k__BackingField->fields.defaultLv,
                                             v9);
LABEL_30:
      ShopBuyItemListViewObject__PlayShowInfomationSound(v11, (int32_t)v11, v12);
      return;
    }
    goto LABEL_32;
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4A5777D & 1) == 0 )
  {
    sub_1B885B0(&Method_ShopBuyItemListViewObject_PlayShowInfomationSound__);
    byte_4A5777D = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemListViewObject_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_ShopBuyItemListViewObject_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0LL);
  }
}


void __fastcall ShopBuyItemListViewObject__SetItem(
        ShopBuyItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopBuyItemListViewObject__SetShopBuyItem(
        ShopBuyItemListViewObject_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.shopBuyItem = item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.shopBuyItem, (int32_t)item, (int32_t)method, v3);
}


void __fastcall ShopBuyItemListViewObject__SetupDisp(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ShopBuyItemListViewItemDraw_o *v9; // x0

  if ( (byte_4A57774 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    byte_4A57774 = 1;
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
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v7);
    ShopBuyItemListViewItemDraw__SetItem(v9, (ShopBuyItemListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


int32_t __fastcall ShopBuyItemListViewObject__ShowCommandCodeInfomation(
        ShopBuyItemListViewObject_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  Il2CppObject *v8; // x20
  CommonUI_o *v9; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5777B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5777B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (CommonUI_o *)v7;
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v9 )
    {
      CommonUI__OpenServantEquipStatusDialog_30510512(v9, 25, (CommandCodeEntity_o *)v8, 0, v10, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1B8880C(Instance, v6);
  }
  return -1;
}


int32_t __fastcall ShopBuyItemListViewObject__ShowItemInfomation(
        ShopBuyItemListViewObject_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserItemData_o *UserItemData; // x20
  Il2CppObject *v8; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v9; // x22
  int32_t itemDetailDialogOverwriteDepth; // w23
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  CommonUI_o *v14; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v15; // x22
  int32_t v16; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5777A & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5777A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = entity;
    v14 = (CommonUI_o *)v12;
    v15 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( !v14 )
        goto LABEL_20;
      v16 = 50;
    }
    else
    {
      if ( !v14 )
        goto LABEL_20;
      v16 = this->fields.itemDetailDialogOverwriteDepth;
    }
    CommonUI__OpenItemDetailDialog(v14, (ItemEntity_o *)v13, v15, v16, 0LL);
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, (ItemEntity_o *)entity, 0LL),
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo),
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0LL),
        !v8) )
  {
LABEL_20:
    sub_1B8880C(Instance, v6);
  }
  CommonUI__OpenItemLinkInfoDetailWindow_30585972((CommonUI_o *)v8, UserItemData, v9, 0LL);
  return 0;
}


int32_t __fastcall ShopBuyItemListViewObject__ShowOtherInfomation(
        ShopBuyItemListViewObject_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  struct ShopEntity_o *v6; // x8
  Il2CppObject *Instance; // x21
  const MethodInfo *v9; // x1
  struct ShopEntity_o *v10; // x8
  System_String_o *infoMessage; // x22
  ShopBuyItemListViewObject_o *v12; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5777C & 1) == 0 )
  {
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopBuyItemListViewObject_o *)sub_1B885B0(&StringLiteral_9251/*"NONE"*/);
    byte_4A5777C = 1;
  }
  if ( !item )
    goto LABEL_12;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_12;
  this = (ShopBuyItemListViewObject_o *)System_String__IsNullOrEmpty(Shop_k__BackingField->fields.infoMessage, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return -1;
  v6 = item->fields._Shop_k__BackingField;
  if ( !v6 )
    goto LABEL_12;
  if ( System_String__op_Equality(v6->fields.infoMessage, (System_String_o *)StringLiteral_9251/*"NONE"*/, 0LL) )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  this = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewItem__get_NameText(item, v9);
  v10 = item->fields._Shop_k__BackingField;
  if ( !v10
    || (infoMessage = v10->fields.infoMessage,
        v12 = this,
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          v4,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0LL),
        !Instance) )
  {
LABEL_12:
    sub_1B8880C(this, item);
  }
  CommonUI__OpenItemDetailDialog_30558980((CommonUI_o *)Instance, (System_String_o *)v12, infoMessage, v13, 0LL);
  return 0;
}


int32_t __fastcall ShopBuyItemListViewObject__ShowServantInfomation(
        ShopBuyItemListViewObject_o *this,
        int32_t servantId,
        int32_t limitCount,
        int32_t level,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  ServantLeaderInfo_o *v12; // x22
  ServantStatusDialog_EndDelegate_o *v13; // x20
  Il2CppObject *v15; // x23
  EquipTargetInfo_o *v16; // x24
  ServantStatusDialog_EndDelegate_o *v17; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57779 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&EquipTargetInfo_TypeInfo);
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    sub_1B885B0(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__);
    sub_1B885B0(&Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UICamera_TypeInfo);
    byte_4A57779 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (ServantLeaderInfo_o *)sub_1B887FC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_40485696(v12, servantId, 0, 1, 0LL);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__,
      0LL);
    if ( v11 )
    {
      CommonUI__OpenServantStatusDialog_30506432((CommonUI_o *)v11, 7, v12, v13, 0LL);
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
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (EquipTargetInfo_o *)sub_1B887FC(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_38882840(v16, servantId, limitCount, level, 0, 0LL);
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v15 )
    {
      CommonUI__OpenServantEquipStatusDialog_30509528((CommonUI_o *)v15, 7, v16, v17, 0LL, 0LL);
      return 0;
    }
LABEL_25:
    sub_1B8880C(Instance, v10);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemListViewObject__ToString(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4A57782 & 1) == 0 )
  {
    sub_1B885B0(&ShopBuyItemListViewItemDraw_DispMode_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    byte_4A57782 = 1;
  }
  v11 = 0.0;
  v10 = 0LL;
  v8.klass = (System_Enum_c *)ShopBuyItemListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0LL);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DC2B8C(&v10, 0LL, 0LL, 0LL);
  return System_String__Concat_61718292(v5, (System_String_o *)StringLiteral_117/*" "*/, v6, 0LL);
}


void __fastcall ShopBuyItemListViewObject__UpdateRemaingTime(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  ShopBuyItemListViewObject_o *v2; // x20
  ShopBuyItemListViewItem_o *linkItem; // x19
  __int64 methodPtr_low; // x10
  ShopBuyItemListViewItemDraw_o *itemDraw; // x20
  _BOOL4 IsRarePriShopPurchased_k__BackingField; // w21
  const MethodInfo *v7; // x5
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int64_t closedAt; // x3

  v2 = this;
  if ( (byte_4A57781 & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    byte_4A57781 = 1;
  }
  linkItem = (ShopBuyItemListViewItem_o *)v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
    {
      itemDraw = v2->fields.itemDraw;
      IsRarePriShopPurchased_k__BackingField = linkItem->fields._IsRarePriShopPurchased_k__BackingField;
      this = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(linkItem, method);
      Shop_k__BackingField = linkItem->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        closedAt = Shop_k__BackingField->fields.closedAt;
        if ( itemDraw )
        {
LABEL_8:
          ShopBuyItemListViewItemDraw__SetEventEndTime(
            itemDraw,
            IsRarePriShopPurchased_k__BackingField,
            (unsigned __int8)this & 1,
            closedAt,
            linkItem->fields._EnterTime_k__BackingField,
            v7);
          return;
        }
      }
      else
      {
        closedAt = 0LL;
        if ( itemDraw )
          goto LABEL_8;
      }
    }
    sub_1B8880C(this, method);
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

  if ( (byte_4A5776D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5776D = 1;
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
    v9 = sub_1BC3AA0(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5776E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5776E = 1;
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
    v9 = sub_1BC3AA0(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  ShopBuyItemListViewObject__Awake(v11, v12);
}