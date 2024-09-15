void __fastcall RecommendSupportEquipSelectListViewObject___ctor(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2A1A7 & 1) == 0 )
  {
    sub_1B761C0(&ListViewObject_TypeInfo, method);
    byte_4A2A1A7 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewObject__Awake(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A2A19E & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewItemDraw___, method);
    byte_4A2A19E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B7641C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewItemDraw___);
  this->fields.itemDraw = (struct RecommendSupportEquipSelectListViewItemDraw_o *)Component_object;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall RecommendSupportEquipSelectListViewObject__CreateDragObject(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4A2A1A2 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___, method);
    byte_4A2A1A2 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___)) == 0LL) )
  {
    sub_1B7641C(DragObject, v4);
  }
  RecommendSupportEquipSelectListViewObject__Init((RecommendSupportEquipSelectListViewObject_o *)DragObject, 2, 0LL, v6);
  return v5;
}


RecommendSupportEquipSelectListViewItem_o *__fastcall RecommendSupportEquipSelectListViewObject__GetItem(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A2A1A0 & 1) == 0 )
  {
    sub_1B761C0(&RecommendSupportEquipSelectListViewItem_TypeInfo, method);
    byte_4A2A1A0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (RecommendSupportEquipSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
    return (RecommendSupportEquipSelectListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewObject__Init(
        RecommendSupportEquipSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  unsigned int v9; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A2A1A3 & 1) == 0 )
  {
    sub_1B761C0(&RecommendSupportEquipSelectListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A2A1A3 = 1;
  }
  if ( initMode == 4 )
  {
    RecommendSupportEquipSelectListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (RecommendSupportEquipSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
        v9 = initMode;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    ListViewObject__SetVisible((ListViewObject_o *)this, v9 != 0, 0LL);
    ((void (__fastcall *)(RecommendSupportEquipSelectListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      v9 == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1B7641C(transform, v13);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = action;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)action, v15, v16);
    if ( v9 <= 3 )
    {
      v20 = dword_BAC630[v9];
      this->fields.dispMode = v9;
      this->fields.state = v20;
    }
    if ( !state || dispMode != this->fields.dispMode )
      RecommendSupportEquipSelectListViewObject__SetupDisp(this, v17);
    klass = p_callbackFunc->klass;
    if ( p_callbackFunc->klass )
    {
      p_callbackFunc->klass = 0LL;
      sub_1B76164(p_callbackFunc, 0, v18, v19);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
  }
}


void __fastcall RecommendSupportEquipSelectListViewObject__InitItem(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall RecommendSupportEquipSelectListViewObject__Init_32276932(
        RecommendSupportEquipSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  RecommendSupportEquipSelectListViewObject__Init(this, initMode, 0LL, v3);
}


void __fastcall RecommendSupportEquipSelectListViewObject__OnClickSelect(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  if ( (byte_4A2A1A5 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_9861/*"OnClickSelectListView"*/, method);
    byte_4A2A1A5 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( !manager || (ListViewManager__ClearScrollBarValue(manager, 1, 0LL), (manager = this->fields.manager) == 0LL) )
      sub_1B7641C(manager, method);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)manager,
      (System_String_o *)StringLiteral_9861/*"OnClickSelectListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall RecommendSupportEquipSelectListViewObject__OnDestroy(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2A19F & 1) == 0 )
  {
    sub_1B761C0(&NGUITools_TypeInfo, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A2A19F = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
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
    sub_1B76164(p_dragObject, 0, v8, v9);
  }
}


void __fastcall RecommendSupportEquipSelectListViewObject__OnLongPush(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A2A1A6 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_9918/*"OnLongPushListView"*/, method);
    byte_4A2A1A6 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B7641C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9918/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewObject__SetInput(
        RecommendSupportEquipSelectListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  RecommendSupportEquipSelectListViewItem_c *v10; // x10
  RecommendSupportEquipSelectListViewItem_o *v11; // x1
  RecommendSupportEquipSelectListViewItemDraw_o *v12; // x0

  if ( (byte_4A2A1A1 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B761C0(&RecommendSupportEquipSelectListViewItem_TypeInfo, v5);
    byte_4A2A1A1 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v10 = (RecommendSupportEquipSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        v11 = v10 == RecommendSupportEquipSelectListViewItem_TypeInfo
            ? (RecommendSupportEquipSelectListViewItem_o *)this->fields.linkItem
            : 0LL;
        if ( v10 == RecommendSupportEquipSelectListViewItem_TypeInfo )
        {
          v12 = this->fields.itemDraw;
          if ( !v12 )
            sub_1B7641C(0LL, v11);
          RecommendSupportEquipSelectListViewItemDraw__SetInput(v12, v11, isInput, v7);
        }
      }
    }
  }
}


void __fastcall RecommendSupportEquipSelectListViewObject__SetItem(
        RecommendSupportEquipSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  if ( item )
  {
    ListViewObject__SetItem_40571128((ListViewObject_o *)this, item, seed, 0LL);
    this->fields.state = 0;
  }
}


void __fastcall RecommendSupportEquipSelectListViewObject__SetItem_32287828(
        RecommendSupportEquipSelectListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  if ( item )
  {
    ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
    this->fields.state = 0;
  }
}


void __fastcall RecommendSupportEquipSelectListViewObject__SetupDisp(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  RecommendSupportEquipSelectListViewItemDraw_o *v10; // x0

  if ( (byte_4A2A1A4 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&RecommendSupportEquipSelectListViewItem_TypeInfo, v3);
    byte_4A2A1A4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (RecommendSupportEquipSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportEquipSelectListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1B7641C(0LL, v8);
    RecommendSupportEquipSelectListViewItemDraw__SetItem(
      v10,
      (RecommendSupportEquipSelectListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


void __fastcall RecommendSupportEquipSelectListViewObject__add_callbackFunc(
        RecommendSupportEquipSelectListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportEquipSelectListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A2A19C & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A2A19C = 1;
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
    v9 = sub_1BB16B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportEquipSelectListViewObject_o *)sub_1B766DC(v8);
  RecommendSupportEquipSelectListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecommendSupportEquipSelectListViewObject__remove_callbackFunc(
        RecommendSupportEquipSelectListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportEquipSelectListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A2A19D & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A2A19D = 1;
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
    v9 = sub_1BB16B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportEquipSelectListViewObject_o *)sub_1B766DC(v8);
  RecommendSupportEquipSelectListViewObject__Awake(v11, v12);
}