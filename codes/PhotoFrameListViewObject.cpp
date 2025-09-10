void PhotoFrameListViewObject___ctor(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C22958 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C22958 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void PhotoFrameListViewObject__Awake(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C22952 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewItemDraw___);
    byte_4C22952 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewItemDraw___);
  this->fields.itemDraw = (struct PhotoFrameListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


PhotoFrameListViewItem_o *PhotoFrameListViewObject__GetItem(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C22953 & 1) == 0 )
  {
    sub_1C2D490(&PhotoFrameListViewItem_TypeInfo);
    byte_4C22953 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoFrameListViewItem_TypeInfo )
    return (PhotoFrameListViewItem_o *)this->fields.linkItem;
  return 0;
}


void PhotoFrameListViewObject__Init(
        PhotoFrameListViewObject_o *this,
        int32_t initMode,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v9; // x25
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Object_o *itemDraw; // x22
  UISprite_o *frameSampleSprite; // x0
  __int64 v14; // x1
  struct PhotoFrameListViewItemDraw_o *v15; // x8
  const MethodInfo *v16; // x1
  int32_t v17; // w8

  if ( (byte_4C22955 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PhotoFrameListViewItem_TypeInfo);
    byte_4C22955 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoFrameListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !v9 )
    initMode = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameSampleSprite = (UISprite_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)frameSampleSprite & 1) != 0 )
  {
    if ( !v9 || (v15 = this->fields.itemDraw) == 0 || (frameSampleSprite = v15->fields.frameSampleSprite) == 0 )
LABEL_33:
      sub_1C2D6EC(frameSampleSprite, v14);
    UISprite__set_atlas(frameSampleSprite, *(UIAtlas_o **)&v9[1].fields.sortIndex, 0);
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(PhotoFrameListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 2,
    this->klass->vtable._9_SetInput.method);
  frameSampleSprite = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !frameSampleSprite )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)frameSampleSprite, this->fields.basePosition, 0);
  frameSampleSprite = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !frameSampleSprite )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)frameSampleSprite, this->fields.baseScale, 0);
  if ( (unsigned int)initMode < 2 )
  {
    v17 = 1;
    goto LABEL_25;
  }
  if ( initMode == 3 )
  {
    this->fields.dispMode = 1;
    this->fields.state = 1;
    goto LABEL_31;
  }
  if ( initMode == 2 )
  {
    v17 = 3;
    initMode = 1;
LABEL_25:
    this->fields.dispMode = initMode;
    this->fields.state = v17;
  }
  if ( !state || dispMode != this->fields.dispMode )
  {
LABEL_31:
    PhotoFrameListViewObject__SetupDisp(this, v16);
    if ( closeFunc )
      goto LABEL_29;
    return;
  }
  if ( closeFunc )
LABEL_29:
    ((void (__fastcall *)(intptr_t, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      closeFunc->fields.method);
}


void PhotoFrameListViewObject__InitItem(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void PhotoFrameListViewObject__Init_33616604(
        PhotoFrameListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  PhotoFrameListViewObject__Init(this, initMode, 0, v3);
}


void PhotoFrameListViewObject__OnClickSelect(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C22957 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9843/*"OnClickListView"*/);
    byte_4C22957 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C2D6EC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9843/*"OnClickListView"*/, (Il2CppObject *)this, 0);
  }
}


void PhotoFrameListViewObject__SetInput(PhotoFrameListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  PhotoFrameListViewItemDraw_o *v10; // x0

  if ( (byte_4C22954 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PhotoFrameListViewItem_TypeInfo);
    byte_4C22954 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoFrameListViewItem_TypeInfo )
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
      sub_1C2D6EC(0, v9);
    PhotoFrameListViewItemDraw__SetInput(v10, (PhotoFrameListViewItem_o *)v9, isInput, v6);
  }
}


void PhotoFrameListViewObject__SetItem(
        PhotoFrameListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void PhotoFrameListViewObject__SetItem_33618808(
        PhotoFrameListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void PhotoFrameListViewObject__SetupDisp(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  PhotoFrameListViewItemDraw_o *v9; // x0

  if ( (byte_4C22956 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PhotoFrameListViewItem_TypeInfo);
    byte_4C22956 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoFrameListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C2D6EC(0, v7);
    PhotoFrameListViewItemDraw__SetItem(v9, (PhotoFrameListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}