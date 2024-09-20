void __fastcall BonusSelectSummonPartyServantListViewObject___ctor(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57903 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A57903 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewObject__Awake(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A578FB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewItemDraw___);
    byte_4A578FB = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewItemDraw___);
  this->fields.itemDraw = (struct BonusSelectSummonPartyServantListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall BonusSelectSummonPartyServantListViewObject__CreateDragObject(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A578FE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
    byte_4A578FE = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  BonusSelectSummonPartyServantListViewObject__Init((BonusSelectSummonPartyServantListViewObject_o *)DragObject, 2, v6);
  return v5;
}


BonusSelectSummonPartyServantListViewItem_o *__fastcall BonusSelectSummonPartyServantListViewObject__GetItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A578FD & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    byte_4A578FD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
    return (BonusSelectSummonPartyServantListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall BonusSelectSummonPartyServantListViewObject__Init(
        BonusSelectSummonPartyServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v7; // w22
  int32_t dispMode; // w20
  int32_t state; // w21
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w9
  int32_t v16; // w8
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v18; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A578FF & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    byte_4A578FF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(BonusSelectSummonPartyServantListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v7 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
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
      p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
      v18 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0LL;
        sub_1B88554(p_callbackFunc, 0, v13, v14);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v18->fields.m_target)(
          v18->fields.original_method_info,
          *(_QWORD *)&v18->fields.extra_arg);
      }
      return;
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__InitItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall BonusSelectSummonPartyServantListViewObject__OnClickSelect(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  if ( (byte_4A57901 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9864/*"OnClickSelectListView"*/);
    byte_4A57901 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( !manager || (ListViewManager__ClearScrollBarValue(manager, 1, 0LL), (manager = this->fields.manager) == 0LL) )
      sub_1B8880C(manager, method);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)manager,
      (System_String_o *)StringLiteral_9864/*"OnClickSelectListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__OnDestroy(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A578FC & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A578FC = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__OnLongPush(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A57902 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9921/*"OnLongPushListView"*/);
    byte_4A57902 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B8880C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9921/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__SetItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall BonusSelectSummonPartyServantListViewObject__SetItem_33026372(
        BonusSelectSummonPartyServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall BonusSelectSummonPartyServantListViewObject__SetupDisp(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  BonusSelectSummonPartyServantListViewItemDraw_o *v9; // x0

  if ( (byte_4A57900 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57900 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != BonusSelectSummonPartyServantListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v7);
    BonusSelectSummonPartyServantListViewItemDraw__SetItem(
      v9,
      (BonusSelectSummonPartyServantListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__add_callbackFunc(
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

  if ( (byte_4A578F9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A578F9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  BonusSelectSummonPartyServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall BonusSelectSummonPartyServantListViewObject__remove_callbackFunc(
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

  if ( (byte_4A578FA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A578FA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  BonusSelectSummonPartyServantListViewObject__Awake(v11, v12);
}