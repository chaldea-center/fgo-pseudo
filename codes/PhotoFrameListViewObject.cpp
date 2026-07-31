void PhotoFrameListViewObject___ctor(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933AEF & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5933AEF = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void PhotoFrameListViewObject__Awake(PhotoFrameListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_5933AE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewItemDraw___);
    byte_5933AE9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewItemDraw___);
  this->fields.itemDraw = (struct PhotoFrameListViewItemDraw_o *)Component_object;
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


PhotoFrameListViewItem_o *PhotoFrameListViewObject__GetItem(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5933AEA & 1) == 0 )
  {
    sub_21FFC50(&PhotoFrameListViewItem_TypeInfo);
    byte_5933AEA = 1;
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


// local variable allocation has failed, the output may be wrong!
void PhotoFrameListViewObject__Init(
        PhotoFrameListViewObject_o *this,
        int32_t initMode,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  int v5; // w21
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

  v5 = initMode;
  if ( (byte_5933AEC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PhotoFrameListViewItem_TypeInfo);
    byte_5933AEC = 1;
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
    v5 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode, closeFunc);
  frameSampleSprite = (UISprite_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)frameSampleSprite & 1) != 0 )
  {
    if ( !v9 || (v15 = this->fields.itemDraw) == 0 || (frameSampleSprite = v15->fields.frameSampleSprite) == 0 )
LABEL_34:
      sub_21FFECC(frameSampleSprite, v14);
    UISprite__set_atlas(frameSampleSprite, (UIAtlas_o *)v9[1].fields.sortValue0, 0);
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0);
  ((void (__fastcall *)(PhotoFrameListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v5 == 2,
    this->klass->vtable._9_SetInput.method);
  frameSampleSprite = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !frameSampleSprite )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)frameSampleSprite, this->fields.basePosition, 0);
  frameSampleSprite = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !frameSampleSprite )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)frameSampleSprite, this->fields.baseScale, 0);
  if ( v5 <= 1 )
  {
    if ( (unsigned int)v5 <= 1 )
    {
      v17 = 1;
LABEL_27:
      this->fields.dispMode = v5;
      this->fields.state = v17;
      goto LABEL_28;
    }
    goto LABEL_28;
  }
  if ( v5 == 2 )
  {
    v17 = 3;
    v5 = 1;
    goto LABEL_27;
  }
  if ( v5 != 3 )
  {
LABEL_28:
    if ( state && dispMode == this->fields.dispMode )
      goto LABEL_31;
    goto LABEL_30;
  }
  this->fields.dispMode = 1;
  this->fields.state = 1;
LABEL_30:
  PhotoFrameListViewObject__SetupDisp(this, v16);
LABEL_31:
  if ( closeFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      closeFunc->fields.method);
}


void PhotoFrameListViewObject__InitItem(PhotoFrameListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void PhotoFrameListViewObject__Init_40545500(
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

  if ( (byte_5933AEE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10235/*"OnClickListView"*/);
    byte_5933AEE = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_21FFECC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10235/*"OnClickListView"*/, (Il2CppObject *)this, 0);
  }
}


void PhotoFrameListViewObject__SetInput(PhotoFrameListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x1
  PhotoFrameListViewItemDraw_o *v12; // x0

  if ( (byte_5933AEB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PhotoFrameListViewItem_TypeInfo);
    byte_5933AEB = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (PhotoFrameListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoFrameListViewItem_TypeInfo )
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
    PhotoFrameListViewItemDraw__SetInput(v12, (PhotoFrameListViewItem_o *)v11, isInput, v8);
  }
}


void PhotoFrameListViewObject__SetItem(
        PhotoFrameListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void PhotoFrameListViewObject__SetItem_40548032(
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  PhotoFrameListViewItemDraw_o *v11; // x0

  if ( (byte_5933AED & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PhotoFrameListViewItem_TypeInfo);
    byte_5933AED = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_21FFECC(0, v9);
    PhotoFrameListViewItemDraw__SetItem(v11, (PhotoFrameListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}