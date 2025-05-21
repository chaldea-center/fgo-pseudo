void __fastcall PhotoFrameListViewObject___ctor(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B400FB & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    byte_4B400FB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PhotoFrameListViewObject__Awake(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B400F5 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewItemDraw___, method);
    byte_4B400F5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BDBAD4(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewItemDraw___);
  this->fields.itemDraw = (struct PhotoFrameListViewItemDraw_o *)Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


PhotoFrameListViewItem_o *__fastcall PhotoFrameListViewObject__GetItem(
        PhotoFrameListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B400F6 & 1) == 0 )
  {
    sub_1BDB878(&PhotoFrameListViewItem_TypeInfo, method);
    byte_4B400F6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(PhotoFrameListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoFrameListViewItem_TypeInfo )
    return (PhotoFrameListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoFrameListViewObject__Init(
        PhotoFrameListViewObject_o *this,
        int32_t initMode,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  unsigned int v5; // w21
  __int64 v7; // x1
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v10; // x25
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Object_o *itemDraw; // x22
  UISprite_o *frameSampleSprite; // x0
  __int64 v15; // x1
  struct PhotoFrameListViewItemDraw_o *v16; // x8
  const MethodInfo *v17; // x1
  int32_t v18; // w8

  v5 = initMode;
  if ( (byte_4B400F8 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode);
    sub_1BDB878(&PhotoFrameListViewItem_TypeInfo, v7);
    byte_4B400F8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(PhotoFrameListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoFrameListViewItem_TypeInfo )
      v10 = this->fields.linkItem;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !v10 )
    v5 = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameSampleSprite = (UISprite_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)frameSampleSprite & 1) != 0 )
  {
    if ( !v10 || (v16 = this->fields.itemDraw) == 0LL || (frameSampleSprite = v16->fields.frameSampleSprite) == 0LL )
LABEL_33:
      sub_1BDBAD4(frameSampleSprite, v15);
    UISprite__set_atlas(frameSampleSprite, *(UIAtlas_o **)&v10[1].fields.sortIndex, 0LL);
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0LL);
  ((void (__fastcall *)(PhotoFrameListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v5 == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
  frameSampleSprite = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !frameSampleSprite )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)frameSampleSprite, this->fields.basePosition, 0LL);
  frameSampleSprite = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !frameSampleSprite )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)frameSampleSprite, this->fields.baseScale, 0LL);
  if ( v5 < 2 )
  {
    v18 = 1;
    goto LABEL_25;
  }
  if ( v5 == 3 )
  {
    this->fields.dispMode = 1;
    this->fields.state = 1;
    goto LABEL_31;
  }
  if ( v5 == 2 )
  {
    v18 = 3;
    v5 = 1;
LABEL_25:
    this->fields.dispMode = v5;
    this->fields.state = v18;
  }
  if ( !state || dispMode != this->fields.dispMode )
  {
LABEL_31:
    PhotoFrameListViewObject__SetupDisp(this, v17);
    if ( closeFunc )
      goto LABEL_29;
    return;
  }
  if ( closeFunc )
LABEL_29:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      *(_QWORD *)&closeFunc->fields.extra_arg);
}


void __fastcall PhotoFrameListViewObject__InitItem(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall PhotoFrameListViewObject__Init_32875012(
        PhotoFrameListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  PhotoFrameListViewObject__Init(this, initMode, 0LL, v3);
}


void __fastcall PhotoFrameListViewObject__OnClickSelect(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B400FA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9848/*"OnClickListView"*/, method);
    byte_4B400FA = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BDBAD4(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9848/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoFrameListViewObject__SetInput(
        PhotoFrameListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  PhotoFrameListViewItemDraw_o *v11; // x0

  if ( (byte_4B400F7 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, isInput);
    sub_1BDB878(&PhotoFrameListViewItem_TypeInfo, v5);
    byte_4B400F7 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(PhotoFrameListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoFrameListViewItem_TypeInfo )
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
      sub_1BDBAD4(0LL, v10);
    PhotoFrameListViewItemDraw__SetInput(v11, (PhotoFrameListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall PhotoFrameListViewObject__SetItem(
        PhotoFrameListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42764972((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PhotoFrameListViewObject__SetItem_32877216(
        PhotoFrameListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall PhotoFrameListViewObject__SetupDisp(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  PhotoFrameListViewItemDraw_o *v10; // x0

  if ( (byte_4B400F9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&PhotoFrameListViewItem_TypeInfo, v3);
    byte_4B400F9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(PhotoFrameListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoFrameListViewItem_TypeInfo )
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
      sub_1BDBAD4(0LL, v8);
    PhotoFrameListViewItemDraw__SetItem(v10, (PhotoFrameListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}