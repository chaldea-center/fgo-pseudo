void CGThumbnailObject___ctor(CGThumbnailObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593340A & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_593340A = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CGThumbnailObject__Awake(CGThumbnailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5933405 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailListItemDraw___);
    byte_5933405 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailListItemDraw___);
  this->fields.itemDraw = (struct CGThumbnailListItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


CGThumbnailListItem_o *CGThumbnailObject__GetItem(CGThumbnailObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5933406 & 1) == 0 )
  {
    sub_21FFC50(&CGThumbnailListItem_TypeInfo);
    byte_5933406 = 1;
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


// local variable allocation has failed, the output may be wrong!
void CGThumbnailObject__Init(
        CGThumbnailObject_o *this,
        int32_t initMode,
        int32_t scale,
        System_Action_string__string__o *updateItemFunc,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ListViewItem_o *linkItem; // x25
  int32_t dispMode; // w24
  int32_t state; // w22
  __int64 naturalAligment; // x10
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  int32_t v19; // w8

  if ( (byte_5933407 & 1) == 0 )
  {
    sub_21FFC50(&CGThumbnailListItem_TypeInfo);
    byte_5933407 = 1;
  }
  this->fields.updateItemAction = updateItemFunc;
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.updateItemAction,
    (int32_t)updateItemFunc,
    *(System_String_o **)&scale,
    (System_String_o *)updateItemFunc,
    (int32_t)method,
    v5,
    v6,
    v7);
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
    sub_21FFECC(transform, v17);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  if ( initMode > 1 )
  {
    if ( initMode == 2 )
    {
      v19 = 3;
      initMode = 1;
      goto LABEL_17;
    }
    if ( initMode == 3 )
    {
      this->fields.dispMode = 1;
      this->fields.state = 1;
LABEL_20:
      CGThumbnailObject__SetupDisp(this, v18);
      return;
    }
  }
  else if ( (unsigned int)initMode <= 1 )
  {
    v19 = 1;
LABEL_17:
    this->fields.dispMode = initMode;
    this->fields.state = v19;
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
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x1
  CGThumbnailListItemDraw_o *v12; // x0

  if ( (byte_5933409 & 1) == 0 )
  {
    sub_21FFC50(&CGThumbnailListItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933409 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = CGThumbnailListItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (CGThumbnailListItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CGThumbnailListItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_21FFECC(0, v11);
    CGThumbnailListItemDraw__SetInput(v12, (CGThumbnailListItem_o *)v11, isInput, v8);
  }
}


void CGThumbnailObject__SetItem(
        CGThumbnailObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CGThumbnailObject__SetItem_39833848(CGThumbnailObject_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CGThumbnailObject__SetupDisp(CGThumbnailObject_o *this, const MethodInfo *method)
{
  Il2CppObject **linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  int v6; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *itemDraw; // x21
  CGThumbnailListItemDraw_o *v10; // x0
  __int64 v11; // x1
  struct CGThumbnailListItemDraw_o *v12; // x8
  int32_t v13; // w3
  const MethodInfo *v14; // x4

  if ( (byte_5933408 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_string__string___);
    sub_21FFC50(&CGThumbnailListItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933408 = 1;
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
    v6 = 1;
    goto LABEL_8;
  }
  v6 = 0;
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = (CGThumbnailListItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( v6
      || (v12 = this->fields.itemDraw) == 0
      || (ActionExtensions__Call_object__object_(
            (System_Action_T1__T2__o *)this->fields.updateItemAction,
            linkItem[17],
            (Il2CppObject *)v12->fields._LoadedTexturePath_k__BackingField,
            (const MethodInfo_36CE33C *)Method_ActionExtensions_Call_string__string___),
          (v10 = this->fields.itemDraw) == 0) )
    {
      sub_21FFECC(v10, v11);
    }
    CGThumbnailListItemDraw__SetItem(v10, (CGThumbnailListItem_o *)linkItem, this->fields.scaleType, v13, v14);
  }
}