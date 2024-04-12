void __fastcall ShopHelpListViewObject___ctor(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_42B1A62 & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42B1A62 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ShopHelpListViewObject__Awake(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ShopHelpListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B1A5C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewItemDraw___);
    byte_42B1A5C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B52A5C(0LL, v3);
  Component_srcLineSprite = (struct ShopHelpListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   dispObject,
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *__fastcall ShopHelpListViewObject__CreateDragObject(
        ShopHelpListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_42B1A5F & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewObject___);
    byte_42B1A5F = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewObject___)) == 0LL) )
  {
    sub_B52A5C(DragObject, v4);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)DragObject, 2, v6);
  return v5;
}


ShopHelpListViewItem_o *__fastcall ShopHelpListViewObject__GetItem(
        ShopHelpListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_42B1A5E & 1) == 0 )
  {
    sub_B52984(&ShopHelpListViewItem_TypeInfo);
    byte_42B1A5E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ShopHelpListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ShopHelpListViewItem_TypeInfo )
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
  int32_t dispMode; // w21
  int32_t state; // w22
  __int64 v8; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  int32_t v12; // w9
  int32_t v13; // w8

  if ( (byte_42B1A60 & 1) == 0 )
  {
    sub_B52984(&ShopHelpListViewItem_TypeInfo);
    byte_42B1A60 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v8 = *(&ShopHelpListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
  {
    if ( (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] != ShopHelpListViewItem_TypeInfo )
      initMode = 0;
  }
  else
  {
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0LL);
  ((void (__fastcall *)(ShopHelpListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(transform, v10);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  if ( initMode == 1 )
    goto LABEL_13;
  if ( initMode == 3 )
  {
    v13 = 2;
    this->fields.dispMode = 2;
  }
  else
  {
    if ( initMode == 2 )
    {
LABEL_13:
      this->fields.dispMode = initMode;
      v12 = 1;
      v13 = initMode;
      goto LABEL_20;
    }
    v13 = 0;
    this->fields.dispMode = 0;
    if ( (unsigned int)initMode < 3 )
    {
      v12 = 1;
      goto LABEL_20;
    }
  }
  if ( initMode == 3 )
    v12 = 3;
  else
    v12 = 0;
LABEL_20:
  this->fields.state = v12;
  if ( !state || dispMode != v13 )
    ShopHelpListViewObject__SetupDisp(this, v11);
}


void __fastcall ShopHelpListViewObject__OnDestroy(ShopHelpListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_42B1A5D & 1) == 0 )
  {
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1A5D = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B52920(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ShopHelpListViewObject__SetItem(
        ShopHelpListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33992116((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopHelpListViewObject__SetupDisp(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ShopHelpListViewItemDraw_o *v9; // x0

  if ( (byte_42B1A61 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ShopHelpListViewItem_TypeInfo);
    byte_42B1A61 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&ShopHelpListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ShopHelpListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B52A5C(0LL, v7);
    ShopHelpListViewItemDraw__SetItem(v9, (ShopHelpListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}