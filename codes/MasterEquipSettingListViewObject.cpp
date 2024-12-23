void __fastcall MasterEquipSettingListViewObject___ctor(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62501 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewObject_TypeInfo, method);
    byte_4B62501 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MasterEquipSettingListViewObject__Awake(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4B624F9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewItemDraw___, method);
    byte_4B624F9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BE4D28(0LL, v3);
  this->fields.itemDraw = (struct MasterEquipSettingListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                           dispObject,
                                                                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewItemDraw___);
  sub_1BE4A70(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall MasterEquipSettingListViewObject__CreateDragObject(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4B624FD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___, method);
    byte_4B624FD = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___)) == 0LL) )
  {
    sub_1BE4D28(DragObject, v4);
  }
  MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)DragObject, 2, 0LL, v6);
  return v5;
}


MasterEquipSettingListViewItem_o *__fastcall MasterEquipSettingListViewObject__GetItem(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B624FB & 1) == 0 )
  {
    sub_1BE4ACC(&MasterEquipSettingListViewItem_TypeInfo, method);
    byte_4B624FB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterEquipSettingListViewItem_TypeInfo )
    return (MasterEquipSettingListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingListViewObject__Init(
        MasterEquipSettingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v9; // w23
  int32_t dispMode; // w21
  int32_t state; // w22
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  int32_t v15; // w9
  int32_t v16; // w8

  if ( (byte_4B624FE & 1) == 0 )
  {
    sub_1BE4ACC(&MasterEquipSettingListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B624FE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterEquipSettingListViewItem_TypeInfo )
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
  ((void (__fastcall *)(MasterEquipSettingListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v9 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BE4D28(transform, v13);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_1BE4A70(&this->fields.callbackFunc);
  v15 = 1;
  v16 = v9;
  switch ( v9 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v16 = v9;
      goto LABEL_14;
    case 3:
      v16 = 2;
LABEL_14:
      v15 = v9;
LABEL_15:
      this->fields.dispMode = v16;
      this->fields.state = v15;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_21;
    default:
LABEL_16:
      if ( state && dispMode == this->fields.dispMode )
      {
        if ( !callbackFunc )
          return;
        goto LABEL_19;
      }
LABEL_21:
      MasterEquipSettingListViewObject__SetupDisp(this, v14);
      if ( callbackFunc )
LABEL_19:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
      return;
  }
}


void __fastcall MasterEquipSettingListViewObject__InitItem(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall MasterEquipSettingListViewObject__Init_32346708(
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

  if ( (byte_4B62500 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_10020/*"OnClickSelectListView"*/, method);
    byte_4B62500 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BE4D28(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10020/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall MasterEquipSettingListViewObject__OnDestroy(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4B624FA & 1) == 0 )
  {
    sub_1BE4ACC(&NGUITools_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B624FA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_1BE4A70(p_dragObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingListViewObject__SetInput(
        MasterEquipSettingListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  MasterEquipSettingListViewItemDraw_o *v11; // x0

  if ( (byte_4B624FC & 1) == 0 )
  {
    sub_1BE4ACC(&MasterEquipSettingListViewItem_TypeInfo, isInput);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B624FC = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterEquipSettingListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1BE4D28(0LL, v10);
    MasterEquipSettingListViewItemDraw__SetInput(v11, (MasterEquipSettingListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall MasterEquipSettingListViewObject__SetItem(
        MasterEquipSettingListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41717728((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MasterEquipSettingListViewObject__SetItem_32349072(
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
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  MasterEquipSettingListViewItemDraw_o *v10; // x0

  if ( (byte_4B624FF & 1) == 0 )
  {
    sub_1BE4ACC(&MasterEquipSettingListViewItem_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B624FF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewItem_TypeInfo )
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
      sub_1BE4D28(0LL, v8);
    MasterEquipSettingListViewItemDraw__SetItem(
      v10,
      (MasterEquipSettingListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
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

  if ( (byte_4B624F7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B624F7 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipSettingListViewObject_o *)sub_1BE4FE8(v8);
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

  if ( (byte_4B624F8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B624F8 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipSettingListViewObject_o *)sub_1BE4FE8(v8);
  MasterEquipSettingListViewObject__Awake(v11, v12);
}