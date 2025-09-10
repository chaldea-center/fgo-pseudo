void ShopHelpListViewObject___ctor(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C23595 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C23595 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ShopHelpListViewObject__Awake(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2358F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewItemDraw___);
    byte_4C2358F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewItemDraw___);
  this->fields.itemDraw = (struct ShopHelpListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *ShopHelpListViewObject__CreateDragObject(
        ShopHelpListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4C23592 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewObject___);
    byte_4C23592 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewObject___)) == 0) )
  {
    sub_1C2D6EC(DragObject, v4);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)DragObject, 2, v6);
  return v5;
}


ShopHelpListViewItem_o *ShopHelpListViewObject__GetItem(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C23591 & 1) == 0 )
  {
    sub_1C2D490(&ShopHelpListViewItem_TypeInfo);
    byte_4C23591 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ShopHelpListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ShopHelpListViewItem_TypeInfo )
    return (ShopHelpListViewItem_o *)this->fields.linkItem;
  return 0;
}


int32_t ShopHelpListViewObject__GetState(ShopHelpListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  if ( initMode == 3 )
    return 3;
  return 0;
}


void ShopHelpListViewObject__Init(ShopHelpListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t dispMode; // w21
  int32_t state; // w22
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w0
  const MethodInfo *v12; // x1
  int32_t v13; // w8

  if ( (byte_4C23593 & 1) == 0 )
  {
    sub_1C2D490(&ShopHelpListViewItemDraw_TypeInfo);
    sub_1C2D490(&ShopHelpListViewItem_TypeInfo);
    byte_4C23593 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = ShopHelpListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ShopHelpListViewItem_TypeInfo )
      initMode = 0;
  }
  else
  {
    initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(ShopHelpListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(transform, v10);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  if ( !ShopHelpListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopHelpListViewItemDraw_TypeInfo);
  v11 = ShopHelpListViewItemDraw__GetDispMode(initMode, 0);
  if ( initMode == 3 )
    v13 = 3;
  else
    v13 = 0;
  if ( (unsigned int)initMode <= 2 )
    v13 = 1;
  this->fields.dispMode = v11;
  this->fields.state = v13;
  if ( !state || dispMode != v11 )
    ShopHelpListViewObject__SetupDisp(this, v12);
}


void ShopHelpListViewObject__OnDestroy(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C23590 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23590 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C2D434(p_dragObject, 0, v7, v8);
  }
}


void ShopHelpListViewObject__SetItem(
        ShopHelpListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
}


void ShopHelpListViewObject__SetupDisp(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  ShopHelpListViewItemDraw_o *v8; // x0

  if ( (byte_4C23594 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopHelpListViewItem_TypeInfo);
    byte_4C23594 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ShopHelpListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ShopHelpListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C2D6EC(0, v7);
    ShopHelpListViewItemDraw__SetItem(v8, (ShopHelpListViewItem_o *)linkItem, this->fields.dispMode, 0);
  }
}