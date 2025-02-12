void __fastcall ShopBuyItemListViewObject___ctor(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BB0B6E & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    byte_4BB0B6E = 1;
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB0B5A & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___, method);
    byte_4BB0B5A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C13F80(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___);
  this->fields.itemDraw = (struct ShopBuyItemListViewItemDraw_o *)Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


void __fastcall ShopBuyItemListViewObject__CallOnMoveEnd(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (PartyOrganizationUtility_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_1C13CC8(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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

  if ( (byte_4BB0B5D & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    byte_4BB0B5D = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL) )
  {
    sub_1C13F80(DragObject, v4);
  }
  ShopBuyItemListViewObject__Init_33833952((ShopBuyItemListViewObject_o *)DragObject, 2, 0LL, 0.0, v6);
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

  if ( (byte_4BB0B6B & 1) == 0 )
  {
    sub_1C13D24(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, isDecide);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BB0B6B = 1;
  }
  v4 = Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C13D3C(Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1C13F80(Instance, v7);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4BB0B6A & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BB0B6A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
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

  if ( (byte_4BB0B69 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BB0B69 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BB0B61 & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    sub_1C13D24(&StringLiteral_6349/*"EventMaximMove2"*/, v4);
    byte_4BB0B61 = 1;
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
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v10 = TweenPosition__Begin(dragObject, v5->static_fields->BASE_MOVE_TIME, v28, 0LL);
  if ( !v10 )
    sub_1C13F80(0LL, v11);
  v12 = v10;
  v10->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12->fields.eventReceiver = gameObject;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v12->fields.eventReceiver,
    (int64_t)gameObject,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = StringLiteral_6349/*"EventMaximMove2"*/;
  v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6349/*"EventMaximMove2"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v12->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
}


void __fastcall ShopBuyItemListViewObject__EventMoveFinish(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4BB0B62 & 1) == 0 )
  {
    sub_1C13D24(&NGUITools_TypeInfo, method);
    byte_4BB0B62 = 1;
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v20; // x2
  int v21; // s0

  if ( (byte_4BB0B60 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, *(_QWORD *)&initMode);
    sub_1C13D24(&StringLiteral_6347/*"EventLog"*/, v7);
    byte_4BB0B60 = 1;
  }
  this->fields.isBusy = 1;
  ShopBuyItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopBuyItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  p_dragObject = &this->fields.dragObject;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0LL
    || (ShopBuyItemListViewObject__Init_33833952((ShopBuyItemListViewObject_o *)dragObject, 2, 0LL, 0.0, v18),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = ShopBuyItemListViewObject__GetStartPosition(this, initMode, v20),
        !transform) )
  {
    sub_1C13F80(dragObject, v16);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6347/*"EventLog"*/,
    delay,
    0LL);
}


int32_t __fastcall ShopBuyItemListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 5 )
    return 0;
  else
    return dword_C304E0[initMode];
}


