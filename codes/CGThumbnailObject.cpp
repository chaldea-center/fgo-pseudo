void CGThumbnailObject___ctor(CGThumbnailObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C51CFB & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    byte_4C51CFB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CGThumbnailObject__Awake(CGThumbnailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C51CF6 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailListItemDraw___);
    byte_4C51CF6 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3E7C0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailListItemDraw___);
  this->fields.itemDraw = (struct CGThumbnailListItemDraw_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


CGThumbnailListItem_o *CGThumbnailObject__GetItem(CGThumbnailObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C51CF7 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    byte_4C51CF7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CGThumbnailListItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CGThumbnailListItem_TypeInfo )
    return (CGThumbnailListItem_o *)this->fields.linkItem;
  return 0;
}


void CGThumbnailObject__Init(
        CGThumbnailObject_o *this,
        int32_t initMode,
        int32_t scale,
        System_Action_string__string__o *updateItemFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x25
  int32_t dispMode; // w24
  int32_t state; // w22
  __int64 naturalAligment; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  int32_t v16; // w8

  if ( (byte_4C51CF8 & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    byte_4C51CF8 = 1;
  }
  this->fields.updateItemAction = updateItemFunc;
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.updateItemAction,
    (int32_t)updateItemFunc,
    scale,
    (const MethodInfo *)updateItemFunc);
  state = this->fields.state;
  this->fields.scaleType = scale;
  if ( linkItem
    && (naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CGThumbnailListItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CGThumbnailListItem_TypeInfo )
      initMode = 0;
  }
  else
  {
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(CGThumbnailObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 2,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C3E7C0(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  if ( (unsigned int)initMode < 2 )
  {
    v16 = 1;
    goto LABEL_15;
  }
  if ( initMode == 3 )
  {
    this->fields.dispMode = 1;
    this->fields.state = 1;
LABEL_20:
    CGThumbnailObject__SetupDisp(this, v15);
    return;
  }
  if ( initMode == 2 )
  {
    v16 = 3;
    initMode = 1;
LABEL_15:
    this->fields.dispMode = initMode;
    this->fields.state = v16;
  }
  if ( !state || dispMode != this->fields.dispMode )
    goto LABEL_20;
}


void CGThumbnailObject__InitItem(CGThumbnailObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void CGThumbnailObject__SetInput(CGThumbnailObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  CGThumbnailListItemDraw_o *v10; // x0

  if ( (byte_4C51CFA & 1) == 0 )
  {
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51CFA = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (CGThumbnailListItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CGThumbnailListItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C3E7C0(0, v9);
    CGThumbnailListItemDraw__SetInput(v10, (CGThumbnailListItem_o *)v9, isInput, v6);
  }
}


void CGThumbnailObject__SetItem(
        CGThumbnailObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43886976((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CGThumbnailObject__SetItem_33169336(CGThumbnailObject_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CGThumbnailObject__SetupDisp(CGThumbnailObject_o *this, const MethodInfo *method)
{
  Il2CppObject **linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  CGThumbnailListItemDraw_o *v7; // x0
  __int64 v8; // x1
  struct CGThumbnailListItemDraw_o *v9; // x8
  int32_t v10; // w3
  const MethodInfo *v11; // x4

  if ( (byte_4C51CF9 & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_string__string___);
    sub_1C3E564(&CGThumbnailListItem_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51CF9 = 1;
  }
  linkItem = (Il2CppObject **)this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment;
  if ( LOBYTE((*linkItem)[19].klass) < (unsigned int)naturalAligment
    || *((CGThumbnailListItem_c **)(*linkItem)[12].monitor + naturalAligment - 1) != CGThumbnailListItem_TypeInfo )
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
  v7 = (CGThumbnailListItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( !linkItem
      || (v9 = this->fields.itemDraw) == 0
      || (ActionExtensions__Call_object__object_(
            (System_Action_T1__T2__o *)this->fields.updateItemAction,
            linkItem[17],
            (Il2CppObject *)v9->fields._LoadedTexturePath_k__BackingField,
            (const MethodInfo_3046754 *)Method_ActionExtensions_Call_string__string___),
          (v7 = this->fields.itemDraw) == 0) )
    {
      sub_1C3E7C0(v7, v8);
    }
    CGThumbnailListItemDraw__SetItem(v7, (CGThumbnailListItem_o *)linkItem, this->fields.scaleType, v10, v11);
  }
}