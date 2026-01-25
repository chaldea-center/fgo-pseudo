void ShopBuyItemListViewObject___ctor(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CEA763 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    byte_4CEA763 = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ShopBuyItemListViewObject__Awake(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct ShopBuyItemListViewItemDraw_o *itemDraw; // x8

  if ( (byte_4CEA74C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___);
    byte_4CEA74C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewItemDraw___),
        this->fields.itemDraw = (struct ShopBuyItemListViewItemDraw_o *)Component_object,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
          (int32_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (itemDraw = this->fields.itemDraw) == 0) )
  {
    sub_1C7BD40(dispObject, v3);
  }
  itemDraw->fields.listViewObject = this;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&itemDraw->fields.listViewObject,
    (int32_t)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void ShopBuyItemListViewObject__CallOnMoveEnd(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_1C7BA8C(p_onMoveEnd, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v6; // x1
  ShopBuyItemListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4CEA762 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopBuyItemListViewManager_TypeInfo);
    byte_4CEA762 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (naturalAligment = ShopBuyItemListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ShopBuyItemListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewManager_TypeInfo )
      v6 = this->fields.manager;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C7BD40(0, v6);
  ShopBuyItemListViewItemDraw__ChangeNextAnotherItemIcon(itemDraw, (ShopBuyItemListViewManager_o *)v6, v2);
}


UnityEngine_GameObject_o *ShopBuyItemListViewObject__CreateDragObject(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4CEA750 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    byte_4CEA750 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0) )
  {
    sub_1C7BD40(DragObject, v4);
  }
  ShopBuyItemListViewObject__Init_35599880((ShopBuyItemListViewObject_o *)DragObject, 2, 0, 0.0, v6);
  return v5;
}


void ShopBuyItemListViewObject__EndShowItemDetailDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CEA75F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA75F = 1;
  }
  v3 = Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0, 0);
        return;
      }
LABEL_13:
      sub_1C7BD40(Instance, v6);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void ShopBuyItemListViewObject__EndShowServantEquipStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEA75E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA75E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void ShopBuyItemListViewObject__EndShowServantStatusDialog(
        ShopBuyItemListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEA75D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA75D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void ShopBuyItemListViewObject__EventMove(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CEA754 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6244/*"EventMoveFinish"*/);
    byte_4CEA754 = 1;
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
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v9 = TweenPosition__Begin(dragObject, v4->static_fields->BASE_MOVE_TIME, v27, 0);
  if ( !v9 )
    sub_1C7BD40(0, v10);
  v11 = v9;
  v9->fields.method = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11->fields.eventReceiver = gameObject;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v11->fields.eventReceiver,
    (int32_t)gameObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_6244/*"EventMoveFinish"*/;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6244/*"EventMoveFinish"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v11->fields.callWhenFinished, v19, v20, v21, v22, v23, v24, v25);
}


void ShopBuyItemListViewObject__EventMoveFinish(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4CEA755 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    byte_4CEA755 = 1;
  }
  if ( this->fields.initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
    this->fields.dispMode = 2;
    ShopBuyItemListViewObject__SetupDisp(this, v3);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v5, v6, v7, v8, v9, v10);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewObject__EventStart(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Vector3_o StartPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA753 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C7BAE8(&StringLiteral_6242/*"EventMove"*/);
    byte_4CEA753 = 1;
  }
  this->fields.isBusy = 1;
  ShopBuyItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopBuyItemListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v7;
  p_dragObject = &this->fields.dragObject;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___)) == 0
    || (ShopBuyItemListViewObject__Init_35599880((ShopBuyItemListViewObject_o *)dragObject, 2, 0, 0.0, v17),
        (dragObject = *p_dragObject) == 0)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        StartPosition = ShopBuyItemListViewObject__GetStartPosition(this, initMode, v19),
        !transform) )
  {
    sub_1C7BD40(dragObject, v15);
  }
  UnityEngine_Transform__set_position(transform, StartPosition, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6242/*"EventMove"*/,
    delay,
    0);
}


int32_t ShopBuyItemListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode > 5 )
    return 0;
  else
    return dword_D29060[initMode];
}


ShopBuyItemListViewItem_o *ShopBuyItemListViewObject__GetItem(
        ShopBuyItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CEA74F & 1) == 0 )
  {
    sub_1C7BAE8(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CEA74F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo )
    return (ShopBuyItemListViewItem_o *)this->fields.linkItem;
  return 0;
}


