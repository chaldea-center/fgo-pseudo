void __fastcall SelectImageLimitListViewObject___ctor(SelectImageLimitListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4219E75 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewObject_TypeInfo, method);
    byte_4219E75 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SelectImageLimitListViewObject__Awake(SelectImageLimitListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct SelectImageLimitListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4219E6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewItemDraw___, method);
    byte_4219E6D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B0D97C(0LL);
  Component_srcLineSprite = (struct SelectImageLimitListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B0D840(
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
UnityEngine_GameObject_o *__fastcall SelectImageLimitListViewObject__CreateDragObject(
        SelectImageLimitListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  SelectImageLimitListViewObject_o *v5; // x20
  const MethodInfo *v6; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4219E71 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___, method);
    byte_4219E71 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___)) == 0LL) )
  {
    sub_B0D97C(DragObject);
  }
  v5 = (SelectImageLimitListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  SelectImageLimitListViewObject__Init(v5, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v6);
  return v4;
}


SelectImageLimitListViewItem_o *__fastcall SelectImageLimitListViewObject__GetItem(
        SelectImageLimitListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_4219E6F & 1) == 0 )
  {
    sub_B0D8A4(&SelectImageLimitListViewItem_TypeInfo, method);
    byte_4219E6F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&SelectImageLimitListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (SelectImageLimitListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == SelectImageLimitListViewItem_TypeInfo )
    return (SelectImageLimitListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewObject__Init(
        SelectImageLimitListViewObject_o *this,
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
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t v29; // w9
  int32_t v30; // w8
  System_Action_o *klass; // x19

  if ( (byte_4219E72 & 1) == 0 )
  {
    sub_B0D8A4(&SelectImageLimitListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4219E72 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v12 = *(&SelectImageLimitListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (SelectImageLimitListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == SelectImageLimitListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(SelectImageLimitListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v29 = 1;
  v30 = v13;
  switch ( v13 )
  {
    case 0:
    case 2:
      goto LABEL_16;
    case 1:
      v30 = v13;
      goto LABEL_15;
    case 3:
      v30 = 2;
LABEL_15:
      v29 = v13;
LABEL_16:
      this->fields.dispMode = v30;
      this->fields.state = v29;
      goto LABEL_17;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_19;
    default:
LABEL_17:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_19:
        SelectImageLimitListViewObject__SetupDisp(this, v22);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B0D840(p_callbackFunc, 0LL, v23, v24, v25, v26, v27, v28);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


void __fastcall SelectImageLimitListViewObject__InitItem(
        SelectImageLimitListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewObject__Init_33611420(
        SelectImageLimitListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SelectImageLimitListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewObject__Init_33612684(
        SelectImageLimitListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SelectImageLimitListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewObject__Init_33612748(
        SelectImageLimitListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SelectImageLimitListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall SelectImageLimitListViewObject__OnClickSelect(
        SelectImageLimitListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4219E74 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9994/*"OnClickSelectListView"*/, method);
    byte_4219E74 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B0D97C(0LL);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9994/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall SelectImageLimitListViewObject__OnDestroy(
        SelectImageLimitListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4219E6E & 1) == 0 )
  {
    sub_B0D8A4(&NGUITools_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4219E6E = 1;
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
    sub_B0D840(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewObject__SetInput(
        SelectImageLimitListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  struct ListViewItem_o *v10; // x1
  SelectImageLimitListViewItemDraw_o *v11; // x0

  if ( (byte_4219E70 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isInput);
    sub_B0D8A4(&SelectImageLimitListViewItem_TypeInfo, v5);
    byte_4219E70 = 1;
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
      && (v9 = *(&SelectImageLimitListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
    {
      if ( (SelectImageLimitListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == SelectImageLimitListViewItem_TypeInfo )
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
      sub_B0D97C(0LL);
    SelectImageLimitListViewItemDraw__SetInput(v11, (SelectImageLimitListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall SelectImageLimitListViewObject__SetItem(
        SelectImageLimitListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_32816272((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SelectImageLimitListViewObject__SetItem_33613816(
        SelectImageLimitListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall SelectImageLimitListViewObject__SetupDisp(
        SelectImageLimitListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  SelectImageLimitListViewItemDraw_o *v9; // x0

  if ( (byte_4219E73 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SelectImageLimitListViewItem_TypeInfo, v3);
    byte_4219E73 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&SelectImageLimitListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (SelectImageLimitListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == SelectImageLimitListViewItem_TypeInfo )
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
      sub_B0D97C(0LL);
    SelectImageLimitListViewItemDraw__SetItem(v9, (SelectImageLimitListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void __fastcall SelectImageLimitListViewObject__add_callbackFunc(
        SelectImageLimitListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectImageLimitListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4219E6B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4219E6B = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
  SelectImageLimitListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SelectImageLimitListViewObject__remove_callbackFunc(
        SelectImageLimitListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectImageLimitListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4219E6C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4219E6C = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
  SelectImageLimitListViewObject__Awake(v11, v12);
}