void __fastcall DeckListViewObject___ctor(DeckListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4386DFD & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_4386DFD = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall DeckListViewObject__Awake(DeckListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4386DF7 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_DeckListViewItemDraw___);
    byte_4386DF7 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  this->fields.itemDraw = (struct DeckListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             dispObject,
                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_DeckListViewItemDraw___);
  sub_B77560(&this->fields.itemDraw);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall DeckListViewObject__CreateDragObject(
        DeckListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  DeckListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4386DFA & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_DeckListViewObject___);
    byte_4386DFA = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_DeckListViewObject___)) == 0LL) )
  {
    sub_B7769C(DragObject, v4);
  }
  v6 = (DeckListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  DeckListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


void __fastcall DeckListViewObject__EventMoveEnd(DeckListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 8) = 0;
  *((_DWORD *)p_callbackFunc - 1) = 1;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B77560(p_callbackFunc);
    System_Action__Invoke(v3, 0LL);
  }
}


DeckListViewItem_o *__fastcall DeckListViewObject__GetItem(DeckListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_4386DF9 & 1) == 0 )
  {
    sub_B775C4(&DeckListViewItem_TypeInfo);
    byte_4386DF9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&DeckListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (DeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == DeckListViewItem_TypeInfo )
    return (DeckListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall DeckListViewObject__Init(
        DeckListViewObject_o *this,
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
  __int64 v15; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // w8
  System_Action_o *v19; // x19

  if ( (byte_4386DFB & 1) == 0 )
  {
    sub_B775C4(&DeckListViewItem_TypeInfo);
    byte_4386DFB = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v12 = *(&DeckListViewItem_TypeInfo->_2.bitflags2 + 1), *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (DeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == DeckListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(DeckListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_B77560(&this->fields.callbackFunc);
  if ( (unsigned int)v13 <= 3 )
  {
    v18 = dword_32AA3F8[v13];
    this->fields.dispMode = v13;
    this->fields.state = v18;
  }
  if ( !state || dispMode != this->fields.dispMode )
    DeckListViewObject__SetupDisp(this, v17);
  v19 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B77560(p_callbackFunc);
    System_Action__Invoke(v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckListViewObject__Init_17099612(
        DeckListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  DeckListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckListViewObject__Init_17100856(
        DeckListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  DeckListViewObject__Init(this, initMode, callbackFunc, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckListViewObject__Init_17100920(
        DeckListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  DeckListViewObject__Init(this, initMode, callbackFunc, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


void __fastcall DeckListViewObject__OnDestroy(DeckListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4386DF8 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4386DF8 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0LL);
    *p_dragObject = 0LL;
    sub_B77560(p_dragObject);
  }
}


void __fastcall DeckListViewObject__SetItem(
        DeckListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall DeckListViewObject__SetupDisp(DeckListViewObject_o *this, const MethodInfo *method)
{
  PartyListViewItem_o **linkItem; // x21
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  DeckListViewItemDraw_o *v9; // x0

  if ( (byte_4386DFC & 1) == 0 )
  {
    sub_B775C4(&DeckListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4386DFC = 1;
  }
  linkItem = (PartyListViewItem_o **)this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&DeckListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*linkItem)[1].fields.viewObject) >= (unsigned int)v4
      && *((DeckListViewItem_c **)(*linkItem)[1].monitor + v4 - 1) == DeckListViewItem_TypeInfo )
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
    if ( !v9 || !linkItem )
      sub_B7769C(v9, v7);
    DeckListViewItemDraw__SetItem_17095984(v9, linkItem[14], this->fields.dispMode, v8);
  }
}


void __fastcall DeckListViewObject__add_callbackFunc(
        DeckListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DeckListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4386DF5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4386DF5 = 1;
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
  v11 = (DeckListViewObject_o *)sub_B77990(v8);
  DeckListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall DeckListViewObject__remove_callbackFunc(
        DeckListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DeckListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4386DF6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4386DF6 = 1;
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
  v11 = (DeckListViewObject_o *)sub_B77990(v8);
  DeckListViewObject__Awake(v11, v12);
}