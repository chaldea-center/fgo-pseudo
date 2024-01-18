void __fastcall ShopHelpListViewObject___ctor(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4189175 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4189175 = 1;
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

  if ( (byte_418916F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewItemDraw___, method);
    byte_418916F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct ShopHelpListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   dispObject,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
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

  if ( (byte_4189172 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewObject___, method);
    byte_4189172 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopHelpListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
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

  if ( (byte_4189171 & 1) == 0 )
  {
    sub_B2C35C(&ShopHelpListViewItem_TypeInfo, method);
    byte_4189171 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopHelpListViewObject__Init(
        ShopHelpListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  unsigned int v3; // w20
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w21
  int32_t state; // w22
  __int64 v8; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  int32_t v12; // w9
  int v13; // w8

  v3 = initMode;
  if ( (byte_4189173 & 1) == 0 )
  {
    sub_B2C35C(&ShopHelpListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4189173 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v8 = *(&ShopHelpListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
  {
    if ( (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] != ShopHelpListViewItem_TypeInfo )
      v3 = 0;
  }
  else
  {
    v3 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v3 != 0, 0LL);
  ((void (__fastcall *)(ShopHelpListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v3 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v10);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  if ( v3 == 1 )
    goto LABEL_13;
  if ( v3 == 3 )
  {
    v13 = 2;
    this->fields.dispMode = 2;
  }
  else
  {
    if ( v3 == 2 )
    {
LABEL_13:
      this->fields.dispMode = v3;
      v12 = 1;
      v13 = v3;
      goto LABEL_20;
    }
    v13 = 0;
    this->fields.dispMode = 0;
    if ( v3 < 3 )
    {
      v12 = 1;
      goto LABEL_20;
    }
  }
  if ( v3 == 3 )
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

  if ( (byte_4189170 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189170 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B2C2F8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ShopHelpListViewObject__SetItem(
        ShopHelpListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopHelpListViewObject__SetupDisp(ShopHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ShopHelpListViewItemDraw_o *v10; // x0

  if ( (byte_4189174 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&ShopHelpListViewItem_TypeInfo, v3);
    byte_4189174 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&ShopHelpListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (ShopHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == ShopHelpListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
    ShopHelpListViewItemDraw__SetItem(v10, (ShopHelpListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}