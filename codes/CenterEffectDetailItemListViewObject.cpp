void CenterEffectDetailItemListViewObject___ctor(
        CenterEffectDetailItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC1100 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC1100 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CenterEffectDetailItemListViewObject__Awake(
        CenterEffectDetailItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4CC10FD & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewItemDraw___);
    byte_4CC10FD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewItemDraw___);
  this->fields.itemDraw = (struct CenterEffectDetailItemListViewItemDraw_o *)Component_object;
  sub_1C71354(&this->fields.itemDraw, Component_object);
}


UnityEngine_GameObject_o *CenterEffectDetailItemListViewObject__CreateDragObject(
        CenterEffectDetailItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19

  if ( (byte_4CC10FE & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewObject___);
    byte_4CC10FE = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject )
    sub_1C71608(0, v4);
  v5 = DragObject;
  UnityEngine_GameObject__GetComponent_object_(
    DragObject,
    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewObject___);
  return v5;
}


void CenterEffectDetailItemListViewObject__EventMoveEnd(
        CenterEffectDetailItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 8) = 0;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C71354(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void CenterEffectDetailItemListViewObject__Init(
        CenterEffectDetailItemListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v8; // x1
  struct System_Action_o *v9; // x19

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(transform, v6);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C71354(&this->fields.callbackFunc, callbackFunc);
  ((void (__fastcall *)(CenterEffectDetailItemListViewObject_o *, __int64, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    1,
    this->klass->vtable._9_SetInput.method);
  CenterEffectDetailItemListViewObject__SetupDisp(this, v8);
  v9 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C71354(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void CenterEffectDetailItemListViewObject__SetDirectItem(
        CenterEffectDetailItemListViewObject_o *this,
        CenterEffectDetailItemListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.linkItem = (struct ListViewItem_o *)item;
  sub_1C71354(&this->fields.linkItem, item);
}


void CenterEffectDetailItemListViewObject__SetItem(
        CenterEffectDetailItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
}


void CenterEffectDetailItemListViewObject__SetupDisp(
        CenterEffectDetailItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CenterEffectDetailItemListViewItemDraw_o *v9; // x0

  if ( (byte_4CC10FF & 1) == 0 )
  {
    sub_1C713B0(&CenterEffectDetailItemListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC10FF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = CenterEffectDetailItemListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CenterEffectDetailItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CenterEffectDetailItemListViewItem_TypeInfo )
      v5 = this->fields.linkItem;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C71608(0, v7);
    CenterEffectDetailItemListViewItemDraw__SetItem(v9, (CenterEffectDetailItemListViewItem_o *)v5, v8);
  }
}


void CenterEffectDetailItemListViewObject__add_callbackFunc(
        CenterEffectDetailItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CenterEffectDetailItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC10FB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC10FB = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CenterEffectDetailItemListViewObject_o *)sub_1C719A4(v8);
  CenterEffectDetailItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void CenterEffectDetailItemListViewObject__remove_callbackFunc(
        CenterEffectDetailItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CenterEffectDetailItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC10FC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC10FC = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CenterEffectDetailItemListViewObject_o *)sub_1C719A4(v8);
  CenterEffectDetailItemListViewObject__Awake(v11, v12);
}