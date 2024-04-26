void __fastcall ServantStatusVoiceListViewObject___ctor(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_435440A & 1) == 0 )
  {
    sub_B70694(&ListViewObject_TypeInfo);
    byte_435440A = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantStatusVoiceListViewObject__Awake(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantStatusVoiceListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4354403 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewItemDraw___);
    byte_4354403 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7076C(0LL, v3);
  Component_srcLineSprite = (struct ServantStatusVoiceListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantStatusVoiceListViewObject__CreateDragObject(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  ServantStatusVoiceListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4354407 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    byte_4354407 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___)) == 0LL) )
  {
    sub_B7076C(DragObject, v4);
  }
  v6 = (ServantStatusVoiceListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusVoiceListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


void __fastcall ServantStatusVoiceListViewObject__EventMoveEnd(
        ServantStatusVoiceListViewObject_o *this,
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
    sub_B70630(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewObject__GetItem(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_4354405 & 1) == 0 )
  {
    sub_B70694(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4354405 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
    return (ServantStatusVoiceListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall ServantStatusVoiceListViewObject__Init(
        ServantStatusVoiceListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x22
  __int64 v10; // x10
  int32_t state; // w24
  int32_t dispMode; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x22
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
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v33; // x2

  if ( (byte_4354408 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4354408 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v10 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    initMode = 0;
LABEL_7:
    state = this->fields.state;
    dispMode = this->fields.dispMode;
    ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0LL);
    ((void (__fastcall *)(ServantStatusVoiceListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      initMode == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
        this->fields.callbackFunc = callbackFunc;
        p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.callbackFunc,
          (System_Int32_array **)callbackFunc,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        v29 = 1;
        v30 = initMode;
        switch ( initMode )
        {
          case 0:
          case 2:
            goto LABEL_13;
          case 1:
            v30 = initMode;
            goto LABEL_12;
          case 3:
            v30 = 2;
LABEL_12:
            v29 = initMode;
LABEL_13:
            this->fields.dispMode = v30;
            this->fields.state = v29;
            goto LABEL_14;
          case 5:
            this->fields.state = 1;
            goto LABEL_18;
          default:
LABEL_14:
            if ( !state || dispMode != this->fields.dispMode )
LABEL_18:
              ServantStatusVoiceListViewObject__SetupDisp(this, v22);
            klass = (System_Action_o *)p_callbackFunc->klass;
            if ( p_callbackFunc->klass )
            {
              p_callbackFunc->klass = 0LL;
              sub_B70630(p_callbackFunc, 0LL, v23, v24, v25, v26, v27, v28);
              System_Action__Invoke(klass, 0LL);
            }
            break;
        }
        return;
      }
    }
LABEL_29:
    sub_B7076C(transform, v14);
  }
  if ( initMode != 4 )
    goto LABEL_7;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    transform = (UnityEngine_Transform_o *)this->fields.itemDraw;
    if ( transform )
    {
      ServantStatusVoiceListViewItemDraw__SetPlay(
        (ServantStatusVoiceListViewItemDraw_o *)transform,
        (ServantStatusVoiceListViewItem_o *)linkItem,
        v33);
      return;
    }
    goto LABEL_29;
  }
}


void __fastcall ServantStatusVoiceListViewObject__InitItem(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewObject__Init_29776092(
        ServantStatusVoiceListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusVoiceListViewObject__Init(
    this,
    initMode,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewObject__Init_29777620(
        ServantStatusVoiceListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusVoiceListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewObject__Init_29778176(
        ServantStatusVoiceListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusVoiceListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall ServantStatusVoiceListViewObject__OnDestroy(
        ServantStatusVoiceListViewObject_o *this,
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

  if ( (byte_4354404 & 1) == 0 )
  {
    sub_B70694(&NGUITools_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354404 = 1;
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
    sub_B70630(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantStatusVoiceListViewObject__SetInput(
        ServantStatusVoiceListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  ServantStatusVoiceListViewItemDraw_o *v10; // x0

  if ( (byte_4354406 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4354406 = 1;
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
      && (v8 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
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
      sub_B7076C(0LL, v9);
    ServantStatusVoiceListViewItemDraw__SetInput(v10, (ServantStatusVoiceListViewItem_o *)v9, isInput, v6);
  }
}


void __fastcall ServantStatusVoiceListViewObject__SetItem(
        ServantStatusVoiceListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33972948((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantStatusVoiceListViewObject__SetItem_29779384(
        ServantStatusVoiceListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantStatusVoiceListViewObject__SetupDisp(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ServantStatusVoiceListViewItemDraw_o *v9; // x0

  if ( (byte_4354409 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4354409 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
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
      sub_B7076C(0LL, v7);
    ServantStatusVoiceListViewItemDraw__SetItem(
      v9,
      (ServantStatusVoiceListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void __fastcall ServantStatusVoiceListViewObject__add_callbackFunc(
        ServantStatusVoiceListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4354401 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4354401 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ServantStatusVoiceListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantStatusVoiceListViewObject__remove_callbackFunc(
        ServantStatusVoiceListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4354402 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4354402 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ServantStatusVoiceListViewObject__Awake(v11, v12);
}