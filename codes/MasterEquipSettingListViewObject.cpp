void __fastcall MasterEquipSettingListViewObject___ctor(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E60C & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438E60C = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MasterEquipSettingListViewObject__Awake(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct MasterEquipSettingListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438E604 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewItemDraw___);
    byte_438E604 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct MasterEquipSettingListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *__fastcall MasterEquipSettingListViewObject__CreateDragObject(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_438E608 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
    byte_438E608 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___)) == 0LL) )
  {
    sub_B7769C(DragObject, v4);
  }
  MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)DragObject, 2, 0LL, v6);
  return v5;
}


MasterEquipSettingListViewItem_o *__fastcall MasterEquipSettingListViewObject__GetItem(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438E606 & 1) == 0 )
  {
    sub_B775C4(&MasterEquipSettingListViewItem_TypeInfo);
    byte_438E606 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&MasterEquipSettingListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == MasterEquipSettingListViewItem_TypeInfo )
    return (MasterEquipSettingListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall MasterEquipSettingListViewObject__Init(
        MasterEquipSettingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v10; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  int32_t v21; // w8

  if ( (byte_438E609 & 1) == 0 )
  {
    sub_B775C4(&MasterEquipSettingListViewItem_TypeInfo);
    byte_438E609 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v10 = *(&MasterEquipSettingListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != MasterEquipSettingListViewItem_TypeInfo )
      initMode = 0;
  }
  else
  {
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0LL);
  ((void (__fastcall *)(MasterEquipSettingListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v20 = 1;
  v21 = initMode;
  switch ( initMode )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v21 = initMode;
      goto LABEL_14;
    case 3:
      v21 = 2;
LABEL_14:
      v20 = initMode;
LABEL_15:
      this->fields.dispMode = v21;
      this->fields.state = v20;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_18;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_18:
        MasterEquipSettingListViewObject__SetupDisp(this, v19);
      if ( callbackFunc )
        System_Action__Invoke(callbackFunc, 0LL);
      return;
  }
}


void __fastcall MasterEquipSettingListViewObject__InitItem(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall MasterEquipSettingListViewObject__Init_31341988(
        MasterEquipSettingListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MasterEquipSettingListViewObject__Init(this, initMode, 0LL, v3);
}


void __fastcall MasterEquipSettingListViewObject__OnClickSelect(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_438E60B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10152/*"OnClickSelectListView"*/);
    byte_438E60B = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B7769C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10152/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall MasterEquipSettingListViewObject__OnDestroy(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438E605 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E605 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B77560(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall MasterEquipSettingListViewObject__SetInput(
        MasterEquipSettingListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  MasterEquipSettingListViewItemDraw_o *v10; // x0

  if ( (byte_438E607 & 1) == 0 )
  {
    sub_B775C4(&MasterEquipSettingListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E607 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v8 = *(&MasterEquipSettingListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == MasterEquipSettingListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B7769C(0LL, v9);
    MasterEquipSettingListViewItemDraw__SetInput(v10, (MasterEquipSettingListViewItem_o *)v9, isInput, v6);
  }
}


void __fastcall MasterEquipSettingListViewObject__SetItem(
        MasterEquipSettingListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MasterEquipSettingListViewObject__SetItem_31344048(
        MasterEquipSettingListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall MasterEquipSettingListViewObject__SetupDisp(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  MasterEquipSettingListViewItemDraw_o *v9; // x0

  if ( (byte_438E60A & 1) == 0 )
  {
    sub_B775C4(&MasterEquipSettingListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E60A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&MasterEquipSettingListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == MasterEquipSettingListViewItem_TypeInfo )
    {
      v5 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v5 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B7769C(0LL, v7);
    MasterEquipSettingListViewItemDraw__SetItem(
      v9,
      (MasterEquipSettingListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void __fastcall MasterEquipSettingListViewObject__add_callbackFunc(
        MasterEquipSettingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipSettingListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438E602 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438E602 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  MasterEquipSettingListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MasterEquipSettingListViewObject__remove_callbackFunc(
        MasterEquipSettingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipSettingListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438E603 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438E603 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  MasterEquipSettingListViewObject__Awake(v11, v12);
}