ShopBuyItemListViewItem_o *__fastcall ShopBuyItemListViewObject__GetItem(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BB0B5C & 1) == 0 )
  {
    sub_1C13D24(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_4BB0B5C = 1;
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
    sub_1C13F80(0LL, v5);
  if ( initMode == 4 )
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__TransformPoint_70746736(transform, 1000.0, 0.0, 0.0, 0LL);
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
    return dword_C2F7EC[initMode];
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
    sub_1C13F80(dragObject, *(_QWORD *)&initMode);
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

  ShopBuyItemListViewObject__Init_33833952(this, initMode, 0LL, 0.0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__Init_33833952(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  int32_t v25; // w21
  const MethodInfo *v26; // x1
  int32_t v27; // w9
  int32_t v28; // w8

  if ( (byte_4BB0B5E & 1) == 0 )
  {
    sub_1C13D24(&ShopBuyItemListViewItemDraw_TypeInfo, *(_QWORD *)&initMode);
    sub_1C13D24(&ShopBuyItemListViewItem_TypeInfo, v9);
    byte_4BB0B5E = 1;
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
    sub_1C13F80(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onMoveEnd, (int64_t)onMoveEnd, v18, v19, v20, v21, v22, v23);
  v25 = this->fields.initMode;
  if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
  v26 = (const MethodInfo *)this->fields.initMode;
  v27 = 0;
  if ( (unsigned int)(v25 - 1) >= 3 )
    v28 = 0;
  else
    v28 = v25;
  this->fields.dispMode = v28;
  if ( (unsigned int)v26 <= 7 )
    v27 = dword_C2F7EC[(_QWORD)v26];
  this->fields.state = v27;
  switch ( initMode )
  {
    case 4:
      goto LABEL_19;
    case 7:
      goto LABEL_22;
    case 6:
LABEL_19:
      ShopBuyItemListViewObject__EventStart(this, (int32_t)v26, delay, v24);
      return;
  }
  if ( !state || dispMode != v28 )
LABEL_22:
    ShopBuyItemListViewObject__SetupDisp(this, v26);
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v26);
}


void __fastcall ShopBuyItemListViewObject__OnDestroy(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BB0B5B & 1) == 0 )
  {
    sub_1C13D24(&NGUITools_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB0B5B = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
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
    sub_1C13CC8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
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
  if ( (byte_4BB0B63 & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_1C13D24(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_4BB0B63 = 1;
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
      sub_1C13F80(this, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewObject__PlayShowInfomationSound(
        ShopBuyItemListViewObject_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4BB0B68 & 1) == 0 )
  {
    sub_1C13D24(&Method_ShopBuyItemListViewObject_PlayShowInfomationSound__, *(_QWORD *)&seKind);
    byte_4BB0B68 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemListViewObject_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C13D3C(Method_ShopBuyItemListViewObject_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
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
  ListViewObject__SetItem_41915964((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopBuyItemListViewObject__SetShopBuyItem(
        ShopBuyItemListViewObject_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.shopBuyItem = item;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.shopBuyItem,
    (int64_t)item,
    (int64_t)method,
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
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ShopBuyItemListViewItemDraw_o *v10; // x0

  if ( (byte_4BB0B5F & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&ShopBuyItemListViewItem_TypeInfo, v3);
    byte_4BB0B5F = 1;
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
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C13F80(0LL, v8);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  CommonUI_o *v14; // x21
  ServantStatusDialog_EndDelegate_o *v15; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB0B66 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1C13D24(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB0B66 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_3238670 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = entity;
    v14 = (CommonUI_o *)v12;
    v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C13F70(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenServantEquipStatusDialog_31087076(v14, 25, (CommandCodeEntity_o *)v13, 0, v15, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1C13F80(Instance, v11);
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

  if ( (byte_4BB0B65 & 1) == 0 )
  {
    sub_1C13D24(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_1C13D24(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1C13D24(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB0B65 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_3238670 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = entity;
    v20 = (CommonUI_o *)v18;
    v21 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C13F70(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, (ItemEntity_o *)entity, 0LL),
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C13F70(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo),
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0LL),
        !v14) )
  {
LABEL_20:
    sub_1C13F80(Instance, v12);
  }
  CommonUI__OpenItemLinkInfoDetailWindow_31175196((CommonUI_o *)v14, UserItemData, v15, 0LL);
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
  Il2CppObject *Instance; // x21
  const MethodInfo *v12; // x1
  struct ShopEntity_o *v13; // x8
  System_String_o *infoMessage; // x22
  ShopBuyItemListViewObject_o *v15; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4BB0B67 & 1) == 0 )
  {
    sub_1C13D24(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, item);
    sub_1C13D24(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopBuyItemListViewObject_o *)sub_1C13D24(&StringLiteral_9428/*"NMTOKEN"*/, v7);
    byte_4BB0B67 = 1;
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
  if ( System_String__op_Equality(v9->fields.infoMessage, (System_String_o *)StringLiteral_9428/*"NMTOKEN"*/, 0LL) )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  this = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewItem__get_NameText(item, v12);
  v13 = item->fields._Shop_k__BackingField;
  if ( !v13
    || (infoMessage = v13->fields.infoMessage,
        v15 = this,
        v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C13F70(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v16,
          v4,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0LL),
        !Instance) )
  {
LABEL_12:
    sub_1C13F80(this, item);
  }
  CommonUI__OpenItemDetailDialog_31147600((CommonUI_o *)Instance, (System_String_o *)v15, infoMessage, v16, 0LL);
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

  if ( (byte_4BB0B64 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1C13D24(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1C13D24(&EquipTargetInfo_TypeInfo, v11);
    sub_1C13D24(&ServantLeaderInfo_TypeInfo, v12);
    sub_1C13D24(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__, v13);
    sub_1C13D24(&Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C13D24(&UICamera_TypeInfo, v17);
    byte_4BB0B64 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (ServantLeaderInfo_o *)sub_1C13F70(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_41659808(v21, servantId, 0, 1, 0LL);
    v22 = (ServantStatusDialog_EndDelegate_o *)sub_1C13F70(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v22,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__,
      0LL);
    if ( v20 )
    {
      CommonUI__OpenServantStatusDialog_31082996((CommonUI_o *)v20, 7, v21, v22, 0LL);
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
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (EquipTargetInfo_o *)sub_1C13F70(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_40041296(v25, servantId, limitCount, level, 0, 0LL);
    v26 = (ServantStatusDialog_EndDelegate_o *)sub_1C13F70(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v26,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v24 )
    {
      CommonUI__OpenServantEquipStatusDialog_31086092((CommonUI_o *)v24, 7, v25, v26, 0LL, 0LL);
      return 0;
    }
LABEL_25:
    sub_1C13F80(Instance, v19);
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

  if ( (byte_4BB0B6D & 1) == 0 )
  {
    sub_1C13D24(&ShopBuyItemListViewItemDraw_DispMode_TypeInfo, method);
    sub_1C13D24(&StringLiteral_117/*" "*/, v3);
    byte_4BB0B6D = 1;
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
  v7 = (System_String_o *)sub_1DD2A58(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_62979204(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
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
  if ( (byte_4BB0B6C & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_1C13D24(&ShopBuyItemListViewItem_TypeInfo, method);
    byte_4BB0B6C = 1;
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB0B58 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, value);
    byte_4BB0B58 = 1;
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
    v9 = sub_1C4F214(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
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

  if ( (byte_4BB0B59 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, value);
    byte_4BB0B59 = 1;
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
    v9 = sub_1C4F214(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  ShopBuyItemListViewObject__Awake(v11, v12);
}