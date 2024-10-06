void __fastcall ServantStatusBattleListViewObject___ctor(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6B9A6 & 1) == 0 )
  {
    sub_1B90010(&ListViewObject_TypeInfo, method);
    byte_4A6B9A6 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantStatusBattleListViewObject__Awake(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A6B99E & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewItemDraw___, method);
    byte_4A6B99E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B9026C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusBattleListViewItemDraw_o *)Component_object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall ServantStatusBattleListViewObject__CreateDragObject(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A6B9A2 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___, method);
    byte_4A6B9A2 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___)) == 0LL) )
  {
    sub_1B9026C(DragObject, v4);
  }
  ServantStatusBattleListViewObject__Init_31674456((ServantStatusBattleListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void __fastcall ServantStatusBattleListViewObject__EventMoveEnd(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc[-1].fields.isMine = 0;
  *((_DWORD *)&p_callbackFunc[-1].fields.isMine + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B8FFB4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


ServantStatusBattleListViewItem_o *__fastcall ServantStatusBattleListViewObject__GetItem(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A6B9A0 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusBattleListViewItem_TypeInfo, method);
    byte_4A6B9A0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ServantStatusBattleListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusBattleListViewItem_TypeInfo )
    return (ServantStatusBattleListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewObject__Init(
        ServantStatusBattleListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w9
  int32_t v23; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A6B9A3 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusBattleListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A6B9A3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(ServantStatusBattleListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusBattleListViewItem_TypeInfo )
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
  ((void (__fastcall *)(ServantStatusBattleListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B9026C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  v22 = 1;
  v23 = v11;
  switch ( v11 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v23 = v11;
      goto LABEL_14;
    case 3:
      v23 = 2;
LABEL_14:
      v22 = v11;
LABEL_15:
      this->fields.dispMode = v23;
      this->fields.state = v22;
      goto LABEL_16;
    case 4:
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        ServantStatusBattleListViewObject__SetupDisp(this, v19);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1B8FFB4(p_callbackFunc, 0, v20, v21);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall ServantStatusBattleListViewObject__InitItem(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewObject__Init_31674456(
        ServantStatusBattleListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A6A9C1 = 1;
  }
  ServantStatusBattleListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewObject__Init_31675596(
        ServantStatusBattleListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A6A9C1 = 1;
  }
  ServantStatusBattleListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewObject__Init_31676204(
        ServantStatusBattleListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A6A9C1 = 1;
  }
  ServantStatusBattleListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall ServantStatusBattleListViewObject__OnClickButton(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A6B9A5 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_9855/*"OnClickListViewButton"*/, method);
    byte_4A6B9A5 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B9026C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9855/*"OnClickListViewButton"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall ServantStatusBattleListViewObject__OnDestroy(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A6B99F & 1) == 0 )
  {
    sub_1B90010(&NGUITools_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A6B99F = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B8FFB4(p_dragObject, 0, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewObject__SetInput(
        ServantStatusBattleListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  ServantStatusBattleListViewItemDraw_o *v11; // x0

  if ( (byte_4A6B9A1 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B90010(&ServantStatusBattleListViewItem_TypeInfo, v5);
    byte_4A6B9A1 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(ServantStatusBattleListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusBattleListViewItem_TypeInfo )
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
      sub_1B9026C(0LL, v10);
    ServantStatusBattleListViewItemDraw__SetInput(v11, (ServantStatusBattleListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall ServantStatusBattleListViewObject__SetItem(
        ServantStatusBattleListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40810748((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantStatusBattleListViewObject__SetItem_31678140(
        ServantStatusBattleListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantStatusBattleListViewObject__SetupDisp(
        ServantStatusBattleListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantStatusBattleListViewItemDraw_o *v10; // x0

  if ( (byte_4A6B9A4 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&ServantStatusBattleListViewItem_TypeInfo, v3);
    byte_4A6B9A4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ServantStatusBattleListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusBattleListViewItem_TypeInfo )
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
      sub_1B9026C(0LL, v8);
    ServantStatusBattleListViewItemDraw__SetItem(
      v10,
      (ServantStatusBattleListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


void __fastcall ServantStatusBattleListViewObject__add_callbackFunc(
        ServantStatusBattleListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusBattleListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A6B99C & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, value);
    byte_4A6B99C = 1;
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
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusBattleListViewObject_o *)sub_1B9052C(v8);
  ServantStatusBattleListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantStatusBattleListViewObject__remove_callbackFunc(
        ServantStatusBattleListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusBattleListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A6B99D & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, value);
    byte_4A6B99D = 1;
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
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusBattleListViewObject_o *)sub_1B9052C(v8);
  ServantStatusBattleListViewObject__Awake(v11, v12);
}