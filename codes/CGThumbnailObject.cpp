void __fastcall CGThumbnailObject___ctor(CGThumbnailObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A495CA & 1) == 0 )
  {
    sub_1B863B8(&ListViewObject_TypeInfo, method);
    byte_4A495CA = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CGThumbnailObject__Awake(CGThumbnailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A495C5 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailListItemDraw___, method);
    byte_4A495C5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B86614(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailListItemDraw___);
  this->fields.itemDraw = (struct CGThumbnailListItemDraw_o *)Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


CGThumbnailListItem_o *__fastcall CGThumbnailObject__GetItem(CGThumbnailObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A495C6 & 1) == 0 )
  {
    sub_1B863B8(&CGThumbnailListItem_TypeInfo, method);
    byte_4A495C6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(CGThumbnailListItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CGThumbnailListItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CGThumbnailListItem_TypeInfo )
    return (CGThumbnailListItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailObject__Init(
        CGThumbnailObject_o *this,
        int32_t initMode,
        int32_t scale,
        System_Action_string__string__o *updateItemFunc,
        const MethodInfo *method)
{
  unsigned int v7; // w20
  struct ListViewItem_o *linkItem; // x25
  int32_t dispMode; // w24
  int32_t state; // w22
  __int64 methodPtr_low; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  int32_t v16; // w8

  v7 = initMode;
  if ( (byte_4A495C7 & 1) == 0 )
  {
    sub_1B863B8(&CGThumbnailListItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A495C7 = 1;
  }
  this->fields.updateItemAction = updateItemFunc;
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.updateItemAction,
    (int32_t)updateItemFunc,
    scale,
    (const MethodInfo *)updateItemFunc);
  state = this->fields.state;
  this->fields.scaleType = scale;
  if ( linkItem
    && (methodPtr_low = LOBYTE(CGThumbnailListItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (CGThumbnailListItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CGThumbnailListItem_TypeInfo )
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(CGThumbnailObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v7 == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B86614(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  if ( v7 < 2 )
  {
    v16 = 1;
    goto LABEL_15;
  }
  if ( v7 == 3 )
  {
    this->fields.dispMode = 1;
    this->fields.state = 1;
LABEL_20:
    CGThumbnailObject__SetupDisp(this, v15);
    return;
  }
  if ( v7 == 2 )
  {
    v16 = 3;
    v7 = 1;
LABEL_15:
    this->fields.dispMode = v7;
    this->fields.state = v16;
  }
  if ( !state || dispMode != this->fields.dispMode )
    goto LABEL_20;
}


void __fastcall CGThumbnailObject__InitItem(CGThumbnailObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CGThumbnailObject__SetInput(CGThumbnailObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  CGThumbnailListItemDraw_o *v11; // x0

  if ( (byte_4A495C9 & 1) == 0 )
  {
    sub_1B863B8(&CGThumbnailListItem_TypeInfo, isInput);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A495C9 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(CGThumbnailListItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (CGThumbnailListItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CGThumbnailListItem_TypeInfo )
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
    CGThumbnailListItemDraw__SetInput(v11, (CGThumbnailListItem_o *)v10, isInput, v7);
  }
}


void __fastcall CGThumbnailObject__SetItem(
        CGThumbnailObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41806456((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CGThumbnailObject__SetItem_31490648(
        CGThumbnailObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall CGThumbnailObject__SetupDisp(CGThumbnailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject **linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  CGThumbnailListItemDraw_o *v9; // x0
  __int64 v10; // x1
  struct CGThumbnailListItemDraw_o *v11; // x8
  int32_t v12; // w3
  const MethodInfo *v13; // x4

  if ( (byte_4A495C8 & 1) == 0 )
  {
    sub_1B863B8(&Method_ActionExtensions_Call_string__string___, method);
    sub_1B863B8(&CGThumbnailListItem_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A495C8 = 1;
  }
  linkItem = (Il2CppObject **)this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(CGThumbnailListItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE((*linkItem)[19].klass) < (unsigned int)methodPtr_low
    || *((CGThumbnailListItem_c **)(*linkItem)[12].monitor + methodPtr_low - 1) != CGThumbnailListItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (CGThumbnailListItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( !linkItem
      || (v11 = this->fields.itemDraw) == 0LL
      || (ActionExtensions__Call_object__object_(
            (System_Action_T1__T2__o *)this->fields.updateItemAction,
            linkItem[16],
            (Il2CppObject *)v11->fields._LoadedTexturePath_k__BackingField,
            (const MethodInfo_2EBFFD8 *)Method_ActionExtensions_Call_string__string___),
          (v9 = this->fields.itemDraw) == 0LL) )
    {
      sub_1B86614(v9, v10);
    }
    CGThumbnailListItemDraw__SetItem(v9, (CGThumbnailListItem_o *)linkItem, this->fields.scaleType, v12, v13);
  }
}