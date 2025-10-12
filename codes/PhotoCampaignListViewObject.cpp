void PhotoCampaignListViewObject___ctor(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C32FFD & 1) == 0 )
  {
    sub_1C32C20(&ListViewObject_TypeInfo);
    byte_4C32FFD = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void PhotoCampaignListViewObject__Awake(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C32FF3 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewItemDraw___);
    byte_4C32FF3 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewItemDraw___);
  this->fields.itemDraw = (struct PhotoCampaignListViewItemDraw_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


UnityEngine_GameObject_o *PhotoCampaignListViewObject__CreateDragObject(
        PhotoCampaignListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  const MethodInfo *v5; // x2

  if ( (byte_4C32FF8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    byte_4C32FF8 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v4 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___)) == 0) )
  {
    sub_1C32E7C(DragObject);
  }
  PhotoCampaignListViewObject__Init_33709248((PhotoCampaignListViewObject_o *)DragObject, 2, v5);
  return v4;
}


PhotoCampaignListViewItem_o *PhotoCampaignListViewObject__GetItem(
        PhotoCampaignListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C32FF5 & 1) == 0 )
  {
    sub_1C32C20(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C32FF5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (PhotoCampaignListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
    return (PhotoCampaignListViewItem_o *)this->fields.linkItem;
  return 0;
}


void PhotoCampaignListViewObject__Init(
        PhotoCampaignListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w9
  int32_t v22; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4C32FF9 & 1) == 0 )
  {
    sub_1C32C20(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C32FF9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PhotoCampaignListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(PhotoCampaignListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v16, v17);
  v21 = 1;
  v22 = v11;
  switch ( v11 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v22 = v11;
      goto LABEL_14;
    case 3:
      v22 = 2;
LABEL_14:
      v21 = v11;
LABEL_15:
      this->fields.dispMode = v22;
      this->fields.state = v21;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        PhotoCampaignListViewObject__SetupDisp(this, v18);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C32BC4(p_callbackFunc, 0, v19, v20);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void PhotoCampaignListViewObject__InitItem(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignListViewObject__Init_33709248(
        PhotoCampaignListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  PhotoCampaignListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignListViewObject__Init_33710032(
        PhotoCampaignListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  PhotoCampaignListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignListViewObject__Init_33718948(
        PhotoCampaignListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  PhotoCampaignListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void PhotoCampaignListViewObject__ModifyItemDraw(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  PhotoCampaignListViewItem_o *Item; // x0
  UnityEngine_Object_o *itemDraw; // x21
  PhotoCampaignListViewItem_o *v5; // x20
  const MethodInfo *v6; // x3
  PhotoCampaignListViewItemDraw_o *v7; // x0

  if ( (byte_4C32FF6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32FF6 = 1;
  }
  Item = PhotoCampaignListViewObject__GetItem(this, method);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  v5 = Item;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1C32E7C(0);
    PhotoCampaignListViewItemDraw__SetItem(v7, v5, this->fields.dispMode, v6);
  }
}


void PhotoCampaignListViewObject__OnClickSelect(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C32FFB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9867/*"OnClickSelectListView"*/);
    byte_4C32FFB = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C32E7C(0);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9867/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void PhotoCampaignListViewObject__OnDestroy(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C32FF4 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32FF4 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C32BC4(p_dragObject, 0, v7, v8);
  }
}


void PhotoCampaignListViewObject__OnLongPush(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C32FFC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9927/*"OnLongPushListView"*/);
    sub_1C32C20(&StringLiteral_9945/*"OnPressCancel"*/);
    byte_4C32FFC = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71205516(gameObject, (System_String_o *)StringLiteral_9945/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C32E7C(gameObject);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9927/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void PhotoCampaignListViewObject__SetInput(PhotoCampaignListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  PhotoCampaignListViewItemDraw_o *v10; // x0

  if ( (byte_4C32FF7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C32FF7 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (PhotoCampaignListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
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
      sub_1C32E7C(0);
    PhotoCampaignListViewItemDraw__SetInput(v10, (PhotoCampaignListViewItem_o *)v9, isInput, v6);
  }
}


void PhotoCampaignListViewObject__SetItem(
        PhotoCampaignListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43729388((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void PhotoCampaignListViewObject__SetItem_33717864(
        PhotoCampaignListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void PhotoCampaignListViewObject__SetupDisp(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  PhotoCampaignListViewItemDraw_o *v8; // x0

  if ( (byte_4C32FFA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C32FFA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PhotoCampaignListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
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
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C32E7C(0);
    PhotoCampaignListViewItemDraw__SetItem(v8, (PhotoCampaignListViewItem_o *)linkItem, this->fields.dispMode, v7);
  }
}


void PhotoCampaignListViewObject__add_callbackFunc(
        PhotoCampaignListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PhotoCampaignListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C32FF1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C32FF1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PhotoCampaignListViewObject_o *)sub_1C3313C(v8);
  PhotoCampaignListViewObject__remove_callbackFunc(v11, v12, v13);
}


void PhotoCampaignListViewObject__remove_callbackFunc(
        PhotoCampaignListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PhotoCampaignListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C32FF2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C32FF2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PhotoCampaignListViewObject_o *)sub_1C3313C(v8);
  PhotoCampaignListViewObject__Awake(v11, v12);
}