void BonusSelectSummonPartyServantListViewObject___ctor(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB2710 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewObject_TypeInfo);
    byte_4CB2710 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void BonusSelectSummonPartyServantListViewObject__Awake(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB2708 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewItemDraw___);
    byte_4CB2708 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C6BC60(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewItemDraw___);
  this->fields.itemDraw = (struct BonusSelectSummonPartyServantListViewItemDraw_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *BonusSelectSummonPartyServantListViewObject__CreateDragObject(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4CB270B & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
    byte_4CB270B = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___)) == 0) )
  {
    sub_1C6BC60(DragObject, v4);
  }
  BonusSelectSummonPartyServantListViewObject__Init((BonusSelectSummonPartyServantListViewObject_o *)DragObject, 2, v6);
  return v5;
}


BonusSelectSummonPartyServantListViewItem_o *BonusSelectSummonPartyServantListViewObject__GetItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CB270A & 1) == 0 )
  {
    sub_1C6BA08(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    byte_4CB270A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
    return (BonusSelectSummonPartyServantListViewItem_o *)this->fields.linkItem;
  return 0;
}


void BonusSelectSummonPartyServantListViewObject__Init(
        BonusSelectSummonPartyServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v7; // w22
  int32_t dispMode; // w20
  int32_t state; // w21
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w9
  int32_t v16; // w8
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v18; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4CB270C & 1) == 0 )
  {
    sub_1C6BA08(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    byte_4CB270C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      v7 = initMode;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0);
  ((void (__fastcall *)(BonusSelectSummonPartyServantListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v7 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C6BC60(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  v15 = 1;
  v16 = v7;
  switch ( v7 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v16 = v7;
      goto LABEL_14;
    case 3:
      v16 = 2;
LABEL_14:
      v15 = v7;
LABEL_15:
      this->fields.dispMode = v16;
      this->fields.state = v15;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 3;
      goto LABEL_20;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        BonusSelectSummonPartyServantListViewObject__SetupDisp(this, v12);
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      v18 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0;
        sub_1C6B9AC(p_callbackFunc, 0, v13, v14);
        ((void (__fastcall *)(intptr_t, intptr_t))v18->fields.invoke_impl)(v18->fields.method_code, v18->fields.method);
      }
      return;
  }
}


void BonusSelectSummonPartyServantListViewObject__InitItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void BonusSelectSummonPartyServantListViewObject__OnClickSelect(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  if ( (byte_4CB270E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9864/*"OnClickSelectListView"*/);
    byte_4CB270E = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( !manager || (ListViewManager__ClearScrollBarValue(manager, 1, 0), (manager = this->fields.manager) == 0) )
      sub_1C6BC60(manager, method);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)manager,
      (System_String_o *)StringLiteral_9864/*"OnClickSelectListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void BonusSelectSummonPartyServantListViewObject__OnDestroy(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB2709 & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2709 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C6B9AC(p_dragObject, 0, v7, v8);
  }
}


void BonusSelectSummonPartyServantListViewObject__OnLongPush(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CB270F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9924/*"OnLongPushListView"*/);
    byte_4CB270F = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C6BC60(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9924/*"OnLongPushListView"*/, (Il2CppObject *)this, 0);
  }
}


void BonusSelectSummonPartyServantListViewObject__SetItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44077592((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void BonusSelectSummonPartyServantListViewObject__SetItem_35683584(
        BonusSelectSummonPartyServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void BonusSelectSummonPartyServantListViewObject__SetupDisp(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  BonusSelectSummonPartyServantListViewItemDraw_o *v9; // x0

  if ( (byte_4CB270D & 1) == 0 )
  {
    sub_1C6BA08(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB270D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != BonusSelectSummonPartyServantListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C6BC60(0, v7);
    BonusSelectSummonPartyServantListViewItemDraw__SetItem(
      v9,
      (BonusSelectSummonPartyServantListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void BonusSelectSummonPartyServantListViewObject__add_callbackFunc(
        BonusSelectSummonPartyServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BonusSelectSummonPartyServantListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB2706 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB2706 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  BonusSelectSummonPartyServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void BonusSelectSummonPartyServantListViewObject__remove_callbackFunc(
        BonusSelectSummonPartyServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BonusSelectSummonPartyServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CB2707 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB2707 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  BonusSelectSummonPartyServantListViewObject__Awake(v11, v12);
}