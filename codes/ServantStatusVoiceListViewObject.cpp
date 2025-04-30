void __fastcall ServantStatusVoiceListViewObject___ctor(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4C4AA & 1) == 0 )
  {
    sub_1B863B8(&ListViewObject_TypeInfo, method);
    byte_4A4C4AA = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantStatusVoiceListViewObject__Awake(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4C4A3 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewItemDraw___, method);
    byte_4A4C4A3 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B86614(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusVoiceListViewItemDraw_o *)Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall ServantStatusVoiceListViewObject__CreateDragObject(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A4C4A7 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, method);
    byte_4A4C4A7 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___)) == 0LL) )
  {
    sub_1B86614(DragObject, v4);
  }
  ServantStatusVoiceListViewObject__Init_36835408((ServantStatusVoiceListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void __fastcall ServantStatusVoiceListViewObject__EventMoveEnd(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B8635C(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewObject__GetItem(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A4C4A5 & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, method);
    byte_4A4C4A5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusVoiceListViewItem_TypeInfo )
    return (ServantStatusVoiceListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewObject__Init(
        ServantStatusVoiceListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  int32_t v7; // w20
  __int64 v9; // x1
  struct ListViewItem_o *linkItem; // x22
  __int64 methodPtr_low; // x10
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w9
  int32_t v23; // w8
  CGThumbnailListItem_c *klass; // x19
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v26; // x2

  v7 = initMode;
  if ( (byte_4A4C4A8 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode);
    sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, v9);
    byte_4A4C4A8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    v7 = 0;
LABEL_7:
    dispMode = this->fields.dispMode;
    state = this->fields.state;
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
        p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
        v22 = 1;
        v23 = v7;
        switch ( v7 )
        {
          case 0:
          case 2:
            goto LABEL_13;
          case 1:
            v23 = v7;
            goto LABEL_12;
          case 3:
            v23 = 2;
LABEL_12:
            v22 = v7;
LABEL_13:
            this->fields.dispMode = v23;
            this->fields.state = v22;
            goto LABEL_14;
          case 5:
            this->fields.state = 1;
            goto LABEL_18;
          default:
LABEL_14:
            if ( !state || dispMode != this->fields.dispMode )
LABEL_18:
              ServantStatusVoiceListViewObject__SetupDisp(this, v19);
            klass = p_callbackFunc->klass;
            if ( p_callbackFunc->klass )
            {
              p_callbackFunc->klass = 0LL;
              sub_1B8635C(p_callbackFunc, 0, v20, v21);
              ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
                klass->_1.element_class,
                *(_QWORD *)&klass->_1.byval_arg.bits);
            }
            break;
        }
        return;
      }
    }
LABEL_28:
    sub_1B86614(transform, v15);
  }
  if ( v7 != 4 )
    goto LABEL_7;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    transform = (UnityEngine_Transform_o *)this->fields.itemDraw;
    if ( transform )
    {
      ServantStatusVoiceListViewItemDraw__SetPlay(
        (ServantStatusVoiceListViewItemDraw_o *)transform,
        (ServantStatusVoiceListViewItem_o *)linkItem,
        v26);
      return;
    }
    goto LABEL_28;
  }
}


void __fastcall ServantStatusVoiceListViewObject__InitItem(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewObject__Init_36835408(
        ServantStatusVoiceListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A487E1 = 1;
  }
  ServantStatusVoiceListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewObject__Init_36837012(
        ServantStatusVoiceListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A487E1 = 1;
  }
  ServantStatusVoiceListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewObject__Init_36837620(
        ServantStatusVoiceListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A487E1 = 1;
  }
  ServantStatusVoiceListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall ServantStatusVoiceListViewObject__OnDestroy(
        ServantStatusVoiceListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A4C4A4 & 1) == 0 )
  {
    sub_1B863B8(&NGUITools_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A4C4A4 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
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
    sub_1B8635C(p_dragObject, 0, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewObject__SetInput(
        ServantStatusVoiceListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  ServantStatusVoiceListViewItemDraw_o *v11; // x0

  if ( (byte_4A4C4A6 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_4A4C4A6 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusVoiceListViewItem_TypeInfo )
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
      sub_1B86614(0LL, v10);
    ServantStatusVoiceListViewItemDraw__SetInput(v11, (ServantStatusVoiceListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall ServantStatusVoiceListViewObject__SetItem(
        ServantStatusVoiceListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41806456((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantStatusVoiceListViewObject__SetItem_36839176(
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
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantStatusVoiceListViewItemDraw_o *v10; // x0

  if ( (byte_4A4C4A9 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, v3);
    byte_4A4C4A9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
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
      sub_1B86614(0LL, v8);
    ServantStatusVoiceListViewItemDraw__SetItem(
      v10,
      (ServantStatusVoiceListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
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

  if ( (byte_4A4C4A1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4C4A1 = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B868D4(v8);
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

  if ( (byte_4A4C4A2 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4C4A2 = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B868D4(v8);
  ServantStatusVoiceListViewObject__Awake(v11, v12);
}