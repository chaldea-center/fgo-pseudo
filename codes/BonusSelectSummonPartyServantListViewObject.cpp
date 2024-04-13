void __fastcall BonusSelectSummonPartyServantListViewObject___ctor(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E869D & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E869D = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewObject__Awake(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct BonusSelectSummonPartyServantListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8695 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8695 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct BonusSelectSummonPartyServantListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                        dispObject,
                                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewItemDraw___);
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


UnityEngine_GameObject_o *__fastcall BonusSelectSummonPartyServantListViewObject__CreateDragObject(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  const MethodInfo *v8; // x2

  if ( (byte_42E8698 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8698 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  BonusSelectSummonPartyServantListViewObject__Init((BonusSelectSummonPartyServantListViewObject_o *)DragObject, 2, v8);
  return v7;
}


BonusSelectSummonPartyServantListViewItem_o *__fastcall BonusSelectSummonPartyServantListViewObject__GetItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E8697 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8697 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
    return (BonusSelectSummonPartyServantListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall BonusSelectSummonPartyServantListViewObject__Init(
        BonusSelectSummonPartyServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w21
  int32_t state; // w22
  __int64 v9; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t v19; // w9
  int32_t v20; // w8
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v22; // x20
  struct System_Action_o *callbackFunc; // t1

  v4 = initMode;
  if ( (byte_42E8699 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewItem_TypeInfo, initMode, (_DWORD)method, v3);
    byte_42E8699 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v9 = *(&BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != BonusSelectSummonPartyServantListViewItem_TypeInfo )
      v4 = 0;
  }
  else
  {
    v4 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v4 != 0, 0LL);
  ((void (__fastcall *)(BonusSelectSummonPartyServantListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v4 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  v19 = 1;
  v20 = v4;
  switch ( v4 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v20 = v4;
      goto LABEL_14;
    case 3:
      v20 = 2;
LABEL_14:
      v19 = v4;
LABEL_15:
      this->fields.dispMode = v20;
      this->fields.state = v19;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 3;
      goto LABEL_18;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_18:
        BonusSelectSummonPartyServantListViewObject__SetupDisp(this, v12);
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
      v22 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0LL;
        sub_B5D560(p_callbackFunc, 0LL, v13, v14, v15, v16, v17, v18);
        System_Action__Invoke(v22, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ListViewManager_o *manager; // x0

  if ( (byte_42E869B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10076/*"OnClickSelectListView"*/, (_DWORD)method, v2, v3);
    byte_42E869B = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( !manager || (ListViewManager__ClearScrollBarValue(manager, 1, 0LL), (manager = this->fields.manager) == 0LL) )
      sub_B5D69C(manager, method);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)manager,
      (System_String_o *)StringLiteral_10076/*"OnClickSelectListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__OnDestroy(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_42E8696 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8696 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__OnLongPush(
        BonusSelectSummonPartyServantListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42E869C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, (_DWORD)method, v2, v3);
    byte_42E869C = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10129/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__SetItem(
        BonusSelectSummonPartyServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall BonusSelectSummonPartyServantListViewObject__SetItem_24940696(
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
  BonusSelectSummonPartyServantListViewItemDraw_o *v14; // x0

  if ( (byte_42E869A & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E869A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (BonusSelectSummonPartyServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v12);
    BonusSelectSummonPartyServantListViewItemDraw__SetItem(
      v14,
      (BonusSelectSummonPartyServantListViewItem_o *)linkItem,
      this->fields.dispMode,
      v13);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewObject__add_callbackFunc(
        BonusSelectSummonPartyServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BonusSelectSummonPartyServantListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E8693 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8693 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BonusSelectSummonPartyServantListViewObject_o *)sub_B5D990(v9);
  BonusSelectSummonPartyServantListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall BonusSelectSummonPartyServantListViewObject__remove_callbackFunc(
        BonusSelectSummonPartyServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BonusSelectSummonPartyServantListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E8694 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8694 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BonusSelectSummonPartyServantListViewObject_o *)sub_B5D990(v9);
  BonusSelectSummonPartyServantListViewObject__Awake(v12, v13);
}