UnityEngine_Vector3_o ShopBuyItemListViewObject__GetStartPosition(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C7BD40(0, v5);
  if ( initMode == 4 )
    return UnityEngine_Transform__TransformPoint_71896928(transform, 1000.0, 0.0, 0.0, 0);
  else
    return UnityEngine_Transform__get_position(transform, 0);
}


int32_t ShopBuyItemListViewObject__GetState(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 7 )
    return 0;
  else
    return dword_D28764[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o ShopBuyItemListViewObject__GetTargetPosition(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v5; // x20
  float v6; // s0 OVERLAPPED
  float v7; // s1
  UnityEngine_Transform_o *parent; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( initMode == 6 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
      if ( dragObject )
      {
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( dragObject )
        {
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
          if ( parent )
          {
            v14 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
            v6 = v9 + 1000.0;
            v7 = v10 + 0.0;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_19:
    sub_1C7BD40(dragObject, *(_QWORD *)&initMode);
  }
  if ( initMode != 5 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
      if ( dragObject )
      {
        v12 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( dragObject )
        {
          v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
          if ( v12 )
          {
            *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__InverseTransformPoint(v12, v16, 0);
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
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_19;
  v5 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_19;
  v13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v5 )
    goto LABEL_19;
  v14 = UnityEngine_Transform__InverseTransformPoint(v5, v13, 0);
  v6 = v14.fields.x + 0.0;
  v7 = v14.fields.y + 1000.0;
LABEL_13:
  v11 = v14.fields.z + 0.0;
LABEL_20:
  result.fields.z = v11;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


void ShopBuyItemListViewObject__Init(ShopBuyItemListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ShopBuyItemListViewObject__Init_35599880(this, initMode, 0, 0.0, v3);
}


void ShopBuyItemListViewObject__Init_35599880(
        ShopBuyItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int32_t v12; // w8
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x2
  int32_t v24; // w21
  const MethodInfo *v25; // x1
  int32_t v26; // w9
  int32_t v27; // w8

  if ( (byte_4CEA751 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CEA751 = 1;
  }
  linkItem = this->fields.linkItem;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (v12 = initMode,
        (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewItem_TypeInfo) )
  {
    v12 = 0;
    this->fields.initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(ShopBuyItemListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v17, v18, v19, v20, v21, v22);
  v24 = this->fields.initMode;
  if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
  v25 = (const MethodInfo *)this->fields.initMode;
  v26 = 0;
  if ( (unsigned int)(v24 - 1) >= 3 )
    v27 = 0;
  else
    v27 = v24;
  this->fields.dispMode = v27;
  if ( (unsigned int)v25 <= 7 )
    v26 = dword_D28764[(_QWORD)v25];
  this->fields.state = v26;
  switch ( initMode )
  {
    case 4:
      goto LABEL_19;
    case 7:
      goto LABEL_22;
    case 6:
LABEL_19:
      ShopBuyItemListViewObject__EventStart(this, (int32_t)v25, delay, v23);
      return;
  }
  if ( !state || dispMode != v27 )
LABEL_22:
    ShopBuyItemListViewObject__SetupDisp(this, v25);
  ShopBuyItemListViewObject__CallOnMoveEnd(this, v25);
}


void ShopBuyItemListViewObject__OnClickReturnItemButton(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  _QWORD *p_klass; // x20
  __int64 naturalAligment; // x10
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_String_o *Instance; // x0
  __int64 v8; // x1
  ShopEntity_o *v9; // x8
  CommonUI_o *v10; // x19
  int32_t TargetId; // w0
  System_Collections_Generic_Dictionary_int__long__o *ClassBoardReleaseItemList; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x22
  System_String_o *v15; // x23

  if ( (byte_4CEA757 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&ShopBuyItemListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_ShopBuyItemListViewObject_OnClickReturnItemButton__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_11194/*"RETURN_ITEM_LIST_DIALOG_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_11193/*"RETURN_ITEM_LIST_DIALOG_SUB_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_11191/*"RETURN_ITEM_LIST_COUNTER_TITLE1"*/);
    sub_1C7BAE8(&StringLiteral_11192/*"RETURN_ITEM_LIST_COUNTER_TITLE2"*/);
    byte_4CEA757 = 1;
  }
  p_klass = &this->fields.linkItem->klass;
  if ( !p_klass
    || (naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*p_klass + 304LL) < (unsigned int)naturalAligment)
    || *(ShopBuyItemListViewItem_c **)(*(_QWORD *)(*p_klass + 200LL) + 8 * naturalAligment - 8) != ShopBuyItemListViewItem_TypeInfo )
  {
    p_klass = &this->fields.shopBuyItem->klass;
  }
  if ( p_klass )
  {
    v5 = Method_ShopBuyItemListViewObject_OnClickReturnItemButton__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_OnClickReturnItemButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C7BB00(Method_ShopBuyItemListViewObject_OnClickReturnItemButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (ShopEntity_o *)p_klass[15];
    if ( !v9 )
      goto LABEL_16;
    v10 = (CommonUI_o *)Instance;
    TargetId = ShopEntity__get_TargetId(v9, 0);
    ClassBoardReleaseItemList = ShopRootComponent__GetClassBoardReleaseItemList(TargetId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11194/*"RETURN_ITEM_LIST_DIALOG_TITLE"*/, 0);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11193/*"RETURN_ITEM_LIST_DIALOG_SUB_TITLE"*/, 0);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11191/*"RETURN_ITEM_LIST_COUNTER_TITLE1"*/, 0);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11192/*"RETURN_ITEM_LIST_COUNTER_TITLE2"*/, 0);
    if ( !v10 )
LABEL_16:
      sub_1C7BD40(Instance, v8);
    CommonUI__OpenItemIconListViewDialog(v10, ClassBoardReleaseItemList, v13, v14, v15, Instance, 0, 0, 0);
  }
}


void ShopBuyItemListViewObject__OnDestroy(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CEA74D & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA74D = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C7BA8C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void ShopBuyItemListViewObject__OnInformationButton(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ShopBuyItemListViewObject_o *v3; // x19
  void *linkItem; // x20
  __int64 naturalAligment; // x10
  bool IsPreparation; // w0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  int dragObjectPrefab; // w8
  const MethodInfo *v10; // x4
  __int64 v11; // x8
  ShopBuyItemListViewObject_o *v12; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w1
  int32_t TargetId; // w0
  const MethodInfo *v16; // x2
  System_String_o *itemName; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-18h] BYREF

  v3 = this;
  if ( (byte_4CEA756 & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_1C7BAE8(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CEA756 = 1;
  }
  message = 0;
  itemName = 0;
  linkItem = v3->fields.linkItem;
  if ( !linkItem
    || (naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) < (unsigned int)naturalAligment)
    || *(ShopBuyItemListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * naturalAligment - 8) != ShopBuyItemListViewItem_TypeInfo )
  {
    linkItem = v3->fields.shopBuyItem;
  }
  if ( !linkItem )
    goto LABEL_30;
  IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(
                    (ShopBuyItemListViewItem_o *)linkItem,
                    &message,
                    &itemName,
                    v2);
  if ( ShopBuyItemListViewItem__IsInfoButtonDisableInPreparation(
         (ShopBuyItemListViewItem_o *)linkItem,
         IsPreparation,
         v7) )
  {
    return;
  }
  this = (ShopBuyItemListViewObject_o *)*((_QWORD *)linkItem + 15);
  if ( !this )
    goto LABEL_30;
  if ( ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0) )
    return;
  this = (ShopBuyItemListViewObject_o *)*((_QWORD *)linkItem + 15);
  if ( this )
  {
    dragObjectPrefab = (int)this->fields.dragObjectPrefab;
    if ( dragObjectPrefab > 4 )
    {
      if ( dragObjectPrefab == 19 )
      {
        TargetId = ShopEntity__get_TargetId((ShopEntity_o *)this, 0);
        v12 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowCommandCodeInfomation(v3, TargetId, v16);
        goto LABEL_28;
      }
      if ( dragObjectPrefab != 21 )
        goto LABEL_22;
      goto LABEL_20;
    }
  }
  else
  {
    dragObjectPrefab = *((_QWORD *)linkItem + 21) != 0;
  }
  if ( dragObjectPrefab == 1 )
  {
    if ( this )
      v14 = ShopEntity__get_TargetId((ShopEntity_o *)this, 0);
    else
      v14 = 0;
    v12 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowItemInfomation(v3, v14, v8);
    goto LABEL_28;
  }
  if ( dragObjectPrefab != 4 )
  {
LABEL_22:
    v12 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowOtherInfomation(
                                           v3,
                                           (ShopBuyItemListViewItem_o *)linkItem,
                                           v8);
    goto LABEL_28;
  }
  if ( !this )
LABEL_30:
    sub_1C7BD40(this, method);
LABEL_20:
  this = (ShopBuyItemListViewObject_o *)ShopEntity__get_TargetId((ShopEntity_o *)this, 0);
  v11 = *((_QWORD *)linkItem + 15);
  if ( !v11 )
    goto LABEL_30;
  v12 = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewObject__ShowServantInfomation(
                                         v3,
                                         (int32_t)this,
                                         *(_DWORD *)(v11 + 96),
                                         *(_DWORD *)(v11 + 92),
                                         v10);
LABEL_28:
  ShopBuyItemListViewObject__PlayShowInfomationSound(v12, (int32_t)v12, v13);
}


void ShopBuyItemListViewObject__OnMoveEnd(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopBuyItemListViewObject__CallOnMoveEnd(this, method);
}


void ShopBuyItemListViewObject__PlayShowInfomationSound(
        ShopBuyItemListViewObject_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4CEA75C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ShopBuyItemListViewObject_PlayShowInfomationSound__);
    byte_4CEA75C = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemListViewObject_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewObject_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_ShopBuyItemListViewObject_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0, 0);
  }
}


void ShopBuyItemListViewObject__SetItem(
        ShopBuyItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_44356304((ListViewObject_o *)this, item, seed, 0);
}


void ShopBuyItemListViewObject__SetShopBuyItem(
        ShopBuyItemListViewObject_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.shopBuyItem = item;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.shopBuyItem,
    (int32_t)item,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopBuyItemListViewObject__SetupDisp(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ShopBuyItemListViewItemDraw_o *v9; // x0

  if ( (byte_4CEA752 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CEA752 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C7BD40(0, v7);
    ShopBuyItemListViewItemDraw__SetItem(v9, (ShopBuyItemListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


int32_t ShopBuyItemListViewObject__ShowCommandCodeInfomation(
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

  if ( (byte_4CEA75A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C7BAE8(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C7BAE8(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA75A = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_342E348 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (CommonUI_o *)v7;
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C7BD34(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0);
    if ( v9 )
    {
      CommonUI__OpenServantEquipStatusDialog_31498380(v9, 25, (CommandCodeEntity_o *)v8, 0, v10, 0, 0);
      return 0;
    }
LABEL_9:
    sub_1C7BD40(Instance, v6);
  }
  return -1;
}


int32_t ShopBuyItemListViewObject__ShowItemInfomation(
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

  if ( (byte_4CEA759 & 1) == 0 )
  {
    sub_1C7BAE8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA759 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = entity;
    v14 = (CommonUI_o *)v12;
    v15 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C7BD34(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
      0);
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
    CommonUI__OpenItemDetailDialog(v14, (ItemEntity_o *)v13, v15, v16, 0);
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, (ItemEntity_o *)entity, 0),
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C7BD34(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo),
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0),
        !v8) )
  {
LABEL_20:
    sub_1C7BD40(Instance, v6);
  }
  CommonUI__OpenItemLinkInfoDetailWindow_31586608((CommonUI_o *)v8, UserItemData, v9, 0);
  return 0;
}


int32_t ShopBuyItemListViewObject__ShowOtherInfomation(
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
  if ( (byte_4CEA75B & 1) == 0 )
  {
    sub_1C7BAE8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopBuyItemListViewObject_o *)sub_1C7BAE8(&StringLiteral_9302/*"NONE"*/);
    byte_4CEA75B = 1;
  }
  if ( !item )
    goto LABEL_12;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_12;
  this = (ShopBuyItemListViewObject_o *)System_String__IsNullOrEmpty(Shop_k__BackingField->fields.infoMessage, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return -1;
  v6 = item->fields._Shop_k__BackingField;
  if ( !v6 )
    goto LABEL_12;
  if ( System_String__op_Equality(v6->fields.infoMessage, (System_String_o *)StringLiteral_9302/*"NONE"*/, 0) )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  this = (ShopBuyItemListViewObject_o *)ShopBuyItemListViewItem__get_NameText(item, v9);
  v10 = item->fields._Shop_k__BackingField;
  if ( !v10
    || (infoMessage = v10->fields.infoMessage,
        v12 = this,
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C7BD34(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          v4,
          (intptr_t)Method_ShopBuyItemListViewObject_EndShowItemDetailDialog__,
          0),
        !Instance) )
  {
LABEL_12:
    sub_1C7BD40(this, item);
  }
  CommonUI__OpenItemDetailDialog_31559204((CommonUI_o *)Instance, (System_String_o *)v12, infoMessage, v13, 0);
  return 0;
}


int32_t ShopBuyItemListViewObject__ShowServantInfomation(
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

  if ( (byte_4CEA758 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C7BAE8(&EquipTargetInfo_TypeInfo);
    sub_1C7BAE8(&ServantLeaderInfo_TypeInfo);
    sub_1C7BAE8(&Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__);
    sub_1C7BAE8(&Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEA758 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return -1;
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)entity, 0) )
  {
LABEL_14:
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (ServantLeaderInfo_o *)sub_1C7BD34(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_44092792(v12, servantId, 0, 1, 0);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C7BD34(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantStatusDialog__,
      0);
    if ( v11 )
    {
      CommonUI__OpenServantStatusDialog_31494808((CommonUI_o *)v11, 7, v12, v13, 0);
      return 0;
    }
    goto LABEL_25;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_25;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0) )
  {
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__set_selectedObject(0, 0);
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (EquipTargetInfo_o *)sub_1C7BD34(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_42285744(v16, servantId, limitCount, level, 0, 0);
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_1C7BD34(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewObject_EndShowServantEquipStatusDialog__,
      0);
    if ( v15 )
    {
      CommonUI__OpenServantEquipStatusDialog_31497916((CommonUI_o *)v15, 7, v16, v17, 0, 0);
      return 0;
    }
LABEL_25:
    sub_1C7BD40(Instance, v10);
  }
  return 2;
}


System_String_o *ShopBuyItemListViewObject__ToString(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4CEA761 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopBuyItemListViewItemDraw_DispMode_TypeInfo);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    byte_4CEA761 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)ShopBuyItemListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E3ACE4(&v10, 0, 0, 0);
  return System_String__Concat_64215176(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void ShopBuyItemListViewObject__Update(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v6; // x2
  ShopBuyItemListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4CEA74E & 1) == 0 )
  {
    sub_1C7BAE8(&ShopBuyItemListViewManager_TypeInfo);
    byte_4CEA74E = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (naturalAligment = ShopBuyItemListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ShopBuyItemListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewManager_TypeInfo )
      v6 = this->fields.manager;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C7BD40(0, method);
  ShopBuyItemListViewItemDraw__UpdateListViewDraw(
    itemDraw,
    this->fields.dispMode,
    (ShopBuyItemListViewManager_o *)v6,
    v2);
}


void ShopBuyItemListViewObject__UpdateRemaingTime(ShopBuyItemListViewObject_o *this, const MethodInfo *method)
{
  ShopBuyItemListViewObject_o *v2; // x20
  ShopBuyItemListViewItem_o *linkItem; // x19
  __int64 naturalAligment; // x10
  ShopBuyItemListViewItemDraw_o *itemDraw; // x20
  _BOOL4 IsRarePriShopPurchased_k__BackingField; // w21
  const MethodInfo *v7; // x5
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int64_t closedAt; // x3

  v2 = this;
  if ( (byte_4CEA760 & 1) == 0 )
  {
    this = (ShopBuyItemListViewObject_o *)sub_1C7BAE8(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CEA760 = 1;
  }
  linkItem = (ShopBuyItemListViewItem_o *)v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ShopBuyItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo )
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
        closedAt = 0;
        if ( itemDraw )
          goto LABEL_8;
      }
    }
    sub_1C7BD40(this, method);
  }
}


void ShopBuyItemListViewObject__add_onMoveEnd(
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

  if ( (byte_4CEA74A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEA74A = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ShopBuyItemListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void ShopBuyItemListViewObject__remove_onMoveEnd(
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

  if ( (byte_4CEA74B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEA74B = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ShopBuyItemListViewObject__Awake(v11, v12);
}