void __fastcall ServantStatusVoiceListViewObject___ctor(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF19 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBF19 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantStatusVoiceListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBF12 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBF12 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct ServantStatusVoiceListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantStatusVoiceListViewObject__CreateDragObject(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  ServantStatusVoiceListViewObject_o *v8; // x20
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBF16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, (_DWORD)method, v2, v3);
    byte_42EBF16 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  v8 = (ServantStatusVoiceListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusVoiceListViewObject__Init(v8, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
  return v7;
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewObject__GetItem(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EBF14 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusVoiceListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBF14 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
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
  int32_t v7; // w20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ListViewItem_o *linkItem; // x22
  __int64 v13; // x10
  int32_t state; // w24
  int32_t dispMode; // w23
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v32; // w9
  int32_t v33; // w8
  System_Action_o *klass; // x19
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v36; // x2

  v7 = initMode;
  if ( (byte_42EBF17 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    sub_B5D5C4(&ServantStatusVoiceListViewItem_TypeInfo, v9, v10, v11);
    byte_42EBF17 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v13 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v13)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    v7 = 0;
LABEL_7:
    state = this->fields.state;
    dispMode = this->fields.dispMode;
    ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
    ((void (__fastcall *)(ServantStatusVoiceListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      v7 == 3,
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
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.callbackFunc,
          (System_Int32_array **)callbackFunc,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        v32 = 1;
        v33 = v7;
        switch ( v7 )
        {
          case 0:
          case 2:
            goto LABEL_13;
          case 1:
            v33 = v7;
            goto LABEL_12;
          case 3:
            v33 = 2;
LABEL_12:
            v32 = v7;
LABEL_13:
            this->fields.dispMode = v33;
            this->fields.state = v32;
            goto LABEL_14;
          case 5:
            this->fields.state = 1;
            goto LABEL_18;
          default:
LABEL_14:
            if ( !state || dispMode != this->fields.dispMode )
LABEL_18:
              ServantStatusVoiceListViewObject__SetupDisp(this, v25);
            klass = (System_Action_o *)p_callbackFunc->klass;
            if ( p_callbackFunc->klass )
            {
              p_callbackFunc->klass = 0LL;
              sub_B5D560(p_callbackFunc, 0LL, v26, v27, v28, v29, v30, v31);
              System_Action__Invoke(klass, 0LL);
            }
            break;
        }
        return;
      }
    }
LABEL_29:
    sub_B5D69C(transform, v17);
  }
  if ( v7 != 4 )
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
        v36);
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
void __fastcall ServantStatusVoiceListViewObject__Init_31453352(
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
void __fastcall ServantStatusVoiceListViewObject__Init_31454880(
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
void __fastcall ServantStatusVoiceListViewObject__Init_31455436(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EBF13 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBF13 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall ServantStatusVoiceListViewObject__SetInput(
        ServantStatusVoiceListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v10; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11
  struct ListViewItem_o *v13; // x1
  ServantStatusVoiceListViewItemDraw_o *v14; // x0

  if ( (byte_42EBF15 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusVoiceListViewItem_TypeInfo, v6, v7, v8);
    byte_42EBF15 = 1;
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
      && (v12 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
    {
      if ( (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
        v13 = this->fields.linkItem;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v13);
    ServantStatusVoiceListViewItemDraw__SetInput(v14, (ServantStatusVoiceListViewItem_o *)v13, isInput, v10);
  }
}


void __fastcall ServantStatusVoiceListViewObject__SetItem(
        ServantStatusVoiceListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantStatusVoiceListViewObject__SetItem_31456636(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x10
  bool v10; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  ServantStatusVoiceListViewItemDraw_o *v14; // x0

  if ( (byte_42EBF18 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusVoiceListViewItem_TypeInfo, v5, v6, v7);
    byte_42EBF18 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v10 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v12);
    ServantStatusVoiceListViewItemDraw__SetItem(
      v14,
      (ServantStatusVoiceListViewItem_o *)linkItem,
      this->fields.dispMode,
      v13);
  }
}


void __fastcall ServantStatusVoiceListViewObject__add_callbackFunc(
        ServantStatusVoiceListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantStatusVoiceListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EBF10 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBF10 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantStatusVoiceListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall ServantStatusVoiceListViewObject__remove_callbackFunc(
        ServantStatusVoiceListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantStatusVoiceListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EBF11 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBF11 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantStatusVoiceListViewObject__Awake(v12, v13);
}