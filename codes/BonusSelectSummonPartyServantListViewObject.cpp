void BonusSelectSummonPartyServantListViewObject___ctor(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593488A & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_593488A = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void BonusSelectSummonPartyServantListViewObject__Awake(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5934882 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewItemDraw___);
    byte_5934882 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewItemDraw___);
  this->fields.itemDraw = (struct BonusSelectSummonPartyServantListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *BonusSelectSummonPartyServantListViewObject__CreateDragObject(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_5934885 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
    byte_5934885 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___)) == 0) )
  {
    sub_21FFECC(DragObject, v4);
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

  if ( (byte_5934884 & 1) == 0 )
  {
    sub_21FFC50(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    byte_5934884 = 1;
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
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int v8; // w21
  int32_t dispMode; // w20
  int32_t state; // w22
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w8
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v22; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_5934886 & 1) == 0 )
  {
    sub_21FFC50(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    byte_5934886 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (BonusSelectSummonPartyServantListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      v8 = initMode;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v8 != 0, 0);
  ((void (__fastcall *)(BonusSelectSummonPartyServantListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v8 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  if ( v8 <= 1 )
  {
    if ( v8 )
    {
      v20 = v8;
      if ( v8 != 1 )
      {
LABEL_18:
        if ( !state )
          goto LABEL_24;
        goto LABEL_23;
      }
LABEL_22:
      this->fields.dispMode = v20;
      this->fields.state = v8;
      if ( !state )
        goto LABEL_24;
LABEL_23:
      if ( dispMode == this->fields.dispMode )
        goto LABEL_25;
      goto LABEL_24;
    }
LABEL_20:
    v20 = v8;
    v8 = 1;
    goto LABEL_22;
  }
  if ( v8 == 2 )
    goto LABEL_20;
  if ( v8 == 3 )
  {
    v20 = 2;
    goto LABEL_22;
  }
  if ( v8 != 4 )
    goto LABEL_18;
  this->fields.dispMode = 2;
  this->fields.state = 3;
LABEL_24:
  BonusSelectSummonPartyServantListViewObject__SetupDisp(this, v13);
LABEL_25:
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v22 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v14, v15, v16, v17, v18, v19);
    ((void (__fastcall *)(intptr_t, intptr_t))v22->fields.invoke_impl)(v22->fields.method_code, v22->fields.method);
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

  if ( (byte_5934888 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10254/*"OnClickSelectListView"*/);
    byte_5934888 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( !manager || (ListViewManager__ClearScrollBarValue(manager, 1, 0), (manager = this->fields.manager) == 0) )
      sub_21FFECC(manager, method);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)manager,
      (System_String_o *)StringLiteral_10254/*"OnClickSelectListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void BonusSelectSummonPartyServantListViewObject__OnDestroy(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5934883 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934883 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void BonusSelectSummonPartyServantListViewObject__OnLongPush(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_5934889 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10317/*"OnLongPushListView"*/);
    byte_5934889 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_21FFECC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10317/*"OnLongPushListView"*/, (Il2CppObject *)this, 0);
  }
}


void BonusSelectSummonPartyServantListViewObject__SetItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void BonusSelectSummonPartyServantListViewObject__SetItem_42118932(
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  BonusSelectSummonPartyServantListViewItemDraw_o *v11; // x0

  if ( (byte_5934887 & 1) == 0 )
  {
    sub_21FFC50(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934887 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_21FFECC(0, v9);
    BonusSelectSummonPartyServantListViewItemDraw__SetItem(
      v11,
      (BonusSelectSummonPartyServantListViewItem_o *)linkItem,
      this->fields.dispMode,
      v10);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BonusSelectSummonPartyServantListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5934880 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5934880 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  BonusSelectSummonPartyServantListViewObject__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BonusSelectSummonPartyServantListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5934881 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5934881 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  BonusSelectSummonPartyServantListViewObject__Awake(v13, v14);
}