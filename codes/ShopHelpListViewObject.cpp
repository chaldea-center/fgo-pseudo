void __fastcall ShopHelpListViewObject___ctor(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A577CA & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A577CA = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ShopHelpListViewObject__Awake(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A577C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewItemDraw___);
    byte_4A577C4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewItemDraw___);
  this->fields.itemDraw = (struct ShopHelpListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall ShopHelpListViewObject__CreateDragObject(
        ShopHelpListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A577C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewObject___);
    byte_4A577C7 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)DragObject, 2, v6);
  return v5;
}


ShopHelpListViewItem_o *__fastcall ShopHelpListViewObject__GetItem(
        ShopHelpListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A577C6 & 1) == 0 )
  {
    sub_1B885B0(&ShopHelpListViewItem_TypeInfo);
    byte_4A577C6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ShopHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopHelpListViewItem_TypeInfo )
    return (ShopHelpListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


int32_t __fastcall ShopHelpListViewObject__GetState(
        ShopHelpListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  if ( initMode == 3 )
    return 3;
  return 0;
}


void __fastcall ShopHelpListViewObject__Init(
        ShopHelpListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  unsigned int v7; // w22
  int32_t dispMode; // w20
  int32_t state; // w21
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  int32_t v13; // w9
  int v14; // w8

  if ( (byte_4A577C8 & 1) == 0 )
  {
    sub_1B885B0(&ShopHelpListViewItem_TypeInfo);
    byte_4A577C8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(ShopHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopHelpListViewItem_TypeInfo )
      v7 = initMode;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(ShopHelpListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v7 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  if ( v7 == 1 )
    goto LABEL_14;
  if ( v7 == 3 )
  {
    v14 = 2;
    this->fields.dispMode = 2;
  }
  else
  {
    if ( v7 == 2 )
    {
LABEL_14:
      this->fields.dispMode = v7;
      v13 = 1;
      v14 = v7;
      goto LABEL_21;
    }
    v14 = 0;
    this->fields.dispMode = 0;
    if ( v7 < 3 )
    {
      v13 = 1;
      goto LABEL_21;
    }
  }
  if ( v7 == 3 )
    v13 = 3;
  else
    v13 = 0;
LABEL_21:
  this->fields.state = v13;
  if ( !state || dispMode != v14 )
    ShopHelpListViewObject__SetupDisp(this, v12);
}


void __fastcall ShopHelpListViewObject__OnDestroy(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A577C5 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A577C5 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


void __fastcall ShopHelpListViewObject__SetItem(
        ShopHelpListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopHelpListViewObject__SetupDisp(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ShopHelpListViewItemDraw_o *v9; // x0

  if ( (byte_4A577C9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopHelpListViewItem_TypeInfo);
    byte_4A577C9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ShopHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopHelpListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v7);
    ShopHelpListViewItemDraw__SetItem(v9, (ShopHelpListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}