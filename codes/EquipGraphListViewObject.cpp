void __fastcall EquipGraphListViewObject___ctor(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AA91 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5AA91 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EquipGraphListViewObject__Awake(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5AA88 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewItemDraw___);
    byte_4A5AA88 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewItemDraw___);
  this->fields.itemDraw = (struct EquipGraphListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall EquipGraphListViewObject__CreateDragObject(
        EquipGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A5AA8C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    byte_4A5AA8C = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  EquipGraphListViewObject__Init_38594876((EquipGraphListViewObject_o *)DragObject, 2, v6);
  return v5;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewObject__GetItem(
        EquipGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A5AA8A & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    byte_4A5AA8A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewItem_TypeInfo )
    return (EquipGraphListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__Init(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  unsigned int v11; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A5AA8D & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    byte_4A5AA8D = 1;
  }
  if ( initMode == 4 )
  {
    EquipGraphListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewItem_TypeInfo )
        v11 = initMode;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
    ((void (__fastcall *)(EquipGraphListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      v11 == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1B8880C(transform, v15);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
    if ( v11 <= 3 )
    {
      v22 = dword_BB3DA0[v11];
      this->fields.dispMode = v11;
      this->fields.state = v22;
    }
    if ( !state || dispMode != this->fields.dispMode )
      EquipGraphListViewObject__SetupDisp(this, v19);
    klass = p_callbackFunc->klass;
    if ( p_callbackFunc->klass )
    {
      p_callbackFunc->klass = 0LL;
      sub_1B88554(p_callbackFunc, 0, v20, v21);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
  }
}


void __fastcall EquipGraphListViewObject__InitItem(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__Init_38594876(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__Init_38596028(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewObject__Init_38596112(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall EquipGraphListViewObject__OnClickSelect(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  EquipGraphListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10

  v2 = this;
  if ( (byte_4A5AA8F & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&Method_EquipGraphListViewObject_OnClickSelect__);
    this = (EquipGraphListViewObject_o *)sub_1B885B0(&StringLiteral_9864/*"OnClickSelectListView"*/);
    byte_4A5AA8F = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo
      || (this = (EquipGraphListViewObject_o *)v2->fields.manager) == 0LL
      || (ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL),
          (this = (EquipGraphListViewObject_o *)v2->fields.manager) == 0LL) )
    {
      sub_1B8880C(this, method);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)this,
      (System_String_o *)StringLiteral_9864/*"OnClickSelectListView"*/,
      (Il2CppObject *)v2,
      0LL);
  }
}


void __fastcall EquipGraphListViewObject__OnDestroy(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5AA89 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA89 = 1;
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


void __fastcall EquipGraphListViewObject__OnLongPush(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A5AA90 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9921/*"OnLongPushListView"*/);
    byte_4A5AA90 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B8880C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9921/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall EquipGraphListViewObject__SetInput(
        EquipGraphListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v9; // x1
  EquipGraphListViewItemDraw_o *v10; // x0

  if ( (byte_4A5AA8B & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA8B = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipGraphListViewItem_TypeInfo )
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
      sub_1B8880C(0LL, v9);
    EquipGraphListViewItemDraw__SetInput(v10, (EquipGraphListViewItem_o *)v9, isInput, v6);
  }
}


void __fastcall EquipGraphListViewObject__SetItem(
        EquipGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EquipGraphListViewObject__SetItem_38604036(
        EquipGraphListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall EquipGraphListViewObject__SetupDisp(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EquipGraphListViewItemDraw_o *v9; // x0

  if ( (byte_4A5AA8E & 1) == 0 )
  {
    sub_1B885B0(&EquipGraphListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA8E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EquipGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EquipGraphListViewItem_TypeInfo )
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
    EquipGraphListViewItemDraw__SetItem(v9, (EquipGraphListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void __fastcall EquipGraphListViewObject__add_callbackFunc(
        EquipGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A5AA86 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5AA86 = 1;
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
  EquipGraphListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EquipGraphListViewObject__remove_callbackFunc(
        EquipGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A5AA87 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5AA87 = 1;
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
  EquipGraphListViewObject__Awake(v11, v12);
}