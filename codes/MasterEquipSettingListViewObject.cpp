void __fastcall MasterEquipSettingListViewObject___ctor(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB8F & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB8F = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct MasterEquipSettingListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBB87 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBB87 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct MasterEquipSettingListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewItemDraw___);
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


UnityEngine_GameObject_o *__fastcall MasterEquipSettingListViewObject__CreateDragObject(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  const MethodInfo *v8; // x3

  if ( (byte_42EBB8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___, (_DWORD)method, v2, v3);
    byte_42EBB8B = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)DragObject, 2, 0LL, v8);
  return v7;
}


MasterEquipSettingListViewItem_o *__fastcall MasterEquipSettingListViewObject__GetItem(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EBB89 & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipSettingListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB89 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&MasterEquipSettingListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == MasterEquipSettingListViewItem_TypeInfo )
    return (MasterEquipSettingListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall MasterEquipSettingListViewObject__Init(
        MasterEquipSettingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v5; // w21
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

  v5 = initMode;
  if ( (byte_42EBB8C & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipSettingListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42EBB8C = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v10 = *(&MasterEquipSettingListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != MasterEquipSettingListViewItem_TypeInfo )
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0LL);
  ((void (__fastcall *)(MasterEquipSettingListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v5 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v20 = 1;
  v21 = v5;
  switch ( v5 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v21 = v5;
      goto LABEL_14;
    case 3:
      v21 = 2;
LABEL_14:
      v20 = v5;
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


void __fastcall MasterEquipSettingListViewObject__Init_31033396(
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBB8E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10076/*"OnClickSelectListView"*/, (_DWORD)method, v2, v3);
    byte_42EBB8E = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10076/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall MasterEquipSettingListViewObject__OnDestroy(
        MasterEquipSettingListViewObject_o *this,
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

  if ( (byte_42EBB88 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBB88 = 1;
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


void __fastcall MasterEquipSettingListViewObject__SetInput(
        MasterEquipSettingListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v10; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11
  struct ListViewItem_o *v13; // x1
  MasterEquipSettingListViewItemDraw_o *v14; // x0

  if ( (byte_42EBB8A & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipSettingListViewItem_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EBB8A = 1;
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
      && (v12 = *(&MasterEquipSettingListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
    {
      if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == MasterEquipSettingListViewItem_TypeInfo )
        v13 = this->fields.linkItem;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v13);
    MasterEquipSettingListViewItemDraw__SetInput(v14, (MasterEquipSettingListViewItem_o *)v13, isInput, v10);
  }
}


void __fastcall MasterEquipSettingListViewObject__SetItem(
        MasterEquipSettingListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MasterEquipSettingListViewObject__SetItem_31035456(
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
  MasterEquipSettingListViewItemDraw_o *v14; // x0

  if ( (byte_42EBB8D & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipSettingListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBB8D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&MasterEquipSettingListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == MasterEquipSettingListViewItem_TypeInfo )
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
    MasterEquipSettingListViewItemDraw__SetItem(
      v14,
      (MasterEquipSettingListViewItem_o *)linkItem,
      this->fields.dispMode,
      v13);
  }
}


void __fastcall MasterEquipSettingListViewObject__add_callbackFunc(
        MasterEquipSettingListViewObject_o *this,
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
  MasterEquipSettingListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EBB85 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBB85 = 1;
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
  sub_B5D990(v9);
  MasterEquipSettingListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall MasterEquipSettingListViewObject__remove_callbackFunc(
        MasterEquipSettingListViewObject_o *this,
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
  MasterEquipSettingListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EBB86 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBB86 = 1;
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
  sub_B5D990(v9);
  MasterEquipSettingListViewObject__Awake(v12, v13);
}