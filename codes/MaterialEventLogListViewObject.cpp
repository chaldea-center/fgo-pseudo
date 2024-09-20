void __fastcall MaterialEventLogListViewObject___ctor(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A568FA & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A568FA = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewObject__AttachedIconSetupDisp(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  MaterialEventLogListViewItemDraw_o *v9; // x0

  if ( (byte_4A568F8 & 1) == 0 )
  {
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568F8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
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
    MaterialEventLogListViewItemDraw__SetLastTimeIcon(v9, (MaterialEventLogListViewItem_o *)linkItem, v8);
  }
}


void __fastcall MaterialEventLogListViewObject__Awake(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4A568F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewItemDraw___);
    byte_4A568F1 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewItemDraw___);
  this->fields.itemDraw = (struct MaterialEventLogListViewItemDraw_o *)Component_object;
  sub_1B88554(&this->fields.itemDraw, Component_object);
}


MaterialEventLogListViewItem_o *__fastcall MaterialEventLogListViewObject__GetItem(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A568F3 & 1) == 0 )
  {
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    byte_4A568F3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialEventLogListViewItem_TypeInfo )
    return (MaterialEventLogListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall MaterialEventLogListViewObject__Init(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MaterialEventLogListViewObject__Init_31225760(this, initMode, 0LL, limitCount, v4);
}


void __fastcall MaterialEventLogListViewObject__InitItem(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall MaterialEventLogListViewObject__InitPosition(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1
  UnityEngine_Transform_o *v4; // x19

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v4 = transform;
  if ( !byte_4A55CE1 )
  {
    transform = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v4 )
    sub_1B8880C(transform, v3);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewObject__Init_31225760(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        int32_t limitCount,
        const MethodInfo *method)
{
  float v5; // s0
  int v6; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  MaterialEventLogListViewObject__Init_31225852(
    this,
    initMode,
    callbackFunc,
    v5,
    *(UnityEngine_Vector3_o *)&v6,
    limitCount,
    method);
}


void __fastcall MaterialEventLogListViewObject__Init_31225852(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v13; // w23
  int32_t dispMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  struct System_Action_o **p_callbackFunc; // x22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  int32_t v21; // w9
  struct System_Action_o *v22; // x19

  if ( (byte_4A568F6 & 1) == 0 )
  {
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    byte_4A568F6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialEventLogListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(MaterialEventLogListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1B88554(&this->fields.callbackFunc, callbackFunc);
  if ( (unsigned int)v13 <= 3 )
  {
    v21 = dword_BB4440[v13];
    this->fields.dispMode = *((_DWORD *)&xmmword_BB49C0 + v13);
    this->fields.state = v21;
  }
  if ( !state || dispMode != this->fields.dispMode )
    MaterialEventLogListViewObject__SetupDisp(this, limitCount, v20);
  MaterialEventLogListViewObject__AttachedIconSetupDisp(this, v19);
  v22 = this->fields.callbackFunc;
  if ( v22 )
  {
    *p_callbackFunc = 0LL;
    sub_1B88554(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v22->fields.m_target)(
      v22->fields.original_method_info,
      *(_QWORD *)&v22->fields.extra_arg);
  }
}


void __fastcall MaterialEventLogListViewObject__LateUpdate(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  MaterialEventLogListViewItem_c *v6; // x10
  MaterialEventLogListViewItem_o *v7; // x1
  MaterialEventLogListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4A568F9 & 1) == 0 )
  {
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    byte_4A568F9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == MaterialEventLogListViewItem_TypeInfo ? (MaterialEventLogListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == MaterialEventLogListViewItem_TypeInfo )
      {
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_1B8880C(0LL, v7);
        MaterialEventLogListViewItemDraw__LateUpdateItem(itemDraw, v7, this->fields.dispMode, v2);
      }
    }
  }
}


void __fastcall MaterialEventLogListViewObject__OnDestroy(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4A568F2 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568F2 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0LL);
    *p_dragObject = 0LL;
    sub_1B88554(p_dragObject, 0LL);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4A568F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568F5 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      goto LABEL_13;
    MaterialEventLogListViewItemDraw__SetEnableSelect(v8, isSelect, v7);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (MaterialEventLogListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isSelect, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(v8, v6);
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

  if ( (byte_4A568F4 & 1) == 0 )
  {
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568F4 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v6 && !this->fields.itemDraw )
    sub_1B8880C(v6, v7);
}


void __fastcall MaterialEventLogListViewObject__SetItem(
        MaterialEventLogListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialEventLogListViewObject__SetItem_31225576(
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
  __int64 methodPtr_low; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  MaterialEventLogListViewItemDraw_o *IsEnableSelect; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4A568F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568F7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    IsEnableSelect = this->fields.itemDraw;
    if ( !IsEnableSelect )
      goto LABEL_20;
    MaterialEventLogListViewItemDraw__SetItem(
      IsEnableSelect,
      (MaterialEventLogListViewItem_o *)linkItem,
      this->fields.dispMode,
      limitCount,
      v10);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      IsEnableSelect = this->fields.itemDraw;
      if ( IsEnableSelect )
      {
        IsEnableSelect = (MaterialEventLogListViewItemDraw_o *)MaterialEventLogListViewItemDraw__IsEnableSelect(
                                                                 IsEnableSelect,
                                                                 v9);
        if ( Component_object )
        {
          UnityEngine_Behaviour__set_enabled(
            (UnityEngine_Behaviour_o *)Component_object,
            (unsigned __int8)IsEnableSelect & 1,
            0LL);
          return;
        }
      }
LABEL_20:
      sub_1B8880C(IsEnableSelect, v9);
    }
  }
}


void __fastcall MaterialEventLogListViewObject__Start(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.state )
    MaterialEventLogListViewObject__Init_31225760(this, 2, 0LL, -1, v2);
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

  if ( (byte_4A568EF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A568EF = 1;
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
  v11 = (MaterialEventLogListViewObject_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A568F0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A568F0 = 1;
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
  v11 = (MaterialEventLogListViewObject_o *)sub_1B88ACC(v8);
  MaterialEventLogListViewObject__Awake(v11, v12);
}