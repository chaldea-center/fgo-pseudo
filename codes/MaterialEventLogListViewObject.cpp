void __fastcall MaterialEventLogListViewObject___ctor(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_438EE9A & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438EE9A = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewObject__AttachedIconSetupDisp(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  MaterialEventLogListViewItemDraw_o *v9; // x0

  if ( (byte_438EE98 & 1) == 0 )
  {
    sub_B775C4(&MaterialEventLogListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EE98 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == MaterialEventLogListViewItem_TypeInfo )
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
    MaterialEventLogListViewItemDraw__SetLastTimeIcon(v9, (MaterialEventLogListViewItem_o *)linkItem, v8);
  }
}


void __fastcall MaterialEventLogListViewObject__Awake(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct MaterialEventLogListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438EE91 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewItemDraw___);
    byte_438EE91 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct MaterialEventLogListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewItemDraw___);
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


MaterialEventLogListViewItem_o *__fastcall MaterialEventLogListViewObject__GetItem(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438EE93 & 1) == 0 )
  {
    sub_B775C4(&MaterialEventLogListViewItem_TypeInfo);
    byte_438EE93 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == MaterialEventLogListViewItem_TypeInfo )
    return (MaterialEventLogListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewObject__Init(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  MaterialEventLogListViewObject__Init_32478960(
    this,
    initMode,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    limitCount,
    v7);
}


void __fastcall MaterialEventLogListViewObject__InitItem(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewObject__InitPosition(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  int v5; // s0

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    sub_B7769C(v3, v4);
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewObject__Init_32478888(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  MaterialEventLogListViewObject__Init_32478960(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    limitCount,
    v9);
}


void __fastcall MaterialEventLogListViewObject__Init_32478960(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w23
  int32_t state; // w24
  __int64 v14; // x10
  unsigned int v15; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w9
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Action_o *v34; // x19

  if ( (byte_438EE96 & 1) == 0 )
  {
    sub_B775C4(&MaterialEventLogListViewItem_TypeInfo);
    byte_438EE96 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v14 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
  {
    if ( (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == MaterialEventLogListViewItem_TypeInfo )
      v15 = initMode;
    else
      v15 = 0;
  }
  else
  {
    v15 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v15 != 0, 0LL);
  ((void (__fastcall *)(MaterialEventLogListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v15 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( v15 <= 3 )
  {
    v27 = dword_331ED50[v15];
    this->fields.dispMode = dword_331B27C[v15];
    this->fields.state = v27;
  }
  if ( !state || dispMode != this->fields.dispMode )
    MaterialEventLogListViewObject__SetupDisp(this, limitCount, v26);
  MaterialEventLogListViewObject__AttachedIconSetupDisp(this, v25);
  v34 = this->fields.callbackFunc;
  if ( v34 )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
    System_Action__Invoke(v34, 0LL);
  }
}


void __fastcall MaterialEventLogListViewObject__LateUpdate(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  MaterialEventLogListViewItem_c *v6; // x10
  MaterialEventLogListViewItem_o *v7; // x1
  MaterialEventLogListViewItemDraw_o *itemDraw; // x0

  if ( (byte_438EE99 & 1) == 0 )
  {
    sub_B775C4(&MaterialEventLogListViewItem_TypeInfo);
    byte_438EE99 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == MaterialEventLogListViewItem_TypeInfo ? (MaterialEventLogListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == MaterialEventLogListViewItem_TypeInfo )
      {
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B7769C(0LL, v7);
        MaterialEventLogListViewItemDraw__LateUpdateItem(itemDraw, v7, this->fields.dispMode, v2);
      }
    }
  }
}


void __fastcall MaterialEventLogListViewObject__OnDestroy(
        MaterialEventLogListViewObject_o *this,
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

  if ( (byte_438EE92 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EE92 = 1;
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


void __fastcall MaterialEventLogListViewObject__SetEnableSelect(
        MaterialEventLogListViewObject_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  MaterialEventLogListViewItemDraw_o *v8; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20

  if ( (byte_438EE95 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EE95 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      goto LABEL_15;
    MaterialEventLogListViewItemDraw__SetEnableSelect(v8, isSelect, v7);
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (MaterialEventLogListViewItemDraw_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( Component_WebViewObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, isSelect, 0LL);
        return;
      }
LABEL_15:
      sub_B7769C(v8, v6);
    }
  }
}


void __fastcall MaterialEventLogListViewObject__SetInput(
        MaterialEventLogListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_438EE94 & 1) == 0 )
  {
    sub_B775C4(&MaterialEventLogListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EE94 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v6 && !this->fields.itemDraw )
    sub_B7769C(v6, v7);
}


void __fastcall MaterialEventLogListViewObject__SetItem(
        MaterialEventLogListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialEventLogListViewObject__SetItem_32478680(
        MaterialEventLogListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialEventLogListViewObject__SetupDisp(
        MaterialEventLogListViewObject_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 v6; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  MaterialEventLogListViewItemDraw_o *IsEnableSelect; // x0
  UnityEngine_Behaviour_o *Component_WebViewObject; // x20

  if ( (byte_438EE97 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_B775C4(&MaterialEventLogListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EE97 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == MaterialEventLogListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v7 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    IsEnableSelect = this->fields.itemDraw;
    if ( !IsEnableSelect )
      goto LABEL_22;
    MaterialEventLogListViewItemDraw__SetItem(
      IsEnableSelect,
      (MaterialEventLogListViewItem_o *)linkItem,
      this->fields.dispMode,
      limitCount,
      v10);
    Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      IsEnableSelect = this->fields.itemDraw;
      if ( IsEnableSelect )
      {
        IsEnableSelect = (MaterialEventLogListViewItemDraw_o *)MaterialEventLogListViewItemDraw__IsEnableSelect(
                                                                 IsEnableSelect,
                                                                 v9);
        if ( Component_WebViewObject )
        {
          UnityEngine_Behaviour__set_enabled(Component_WebViewObject, (unsigned __int8)IsEnableSelect & 1, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B7769C(IsEnableSelect, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewObject__Start(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    MaterialEventLogListViewObject__Init_32478960(
      this,
      2,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      -1,
      v3);
  }
}


void __fastcall MaterialEventLogListViewObject__add_callbackFunc(
        MaterialEventLogListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialEventLogListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438EE8F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438EE8F = 1;
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
  MaterialEventLogListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialEventLogListViewObject__remove_callbackFunc(
        MaterialEventLogListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialEventLogListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438EE90 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438EE90 = 1;
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
  MaterialEventLogListViewObject__Awake(v11, v12);
}