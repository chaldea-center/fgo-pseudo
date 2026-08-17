void MaterialEventLogListViewObject___ctor(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B780 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596B780 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MaterialEventLogListViewObject__AttachedIconSetupDisp(
        MaterialEventLogListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  MaterialEventLogListViewItemDraw_o *v11; // x0

  if ( (byte_596B77E & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B77E = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    MaterialEventLogListViewItemDraw__SetLastTimeIcon(v11, (MaterialEventLogListViewItem_o *)linkItem, v10);
  }
}


void MaterialEventLogListViewObject__Awake(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596B777 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewItemDraw___);
    byte_596B777 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewItemDraw___);
  this->fields.itemDraw = (struct MaterialEventLogListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
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

  if ( (byte_596B779 & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogListViewItem_TypeInfo);
    byte_596B779 = 1;
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

  MaterialEventLogListViewObject__Init_40039472(this, initMode, 0, limitCount, v4);
}


void MaterialEventLogListViewObject__InitItem(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void MaterialEventLogListViewObject__InitPosition(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1
  UnityEngine_Transform_o *v4; // x19

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = transform;
  if ( !byte_5969AE0 )
  {
    transform = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v4 )
    sub_2213CDC(transform, v3);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogListViewObject__Init_40039472(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        int32_t limitCount,
        const MethodInfo *method)
{
  float v5; // s0
  int v6; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  MaterialEventLogListViewObject__Init_40039564(
    this,
    initMode,
    callbackFunc,
    v5,
    *(UnityEngine_Vector3_o *)&v6,
    limitCount,
    method);
}


void MaterialEventLogListViewObject__Init_40039564(
        MaterialEventLogListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  unsigned int v14; // w23
  int32_t dispMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  int32_t v28; // w9
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Action_o *v35; // x19

  if ( (byte_596B77C & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogListViewItem_TypeInfo);
    byte_596B77C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MaterialEventLogListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == MaterialEventLogListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0);
  ((void (__fastcall *)(MaterialEventLogListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v14 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v18);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( v14 <= 3 )
  {
    v28 = dword_E9CE90[v14];
    this->fields.dispMode = *((_DWORD *)&xmmword_E9C5F0 + v14);
    this->fields.state = v28;
  }
  if ( !state || dispMode != this->fields.dispMode )
    MaterialEventLogListViewObject__SetupDisp(this, limitCount, v27);
  MaterialEventLogListViewObject__AttachedIconSetupDisp(this, v26);
  v35 = this->fields.callbackFunc;
  if ( v35 )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v29, v30, v31, v32, v33, v34);
    ((void (__fastcall *)(intptr_t, intptr_t))v35->fields.invoke_impl)(v35->fields.method_code, v35->fields.method);
  }
}


void MaterialEventLogListViewObject__LateUpdate(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  MaterialEventLogListViewItemDraw_o *itemDraw; // x0

  if ( (byte_596B77F & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogListViewItem_TypeInfo);
    byte_596B77F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialEventLogListViewItem_TypeInfo )
    {
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_2213CDC(0, linkItem);
      MaterialEventLogListViewItemDraw__LateUpdateItem(
        itemDraw,
        (MaterialEventLogListViewItem_o *)linkItem,
        this->fields.dispMode,
        v2);
    }
  }
}


void MaterialEventLogListViewObject__OnDestroy(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596B778 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B778 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogListViewObject__SetEnableSelect(
        MaterialEventLogListViewObject_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  MaterialEventLogListViewItemDraw_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_596B77B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B77B = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSelect, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      goto LABEL_13;
    MaterialEventLogListViewItemDraw__SetEnableSelect(v8, isSelect, v7);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
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
      sub_2213CDC(v8, v6);
    }
  }
}


void MaterialEventLogListViewObject__SetInput(
        MaterialEventLogListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_596B77A & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B77A = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v8 && !this->fields.itemDraw )
    sub_2213CDC(v8, v9);
}


void MaterialEventLogListViewObject__SetItem(
        MaterialEventLogListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void MaterialEventLogListViewObject__SetItem_40039288(
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x4
  MaterialEventLogListViewItemDraw_o *IsEnableSelect; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_596B77D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_2213A60(&MaterialEventLogListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B77D = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
      v12);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      IsEnableSelect = this->fields.itemDraw;
      if ( IsEnableSelect )
      {
        IsEnableSelect = (MaterialEventLogListViewItemDraw_o *)MaterialEventLogListViewItemDraw__IsEnableSelect(
                                                                 IsEnableSelect,
                                                                 v11);
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
      sub_2213CDC(IsEnableSelect, v11);
    }
  }
}


void MaterialEventLogListViewObject__Start(MaterialEventLogListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.state )
    MaterialEventLogListViewObject__Init_40039472(this, 2, 0, -1, v2);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MaterialEventLogListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B775 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B775 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MaterialEventLogListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  MaterialEventLogListViewObject__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MaterialEventLogListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B776 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B776 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MaterialEventLogListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  MaterialEventLogListViewObject__Awake(v13, v14);
}