void __fastcall SupportServantListViewObject___ctor(SupportServantListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40FDA3F & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FDA3F = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SupportServantListViewObject__Awake(SupportServantListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct SupportServantListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FDA36 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewItemDraw___, method);
    byte_40FDA36 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct SupportServantListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dispObject,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SupportServantListViewObject__CreateDragObject(
        SupportServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  SupportServantListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDA3A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___, method);
    byte_40FDA3A = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     DragObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportServantListViewObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  v6 = (SupportServantListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  SupportServantListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v4;
}


void __fastcall SupportServantListViewObject__EventMoveEnd(
        SupportServantListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields.isOpenAfter = 0;
  p_callbackFunc[-1].fields.adjustHeight = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


SupportServantListViewItem_o *__fastcall SupportServantListViewObject__GetItem(
        SupportServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FDA38 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, method);
    byte_40FDA38 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == SupportServantListViewItem_TypeInfo )
    return (SupportServantListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewObject__Init(
        SupportServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  int32_t v13; // w24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v15; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w9
  int32_t v31; // w8
  System_Action_o *klass; // x19

  if ( (byte_40FDA3B & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40FDA3B = 1;
  }
  if ( initMode == 4 )
  {
    SupportServantListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    if ( linkItem
      && (v12 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
    {
      if ( (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == SupportServantListViewItem_TypeInfo )
        v13 = initMode;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
    ((void (__fastcall *)(SupportServantListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      v13 == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(v15, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callbackFunc,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v30 = 1;
    v31 = v13;
    switch ( v13 )
    {
      case 0:
      case 2:
        goto LABEL_18;
      case 1:
        v31 = v13;
        goto LABEL_16;
      case 3:
        v31 = 2;
LABEL_16:
        v30 = v13;
        goto LABEL_18;
      case 5:
        ListViewObject__SetInput((ListViewObject_o *)this, 1, 0LL);
        v30 = 4;
        v31 = 2;
LABEL_18:
        this->fields.dispMode = v31;
        this->fields.state = v30;
        break;
      default:
        break;
    }
    if ( !state || dispMode != this->fields.dispMode )
      SupportServantListViewObject__SetupDisp(this, v23);
    klass = (System_Action_o *)p_callbackFunc->klass;
    if ( p_callbackFunc->klass )
    {
      p_callbackFunc->klass = 0LL;
      sub_B16F98(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
      System_Action__Invoke(klass, 0LL);
    }
  }
}


void __fastcall SupportServantListViewObject__InitItem(SupportServantListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewObject__Init_31950280(
        SupportServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SupportServantListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewObject__Init_31952072(
        SupportServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SupportServantListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewObject__Init_31952136(
        SupportServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SupportServantListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall SupportServantListViewObject__OnClickItem(
        SupportServantListViewObject_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *manager; // x0
  UnityEngine_Component_o *v4; // x0

  if ( (byte_40FDA3E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9938/*"OnClickSelectListView"*/, method);
    byte_40FDA3E = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( !manager
      || (ListViewManager__ClearScrollBarValue(manager, 1, 0LL),
          (v4 = (UnityEngine_Component_o *)this->fields.manager) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Component__SendMessage(v4, (System_String_o *)StringLiteral_9938/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall SupportServantListViewObject__OnDestroy(SupportServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDA37 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FDA37 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall SupportServantListViewObject__OnLongPush(
        SupportServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FDA3D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9991/*"OnLongPushListView"*/, method);
    byte_40FDA3D = 1;
  }
  if ( this->fields.state != 4 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9991/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewObject__SetInput(
        SupportServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  struct ListViewItem_o *v10; // x1
  SupportServantListViewItemDraw_o *v11; // x0

  if ( (byte_40FDA39 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isInput);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v5);
    byte_40FDA39 = 1;
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
      && (v9 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
    {
      if ( (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == SupportServantListViewItem_TypeInfo )
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
      sub_B170D4();
    SupportServantListViewItemDraw__SetInput(v11, (SupportServantListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall SupportServantListViewObject__SetItem(
        SupportServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SupportServantListViewObject__SetItem_31959516(
        SupportServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall SupportServantListViewObject__SetupDisp(SupportServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  SupportServantListViewItemDraw_o *v9; // x0

  if ( (byte_40FDA3C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v3);
    byte_40FDA3C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (SupportServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == SupportServantListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
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
      sub_B170D4();
    SupportServantListViewItemDraw__SetItem(v9, (SupportServantListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void __fastcall SupportServantListViewObject__add_callbackFunc(
        SupportServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FDA34 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDA34 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportServantListViewObject__remove_callbackFunc(
        SupportServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FDA35 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDA35 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportServantListViewObject__Awake(v11, v12);
}