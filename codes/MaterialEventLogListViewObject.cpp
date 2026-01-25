void MaterialEventLogListViewObject___ctor(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CE9865 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    byte_4CE9865 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MaterialEventLogListViewObject__AttachedIconSetupDisp(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  MaterialEventLogListViewItemDraw_o *v9; // x0

  if ( (byte_4CE9863 & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9863 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C7BD40(0, v7);
    MaterialEventLogListViewItemDraw__SetLastTimeIcon(v9, (MaterialEventLogListViewItem_o *)linkItem, v8);
  }
}


void MaterialEventLogListViewObject__Awake(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CE985C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewItemDraw___);
    byte_4CE985C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C7BD40(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewItemDraw___);
  this->fields.itemDraw = (struct MaterialEventLogListViewItemDraw_o *)Component_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


MaterialEventLogListViewItem_o *MaterialEventLogListViewObject__GetItem(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CE985E & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    byte_4CE985E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialEventLogListViewItem_TypeInfo )
    return (MaterialEventLogListViewItem_o *)this->fields.linkItem;
  return 0;
}


void MaterialEventLogListViewObject__Init(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MaterialEventLogListViewObject__Init_33837244(this, initMode, 0, limitCount, v4);
}


void MaterialEventLogListViewObject__InitItem(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void MaterialEventLogListViewObject__InitPosition(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v3; // x1
  UnityEngine_Transform_o *v4; // x19

  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CE7E59 )
  {
    transform = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v4 )
    sub_1C7BD40(transform, v3);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogListViewObject__Init_33837244(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        int32_t limitCount,
        const MethodInfo *method)
{
  float v5; // s0
  int v6; // s1 OVERLAPPED

  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  MaterialEventLogListViewObject__Init_33837336(
    this,
    initMode,
    callbackFunc,
    v5,
    *(UnityEngine_Vector3_o *)&v6,
    limitCount,
    method);
}


void MaterialEventLogListViewObject__Init_33837336(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v13; // w23
  int32_t dispMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w9
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Action_o *v34; // x19

  if ( (byte_4CE9861 & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    byte_4CE9861 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialEventLogListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(MaterialEventLogListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( (unsigned int)v13 <= 3 )
  {
    v27 = dword_CF56B0[v13];
    this->fields.dispMode = *((_DWORD *)&xmmword_CF5CA0 + v13);
    this->fields.state = v27;
  }
  if ( !state || dispMode != this->fields.dispMode )
    MaterialEventLogListViewObject__SetupDisp(this, limitCount, v26);
  MaterialEventLogListViewObject__AttachedIconSetupDisp(this, v25);
  v34 = this->fields.callbackFunc;
  if ( v34 )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, v28, v29, v30, v31, v32, v33);
    ((void (__fastcall *)(intptr_t, intptr_t))v34->fields.invoke_impl)(v34->fields.method_code, v34->fields.method);
  }
}


void MaterialEventLogListViewObject__LateUpdate(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  MaterialEventLogListViewItem_c *v6; // x10
  MaterialEventLogListViewItem_o *v7; // x1
  MaterialEventLogListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4CE9864 & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    byte_4CE9864 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v6 = (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v7 = v6 == MaterialEventLogListViewItem_TypeInfo ? (MaterialEventLogListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == MaterialEventLogListViewItem_TypeInfo )
      {
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_1C7BD40(0, v7);
        MaterialEventLogListViewItemDraw__LateUpdateItem(itemDraw, v7, this->fields.dispMode, v2);
      }
    }
  }
}


void MaterialEventLogListViewObject__OnDestroy(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CE985D & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE985D = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C7BA8C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void MaterialEventLogListViewObject__SetEnableSelect(
        MaterialEventLogListViewObject_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  MaterialEventLogListViewItemDraw_o *v8; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4CE9860 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9860 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      goto LABEL_13;
    MaterialEventLogListViewItemDraw__SetEnableSelect(v8, isSelect, v7);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (MaterialEventLogListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isSelect, 0);
        return;
      }
LABEL_13:
      sub_1C7BD40(v8, v6);
    }
  }
}


void MaterialEventLogListViewObject__SetInput(
        MaterialEventLogListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CE985F & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE985F = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 && !this->fields.itemDraw )
    sub_1C7BD40(v6, v7);
}


void MaterialEventLogListViewObject__SetItem(
        MaterialEventLogListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44356304((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void MaterialEventLogListViewObject__SetItem_33837060(
        MaterialEventLogListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void MaterialEventLogListViewObject__SetupDisp(
        MaterialEventLogListViewObject_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  MaterialEventLogListViewItemDraw_o *IsEnableSelect; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4CE9862 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9862 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
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
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
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
            0);
          return;
        }
      }
LABEL_20:
      sub_1C7BD40(IsEnableSelect, v9);
    }
  }
}


void MaterialEventLogListViewObject__Start(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.state )
    MaterialEventLogListViewObject__Init_33837244(this, 2, 0, -1, v2);
}


void MaterialEventLogListViewObject__add_callbackFunc(
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

  if ( (byte_4CE985A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE985A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialEventLogListViewObject_o *)sub_1C7C0DC(v8);
  MaterialEventLogListViewObject__remove_callbackFunc(v11, v12, v13);
}


void MaterialEventLogListViewObject__remove_callbackFunc(
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

  if ( (byte_4CE985B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE985B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialEventLogListViewObject_o *)sub_1C7C0DC(v8);
  MaterialEventLogListViewObject__Awake(v11, v12);
}